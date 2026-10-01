# CDM3-B1 Hot-Path Engineering Note

**Status:** FINITE-VERIFIED engineering design selected by CDM3-B1.

## Problem

The frozen CDM3-P1 production loop copied the complete 64-limb / 4096-bit `bigfix` state before every `3n+1` so a fixed-capacity overflow could restore the exact pre-step state before freezing/routing the candidate.

That guarantee is correct but unnecessarily expensive for ordinary 256/512/1024-bit states.

## Selected exact kernel

For a normalized `bigfix` with `n < MAX_LIMBS`, `3n+1` cannot overflow the 4096-bit container. The production-credible hot path is therefore:

```c
if (a->n < MAX_LIMBS)
    return mul3add1(a);

bigfix pre = *a;
if (!mul3add1(a)) {
    *a = pre;
    return 0;
}
return 1;
```

The full recovery copy is taken only when the input already occupies all 64 limbs. That is the only case in which the multiply can leave the fixed-capacity representation.

This is an optimization of recovery placement, not a weakening of the safety rule.

## Rejected implementation

A pre-mutation overflow predictor comparing a full 4096-bit state to `floor((2^4096-2)/3)` was exact but slower in the benchmark. Its full-width comparison logic enlarged/polluted the hot path enough to lose performance. It is not the selected production design.

## Required production semantics

Any P2 or later integration must retain:

- exact odd-only arithmetic;
- original-state preservation on fixed-capacity overflow;
- exact `DISP_FREEZE_ESCAPE` routing;
- no truncation or wrap;
- exact shortened-step accounting;
- exact peak/disposition rules;
- deterministic result digests;
- forced-overflow GMP reconstruction;
- sanitizer and Python/GMP replay gates.

## Compiler requirement

The production build must use `-O3 -march=native` or an explicitly documented equivalent target configuration on the execution host. CDM3-B1 measured native compilation as material at every supported bit length.

## Measured result

The selected kernel reached 67.478M, 66.241M and 51.339M U-steps/s at 256, 512 and 1024 bits in the final side-by-side session, corresponding to 102.35%, 101.39% and 99.70% of the local R3 reference.

See `experiments/CDM3_B1_REPORT.md` and `experiments/CDM3_B1_RESULT.json`.
