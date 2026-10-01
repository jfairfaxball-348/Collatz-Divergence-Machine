#define _GNU_SOURCE
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <inttypes.h>
#include <gmp.h>
#include <unistd.h>

#define MAX_LIMBS 64
#define BASIN_BITS 71
#define MAX_U_STEPS 16384
#define DEFAULT_STARTS 2048

typedef struct { uint64_t w[MAX_LIMBS]; int n; } bigfix;
typedef struct { uint64_t shortened_steps, u_steps; int basin_hit, overflow, step_limit, repeat; int peak_bits; uint64_t digest; } result_t;

static inline uint64_t splitmix64(uint64_t *x){
    uint64_t z=(*x += 0x9e3779b97f4a7c15ULL);
    z=(z^(z>>30))*0xbf58476d1ce4e5b9ULL;
    z=(z^(z>>27))*0x94d049bb133111ebULL;
    return z^(z>>31);
}
static inline void norm(bigfix *a){ while(a->n>1 && a->w[a->n-1]==0) a->n--; }
static inline int bitlen(const bigfix *a){ uint64_t x=a->w[a->n-1]; return 64*(a->n-1)+(64-__builtin_clzll(x)); }
static inline int eq(const bigfix *a,const bigfix *b){ if(a->n!=b->n)return 0; return memcmp(a->w,b->w,sizeof(uint64_t)*a->n)==0; }
static inline int below_2p71(const bigfix *a){
    if(a->n==1) return 1; // <2^64 <2^71
    if(a->n>2) return 0;
    return a->w[1] < (1ULL << 7);
}
static inline void shr1(bigfix *a){
    uint64_t carry=0;
    for(int i=a->n-1;i>=0;i--){ uint64_t nc=a->w[i]&1ULL; a->w[i]=(a->w[i]>>1)|(carry<<63); carry=nc; }
    norm(a);
}
static inline unsigned ctz_big(const bigfix *a){
    unsigned z=0; int i=0;
    while(i<a->n && a->w[i]==0){ z+=64; i++; }
    if(i==a->n) return z;
    return z+__builtin_ctzll(a->w[i]);
}
static inline void shr_bits(bigfix *a,unsigned s){
    if(s==0)return; unsigned ws=s/64, bs=s%64;
    if(ws){ for(int i=0;i<a->n-(int)ws;i++) a->w[i]=a->w[i+ws]; for(int i=a->n-(int)ws;i<a->n;i++) a->w[i]=0; a->n-=ws; if(a->n<1)a->n=1; }
    if(bs){ uint64_t carry=0; for(int i=a->n-1;i>=0;i--){ uint64_t nc=a->w[i]<<(64-bs); a->w[i]=(a->w[i]>>bs)|carry; carry=nc; } }
    norm(a);
}
static inline int mul3add1(bigfix *a){
    unsigned __int128 carry=1;
    for(int i=0;i<a->n;i++){
        unsigned __int128 t=(unsigned __int128)a->w[i]*3u+carry;
        a->w[i]=(uint64_t)t; carry=t>>64;
    }
    if(carry){ if(a->n>=MAX_LIMBS)return 0; a->w[a->n++]=(uint64_t)carry; }
    return 1;
}
static inline uint64_t hash_state(const bigfix *a){
    uint64_t h=0x243f6a8885a308d3ULL ^ (uint64_t)a->n;
    for(int i=0;i<a->n;i++){ uint64_t x=a->w[i]+0x9e3779b97f4a7c15ULL+(h<<6)+(h>>2); h^=x; }
    return h;
}
static void make_start(bigfix *a,int bits,uint64_t idx){
    memset(a,0,sizeof(*a)); a->n=(bits+63)/64;
    uint64_t seed=0x43444d325233ULL ^ ((uint64_t)bits<<32) ^ idx;
    for(int i=0;i<a->n;i++) a->w[i]=splitmix64(&seed);
    int top=(bits-1)%64; if(top<63) a->w[a->n-1] &= ((1ULL<<(top+1))-1ULL);
    a->w[a->n-1] |= 1ULL<<top; a->w[0] |= 1ULL;
}
static void fix_to_mpz(const bigfix *a, mpz_t z){ mpz_import(z,a->n,-1,sizeof(uint64_t),0,0,a->w); }
static int mpz_to_fix(const mpz_t z,bigfix *a){
    memset(a,0,sizeof(*a)); size_t count=0; mpz_export(a->w,&count,-1,sizeof(uint64_t),0,0,z); if(count>MAX_LIMBS)return 0; a->n=count?count:1; return 1;
}
static inline void brent_update(const bigfix *cur,bigfix *tort,uint64_t *power,uint64_t *lam,int *repeat){
    (*lam)++; if(eq(cur,tort)){*repeat=1;return;} if(*lam==*power){*tort=*cur;*power<<=1;*lam=0;}
}
static result_t run_short(const bigfix *start){
    result_t r={0}; bigfix n=*start,tort=*start; uint64_t power=1,lam=0; r.peak_bits=bitlen(&n);
    uint64_t max_short=(uint64_t)MAX_U_STEPS*8ULL; // operational cap; U-step cap is primary comparison horizon
    while(!below_2p71(&n) && r.shortened_steps<max_short){
        if(n.w[0]&1ULL){ if(!mul3add1(&n)){r.overflow=1;break;} shr1(&n); }
        else shr1(&n);
        r.shortened_steps++; int b=bitlen(&n); if(b>r.peak_bits)r.peak_bits=b;
        brent_update(&n,&tort,&power,&lam,&r.repeat); if(r.repeat)break;
    }
    if(below_2p71(&n))r.basin_hit=1; else if(!r.overflow&&!r.repeat)r.step_limit=1;
    r.digest=hash_state(&n)^r.shortened_steps^((uint64_t)r.peak_bits<<48); return r;
}
static result_t run_u(const bigfix *start){
    result_t r={0}; bigfix n=*start,tort=*start; uint64_t power=1,lam=0; r.peak_bits=bitlen(&n);
    while(!below_2p71(&n) && r.u_steps<MAX_U_STEPS){
        if(!(n.w[0]&1ULL)){ fprintf(stderr,"internal nonodd\n"); exit(3);} if(!mul3add1(&n)){r.overflow=1;break;}
        int odd_out_bits=bitlen(&n)-1; if(odd_out_bits>r.peak_bits) r.peak_bits=odd_out_bits;
        unsigned v=ctz_big(&n); if(v==0){fprintf(stderr,"bad v2\n");exit(4);} shr_bits(&n,v); r.u_steps++; r.shortened_steps+=v;
        brent_update(&n,&tort,&power,&lam,&r.repeat); if(r.repeat)break;
    }
    if(below_2p71(&n))r.basin_hit=1; else if(!r.overflow&&!r.repeat)r.step_limit=1;
    r.digest=hash_state(&n)^r.shortened_steps^(r.u_steps<<17)^((uint64_t)r.peak_bits<<48); return r;
}
static result_t run_gmp_u(const bigfix *start, mpz_t n, mpz_t threshold){
    result_t r={0}; fix_to_mpz(start,n); r.peak_bits=(int)mpz_sizeinbase(n,2);
    mpz_t tort; mpz_init_set(tort,n); uint64_t power=1,lam=0;
    while(mpz_cmp(n,threshold)>=0 && r.u_steps<MAX_U_STEPS){
        mpz_mul_ui(n,n,3); mpz_add_ui(n,n,1); int odd_out_bits=(int)mpz_sizeinbase(n,2)-1; if(odd_out_bits>r.peak_bits)r.peak_bits=odd_out_bits; mp_bitcnt_t v=mpz_scan1(n,0); mpz_tdiv_q_2exp(n,n,v); r.u_steps++; r.shortened_steps+=(uint64_t)v;
        int b=(int)mpz_sizeinbase(n,2); if(b>4096){r.overflow=1;break;}
        lam++; if(mpz_cmp(n,tort)==0){r.repeat=1;break;} if(lam==power){mpz_set(tort,n);power<<=1;lam=0;}
    }
    if(mpz_cmp(n,threshold)<0)r.basin_hit=1; else if(!r.overflow&&!r.repeat)r.step_limit=1;
    bigfix f; if(mpz_to_fix(n,&f)) r.digest=hash_state(&f)^r.shortened_steps^(r.u_steps<<17)^((uint64_t)r.peak_bits<<48);
    mpz_clear(tort); return r;
}
static double now_sec(){ struct timespec ts; clock_gettime(CLOCK_MONOTONIC,&ts); return ts.tv_sec+ts.tv_nsec*1e-9; }

