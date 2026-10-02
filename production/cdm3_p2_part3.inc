static const char *disposition_name(disposition_t d){
    switch(d){
        case DISP_BASIN:return "TIER2_BASIN";
        case DISP_PRUNED_MOD9:return "PRUNED_MOD9";
        case DISP_FREEZE_U_STEPS:return "FREEZE_U_STEPS";
        case DISP_FREEZE_PEAK:return "FREEZE_PEAK";
        case DISP_FREEZE_ESCAPE:return "FREEZE_ESCAPE";
        case DISP_FREEZE_REPEAT:return "FREEZE_REPEAT";
        case DISP_INVARIANT:return "INVARIANT_FAILURE";
        case DISP_RESOURCE:return "RESOURCE_STOP";
        default:return "NONE";
    }
}

static void print_exception_json(FILE *f,const exception_stub *e){
    char hex[1100];bigfix_hex(&e->start,hex,sizeof(hex));mpz_t z;mpz_init(z);fix_to_mpz(&e->start,z);char *dec=mpz_get_str(NULL,10,z);mpz_clear(z);
    fprintf(f,"{\"bit_length\":%u,\"arm\":\"%c\",\"counter\":%"PRIu64",\"generator_version\":\"%s\",\"start_hex\":\"%s\",\"start_decimal\":\"%s\",\"u_steps\":%"PRIu64",\"shortened_step_equiv\":%"PRIu64",\"peak_bits\":%d,\"peak_excess\":%d,\"disposition\":%d,\"freeze_reason\":\"%s\"}",e->bits,e->arm,e->counter,GENERATOR_VERSION,hex,dec?dec:"",e->tr.u_steps,e->tr.shortened_steps,e->tr.peak_bits,e->tr.peak_bits-(int)e->bits,(int)e->tr.disposition,disposition_name(e->tr.disposition));free(dec);
}

