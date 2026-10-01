#define main cdm3_p1_embedded_main
#include "../production/cdm3_p1_engine.c"
#undef main

static inline int b1_mul3add1_preserve_test(bigfix *a){
    if(a->n<MAX_LIMBS) return mul3add1(a);
    bigfix pre=*a;
    if(!mul3add1(a)){ *a=pre; return 0; }
    return 1;
}

int main(void){
    bigfix s; memset(&s,0,sizeof(s)); s.n=MAX_LIMBS;
    for(int i=0;i<MAX_LIMBS;i++)s.w[i]=UINT64_MAX;
    bigfix before=s;
    if(b1_mul3add1_preserve_test(&s)){
        fprintf(stderr,"optimized overflow predictor failed to reject\n");
        return 1;
    }
    if(!eq(&s,&before)){
        fprintf(stderr,"optimized overflow predictor corrupted input\n");
        return 2;
    }

    bigfix threshold; memset(&threshold,0,sizeof(threshold)); threshold.n=MAX_LIMBS;
    threshold.w[0]=0x5555555555555554ULL;
    for(int i=1;i<MAX_LIMBS;i++)threshold.w[i]=0x5555555555555555ULL;
    bigfix safe=threshold;
    if(!b1_mul3add1_preserve_test(&safe)){
        fprintf(stderr,"exact safe threshold rejected\n");
        return 3;
    }

    bigfix over=threshold; over.w[0]++;
    bigfix over_before=over;
    if(b1_mul3add1_preserve_test(&over) || !eq(&over,&over_before)){
        fprintf(stderr,"threshold+1 escape semantics failed\n");
        return 4;
    }

    mpz_t z; mpz_init(z); fix_to_mpz(&before,z);
    mpz_mul_ui(z,z,3); mpz_add_ui(z,z,1);
    mp_bitcnt_t v=mpz_scan1(z,0); mpz_tdiv_q_2exp(z,z,v);
    size_t bits=mpz_sizeinbase(z,2); mpz_clear(z);
    if(bits<=FAST_PATH_BITS){
        fprintf(stderr,"forced overflow replay did not exceed fast path\n");
        return 5;
    }

    fprintf(stderr,"cdm3_b1_opt_escape preservation=PASS replay_bits=%zu\n",bits);
    return 0;
}
