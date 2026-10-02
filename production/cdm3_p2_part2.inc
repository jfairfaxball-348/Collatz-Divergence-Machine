typedef struct {
    uint64_t generated,pruned,executed,basin_hits,cache_hits,freezes,repeats,escapes,invariant_failures,resource_stops,u_steps,shortened_steps,max_u_steps,max_shortened_steps,digest;
    int max_peak_bits,max_peak_excess; double work_wall_sum,work_cpu_sum,campaign_wall,campaign_cpu; uint64_t complete_units,total_units; uint32_t q50,q90,q99,q999; size_t sample_n;
} group_result;

static int run_group(group_cfg g,int threads,const char *checkpoint,int resume,double budget_wall_start,double budget_cpu_start,group_result *out,exception_stub *exc,int *have_exc){
    memset(out,0,sizeof(*out)); campaign c={0}; c.g=g;c.threads=threads;c.checkpoint_path=checkpoint;c.unit_count=(g.count+g.work_unit-1)/g.work_unit;c.config_digest=config_digest_for(g);c.checkpoint_fd=-1;pthread_mutex_init(&c.exception_mu,NULL);
    c.records=calloc(c.unit_count,sizeof(wu_record)); if(!c.records)return 0; atomic_init(&c.next_unit,0);atomic_init(&c.stop_flag,0);atomic_init(&c.exception_flag,0);
    if(!checkpoint_open(&c,resume)){free(c.records);return 0;}
    pthread_t th[MAX_THREADS]; worker_ctx ws[MAX_THREADS]; size_t cap=MAX_SAMPLES_PER_GROUP/(size_t)threads+2048;
    c.wall_start=clock_s(CLOCK_MONOTONIC);
    c.cpu_start=clock_s(CLOCK_PROCESS_CPUTIME_ID);
    c.budget_wall_start=budget_wall_start>0.0?budget_wall_start:c.wall_start;
    c.budget_cpu_start=budget_cpu_start>0.0?budget_cpu_start:c.cpu_start;
    for(int i=0;i<threads;i++){ ws[i].c=&c;ws[i].worker_id=i;ws[i].sample_count=0;ws[i].sample_cap=cap;ws[i].samples=calloc(cap,sizeof(uint32_t)); if(!ws[i].samples){atomic_store(&c.stop_flag,1);threads=i;break;} pthread_create(&th[i],NULL,worker_main,&ws[i]); }
    for(int i=0;i<threads;i++)pthread_join(th[i],NULL);
    out->campaign_wall=clock_s(CLOCK_MONOTONIC)-c.wall_start; out->campaign_cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-c.cpu_start; out->total_units=c.unit_count; out->max_peak_excess=INT32_MIN;
    uint64_t h=mix64(c.config_digest);
    for(uint64_t i=0;i<c.unit_count;i++){ wu_record *r=&c.records[i]; if(r->complete)out->complete_units++; out->generated+=r->generated;out->pruned+=r->pruned;out->executed+=r->executed;out->basin_hits+=r->basin_hits;out->cache_hits+=r->cache_hits;out->freezes+=r->freezes;out->repeats+=r->repeats;out->escapes+=r->escapes;out->invariant_failures+=r->invariant_failures;out->resource_stops+=r->resource_stops;out->u_steps+=r->u_steps;out->shortened_steps+=r->shortened_steps;if(r->max_u_steps>out->max_u_steps)out->max_u_steps=r->max_u_steps;if(r->max_shortened_steps>out->max_shortened_steps)out->max_shortened_steps=r->max_shortened_steps;if(r->max_peak_bits>out->max_peak_bits)out->max_peak_bits=r->max_peak_bits;if(r->max_peak_excess>out->max_peak_excess)out->max_peak_excess=r->max_peak_excess;out->work_wall_sum+=r->wall_seconds;out->work_cpu_sum+=r->cpu_seconds;h=digest_combine(h,r->digest^i); }
    out->digest=h;
    size_t sn=0; for(int i=0;i<threads;i++)sn+=ws[i].sample_count; uint32_t *samples=sn?malloc(sn*sizeof(uint32_t)):NULL; size_t p=0; for(int i=0;i<threads;i++){ if(samples&&ws[i].sample_count){memcpy(samples+p,ws[i].samples,ws[i].sample_count*sizeof(uint32_t));p+=ws[i].sample_count;} free(ws[i].samples); }
    out->sample_n=sn; if(samples){ out->q50=quantile_sample(samples,sn,0.50); out->q90=quantile_sample(samples,sn,0.90); out->q99=quantile_sample(samples,sn,0.99); out->q999=quantile_sample(samples,sn,0.999); free(samples); }
    if(c.have_exception){*exc=c.exception;*have_exc=1;} else *have_exc=0;
    if(c.checkpoint_fd>=0){fsync(c.checkpoint_fd);close(c.checkpoint_fd);} pthread_mutex_destroy(&c.exception_mu); free(c.records); return 1;
}