static int pilot(int threads,const char *outpath,const char *checkpoint_dir,const char *repo_commit,const char *source_sha,const char *exe_sha){
    if(threads<1||threads>MAX_THREADS)return 20;
    if(MAX_GENERATED_PER_ARM_BAND!=P2_COUNTER_COUNT||MAX_GENERATED_PER_BAND!=2*P2_COUNTER_COUNT||MAX_GENERATED_TOTAL!=6*P2_COUNTER_COUNT)return 21;
    FILE *f=fopen(outpath,"w");if(!f)return 22;time_t now=time(NULL);char host[256]="";gethostname(host,sizeof(host));
    fprintf(f,"{\n  \"campaign_id\":\"CDM3-P2-20261002\",\n  \"version\":\"%s\",\n  \"generator_version\":\"%s\",\n  \"claim_status\":\"COMPUTATIONAL-EVIDENCE\",\n  \"counterexample_claimed\":false,\n  \"repo_commit\":\"%s\",\n  \"source_sha256\":\"%s\",\n  \"executable_sha256\":\"%s\",\n  \"compiler\":\"%s\",\n  \"gmp_version\":\"%s\",\n  \"host\":\"%s\",\n  \"threads\":%d,\n  \"start_time_epoch\":%lld,\n  \"limits\":{\"bits\":[256,512,1024],\"generated_per_arm_per_band\":%"PRIu64",\"generated_total\":%"PRIu64",\"u_step_freeze\":%u,\"peak_excess_freeze_bits\":%d,\"fast_path_bits\":%d,\"wall_seconds_internal\":%.0f,\"cpu_seconds_internal\":%.0f,\"result_storage_mib_internal\":%llu,\"gpu_execution\":false},\n  \"groups\":[\n",CDM_VERSION,GENERATOR_VERSION,repo_commit?repo_commit:"",source_sha?source_sha:"",exe_sha?exe_sha:"",__VERSION__,gmp_version,host,threads,(long long)now,(uint64_t)P2_COUNTER_COUNT,(uint64_t)MAX_GENERATED_TOTAL,MAX_U_STEPS,PEAK_EXCESS_BITS,FAST_PATH_BITS,WALL_LIMIT_SECONDS,CPU_LIMIT_SECONDS,(unsigned long long)(RESULT_STORAGE_LIMIT_BYTES/1024/1024));
    double pilot_wall_start=clock_s(CLOCK_MONOTONIC);
    double pilot_cpu_start=clock_s(CLOCK_PROCESS_CPUTIME_ID);
    int bitsv[]={256,512,1024};int first=1;
    uint64_t total_generated=0,total_exec=0,total_freeze=0,total_u=0,total_short=0,total_basin=0,total_pruned=0,total_cache=0,total_repeats=0,total_escapes=0,total_invariant=0,total_resource=0;
    double total_completed_worker_cpu=0.0;exception_stub exc={0};int have_exc=0;
    for(int bi=0;bi<3&&!have_exc;bi++)for(int ai=0;ai<2&&!have_exc;ai++){
        char arm=ai?'L':'U';
        group_cfg g={bitsv[bi],arm,P2_COUNTER_COUNT,DEFAULT_WORK_UNIT,P2_COUNTER_BASES[bi][ai]};
        char cp[1024];snprintf(cp,sizeof(cp),"%s/cdm3p2_%d_%c.chk",checkpoint_dir,bitsv[bi],arm);
        group_result r;exception_stub e;int he=0;
        if(!run_group(g,threads,cp,0,pilot_wall_start,pilot_cpu_start,&r,&e,&he)){fclose(f);return 23;}
        print_group_json(f,&g,&r,!first);first=0;fflush(f);
        total_generated+=r.generated;total_exec+=r.executed;total_freeze+=r.freezes;total_u+=r.u_steps;total_short+=r.shortened_steps;total_basin+=r.basin_hits;total_pruned+=r.pruned;total_cache+=r.cache_hits;total_repeats+=r.repeats;total_escapes+=r.escapes;total_invariant+=r.invariant_failures;total_resource+=r.resource_stops;total_completed_worker_cpu+=r.work_cpu_sum;
        if(he){exc=e;have_exc=1;}
        if(r.complete_units<r.total_units&&!he){
            double cw=clock_s(CLOCK_MONOTONIC)-pilot_wall_start,cc=clock_s(CLOCK_PROCESS_CPUTIME_ID)-pilot_cpu_start;
            fprintf(f,"\n  ],\n  \"resource_ceiling_stop\":true,\n  \"summary\":{\"generated\":%"PRIu64",\"trajectories_executed\":%"PRIu64",\"pretrajectory_kills\":%"PRIu64",\"basin_hits\":%"PRIu64",\"cache_hits\":%"PRIu64",\"frozen_candidates\":%"PRIu64",\"repeats\":%"PRIu64",\"bigint_escapes\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"resource_stops\":%"PRIu64",\"u_steps_total\":%"PRIu64",\"shortened_step_equiv_total\":%"PRIu64",\"campaign_wall_seconds\":%.6f,\"campaign_process_cpu_seconds\":%.6f,\"completed_worker_cpu_seconds\":%.6f},\n  \"exceptional_candidate\":null\n}\n",total_generated,total_exec,total_pruned,total_basin,total_cache,total_freeze,total_repeats,total_escapes,total_invariant,total_resource,total_u,total_short,cw,cc,total_completed_worker_cpu);fclose(f);return 24;
        }
    }
    double campaign_wall=clock_s(CLOCK_MONOTONIC)-pilot_wall_start,campaign_cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-pilot_cpu_start;
    fprintf(f,"\n  ],\n  \"resource_ceiling_stop\":false,\n  \"summary\":{\"generated\":%"PRIu64",\"trajectories_executed\":%"PRIu64",\"pretrajectory_kills\":%"PRIu64",\"basin_hits\":%"PRIu64",\"cache_hits\":%"PRIu64",\"frozen_candidates\":%"PRIu64",\"repeats\":%"PRIu64",\"bigint_escapes\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"resource_stops\":%"PRIu64",\"u_steps_total\":%"PRIu64",\"shortened_step_equiv_total\":%"PRIu64",\"campaign_wall_seconds\":%.6f,\"campaign_process_cpu_seconds\":%.6f,\"completed_worker_cpu_seconds\":%.6f},\n  \"exceptional_candidate\":",total_generated,total_exec,total_pruned,total_basin,total_cache,total_freeze,total_repeats,total_escapes,total_invariant,total_resource,total_u,total_short,campaign_wall,campaign_cpu,total_completed_worker_cpu);
    if(have_exc)print_exception_json(f,&exc);else fprintf(f,"null");
    fprintf(f,"\n}\n");fclose(f);return have_exc?30:0;
}

