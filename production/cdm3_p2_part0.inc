#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <gmp.h>
#include <inttypes.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#define CDM_VERSION "CDM3-P2-v1"
#define GENERATOR_VERSION "CDM3-P1-gen-v1"
#define MAX_LIMBS 64
#define FAST_PATH_BITS 4096
#define BASIN_BITS 71
#define MAX_U_STEPS 32768u
#define PEAK_EXCESS_BITS 512
#define MAX_THREADS 8
#define MAX_GENERATED_PER_BAND 20000000ULL
#define MAX_GENERATED_PER_ARM_BAND 10000000ULL
#define MAX_GENERATED_TOTAL 60000000ULL
#define WALL_LIMIT_SECONDS 890.0
#define CPU_LIMIT_SECONDS 3500.0
#define MEMORY_LIMIT_BYTES (1024ULL*1024ULL*1024ULL)
#define RESULT_STORAGE_LIMIT_BYTES (290ULL*1024ULL*1024ULL)
#define DEFAULT_WORK_UNIT 100000ULL
#define SAMPLE_MOD 97ULL
#define MAX_SAMPLES_PER_GROUP 150000
#define CHECKPOINT_MAGIC 0x43444d335032434bULL
#define CHECKPOINT_VERSION 1u
#define P2_COUNTER_COUNT 10000000ULL

static const uint64_t P2_COUNTER_BASES[3][2] = {
    {100000000ULL,112000003ULL},
    {124000006ULL,136000009ULL},
    {148000012ULL,160000015ULL}
};

/* Claim boundary: this program produces finite computational evidence only. */

typedef struct { uint64_t w[MAX_LIMBS]; int n; } bigfix;

typedef enum {
    DISP_NONE=0, DISP_BASIN=1, DISP_PRUNED_MOD9=2, DISP_FREEZE_U_STEPS=3,
    DISP_FREEZE_PEAK=4, DISP_FREEZE_ESCAPE=5, DISP_FREEZE_REPEAT=6,
    DISP_INVARIANT=7, DISP_RESOURCE=8
} disposition_t;

typedef struct {
    uint64_t shortened_steps, u_steps;
    int peak_bits;
    disposition_t disposition;
    uint64_t final_hash;
} traj_result;

typedef struct {
    uint32_t bits;
    char arm;
    uint64_t counter_start;
    uint64_t counter_count;
    uint64_t generated;
    uint64_t pruned;
    uint64_t executed;
    uint64_t basin_hits;
    uint64_t cache_hits;
    uint64_t freezes;
    uint64_t repeats;
    uint64_t escapes;
    uint64_t invariant_failures;
    uint64_t resource_stops;
    uint64_t u_steps;
    uint64_t shortened_steps;
    uint64_t max_u_steps;
    uint64_t max_shortened_steps;
    int32_t max_peak_bits;
    int32_t max_peak_excess;
    uint64_t digest;
    double wall_seconds;
    double cpu_seconds;
    uint8_t complete;
    uint8_t _pad[7];
} wu_record;

typedef struct {
    uint64_t magic;
    uint32_t version;
    uint32_t record_size;
    uint64_t unit_count;
    uint64_t unit_size;
    uint64_t config_digest;
    char generator_version[32];
} checkpoint_header;

typedef struct {
    uint32_t bits;
    char arm;
    uint64_t counter;
    bigfix start;
    traj_result tr;
} exception_stub;

typedef struct {
    int bits;
    char arm;
    uint64_t count;
    uint64_t work_unit;
    uint64_t counter_base;
} group_cfg;

typedef struct campaign campaign;
typedef struct {
    campaign *c;
    int worker_id;
    uint32_t *samples;
    size_t sample_count;
    size_t sample_cap;
} worker_ctx;

struct campaign {
    group_cfg g;
    int threads;
    const char *checkpoint_path;
    wu_record *records;
    uint64_t unit_count;
    atomic_uint_fast64_t next_unit;
    atomic_int stop_flag;
    atomic_int exception_flag;
    pthread_mutex_t exception_mu;
    exception_stub exception;
    int have_exception;
    double wall_start;
    double cpu_start;
    double budget_wall_start;
    double budget_cpu_start;
    int checkpoint_fd;
    uint64_t config_digest;
};

static double clock_s(clockid_t id){ struct timespec ts; clock_gettime(id,&ts); return (double)ts.tv_sec + (double)ts.tv_nsec*1e-9; }
static inline uint64_t rotl64(uint64_t x,unsigned r){ return (x<<r)|(x>>(64-r)); }
static inline uint64_t mix64(uint64_t x){ x^=x>>30; x*=0xbf58476d1ce4e5b9ULL; x^=x>>27; x*=0x94d049bb133111ebULL; x^=x>>31; return x; }
static inline uint64_t splitmix64_next(uint64_t *x){ *x += 0x9e3779b97f4a7c15ULL; return mix64(*x); }
static inline uint64_t digest_combine(uint64_t h,uint64_t x){ return mix64(h ^ mix64(x + 0x9e3779b97f4a7c15ULL)); }