static void print_group_json(FILE *f,const group_cfg *g,const group_result *r,int comma){
    if(comma) fprintf(f,",\n");
    double starts_rate=r->campaign_wall>0?(double)r->executed/r->campaign_wall:0.0;
    double u_wall_rate=r->campaign_wall>0?(double)r->u_steps/r->campaign_wall:0.0;
    double u_cpu_rate=r->work_cpu_sum>0?(double)r->u_steps/r->work_cpu_sum:0.0;
    double mean=r->executed?(double)r->u_steps/(double)r->executed:0.0;
    fprintf(f,"    {\"bits\":%d,\"arm\":\"%c\",\"counter_base\":%"PRIu64",\"counter_count\":%"PRIu64",\"generated\":%"PRIu64",\"pretrajectory_kills\":%"PRIu64",\"trajectories_executed\":%"PRIu64",\"basin_hits\":%"PRIu64",\"cache_hits\":%"PRIu64",\"frozen_candidates\":%"PRIu64",\"repeats\":%"PRIu64",\"bigint_escapes\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"resource_stops\":%"PRIu64",\"u_steps_total\":%"PRIu64",\"shortened_step_equiv_total\":%"PRIu64",\"mean_u_steps\":%.9f,\"sample_quantiles_u_steps\":{\"sample_mod\":%u,\"sample_n\":%zu,\"p50\":%u,\"p90\":%u,\"p99\":%u,\"p99_9\":%u},\"max_u_steps\":%"PRIu64",\"max_shortened_steps\":%"PRIu64",\"max_peak_bits\":%d,\"max_peak_excess\":%d,\"throughput_executed_per_wall_second\":%.6f,\"u_steps_per_wall_second\":%.6f,\"u_steps_per_completed_worker_cpu_second\":%.6f,\"wall_seconds\":%.6f,\"process_cpu_seconds\":%.6f,\"completed_worker_cpu_seconds\":%.6f,\"complete_work_units\":%"PRIu64",\"total_work_units\":%"PRIu64",\"digest\":\"%016"PRIx64"\"}",g->bits,g->arm,g->counter_base,g->count,r->generated,r->pruned,r->executed,r->basin_hits,r->cache_hits,r->freezes,r->repeats,r->escapes,r->invariant_failures,r->resource_stops,r->u_steps,r->shortened_steps,mean,(unsigned)SAMPLE_MOD,r->sample_n,r->q50,r->q90,r->q99,r->q999,r->max_u_steps,r->max_shortened_steps,r->max_peak_bits,r->max_peak_excess,starts_rate,u_wall_rate,u_cpu_rate,r->campaign_wall,r->campaign_cpu,r->work_cpu_sum,r->complete_units,r->total_units,r->digest);
}

