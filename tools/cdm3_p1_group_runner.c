#define main cdm3_p1_embedded_main
#include "../production/cdm3_p1_engine.c"
#undef main

static int group_mode(int argc,char **argv){
    if(argc!=10) return 2;
    int bits=atoi(argv[2]); char arm=argv[3][0];
    uint64_t base=strtoull(argv[4],NULL,10), count=strtoull(argv[5],NULL,10);
    int threads=atoi(argv[6]); const char *checkpoint=argv[7]; int resume=atoi(argv[8]); const char *out=argv[9];
    if((bits!=256&&bits!=512&&bits!=1024)||(arm!='U'&&arm!='L')||threads<1||threads>MAX_THREADS||count>MAX_GENERATED_PER_ARM_BAND)return 3;
    group_cfg g={bits,arm,count,DEFAULT_WORK_UNIT,base}; group_result r; exception_stub e; int he=0;
    double w0=clock_s(CLOCK_MONOTONIC), c0=clock_s(CLOCK_PROCESS_CPUTIME_ID);
    if(!run_group(g,threads,checkpoint,resume,w0,c0,&r,&e,&he)) return 4;
    FILE *f=fopen(out,"w"); if(!f)return 5;
    fprintf(f,"{\n  \"runner_version\":\"CDM3-P1-group-runner-v1\",\n  \"engine_version\":\"%s\",\n  \"generator_version\":\"%s\",\n  \"resume\":%s,\n  \"group\":",CDM_VERSION,GENERATOR_VERSION,resume?"true":"false");
    print_group_json(f,&g,&r,0);
    fprintf(f,",\n  \"exceptional_candidate\":"); if(he)print_exception_json(f,&e); else fprintf(f,"null"); fprintf(f,"\n}\n"); fclose(f);
    return he?30:0;
}

static int sample_mode(int argc,char **argv){
    if(argc!=8)return 2;
    int bits=atoi(argv[2]); char arm=argv[3][0]; uint64_t base=strtoull(argv[4],NULL,10),count=strtoull(argv[5],NULL,10); const char *out=argv[6]; uint64_t mod=strtoull(argv[7],NULL,10);
    if(!mod)return 3;
    size_t cap=(size_t)(count/mod+1024); uint32_t *a=malloc(cap*sizeof(uint32_t)); if(!a)return 4; size_t n=0; uint64_t executed=0,pruned=0;
    for(uint64_t j=0;j<count;j++){
        uint64_t counter=base+j; if(counter%mod)continue; bigfix s;make_start(&s,bits,arm,counter); if(arm=='L'&&arm_l_kill(&s)){pruned++;continue;} traj_result tr=run_u_fixed(&s,bits); if(tr.disposition!=DISP_BASIN){free(a);return 30;} executed++; if(n<cap)a[n++]=(uint32_t)tr.u_steps;
    }
    uint32_t q50=quantile_sample(a,n,.5),q90=quantile_sample(a,n,.9),q99=quantile_sample(a,n,.99),q999=quantile_sample(a,n,.999); FILE *f=fopen(out,"w");if(!f){free(a);return 5;}
    fprintf(f,"{\"bits\":%d,\"arm\":\"%c\",\"counter_base\":%"PRIu64",\"count\":%"PRIu64",\"sample_mod\":%"PRIu64",\"sample_executed\":%"PRIu64",\"sample_pruned\":%"PRIu64",\"p50\":%u,\"p90\":%u,\"p99\":%u,\"p99_9\":%u}\n",bits,arm,base,count,mod,executed,pruned,q50,q90,q99,q999); fclose(f);free(a);return 0;
}

int main(int argc,char **argv){
    if(argc>1&&strcmp(argv[1],"--group")==0)return group_mode(argc,argv);
    if(argc>1&&strcmp(argv[1],"--sample")==0)return sample_mode(argc,argv);
    fprintf(stderr,"usage: --group BITS ARM BASE COUNT THREADS CHECKPOINT RESUME OUT | --sample BITS ARM BASE COUNT OUT MOD\n");return 2;
}
