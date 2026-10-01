#define main cdm3_p1_embedded_main
#include "../production/cdm3_p1_engine.c"
#undef main

#include <math.h>

#define B1_VERSION "CDM3-B1-bench-v1"
#define B1_MAX_BENCH_STARTS 8192
#define B1_MAX_PASSES 5
#define B1_MAX_SCALE_STARTS 32768

typedef enum { B1_R3=0, B1_P1=1, B1_OPT=2 } b1_variant;

typedef struct {
    uint64_t starts, basin, escapes, repeats, invariants;
    uint64_t u_steps, shortened_steps, max_u_steps;
    int max_peak_bits;
    uint64_t digest;
} b1_agg;

static inline int b1_mul3add1_preserve(bigfix *a){
    /*
     * Exact pre-mutation overflow test for the fixed 4096-bit container.
     * 3n+1 fits in 4096 bits iff
     *   n <= floor((2^4096-2)/3).
     * For 64 little-endian limbs that threshold is
     *   [0]=0x555...554, [1..63]=0x555...555.
     * States with fewer than 64 limbs cannot overflow.
     */
    if(a->n==MAX_LIMBS){
        for(int i=MAX_LIMBS-1;i>=0;i--){
            uint64_t lim = (i==0) ? 0x5555555555555554ULL : 0x5555555555555555ULL;
            if(a->w[i] < lim) break;
            if(a->w[i] > lim) return 0;
        }
    }
    return mul3add1(a);
}