static int fixed_vs_gmp_transition_test(void){
    int bitsv[]={256,512,1024}; mpz_t z;mpz_init(z); uint64_t cases=0;
    for(int bi=0;bi<3;bi++)for(int ai=0;ai<2;ai++)for(uint64_t i=0;i<64;i++){
        char arm=ai?'L':'U';bigfix a;make_start(&a,bitsv[bi],arm,i);fix_to_mpz(&a,z);
        for(int k=0;k<128;k++){
            if(!(a.w[0]&1ULL)){mpz_clear(z);return 0;} bigfix b=a; if(!mul3add1(&b)){mpz_clear(z);return 0;} unsigned v=ctz_big(&b);shr_bits(&b,v);
            mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);mp_bitcnt_t vg=mpz_scan1(z,0);mpz_tdiv_q_2exp(z,z,vg);bigfix g;if(v!=(unsigned)vg||!mpz_to_fix(z,&g)||!eq(&b,&g)){mpz_clear(z);return 0;}a=b;cases++;
        }
    }
    mpz_clear(z);fprintf(stderr,"preflight_fixed_vs_gmp_cases=%"PRIu64" PASS\n",cases);return 1;
}

static int optimized_vs_gmp_transition_test(void){
    int bitsv[]={256,512,1024}; mpz_t z;mpz_init(z); uint64_t cases=0;
    for(int bi=0;bi<3;bi++)for(int ai=0;ai<2;ai++)for(uint64_t i=0;i<64;i++){
        char arm=ai?'L':'U';bigfix a;make_start(&a,bitsv[bi],arm,50000000ULL+i);fix_to_mpz(&a,z);
        for(int k=0;k<64;k++){
            if(!(a.w[0]&1ULL)){mpz_clear(z);return 0;} bigfix b=a; if(!mul3add1_preserve(&b)){mpz_clear(z);return 0;} unsigned v=ctz_big(&b);shr_bits(&b,v);
            mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);mp_bitcnt_t vg=mpz_scan1(z,0);mpz_tdiv_q_2exp(z,z,vg);bigfix g;if(v!=(unsigned)vg||!mpz_to_fix(z,&g)||!eq(&b,&g)){mpz_clear(z);return 0;}a=b;cases++;
        }
    }
    mpz_clear(z);fprintf(stderr,"preflight_optimized_vs_gmp_cases=%"PRIu64" PASS\n",cases);return 1;
}

static int odd_vs_shortened_equiv_test(void){
    int bitsv[]={256,512,1024}; uint64_t cases=0;
    for(int bi=0;bi<3;bi++)for(int ai=0;ai<2;ai++)for(uint64_t i=0;i<64;i++){
        bigfix s;make_start(&s,bitsv[bi],ai?'L':'U',1000+i);bigfix u=s,sh=s;if(!mul3add1(&u))return 0;unsigned v=ctz_big(&u);shr_bits(&u,v);
        uint64_t steps=0; if(!mul3add1(&sh))return 0; shr_bits(&sh,1);steps++; while(!(sh.w[0]&1ULL)){shr_bits(&sh,1);steps++;}
        if(!eq(&u,&sh)||steps!=v) return 0;
        cases++;
    }
    fprintf(stderr,"preflight_odd_short_equiv_cases=%"PRIu64" PASS\n",cases);return 1;
}

