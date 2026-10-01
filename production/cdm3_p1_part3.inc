static void print_exception_json(FILE *f,const exception_stub *e){
    char hex[1100];bigfix_hex(&e->start,hex,sizeof(hex));mpz_t z;mpz_init(z);fix_to_mpz(&e->start,z);char *dec=mpz_get_str(NULL,10,z);mpz_clear(z);
    fprintf(f,"{\"bit_length\":%u,\"arm\":\"%c\",\"counter\":%"PRIu64",\"start_hex\":\"%s\",\"start_decimal\":\"%s\",\"u_steps\":%"PRIu64",\"shortened_step_equiv\":%"PRIu64",\"peak_bits\":%d,\"disposition\":%d}",e->bits,e->arm,e->counter,hex,dec?dec:"",e->tr.u_steps,e->tr.shortened_steps,e->tr.peak_bits,(int)e->tr.disposition);free(dec);
}

static int pilot(int threads,uint64_t per_arm,const char *outpath,const char *checkpoint_dir,const char *repo_commit,const char *source_sha,const char *exe_sha){
    if(threads<1||threads>MAX_THREADS||per_arm>MAX_GENERATED_PER_ARM_BAND) return 20;
    if(per_arm*2>MAX_GENERATED_PER_BAND||per_arm*6>MAX_GENERATED_TOTAL) return 21;
    FILE *f=fopen(outpath,"w");if(!f)return 22;time_t now=time(NULL);char host[256]="";gethostname(host,sizeof(host));
    fprintf(f,"{\n  \"campaign_id\":\"CDM3-P1-20261001\",\n  \"version\":\"%s\",\n  \"generator_version\":\"%s\",\n  \"claim_status\":\"COMPUTATIONAL-EVIDENCE\",\n  \"counterexample_claimed\":false,\n  \"repo_commit\":\"%s\",\n  \"source_sha256\":\"%s\",\n  \"executable_sha256\":\"%s\",\n  \"compiler\":\"%s\",\n  \"gmp_version\":\"%s\",\n  \"host\":\"%s\",\n  \"threads\":%d,\n  \"start_time_epoch\":%lld,\n  \"limits\":{\"bits\":[256,512,1024],\"per_arm_per_band\":%"PRIu64",\"u_step_freeze\":%u,\"peak_excess_freeze_bits\":%d,\"fast_path_bits\":%d,\"wall_seconds_internal\":%.0f,\"cpu_seconds_internal\":%.0f,\"result_storage_mib_internal\":%llu},\n  \"groups\":[\n",CDM_VERSION,GENERATOR_VERSION,repo_commit?repo_commit:"",source_sha?source_sha:"",exe_sha?exe_sha:"",__VERSION__,gmp_version,host,threads,(long long)now,per_arm,MAX_U_STEPS,PEAK_EXCESS_BITS,FAST_PATH_BITS,WALL_LIMIT_SECONDS,CPU_LIMIT_SECONDS,(unsigned long long)(RESULT_STORAGE_LIMIT_BYTES/1024/1024));
    double pilot_wall_start=clock_s(CLOCK_MONOTONIC);
    double pilot_cpu_start=clock_s(CLOCK_PROCESS_CPUTIME_ID);
    int bitsv[]={256,512,1024};int first=1;uint64_t counter_base=0;uint64_t total_generated=0,total_exec=0,total_freeze=0,total_u=0,total_short=0,total_basin=0,total_pruned=0;double total_wall=0,total_cpu=0;exception_stub exc={0};int have_exc=0;
    for(int bi=0;bi<3&&!have_exc;bi++)for(int ai=0;ai<2&&!have_exc;ai++){
        char arm=ai?'L':'U';group_cfg g={bitsv[bi],arm,per_arm,DEFAULT_WORK_UNIT,counter_base};counter_base+=per_arm+1000003ULL;
        char cp[1024];snprintf(cp,sizeof(cp),"%s/cdm3p1_%d_%c.chk",checkpoint_dir,bitsv[bi],arm);group_result r;exception_stub e;int he=0;
        if(!run_group(g,threads,cp,0,pilot_wall_start,pilot_cpu_start,&r,&e,&he)){fclose(f);return 23;}print_group_json(f,&g,&r,!first);first=0;fflush(f);
        total_generated+=r.generated;total_exec+=r.executed;total_freeze+=r.freezes;total_u+=r.u_steps;total_short+=r.shortened_steps;total_basin+=r.basin_hits;total_pruned+=r.pruned;total_wall+=r.campaign_wall;total_cpu+=r.campaign_cpu;
        if(he){exc=e;have_exc=1;}
        if(r.complete_units<r.total_units&&!he){fprintf(f,"\n  ],\n  \"resource_ceiling_stop\":true,\n  \"summary\":{\"generated\":%"PRIu64",\"executed\":%"PRIu64",\"pruned\":%"PRIu64",\"basin_hits\":%"PRIu64",\"freezes\":%"PRIu64",\"u_steps\":%"PRIu64",\"shortened_step_equiv\":%"PRIu64",\"wall_seconds_sum\":%.6f,\"cpu_seconds_sum\":%.6f},\n  \"exceptional_candidate\":null\n}\n",total_generated,total_exec,total_pruned,total_basin,total_freeze,total_u,total_short,total_wall,total_cpu);fclose(f);return 24;}
    }
    fprintf(f,"\n  ],\n  \"resource_ceiling_stop\":false,\n  \"summary\":{\"generated\":%"PRIu64",\"executed\":%"PRIu64",\"pruned\":%"PRIu64",\"basin_hits\":%"PRIu64",\"freezes\":%"PRIu64",\"u_steps\":%"PRIu64",\"shortened_step_equiv\":%"PRIu64",\"wall_seconds_sum\":%.6f,\"cpu_seconds_sum\":%.6f},\n  \"exceptional_candidate\":",total_generated,total_exec,total_pruned,total_basin,total_freeze,total_u,total_short,total_wall,total_cpu);
    if(have_exc)print_exception_json(f,&exc);else fprintf(f,"null");fprintf(f,"\n}\n");fclose(f);return have_exc?30:0;
}


