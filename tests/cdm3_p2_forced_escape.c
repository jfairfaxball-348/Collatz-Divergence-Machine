#define main cdm3_p2_embedded_main
#include "../production/cdm3_p2_engine.c"
#undef main

int main(void){
    bigfix s;memset(&s,0,sizeof(s));s.n=MAX_LIMBS;
    for(int i=0;i<MAX_LIMBS;i++)s.w[i]=UINT64_MAX;
    bigfix before=s;
    if(mul3add1_preserve(&s)){fprintf(stderr,"P2 escape test: overflow accepted\n");return 1;}
    if(!eq(&s,&before)){fprintf(stderr,"P2 escape test: original state corrupted\n");return 2;}
    traj_result tr=run_u_fixed(&before,FAST_PATH_BITS);
    if(tr.disposition!=DISP_FREEZE_ESCAPE||tr.u_steps!=0||tr.shortened_steps!=0){fprintf(stderr,"P2 escape test: wrong production disposition\n");return 3;}
    bigfix threshold;memset(&threshold,0,sizeof(threshold));threshold.n=MAX_LIMBS;
    threshold.w[0]=0x5555555555555554ULL;for(int i=1;i<MAX_LIMBS;i++)threshold.w[i]=0x5555555555555555ULL;
    bigfix safe=threshold;if(!mul3add1_preserve(&safe)){fprintf(stderr,"P2 escape test: safe threshold rejected\n");return 4;}
    bigfix over=threshold;over.w[0]++;bigfix over_before=over;
    if(mul3add1_preserve(&over)||!eq(&over,&over_before)){fprintf(stderr,"P2 escape test: threshold+1 preservation failed\n");return 5;}
    mpz_t z;mpz_init(z);fix_to_mpz(&before,z);mpz_mul_ui(z,z,3);mpz_add_ui(z,z,1);
    mp_bitcnt_t v=mpz_scan1(z,0);mpz_tdiv_q_2exp(z,z,v);size_t bits=mpz_sizeinbase(z,2);mpz_clear(z);
    if(bits<=FAST_PATH_BITS){fprintf(stderr,"P2 escape test: GMP replay did not escape\n");return 6;}
    fprintf(stderr,"CDM3_P2_FORCED_ESCAPE preservation=PASS disposition=%d replay_bits=%zu\n",(int)tr.disposition,bits);
    return 0;
}
