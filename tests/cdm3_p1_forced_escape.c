#define main cdm3_p1_embedded_main
#include "../production/cdm3_p1_engine.c"
#undef main

int main(void){
    bigfix start;
    memset(&start,0,sizeof(start));
    start.n=MAX_LIMBS;
    for(int i=0;i<MAX_LIMBS;i++) start.w[i]=UINT64_MAX;
    start.w[0]|=1ULL;

    traj_result r=run_u_fixed(&start,FAST_PATH_BITS);
    if(r.disposition!=DISP_FREEZE_ESCAPE || r.u_steps!=0 || r.shortened_steps!=0){
        fprintf(stderr,"production escape routing failed\n");
        return 1;
    }

    mpz_t z;
    mpz_init(z);
    fix_to_mpz(&start,z);
    mpz_mul_ui(z,z,3);
    mpz_add_ui(z,z,1);
    mp_bitcnt_t v=mpz_scan1(z,0);
    mpz_tdiv_q_2exp(z,z,v);
    size_t bits=mpz_sizeinbase(z,2);
    int ok=bits>FAST_PATH_BITS;
    fprintf(stderr,"production_escape_disposition=%d replay_bits=%zu %s\n",
            (int)r.disposition,bits,ok?"PASS":"FAIL");
    mpz_clear(z);
    return ok?0:1;
}