static int validate(){
    mpz_t z; mpz_init(z); bigfix a,b; uint64_t cases=0;
    int bitsv[]={128,192,256,384,512,1024};
    for(int bi=0;bi<6;bi++)for(uint64_t i=0;i<128;i++){
        make_start(&a,bitsv[bi],i); b=a; fix_to_mpz(&a,z);
        for(int k=0;k<64;k++){
            // one shortened step fixed vs GMP
            if(a.w[0]&1ULL){ if(!mul3add1(&a)){mpz_clear(z);return 0;} shr1(&a); mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);mpz_tdiv_q_2exp(z,z,1);}
            else {shr1(&a);mpz_tdiv_q_2exp(z,z,1);} bigfix g; if(!mpz_to_fix(z,&g)||!eq(&a,&g)){mpz_clear(z);return 0;} cases++;
        }
        // odd-only single transition from original b
        fix_to_mpz(&b,z); if(!mul3add1(&b)){mpz_clear(z);return 0;} unsigned v=ctz_big(&b);shr_bits(&b,v);
        mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);mp_bitcnt_t vg=mpz_scan1(z,0);mpz_tdiv_q_2exp(z,z,vg); bigfix g; if(v!=vg||!mpz_to_fix(z,&g)||!eq(&b,&g)){mpz_clear(z);return 0;} cases++;
    }
    mpz_clear(z); fprintf(stderr,"validation_cases=%" PRIu64 " ok\n",cases); return 1;
}