static int probe(int bits,char arm,uint64_t counter,uint64_t max_steps){
    if((bits!=256&&bits!=512&&bits!=1024)||(arm!='U'&&arm!='L')||max_steps>MAX_U_STEPS)return 40;
    bigfix s;make_start(&s,bits,arm,counter);char start_hex[1100];bigfix_hex(&s,start_hex,sizeof(start_hex));
    bigfix n=s;uint64_t u=0,short_steps=0;int peak=bitlen(&n);disposition_t d=DISP_NONE;
    while(!below_2p71(&n)&&u<max_steps){
        if(!mul3add1_preserve(&n)){d=DISP_FREEZE_ESCAPE;break;}
        int ob=bitlen(&n)-1;if(ob>peak)peak=ob;
        unsigned v=ctz_big(&n);if(v==0){d=DISP_INVARIANT;break;}
        shr_bits(&n,v);u++;short_steps+=v;
    }
    if(below_2p71(&n))d=DISP_BASIN;
    char state_hex[1100];bigfix_hex(&n,state_hex,sizeof(state_hex));
    printf("{\"version\":\"%s\",\"generator_version\":\"%s\",\"bits\":%d,\"arm\":\"%c\",\"counter\":%"PRIu64",\"start_hex\":\"%s\",\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"peak_bits\":%d,\"state_hex\":\"%s\",\"disposition\":%d}\n",CDM_VERSION,GENERATOR_VERSION,bits,arm,counter,start_hex,u,short_steps,peak,state_hex,(int)d);
    return 0;
}

typedef struct {
    uint64_t starts,basin,escapes,repeats,invariants,u_steps,shortened_steps,max_u_steps,digest;
    int max_peak_bits;
} bench_agg;

static void bench_add(bench_agg *a,uint64_t counter,const bigfix *start,traj_result tr){
    a->starts++;if(tr.disposition==DISP_BASIN)a->basin++;if(tr.disposition==DISP_FREEZE_ESCAPE)a->escapes++;if(tr.disposition==DISP_FREEZE_REPEAT)a->repeats++;if(tr.disposition==DISP_INVARIANT)a->invariants++;
    a->u_steps+=tr.u_steps;a->shortened_steps+=tr.shortened_steps;if(tr.u_steps>a->max_u_steps)a->max_u_steps=tr.u_steps;if(tr.peak_bits>a->max_peak_bits)a->max_peak_bits=tr.peak_bits;
    a->digest=digest_combine(a->digest,candidate_digest(counter,start,tr));
}

static int bench(int nstarts,int passes){
    if(nstarts<1||nstarts>8192||passes<1||passes>5)return 41;
    int bitsv[]={256,512,1024};
    for(int pass=0;pass<passes;pass++)for(int bi=0;bi<3;bi++){
        int bits=bitsv[bi];bench_agg a={0};a.digest=mix64((uint64_t)bits^((uint64_t)pass<<32));
        double w0=clock_s(CLOCK_MONOTONIC),c0=clock_s(CLOCK_PROCESS_CPUTIME_ID);
        for(int i=0;i<nstarts;i++){bigfix st;make_start(&st,bits,'U',(uint64_t)i);traj_result tr=run_u_fixed(&st,bits);bench_add(&a,(uint64_t)i,&st,tr);}
        double wall=clock_s(CLOCK_MONOTONIC)-w0,cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-c0;
        printf("{\"record\":\"p2_integration\",\"version\":\"%s\",\"bits\":%d,\"pass\":%d,\"starts\":%"PRIu64",\"wall_seconds\":%.9f,\"cpu_seconds\":%.9f,\"u_steps_per_s\":%.6f,\"shortened_steps_per_s\":%.6f,\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"max_u_steps\":%"PRIu64",\"max_peak_bits\":%d,\"basin_hits\":%"PRIu64",\"overflow_escapes\":%"PRIu64",\"repeats\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"digest\":\"%016"PRIx64"\"}\n",CDM_VERSION,bits,pass,a.starts,wall,cpu,wall>0?(double)a.u_steps/wall:0.0,wall>0?(double)a.shortened_steps/wall:0.0,a.u_steps,a.shortened_steps,a.max_u_steps,a.max_peak_bits,a.basin,a.escapes,a.repeats,a.invariants,a.digest);
        fflush(stdout);
    }
    return 0;
}

