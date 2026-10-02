#define main cdm3_p2_embedded_main
#include "../production/cdm3_p2_engine.c"
#undef main
int main(void){
    bigfix s;memset(&s,0,sizeof(s));s.n=MAX_LIMBS;for(int i=0;i<MAX_LIMBS;i++)s.w[i]=UINT64_MAX;s.w[0]|=1ULL;
    bigfix before=s,t=s;if(mul3add1_preserve(&t)){fprintf(stderr,"overflow not detected\n");return 1;}
    if(!eq(&t,&before)){fprintf(stderr,"pre-step state not restored\n");return 2;}
    traj_result tr=run_u_fixed(&s,FAST_PATH_BITS);
    if(tr.disposition!=DISP_FREEZE_ESCAPE||tr.u_steps!=0||tr.shortened_steps!=0){fprintf(stderr,"escape disposition mismatch\n");return 3;}
    mpz_t z;mpz_init(z);fix_to_mpz(&before,z);mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);
    mp_bitcnt_t v=mpz_scan1(z,0);mpz_tdiv_q_2exp(z,z,v);size_t bits=mpz_sizeinbase(z,2);mpz_clear(z);
    if(bits<=FAST_PATH_BITS){fprintf(stderr,"GMP escaped state did not exceed 4096 bits\n");return 4;}
    fprintf(stderr,"cdm3_p2_opt_escape preservation=PASS disposition=%d replay_bits=%zu\n",(int)tr.disposition,bits);return 0;
}