static traj_result b1_run_u_r3(const bigfix *start,int start_bits){
    /*
     * R3 arithmetic reference: destructive mul3add1 with no production
     * recovery copy. The frozen B1 ordinary workload is required to have
     * no escapes; therefore this preserves R3 hot-path arithmetic while
     * using the P1 disposition/peak accounting for digest comparability.
     */
    traj_result r={0}; bigfix n=*start,tort=*start; uint64_t power=1,lam=0; r.peak_bits=bitlen(&n);
    while(!below_2p71(&n)){
        if(r.u_steps>=MAX_U_STEPS){ r.disposition=DISP_FREEZE_U_STEPS; break; }
        if(!(n.w[0]&1ULL)){ r.disposition=DISP_INVARIANT; break; }
        if(!mul3add1(&n)){ r.disposition=DISP_FREEZE_ESCAPE; break; }
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

static traj_result b1_run_u_opt(const bigfix *start,int start_bits){
    traj_result r={0}; bigfix n=*start,tort=*start; uint64_t power=1,lam=0; r.peak_bits=bitlen(&n);
    while(!below_2p71(&n)){
        if(r.u_steps>=MAX_U_STEPS){ r.disposition=DISP_FREEZE_U_STEPS; break; }
        if(!(n.w[0]&1ULL)){ r.disposition=DISP_INVARIANT; break; }
        if(!b1_mul3add1_preserve(&n)){ r.disposition=DISP_FREEZE_ESCAPE; break; }
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

static traj_result b1_run_variant(b1_variant v,const bigfix *s,int bits){
    if(v==B1_R3) return b1_run_u_r3(s,bits);
    if(v==B1_OPT) return b1_run_u_opt(s,bits);
    return run_u_fixed(s,bits);
}

static const char *b1_variant_name(b1_variant v){
    return v==B1_R3?"r3":(v==B1_OPT?"opt":"p1");
}

static int b1_parse_variant(const char *s,b1_variant *v){
    if(strcmp(s,"r3")==0){*v=B1_R3;return 1;}
    if(strcmp(s,"p1")==0){*v=B1_P1;return 1;}
    if(strcmp(s,"opt")==0){*v=B1_OPT;return 1;}
    return 0;
}

static void b1_add(b1_agg *a,uint64_t counter,const bigfix *start,traj_result tr){
    a->starts++;
    if(tr.disposition==DISP_BASIN)a->basin++;
    if(tr.disposition==DISP_FREEZE_ESCAPE)a->escapes++;
    if(tr.disposition==DISP_FREEZE_REPEAT)a->repeats++;
    if(tr.disposition==DISP_INVARIANT)a->invariants++;
    a->u_steps+=tr.u_steps;
    a->shortened_steps+=tr.shortened_steps;
    if(tr.u_steps>a->max_u_steps)a->max_u_steps=tr.u_steps;
    if(tr.peak_bits>a->max_peak_bits)a->max_peak_bits=tr.peak_bits;
    a->digest=digest_combine(a->digest,candidate_digest(counter,start,tr));
}

static int b1_same_traj(traj_result a,traj_result b){
    return a.shortened_steps==b.shortened_steps &&
           a.u_steps==b.u_steps &&
           a.peak_bits==b.peak_bits &&
           a.disposition==b.disposition &&
           a.final_hash==b.final_hash;
}

static int b1_opt_transition_vs_gmp(void){
    int bitsv[]={256,512,1024};
    mpz_t z; mpz_init(z);
    uint64_t cases=0;
    for(int bi=0;bi<3;bi++){
        for(uint64_t i=0;i<64;i++){
            bigfix a; make_start(&a,bitsv[bi],'U',i);
            fix_to_mpz(&a,z);
            for(int k=0;k<128;k++){
                bigfix b=a;
                if(!b1_mul3add1_preserve(&b)){mpz_clear(z);return 0;}
                unsigned v=ctz_big(&b); if(v==0){mpz_clear(z);return 0;}
                shr_bits(&b,v);
                mpz_mul_ui(z,z,3); mpz_add_ui(z,z,1);
                mp_bitcnt_t vg=mpz_scan1(z,0);
                mpz_tdiv_q_2exp(z,z,vg);
                bigfix g;
                if(v!=(unsigned)vg || !mpz_to_fix(z,&g) || !eq(&b,&g)){mpz_clear(z);return 0;}
                a=b; cases++;
            }
        }
    }
    mpz_clear(z);
    fprintf(stderr,"b1_opt_vs_gmp_cases=%" PRIu64 " PASS\n",cases);
    return 1;
}

static int b1_forced_escape_preservation(void){
    bigfix s; memset(&s,0,sizeof(s)); s.n=MAX_LIMBS;
    for(int i=0;i<MAX_LIMBS;i++)s.w[i]=UINT64_MAX;
    s.w[0]|=1ULL;
    bigfix before=s, t=s;
    if(b1_mul3add1_preserve(&t)) return 0;
    if(!eq(&t,&before)) return 0;
    traj_result r=b1_run_u_opt(&s,FAST_PATH_BITS);
    if(r.disposition!=DISP_FREEZE_ESCAPE || r.u_steps!=0 || r.shortened_steps!=0) return 0;

    bigfix threshold; memset(&threshold,0,sizeof(threshold)); threshold.n=MAX_LIMBS;
    threshold.w[0]=0x5555555555555554ULL;
    for(int i=1;i<MAX_LIMBS;i++)threshold.w[i]=0x5555555555555555ULL;
    bigfix safe=threshold;
    if(!b1_mul3add1_preserve(&safe)) return 0;
    bigfix over=threshold;
    over.w[0]++;
    bigfix over_before=over;
    if(b1_mul3add1_preserve(&over)) return 0;
    if(!eq(&over,&over_before)) return 0;

    mpz_t z; mpz_init(z); fix_to_mpz(&s,z);
    mpz_mul_ui(z,z,3); mpz_add_ui(z,z,1);
    mp_bitcnt_t v=mpz_scan1(z,0); mpz_tdiv_q_2exp(z,z,v);
    size_t bits=mpz_sizeinbase(z,2); mpz_clear(z);
    int ok=bits>FAST_PATH_BITS;
    fprintf(stderr,"b1_forced_escape_replay_bits=%zu preservation=%s\n",bits,ok?"PASS":"FAIL");
    return ok;
}

static int b1_digest_equality_test(void){
    int bitsv[]={256,512,1024};
    for(int bi=0;bi<3;bi++){
        for(uint64_t i=0;i<1024;i++){
            bigfix s; make_start(&s,bitsv[bi],'U',i);
            traj_result r3=b1_run_u_r3(&s,bitsv[bi]);
            traj_result p1=run_u_fixed(&s,bitsv[bi]);
            traj_result op=b1_run_u_opt(&s,bitsv[bi]);
            if(!b1_same_traj(r3,p1) || !b1_same_traj(p1,op)){
                fprintf(stderr,"b1_digest_mismatch bits=%d counter=%" PRIu64 "\n",bitsv[bi],i);
                return 0;
            }
        }
    }
    fprintf(stderr,"b1_digest_equality_cases=%d PASS\n",3*1024);
    return 1;
}

static int b1_selftest(void){
    int ok=1;
    ok&=fixed_vs_gmp_transition_test();
    ok&=odd_vs_shortened_equiv_test();
    ok&=b1_opt_transition_vs_gmp();
    ok&=b1_forced_escape_preservation();
    ok&=b1_digest_equality_test();
    fprintf(stderr,"CDM3_B1_PRECHECK=%s\n",ok?"PASS":"FAIL");
    return ok?0:10;
}

static int b1_bench(b1_variant v,int nstarts,int passes){
    if(nstarts<1||nstarts>B1_MAX_BENCH_STARTS||passes<1||passes>B1_MAX_PASSES)return 2;
    int bitsv[]={256,512,1024};
    for(int pass=0;pass<passes;pass++){
        for(int bi=0;bi<3;bi++){
            int bits=bitsv[bi]; b1_agg a={0}; a.digest=mix64((uint64_t)bits ^ ((uint64_t)pass<<32));
            double w0=clock_s(CLOCK_MONOTONIC), c0=clock_s(CLOCK_PROCESS_CPUTIME_ID);
            for(int i=0;i<nstarts;i++){
                bigfix s; make_start(&s,bits,'U',(uint64_t)i);
                traj_result tr=b1_run_variant(v,&s,bits);
                b1_add(&a,(uint64_t)i,&s,tr);
            }
            double wall=clock_s(CLOCK_MONOTONIC)-w0;
            double cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-c0;
            double sps=wall>0.0?(double)a.starts/wall:0.0;
            double ups=wall>0.0?(double)a.u_steps/wall:0.0;
            double shps=wall>0.0?(double)a.shortened_steps/wall:0.0;
            double mean=a.starts?(double)a.u_steps/(double)a.starts:0.0;
            printf("{\"record\":\"one_thread\",\"version\":\"%s\",\"variant\":\"%s\",\"bits\":%d,\"pass\":%d,\"starts\":%" PRIu64 ",\"wall_seconds\":%.9f,\"cpu_seconds\":%.9f,\"starts_per_s\":%.6f,\"u_steps_per_s\":%.6f,\"shortened_steps_per_s\":%.6f,\"u_steps\":%" PRIu64 ",\"shortened_steps\":%" PRIu64 ",\"mean_u_steps\":%.9f,\"max_u_steps\":%" PRIu64 ",\"max_peak_bits\":%d,\"basin_hits\":%" PRIu64 ",\"overflow_escapes\":%" PRIu64 ",\"repeats\":%" PRIu64 ",\"invariant_failures\":%" PRIu64 ",\"digest\":\"%016" PRIx64 "\"}\n",
                   B1_VERSION,b1_variant_name(v),bits,pass,a.starts,wall,cpu,sps,ups,shps,a.u_steps,a.shortened_steps,mean,a.max_u_steps,a.max_peak_bits,a.basin,a.escapes,a.repeats,a.invariants,a.digest);
            fflush(stdout);
        }
    }
    return 0;
}

typedef struct {
    int bits;
    b1_variant variant;
    int nstarts;
    atomic_int next;
    traj_result *results;
} b1_scale_ctx;

static void *b1_scale_worker(void *arg){
    b1_scale_ctx *c=(b1_scale_ctx*)arg;
    for(;;){
        int i=atomic_fetch_add(&c->next,1);
        if(i>=c->nstarts)break;
        bigfix s; make_start(&s,c->bits,'U',(uint64_t)i);
        c->results[i]=b1_run_variant(c->variant,&s,c->bits);
    }
    return NULL;
}

static int b1_scale(b1_variant v,int workers,int nstarts){
    if(workers!=1&&workers!=2&&workers!=4&&workers!=8)return 2;
    if(nstarts<1||nstarts>B1_MAX_SCALE_STARTS)return 2;
    int bitsv[]={256,512,1024};
    for(int bi=0;bi<3;bi++){
        int bits=bitsv[bi];
        traj_result *results=calloc((size_t)nstarts,sizeof(*results)); if(!results)return 3;
        b1_scale_ctx c={0}; c.bits=bits;c.variant=v;c.nstarts=nstarts;c.results=results;atomic_init(&c.next,0);
        pthread_t th[8];
        double w0=clock_s(CLOCK_MONOTONIC), c0=clock_s(CLOCK_PROCESS_CPUTIME_ID);
        for(int i=0;i<workers;i++) if(pthread_create(&th[i],NULL,b1_scale_worker,&c)!=0){free(results);return 4;}
        for(int i=0;i<workers;i++) pthread_join(th[i],NULL);
        double wall=clock_s(CLOCK_MONOTONIC)-w0;
        double cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-c0;
        b1_agg a={0}; a.digest=mix64((uint64_t)bits ^ 0x5343414c45ULL);
        for(int i=0;i<nstarts;i++){
            bigfix s; make_start(&s,bits,'U',(uint64_t)i);
            b1_add(&a,(uint64_t)i,&s,results[i]);
        }
        free(results);
        double sps=wall>0.0?(double)a.starts/wall:0.0;
        double ups=wall>0.0?(double)a.u_steps/wall:0.0;
        double shps=wall>0.0?(double)a.shortened_steps/wall:0.0;
        printf("{\"record\":\"scaling\",\"version\":\"%s\",\"variant\":\"%s\",\"workers\":%d,\"bits\":%d,\"starts\":%" PRIu64 ",\"wall_seconds\":%.9f,\"cpu_seconds\":%.9f,\"starts_per_s\":%.6f,\"u_steps_per_s\":%.6f,\"shortened_steps_per_s\":%.6f,\"u_steps\":%" PRIu64 ",\"shortened_steps\":%" PRIu64 ",\"max_u_steps\":%" PRIu64 ",\"max_peak_bits\":%d,\"basin_hits\":%" PRIu64 ",\"overflow_escapes\":%" PRIu64 ",\"repeats\":%" PRIu64 ",\"invariant_failures\":%" PRIu64 ",\"digest\":\"%016" PRIx64 "\"}\n",
               B1_VERSION,b1_variant_name(v),workers,bits,a.starts,wall,cpu,sps,ups,shps,a.u_steps,a.shortened_steps,a.max_u_steps,a.max_peak_bits,a.basin,a.escapes,a.repeats,a.invariants,a.digest);
        fflush(stdout);
    }
    return 0;
}

static int b1_probe(int bits,char arm,uint64_t counter,uint64_t max_steps){
    if((bits!=256&&bits!=512&&bits!=1024)||(arm!='U'&&arm!='L')||max_steps>MAX_U_STEPS)return 40;
    bigfix s; make_start(&s,bits,arm,counter); char start_hex[1100]; bigfix_hex(&s,start_hex,sizeof(start_hex));
    bigfix n=s; uint64_t u=0,short_steps=0; int peak=bitlen(&n); disposition_t d=DISP_NONE;
    while(!below_2p71(&n) && u<max_steps){
        if(!b1_mul3add1_preserve(&n)){d=DISP_FREEZE_ESCAPE;break;}
        int ob=bitlen(&n)-1; if(ob>peak)peak=ob;
        unsigned v=ctz_big(&n); if(v==0){d=DISP_INVARIANT;break;}
        shr_bits(&n,v); u++; short_steps+=v;
    }
    if(below_2p71(&n))d=DISP_BASIN;
    char state_hex[1100]; bigfix_hex(&n,state_hex,sizeof(state_hex));
    printf("{\"version\":\"%s\",\"bits\":%d,\"arm\":\"%c\",\"counter\":%" PRIu64 ",\"start_hex\":\"%s\",\"u_steps\":%" PRIu64 ",\"shortened_steps\":%" PRIu64 ",\"peak_bits\":%d,\"state_hex\":\"%s\",\"disposition\":%d}\n",
           B1_VERSION,bits,arm,counter,start_hex,u,short_steps,peak,state_hex,(int)d);
    return 0;
}

static void b1_usage(const char *p){
    fprintf(stderr,"usage: %s --selftest | --bench {r3|p1|opt} STARTS PASSES | --scale {p1|opt} WORKERS STARTS | --probe BITS ARM COUNTER USTEPS | --provenance\n",p);
}

int main(int argc,char **argv){
    if(argc==2&&strcmp(argv[1],"--selftest")==0)return b1_selftest();
    if(argc==2&&strcmp(argv[1],"--provenance")==0){
        printf("{\"version\":\"%s\",\"compiler\":\"%s\",\"gmp\":\"%s\",\"max_limbs\":%d,\"fast_path_bits\":%d}\n",B1_VERSION,__VERSION__,gmp_version,MAX_LIMBS,FAST_PATH_BITS);
        return 0;
    }
    if(argc==5&&strcmp(argv[1],"--bench")==0){
        b1_variant v; if(!b1_parse_variant(argv[2],&v))return 2;
        return b1_bench(v,atoi(argv[3]),atoi(argv[4]));
    }
    if(argc==5&&strcmp(argv[1],"--scale")==0){
        b1_variant v; if(!b1_parse_variant(argv[2],&v)||v==B1_R3)return 2;
        return b1_scale(v,atoi(argv[3]),atoi(argv[4]));
    }
    if(argc==6&&strcmp(argv[1],"--probe")==0)return b1_probe(atoi(argv[2]),argv[3][0],strtoull(argv[4],NULL,10),strtoull(argv[5],NULL,10));
    b1_usage(argv[0]); return 2;
}