static inline void norm(bigfix *a){ while(a->n>1 && a->w[a->n-1]==0) a->n--; }
static inline int bitlen(const bigfix *a){ uint64_t x=a->w[a->n-1]; return 64*(a->n-1)+(64-__builtin_clzll(x)); }
static inline int eq(const bigfix *a,const bigfix *b){ return a->n==b->n && memcmp(a->w,b->w,sizeof(uint64_t)*a->n)==0; }
static inline int below_2p71(const bigfix *a){ if(a->n==1) return 1; if(a->n>2) return 0; return a->w[1] < (1ULL<<7); }
static inline unsigned ctz_big(const bigfix *a){ unsigned z=0; int i=0; while(i<a->n&&a->w[i]==0){z+=64;i++;} return i==a->n?z:z+__builtin_ctzll(a->w[i]); }
static inline void shr_bits(bigfix *a,unsigned s){
    if(!s) return;
    unsigned ws=s/64, bs=s%64;
    if(ws){ int nn=a->n-(int)ws; if(nn<1){ memset(a->w,0,sizeof(a->w)); a->n=1; return; } for(int i=0;i<nn;i++)a->w[i]=a->w[i+ws]; for(int i=nn;i<a->n;i++)a->w[i]=0; a->n=nn; }
    if(bs){ uint64_t carry=0; for(int i=a->n-1;i>=0;i--){ uint64_t nc=a->w[i]<<(64-bs); a->w[i]=(a->w[i]>>bs)|carry; carry=nc; } }
    norm(a);
}
static inline int mul3add1(bigfix *a){
    unsigned __int128 carry=1;
    for(int i=0;i<a->n;i++){ unsigned __int128 t=(unsigned __int128)a->w[i]*3u+carry; a->w[i]=(uint64_t)t; carry=t>>64; }
    if(carry){ if(a->n>=MAX_LIMBS)return 0; a->w[a->n++]=(uint64_t)carry; }
    return 1;
}
static inline int mul3add1_preserve(bigfix *a){
    if(a->n<MAX_LIMBS) return mul3add1(a);
    bigfix pre=*a;
    if(!mul3add1(a)){ *a=pre; return 0; }
    return 1;
}
static inline uint64_t hash_state(const bigfix *a){ uint64_t h=0x243f6a8885a308d3ULL^(uint64_t)a->n; for(int i=0;i<a->n;i++)h=digest_combine(h,a->w[i]^((uint64_t)i<<56)); return h; }
static void fix_to_mpz(const bigfix *a, mpz_t z){ mpz_import(z,a->n,-1,sizeof(uint64_t),0,0,a->w); }
static int mpz_to_fix(const mpz_t z,bigfix *a){ memset(a,0,sizeof(*a)); size_t n=0; mpz_export(a->w,&n,-1,sizeof(uint64_t),0,0,z); if(n>MAX_LIMBS)return 0; a->n=n?(int)n:1; return 1; }
static void bigfix_hex(const bigfix *a,char *out,size_t cap){ mpz_t z; mpz_init(z); fix_to_mpz(a,z); gmp_snprintf(out,cap,"%Zx",z); mpz_clear(z); }

static void make_start(bigfix *a,int bits,char arm,uint64_t counter){
    memset(a,0,sizeof(*a)); a->n=(bits+63)/64;
    uint64_t domain=0x43444d3350317631ULL ^ ((uint64_t)bits<<32) ^ ((uint64_t)(unsigned char)arm<<24);
    uint64_t seed=mix64(domain ^ mix64(counter));
    for(int i=0;i<a->n;i++)a->w[i]=splitmix64_next(&seed);
    int top=(bits-1)%64;
    if(top<63)a->w[a->n-1]&=((1ULL<<(top+1))-1ULL);
    a->w[a->n-1]|=1ULL<<top;
    a->w[0]|=1ULL;
}
static int mod9(const bigfix *a){ int r=0,w=1; for(int i=0;i<a->n;i++){ r=(r+(int)(a->w[i]%9ULL)*w)%9; w=(w*7)%9; } return r; }
static int arm_l_kill(const bigfix *a){ int r=mod9(a); return r==2||r==4||r==5||r==8; }

static inline void brent_update(const bigfix *cur,bigfix *tort,uint64_t *power,uint64_t *lam,int *repeat){
    (*lam)++; if(eq(cur,tort)){*repeat=1;return;} if(*lam==*power){*tort=*cur; if(*power <= (UINT64_MAX>>1))*power<<=1; *lam=0;}
}

static traj_result run_u_fixed(const bigfix *start,int start_bits){
    traj_result r={0}; bigfix n=*start,tort=*start; uint64_t power=1,lam=0; r.peak_bits=bitlen(&n);
    while(!below_2p71(&n)){
        if(r.u_steps>=MAX_U_STEPS){ r.disposition=DISP_FREEZE_U_STEPS; break; }
        if(!(n.w[0]&1ULL)){ r.disposition=DISP_INVARIANT; break; }
        if(!mul3add1_preserve(&n)){ r.disposition=DISP_FREEZE_ESCAPE; break; }
        int odd_out_bits=bitlen(&n)-1;
        if(odd_out_bits>r.peak_bits)r.peak_bits=odd_out_bits;
        if(odd_out_bits>=start_bits+PEAK_EXCESS_BITS){ r.disposition=DISP_FREEZE_PEAK; break; }
        unsigned v=ctz_big(&n); if(v==0){r.disposition=DISP_INVARIANT;break;}
        shr_bits(&n,v); r.u_steps++; r.shortened_steps+=v;
        int rep=0; brent_update(&n,&tort,&power,&lam,&rep); if(rep){r.disposition=DISP_FREEZE_REPEAT;break;}
    }
    if(below_2p71(&n))r.disposition=DISP_BASIN;
    r.final_hash=hash_state(&n)^mix64(r.shortened_steps)^rotl64(mix64(r.u_steps),17)^((uint64_t)r.peak_bits<<48)^((uint64_t)r.disposition<<8);
    return r;
}