static int forced_escape_test(void){
    bigfix s;memset(&s,0,sizeof(s));s.n=MAX_LIMBS;for(int i=0;i<MAX_LIMBS;i++)s.w[i]=UINT64_MAX;s.w[0]|=1ULL;
    bigfix before=s,t=s;
    if(mul3add1_preserve(&t)){fprintf(stderr,"preflight_forced_escape unexpected success\n");return 0;}
    if(!eq(&t,&before)){fprintf(stderr,"preflight_forced_escape original state not preserved\n");return 0;}
    traj_result tr=run_u_fixed(&s,FAST_PATH_BITS);
    if(tr.disposition!=DISP_FREEZE_ESCAPE||tr.u_steps!=0||tr.shortened_steps!=0){fprintf(stderr,"preflight_forced_escape wrong disposition\n");return 0;}

    bigfix threshold;memset(&threshold,0,sizeof(threshold));threshold.n=MAX_LIMBS;
    threshold.w[0]=0x5555555555555554ULL;for(int i=1;i<MAX_LIMBS;i++)threshold.w[i]=0x5555555555555555ULL;
    bigfix safe=threshold;if(!mul3add1_preserve(&safe)){fprintf(stderr,"preflight_forced_escape exact safe threshold rejected\n");return 0;}
    bigfix over=threshold;over.w[0]++;bigfix over_before=over;
    if(mul3add1_preserve(&over)||!eq(&over,&over_before)){fprintf(stderr,"preflight_forced_escape threshold+1 preservation failed\n");return 0;}

    mpz_t z;mpz_init(z);fix_to_mpz(&before,z);mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);
    mp_bitcnt_t v=mpz_scan1(z,0);mpz_tdiv_q_2exp(z,z,v);size_t b=mpz_sizeinbase(z,2);mpz_clear(z);
    int ok=b>FAST_PATH_BITS;
    fprintf(stderr,"preflight_forced_escape_bits=%zu preservation=PASS disposition=%d %s\n",b,(int)tr.disposition,ok?"PASS":"FAIL");
    return ok;
}

static int deterministic_workunit_test(void){
    group_cfg g={256,'U',20000,20000,0}; group_result a,b;exception_stub e;int he;
    if(!run_group(g,1,NULL,0,0.0,0.0,&a,&e,&he)||he) return 0;
    if(!run_group(g,1,NULL,0,0.0,0.0,&b,&e,&he)||he) return 0;
    int ok=a.generated==b.generated&&a.executed==b.executed&&a.basin_hits==b.basin_hits&&a.u_steps==b.u_steps&&a.shortened_steps==b.shortened_steps&&a.digest==b.digest;
    fprintf(stderr,"preflight_workunit_replay_digest=%016"PRIx64" %s\n",a.digest,ok?"PASS":"FAIL");return ok;
}

static int multithread_determinism_test(void){
    group_cfg g={512,'L',120000,20000,500000};group_result a,b;exception_stub e;int he;
    if(!run_group(g,1,NULL,0,0.0,0.0,&a,&e,&he)||he) return 0;
    if(!run_group(g,4,NULL,0,0.0,0.0,&b,&e,&he)||he) return 0;
    int ok=a.generated==b.generated&&a.pruned==b.pruned&&a.executed==b.executed&&a.basin_hits==b.basin_hits&&a.u_steps==b.u_steps&&a.shortened_steps==b.shortened_steps&&a.digest==b.digest;
    fprintf(stderr,"preflight_multithread_digest=%016"PRIx64" one_thread=%.6f four_threads=%.6f %s\n",a.digest,a.campaign_wall,b.campaign_wall,ok?"PASS":"FAIL");return ok;
}

static int checkpoint_restart_test(const char *path){
    unlink(path);group_cfg g={256,'U',80000,20000,900000};group_result full,res;exception_stub e;int he;
    if(!run_group(g,2,NULL,0,0.0,0.0,&full,&e,&he)||he) return 0;
    /* Create a semantically valid partial checkpoint containing two completed units by running half the declared counter range under the same record format. */
    campaign c={0};c.g=g;c.unit_count=4;c.config_digest=config_digest_for(g);c.checkpoint_path=path;c.checkpoint_fd=-1;c.records=calloc(c.unit_count,sizeof(wu_record));pthread_mutex_init(&c.exception_mu,NULL);atomic_init(&c.stop_flag,0);atomic_init(&c.exception_flag,0);c.wall_start=clock_s(CLOCK_MONOTONIC);c.cpu_start=clock_s(CLOCK_PROCESS_CPUTIME_ID);c.budget_wall_start=c.wall_start;c.budget_cpu_start=c.cpu_start;if(!checkpoint_open(&c,0)){free(c.records);return 0;}
    worker_ctx w={0};w.c=&c;w.sample_cap=4096;w.samples=calloc(w.sample_cap,sizeof(uint32_t));for(uint64_t ui=0;ui<2;ui++){wu_record r;process_unit(&w,ui,&r);c.records[ui]=r;if(!write_checkpoint_record(&c,ui,&r)){free(w.samples);return 0;}}fsync(c.checkpoint_fd);close(c.checkpoint_fd);free(w.samples);pthread_mutex_destroy(&c.exception_mu);free(c.records);
    if(!run_group(g,3,path,1,0.0,0.0,&res,&e,&he)||he) return 0;
    int ok=full.generated==res.generated&&full.executed==res.executed&&full.basin_hits==res.basin_hits&&full.u_steps==res.u_steps&&full.shortened_steps==res.shortened_steps&&full.digest==res.digest;
    fprintf(stderr,"preflight_checkpoint_restart_digest=%016"PRIx64" %s\n",full.digest,ok?"PASS":"FAIL");unlink(path);return ok;
}

