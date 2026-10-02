
static uint64_t p2_counter_base(int bits,char arm){
    if(bits==256&&arm=='U') return 100000000ULL;
    if(bits==256&&arm=='L') return 112000003ULL;
    if(bits==512&&arm=='U') return 124000006ULL;
    if(bits==512&&arm=='L') return 136000009ULL;
    if(bits==1024&&arm=='U') return 148000012ULL;
    if(bits==1024&&arm=='L') return 160000015ULL;
    return UINT64_MAX;
}

static void print_exception_json(FILE *f,const exception_stub *e,uint64_t base){
    char hex[1100];bigfix_hex(&e->start,hex,sizeof(hex));mpz_t z;mpz_init(z);fix_to_mpz(&e->start,z);
    char *dec=mpz_get_str(NULL,10,z);mpz_clear(z);
    uint64_t wu=(e->counter>=base)?(e->counter-base)/DEFAULT_WORK_UNIT:UINT64_MAX;
    fprintf(f,"{\"bit_length\":%u,\"arm\":\"%c\",\"counter\":%"PRIu64",\"work_unit_id\":%"PRIu64",\"generator_version\":\"%s\",\"start_hex\":\"%s\",\"start_decimal\":\"%s\",\"u_steps\":%"PRIu64",\"shortened_step_equiv\":%"PRIu64",\"peak_bits\":%d,\"disposition\":%d}",
        e->bits,e->arm,e->counter,wu,GENERATOR_VERSION,hex,dec?dec:"",e->tr.u_steps,e->tr.shortened_steps,e->tr.peak_bits,(int)e->tr.disposition);
    free(dec);
}

static int p2_group(int bits,char arm,int threads,const char *checkpoint,int resume,const char *outpath,const char *repo_commit,const char *source_sha,const char *exe_sha){
    uint64_t base=p2_counter_base(bits,arm);
    if(base==UINT64_MAX||threads<1||threads>MAX_THREADS)return 20;
    group_cfg g={bits,arm,MAX_GENERATED_PER_ARM_BAND,DEFAULT_WORK_UNIT,base};
    group_result r;exception_stub e={0};int he=0;
    double w0=clock_s(CLOCK_MONOTONIC),c0=clock_s(CLOCK_PROCESS_CPUTIME_ID);
    if(!run_group(g,threads,checkpoint,resume,w0,c0,&r,&e,&he))return 23;
    FILE *f=fopen(outpath,"w");if(!f)return 22;time_t now=time(NULL);char host[256]="";gethostname(host,sizeof(host));
    fprintf(f,"{\n  \"campaign_id\":\"CDM3-P2-20261002\",\n  \"version\":\"%s\",\n  \"generator_version\":\"%s\",\n  \"claim_status\":\"COMPUTATIONAL-EVIDENCE\",\n  \"counterexample_claimed\":false,\n  \"repo_commit\":\"%s\",\n  \"source_sha256\":\"%s\",\n  \"executable_sha256\":\"%s\",\n  \"compiler\":\"%s\",\n  \"gmp_version\":\"%s\",\n  \"host\":\"%s\",\n  \"threads\":%d,\n  \"start_time_epoch\":%lld,\n  \"limits\":{\"group_generated\":%"PRIu64",\"u_step_freeze\":%u,\"peak_excess_freeze_bits\":%d,\"fast_path_bits\":%d,\"wall_seconds_internal\":%.0f,\"cpu_seconds_internal\":%.0f,\"result_storage_mib_internal\":%llu},\n  \"group\":\n",
        CDM_VERSION,GENERATOR_VERSION,repo_commit?repo_commit:"",source_sha?source_sha:"",exe_sha?exe_sha:"",__VERSION__,gmp_version,host,threads,(long long)now,
        (uint64_t)MAX_GENERATED_PER_ARM_BAND,MAX_U_STEPS,PEAK_EXCESS_BITS,FAST_PATH_BITS,WALL_LIMIT_SECONDS,CPU_LIMIT_SECONDS,(unsigned long long)(RESULT_STORAGE_LIMIT_BYTES/1024/1024));
    print_group_json(f,&g,&r,0);
    fprintf(f,",\n  \"resource_ceiling_stop\":%s,\n  \"exceptional_candidate\":",r.complete_units<r.total_units&&!he?"true":"false");
    if(he)print_exception_json(f,&e,base);else fprintf(f,"null");
    fprintf(f,"\n}\n");fclose(f);
    if(he)return 30;
    if(r.complete_units<r.total_units)return 24;
    return 0;
}

static int probe(int bits,char arm,uint64_t counter,uint64_t max_steps){
    if((bits!=256&&bits!=512&&bits!=1024)||(arm!='U'&&arm!='L')||max_steps>MAX_U_STEPS)return 40;
    bigfix s;make_start(&s,bits,arm,counter);char start_hex[1100];bigfix_hex(&s,start_hex,sizeof(start_hex));
    bigfix n=s;uint64_t u=0,short_steps=0;int peak=bitlen(&n);disposition_t d=DISP_NONE;
    while(!below_2p71(&n)&&u<max_steps){
        if(!(n.w[0]&1ULL)){d=DISP_INVARIANT;break;}
        if(!mul3add1_preserve(&n)){d=DISP_FREEZE_ESCAPE;break;}
        int ob=bitlen(&n)-1;if(ob>peak)peak=ob;
        if(ob>=bits+PEAK_EXCESS_BITS){d=DISP_FREEZE_PEAK;break;}
        unsigned v=ctz_big(&n);if(v==0){d=DISP_INVARIANT;break;}
        shr_bits(&n,v);u++;short_steps+=v;
    }
    if(below_2p71(&n))d=DISP_BASIN;
    char state_hex[1100];bigfix_hex(&n,state_hex,sizeof(state_hex));
    printf("{\"version\":\"%s\",\"generator_version\":\"%s\",\"bits\":%d,\"arm\":\"%c\",\"counter\":%"PRIu64",\"start_hex\":\"%s\",\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"peak_bits\":%d,\"state_hex\":\"%s\",\"disposition\":%d}\n",
        CDM_VERSION,GENERATOR_VERSION,bits,arm,counter,start_hex,u,short_steps,peak,state_hex,(int)d);
    return 0;
}

