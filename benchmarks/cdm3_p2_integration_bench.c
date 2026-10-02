#define main cdm3_p2_embedded_main
#include "../production/cdm3_p2_engine.c"
#undef main

typedef struct {
    uint64_t starts,basin,escapes,repeats,invariants,u_steps,shortened_steps,max_u_steps,digest;
    int max_peak_bits;
} p2_bench_agg;

static void add_result(p2_bench_agg *a,uint64_t counter,const bigfix *s,traj_result tr){
    a->starts++;
    if(tr.disposition==DISP_BASIN)a->basin++;
    if(tr.disposition==DISP_FREEZE_ESCAPE)a->escapes++;
    if(tr.disposition==DISP_FREEZE_REPEAT)a->repeats++;
    if(tr.disposition==DISP_INVARIANT)a->invariants++;
    a->u_steps+=tr.u_steps;a->shortened_steps+=tr.shortened_steps;
    if(tr.u_steps>a->max_u_steps)a->max_u_steps=tr.u_steps;
    if(tr.peak_bits>a->max_peak_bits)a->max_peak_bits=tr.peak_bits;
    a->digest=digest_combine(a->digest,candidate_digest(counter,s,tr));
}
int main(int argc,char **argv){
    if(argc!=3){fprintf(stderr,"usage: %s STARTS PASSES\n",argv[0]);return 2;}
    int nstarts=atoi(argv[1]),passes=atoi(argv[2]);if(nstarts<1||nstarts>8192||passes<1||passes>5)return 2;
    int bitsv[]={256,512,1024};
    for(int pass=0;pass<passes;pass++)for(int bi=0;bi<3;bi++){
        int bits=bitsv[bi];p2_bench_agg a={0};a.digest=mix64((uint64_t)bits^((uint64_t)pass<<32));
        double w0=clock_s(CLOCK_MONOTONIC),c0=clock_s(CLOCK_PROCESS_CPUTIME_ID);
        for(int i=0;i<nstarts;i++){bigfix s;make_start(&s,bits,'U',(uint64_t)i);traj_result tr=run_u_fixed(&s,bits);add_result(&a,(uint64_t)i,&s,tr);}
        double wall=clock_s(CLOCK_MONOTONIC)-w0,cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-c0;
        printf("{\"record\":\"p2_integration\",\"version\":\"CDM3-P2-integration-bench-v1\",\"bits\":%d,\"pass\":%d,\"starts\":%"PRIu64",\"wall_seconds\":%.9f,\"cpu_seconds\":%.9f,\"starts_per_s\":%.6f,\"u_steps_per_s\":%.6f,\"shortened_steps_per_s\":%.6f,\"u_steps\":%"PRIu64",\"shortened_steps\":%"PRIu64",\"mean_u_steps\":%.9f,\"max_u_steps\":%"PRIu64",\"max_peak_bits\":%d,\"basin_hits\":%"PRIu64",\"overflow_escapes\":%"PRIu64",\"repeats\":%"PRIu64",\"invariant_failures\":%"PRIu64",\"digest\":\"%016"PRIx64"\"}\n",
            bits,pass,a.starts,wall,cpu,(double)a.starts/wall,(double)a.u_steps/wall,(double)a.shortened_steps/wall,a.u_steps,a.shortened_steps,(double)a.u_steps/(double)a.starts,a.max_u_steps,a.max_peak_bits,a.basin,a.escapes,a.repeats,a.invariants,a.digest);
    }
    return 0;
}