static int ranges_overlap(uint64_t a,uint64_t an,uint64_t b,uint64_t bn){
    return a < b+bn && b < a+an;
}

static int counter_ranges_test(void){
    static const uint64_t p1_bases[6]={0ULL,6000003ULL,12000006ULL,18000009ULL,24000012ULL,30000015ULL};
    const uint64_t p1_count=5000000ULL;
    uint64_t p2[6];int k=0;
    for(int bi=0;bi<3;bi++)for(int ai=0;ai<2;ai++)p2[k++]=P2_COUNTER_BASES[bi][ai];
    for(int i=0;i<6;i++)for(int j=i+1;j<6;j++)if(ranges_overlap(p2[i],P2_COUNTER_COUNT,p2[j],P2_COUNTER_COUNT)){
        fprintf(stderr,"preflight_counter_overlap P2 %d %d FAIL\n",i,j);return 0;
    }
    for(int i=0;i<6;i++)for(int j=0;j<6;j++)if(ranges_overlap(p2[i],P2_COUNTER_COUNT,p1_bases[j],p1_count)){
        fprintf(stderr,"preflight_counter_overlap P2/P1 %d %d FAIL\n",i,j);return 0;
    }
    fprintf(stderr,"preflight_counter_ranges pairwise_and_P1_disjoint=PASS\n");return 1;
}

static int budget_constants_test(void){
    int ok=MAX_THREADS<=8&&MAX_GENERATED_PER_BAND==20000000ULL&&MAX_GENERATED_PER_ARM_BAND==10000000ULL&&MAX_GENERATED_TOTAL==60000000ULL&&P2_COUNTER_COUNT==10000000ULL&&WALL_LIMIT_SECONDS<=900.0&&CPU_LIMIT_SECONDS<=3600.0&&FAST_PATH_BITS==4096&&MAX_U_STEPS==32768u&&PEAK_EXCESS_BITS==512&&RESULT_STORAGE_LIMIT_BYTES<=300ULL*1024ULL*1024ULL;
    fprintf(stderr,"preflight_budget_constants wall=%.0f cpu=%.0f threads=%d storage_mib=%llu total=%llu %s\n",WALL_LIMIT_SECONDS,CPU_LIMIT_SECONDS,MAX_THREADS,(unsigned long long)(RESULT_STORAGE_LIMIT_BYTES/1024/1024),(unsigned long long)MAX_GENERATED_TOTAL,ok?"PASS":"FAIL");return ok;
}

static int selftest(const char *checkpoint){
    int ok=1;ok&=fixed_vs_gmp_transition_test();ok&=optimized_vs_gmp_transition_test();ok&=odd_vs_shortened_equiv_test();ok&=forced_escape_test();ok&=deterministic_workunit_test();ok&=checkpoint_restart_test(checkpoint);ok&=multithread_determinism_test();ok&=counter_ranges_test();ok&=budget_constants_test();fprintf(stderr,"CDM3_P2_PRECHECK=%s\n",ok?"PASS":"FAIL");return ok?0:10;
}