typedef struct { uint64_t starts, basin, limits, overflows, repeats, short_steps, u_steps, max_short_per_start, max_u_per_start; int max_peak; uint64_t digest; double sec; } agg_t;
static void add(agg_t *a,result_t r){ a->starts++;a->basin+=r.basin_hit;a->limits+=r.step_limit;a->overflows+=r.overflow;a->repeats+=r.repeat;a->short_steps+=r.shortened_steps;a->u_steps+=r.u_steps;if(r.shortened_steps>a->max_short_per_start)a->max_short_per_start=r.shortened_steps;if(r.u_steps>a->max_u_per_start)a->max_u_per_start=r.u_steps;if(r.peak_bits>a->max_peak)a->max_peak=r.peak_bits;a->digest^=r.digest+0x9e3779b97f4a7c15ULL*a->starts; }

int main(int argc,char**argv){
    int nstarts=DEFAULT_STARTS; if(argc>1)nstarts=atoi(argv[1]); if(nstarts<1||nstarts>4096)return 2;
    if(!validate()){fprintf(stderr,"VALIDATION FAILED\n");return 5;}
    int bitsv[]={128,192,256,384,512,1024};
    mpz_t gz,thr; mpz_init(gz);mpz_init_set_ui(thr,1);mpz_mul_2exp(thr,thr,BASIN_BITS);
    printf("{\n  \"version\":\"CDM2-R3-bench-v1\",\n  \"starts_per_bit_length\":%d,\n  \"results\":[\n",nstarts);
    int first=1;
    for(int bi=0;bi<6;bi++){
        int bits=bitsv[bi]; agg_t as={0},au={0},ag={0}; bigfix s;
        double t=now_sec(); for(int i=0;i<nstarts;i++){make_start(&s,bits,(uint64_t)i);add(&as,run_short(&s));} as.sec=now_sec()-t;
        t=now_sec(); for(int i=0;i<nstarts;i++){make_start(&s,bits,(uint64_t)i);add(&au,run_u(&s));} au.sec=now_sec()-t;
        t=now_sec(); for(int i=0;i<nstarts;i++){make_start(&s,bits,(uint64_t)i);add(&ag,run_gmp_u(&s,gz,thr));} ag.sec=now_sec()-t;
        if(au.basin!=ag.basin||au.limits!=ag.limits||au.overflows!=ag.overflows||au.repeats!=ag.repeats||au.short_steps!=ag.short_steps||au.u_steps!=ag.u_steps||au.max_peak!=ag.max_peak||au.digest!=ag.digest){fprintf(stderr,"AGG MISMATCH bits=%d\n",bits);return 6;}
        const char* names[]={"fixed_shortened","fixed_odd_only","gmp_odd_only"}; agg_t arr[]={as,au,ag};
        for(int j=0;j<3;j++){
            agg_t *a=&arr[j]; if(!first)printf(",\n");first=0;
            printf("    {\"bits\":%d,\"kernel\":\"%s\",\"starts\":%" PRIu64 ",\"seconds\":%.9f,\"basin_hits\":%" PRIu64 ",\"step_limits\":%" PRIu64 ",\"overflows\":%" PRIu64 ",\"repeats\":%" PRIu64 ",\"shortened_step_equiv\":%" PRIu64 ",\"u_steps\":%" PRIu64 ",\"max_shortened_steps_per_start\":%" PRIu64 ",\"max_u_steps_per_start\":%" PRIu64 ",\"max_peak_bits\":%d,\"digest\":\"%016" PRIx64 "\"}",bits,names[j],a->starts,a->sec,a->basin,a->limits,a->overflows,a->repeats,a->short_steps,a->u_steps,a->max_short_per_start,a->max_u_per_start,a->max_peak,a->digest);
        }
        fflush(stdout);
    }
    printf("\n  ]\n}\n"); mpz_clear(gz);mpz_clear(thr); return 0;
}