static int dump_checkpoint(const char *path){
    int fd=open(path,O_RDONLY);if(fd<0){perror("open checkpoint");return 50;}
    checkpoint_header h={0};if(read(fd,&h,sizeof(h))!=(ssize_t)sizeof(h)){close(fd);return 51;}
    if(h.magic!=CHECKPOINT_MAGIC||h.version!=CHECKPOINT_VERSION||h.record_size!=sizeof(wu_record)){close(fd);return 52;}
    wu_record *rs=calloc((size_t)h.unit_count,sizeof(*rs));if(!rs){close(fd);return 53;}
    ssize_t want=(ssize_t)(h.unit_count*sizeof(*rs));if(read(fd,rs,(size_t)want)!=want){free(rs);close(fd);return 54;}close(fd);
    printf("{\"schema\":\"CDM3-P2-checkpoint-dump-v1\",\"path\":\"%s\",\"unit_count\":%"PRIu64",\"unit_size\":%"PRIu64",\"config_digest\":\"%016"PRIx64"\",\"generator_version\":\"%s\",\"records\":[",path,h.unit_count,h.unit_size,h.config_digest,h.generator_version);
    for(uint64_t i=0;i<h.unit_count;i++){
        wu_record *r=&rs[i];if(i)printf(",");
        printf("{\"index\":%"PRIu64",\"bits\":%u,\"arm\":\"%c\",\"counter_start\":%"PRIu64",\"counter_count\":%"PRIu64",\"generated\":%"PRIu64",\"pruned\":%"PRIu64",\"executed\":%"PRIu64",\"basin_hits\":%"PRIu64",\"cache_hits\":%"PRIu64",\"freezes\":%"PRIu64",\"repeats\":%"PRIu64",\"escapes\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"resource_stops\":%"PRIu64",\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"max_u_steps\":%"PRIu64",\"max_shortened_steps\":%"PRIu64",\"max_peak_bits\":%d,\"max_peak_excess\":%d,\"digest\":\"%016"PRIx64"\",\"wall_seconds\":%.9f,\"cpu_seconds\":%.9f,\"complete\":%s}",i,r->bits,r->arm,r->counter_start,r->counter_count,r->generated,r->pruned,r->executed,r->basin_hits,r->cache_hits,r->freezes,r->repeats,r->escapes,r->invariant_failures,r->resource_stops,r->u_steps,r->shortened_steps,r->max_u_steps,r->max_shortened_steps,r->max_peak_bits,r->max_peak_excess,r->digest,r->wall_seconds,r->cpu_seconds,r->complete?"true":"false");
    }
    printf("]}\n");free(rs);return 0;
}

static void usage(const char *p){
    fprintf(stderr,"usage: %s --selftest [checkpoint] | --probe BITS ARM COUNTER USTEPS | --bench STARTS PASSES | --pilot THREADS OUT.json CHECKPOINT_DIR REPO_COMMIT SOURCE_SHA256 EXE_SHA256 | --dump-checkpoint PATH | --provenance\n",p);
}

int main(int argc,char **argv){
    if(argc>=2&&strcmp(argv[1],"--selftest")==0){const char *cp=argc>=3?argv[2]:"/tmp/cdm3p2_preflight.chk";return selftest(cp);}
    if(argc==6&&strcmp(argv[1],"--probe")==0)return probe(atoi(argv[2]),argv[3][0],strtoull(argv[4],NULL,10),strtoull(argv[5],NULL,10));
    if(argc==4&&strcmp(argv[1],"--bench")==0)return bench(atoi(argv[2]),atoi(argv[3]));
    if(argc==8&&strcmp(argv[1],"--pilot")==0)return pilot(atoi(argv[2]),argv[3],argv[4],argv[5],argv[6],argv[7]);
    if(argc==3&&strcmp(argv[1],"--dump-checkpoint")==0)return dump_checkpoint(argv[2]);
    if(argc==2&&strcmp(argv[1],"--provenance")==0){printf("{\"version\":\"%s\",\"generator_version\":\"%s\",\"compiler\":\"%s\",\"gmp\":\"%s\",\"max_limbs\":%d,\"fast_path_bits\":%d,\"wall_limit\":%.0f,\"cpu_limit\":%.0f,\"max_total\":%"PRIu64"}\n",CDM_VERSION,GENERATOR_VERSION,__VERSION__,gmp_version,MAX_LIMBS,FAST_PATH_BITS,WALL_LIMIT_SECONDS,CPU_LIMIT_SECONDS,(uint64_t)MAX_GENERATED_TOTAL);return 0;}
    usage(argv[0]);return 2;
}