static int probe(int bits,char arm,uint64_t counter,uint64_t max_steps){
    if((bits!=256&&bits!=512&&bits!=1024)||(arm!='U'&&arm!='L')||max_steps>MAX_U_STEPS) return 40;
    bigfix s; make_start(&s,bits,arm,counter); char start_hex[1100]; bigfix_hex(&s,start_hex,sizeof(start_hex));
    bigfix n=s; uint64_t u=0,short_steps=0; int peak=bitlen(&n); disposition_t d=DISP_NONE;
    while(!below_2p71(&n) && u<max_steps){
        bigfix pre=n; if(!mul3add1(&n)){n=pre;d=DISP_FREEZE_ESCAPE;break;}
        int ob=bitlen(&n)-1; if(ob>peak) peak=ob; unsigned v=ctz_big(&n); if(v==0){d=DISP_INVARIANT;break;}
        shr_bits(&n,v);u++;short_steps+=v;
    }
    if(below_2p71(&n)) d=DISP_BASIN;
    char state_hex[1100]; bigfix_hex(&n,state_hex,sizeof(state_hex));
    printf("{\"version\":\"%s\",\"bits\":%d,\"arm\":\"%c\",\"counter\":%"PRIu64",\"start_hex\":\"%s\",\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"peak_bits\":%d,\"state_hex\":\"%s\",\"disposition\":%d}\n",CDM_VERSION,bits,arm,counter,start_hex,u,short_steps,peak,state_hex,(int)d);
    return 0;
}

static void usage(const char *p){fprintf(stderr,"usage: %s --selftest [checkpoint] | --probe BITS ARM COUNTER USTEPS | --pilot THREADS PER_ARM OUT.json CHECKPOINT_DIR REPO_COMMIT SOURCE_SHA256 EXE_SHA256\n",p);}
int main(int argc,char **argv){
    if(argc>=2&&strcmp(argv[1],"--selftest")==0){const char *cp=argc>=3?argv[2]:"/tmp/cdm3p1_preflight.chk";return selftest(cp);} 
    if(argc==6&&strcmp(argv[1],"--probe")==0){return probe(atoi(argv[2]),argv[3][0],strtoull(argv[4],NULL,10),strtoull(argv[5],NULL,10));}
    if(argc==9&&strcmp(argv[1],"--pilot")==0){int threads=atoi(argv[2]);uint64_t per_arm=strtoull(argv[3],NULL,10);return pilot(threads,per_arm,argv[4],argv[5],argv[6],argv[7],argv[8]);}
    usage(argv[0]);return 2;
}