static int dump_checkpoint(const char *path){
    int fd=open(path,O_RDONLY);if(fd<0)return 50;
    checkpoint_header hdr={0};if(pread(fd,&hdr,sizeof(hdr),0)!=(ssize_t)sizeof(hdr)){close(fd);return 51;}
    if(hdr.magic!=CHECKPOINT_MAGIC||hdr.version!=CHECKPOINT_VERSION||hdr.record_size!=sizeof(wu_record)){close(fd);return 52;}
    wu_record *recs=calloc(hdr.unit_count,sizeof(*recs));if(!recs){close(fd);return 53;}
    ssize_t want=(ssize_t)(hdr.unit_count*sizeof(wu_record));
    if(pread(fd,recs,want,sizeof(hdr))!=want){free(recs);close(fd);return 54;}
    close(fd);
    printf("{\"schema\":\"CDM3-P2-work-unit-dump-v1\",\"unit_count\":%"PRIu64",\"unit_size\":%"PRIu64",\"config_digest\":\"%016"PRIx64"\",\"generator_version\":\"%s\",\"records\":[",
        hdr.unit_count,hdr.unit_size,hdr.config_digest,hdr.generator_version);
    for(uint64_t i=0;i<hdr.unit_count;i++){
        wu_record *r=&recs[i];if(i)printf(",");
        printf("{\"index\":%"PRIu64",\"bits\":%u,\"arm\":\"%c\",\"counter_start\":%"PRIu64",\"counter_count\":%"PRIu64",\"generated\":%"PRIu64",\"pruned\":%"PRIu64",\"executed\":%"PRIu64",\"basin_hits\":%"PRIu64",\"cache_hits\":%"PRIu64",\"freezes\":%"PRIu64",\"repeats\":%"PRIu64",\"escapes\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"resource_stops\":%"PRIu64",\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"max_u_steps\":%"PRIu64",\"max_shortened_steps\":%"PRIu64",\"max_peak_bits\":%d,\"max_peak_excess\":%d,\"digest\":\"%016"PRIx64"\",\"wall_seconds\":%.9f,\"cpu_seconds\":%.9f,\"complete\":%s}",
            i,r->bits,r->arm,r->counter_start,r->counter_count,r->generated,r->pruned,r->executed,r->basin_hits,r->cache_hits,r->freezes,r->repeats,r->escapes,r->invariant_failures,r->resource_stops,r->u_steps,r->shortened_steps,r->max_u_steps,r->max_shortened_steps,r->max_peak_bits,r->max_peak_excess,r->digest,r->wall_seconds,r->cpu_seconds,r->complete?"true":"false");
    }
    printf("]}\n");free(recs);return 0;
}

static void provenance(void){
    printf("{\"version\":\"%s\",\"generator_version\":\"%s\",\"compiler\":\"%s\",\"gmp\":\"%s\",\"max_limbs\":%d,\"fast_path_bits\":%d,\"max_threads\":%d,\"group_cpu_limit_seconds\":%.0f,\"wall_limit_seconds\":%.0f,\"generated_total_ceiling\":%"PRIu64"}\n",
        CDM_VERSION,GENERATOR_VERSION,__VERSION__,gmp_version,MAX_LIMBS,FAST_PATH_BITS,MAX_THREADS,CPU_LIMIT_SECONDS,WALL_LIMIT_SECONDS,(uint64_t)MAX_GENERATED_TOTAL);
}

static void usage(const char *p){
    fprintf(stderr,"usage: %s --selftest [checkpoint] | --probe BITS ARM COUNTER USTEPS | --group BITS ARM THREADS CHECKPOINT RESUME OUT.json REPO_COMMIT SOURCE_SHA256 EXE_SHA256 | --dump-checkpoint PATH | --provenance\n",p);
}
int main(int argc,char **argv){
    if(argc>=2&&strcmp(argv[1],"--selftest")==0){const char *cp=argc>=3?argv[2]:"/tmp/cdm3p2_preflight.chk";return selftest(cp);}
    if(argc==6&&strcmp(argv[1],"--probe")==0)return probe(atoi(argv[2]),argv[3][0],strtoull(argv[4],NULL,10),strtoull(argv[5],NULL,10));
    if(argc==11&&strcmp(argv[1],"--group")==0)return p2_group(atoi(argv[2]),argv[3][0],atoi(argv[4]),argv[5],atoi(argv[6]),argv[7],argv[8],argv[9],argv[10]);
    if(argc==3&&strcmp(argv[1],"--dump-checkpoint")==0)return dump_checkpoint(argv[2]);
    if(argc==2&&strcmp(argv[1],"--provenance")==0){provenance();return 0;}
    usage(argv[0]);return 2;
}
