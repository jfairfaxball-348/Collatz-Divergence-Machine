# CDM3-P2 Production Engineering

**Status:** frozen implementation design; scientific execution is conditional on the complete P2 preflight.

## Separation from P1

CDM3-P2 is a separately versioned source bundle under `production/cdm3_p2_*`. The historical `production/cdm3_p1_*` files are read-only inputs to provenance and the same-host B1 comparison. P2 retains `CDM3-P1-gen-v1` and the exact P1 counter-based generator algorithm/domain constant so a given bit-band, arm and counter denotes the same start as in P1.

## Selected B1 kernel

The production U-step uses the B1-A rare-path recovery design:

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

States occupying fewer than 64 limbs take the destructive fixed-limb fast path directly. Only an already-full 64-limb state is copied before mutation. A failed full-width multiply restores the exact pre-step state and routes to the unchanged escape/freeze disposition. No full-width overflow predictor is used.

The release build is `-O3 -march=native -std=c11 -Wall -Wextra -Werror -pthread`.

## Frozen scientific counters

Each interval is half-open and has exactly 10,000,000 counters:

| bits | arm | interval |
|---:|:---:|---|
| 256 | U | [100000000, 110000000) |
| 256 | L | [112000003, 122000003) |
| 512 | U | [124000006, 134000006) |
| 512 | L | [136000009, 146000009) |
| 1024 | U | [148000012, 158000012) |
| 1024 | L | [160000015, 170000015) |

The C self-test checks these against the frozen P1 ranges. The authoritative preflight additionally reads `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json` and derives the P1 intervals programmatically. Any collision is fatal.

Generated transition/replay probes use validation-only counters below 100,000,000 and outside the P1 scientific intervals. No frozen P2 start is executed during preflight.

## Scientific semantics

P2 preserves P1 semantics:

- exact odd-only `U(n)=(3n+1)/2^v2(3n+1)`;
- exact shortened-step-equivalent accounting;
- Tier-2 ordinary stop only at `n < 2^71`;
- Arm U has no least-divergent first-descent shortcut;
- Arm L uses only the approved exact mod-9 smaller-preimage kill;
- Brent repeat detection is defensive only;
- exceptional freeze at 32,768 U-steps, +512 peak bits, fixed-path escape, repeat, invariant failure, or resource pressure;
- deterministic 100,000-counter work units, digests and checkpoints.

A freeze is a discovery event, not a divergence claim.

## Executable guards

The committed P2 limits tighten or equal the repository envelope:

- at most 8 workers;
- internal campaign wall guard: 890 s (repository ceiling 900 s);
- internal campaign process-CPU guard: 3,500 s (repository ceiling 3,600 s);
- fixed path: 4,096 bits;
- exactly 60,000,000 generated starts if fully completed;
- result-storage guard: 290 MiB (repository ceiling 300 MiB);
- no GPU path.

## Preflight

The workflow must pass, before campaign invocation:

1. fixed-limb/GMP transition tests at 256/512/1024 bits;
2. optimized-kernel/GMP transition tests;
3. forced 4096-bit escape with byte-exact pre-state preservation and independent GMP reconstruction;
4. odd-only/shortened-map equivalence;
5. independent Python replay;
6. ASan/UBSan;
7. deterministic work-unit replay;
8. checkpoint/restart equality;
9. one-thread/multi-thread equality;
10. manifest-derived P1/P2 counter non-overlap;
11. P1 source immutability hashes;
12. executable-budget guards;
13. same-host B1/P2 production integration timing.

For the integration gate, P2 and the B1 optimized path execute identical 4,096-start Arm-U workloads for three passes in each band. Exact workload/result digests must match pass-by-pass. P2 median U-steps/s must be at least 90% of the same-host B1 optimized median in every band. The 90% threshold is an engineering regression detector, not a scientific or mathematical criterion; the original P1 regression was far larger.

## Exceptional replay

`tools/cdm3_p2_replay.py` independently reconstructs generator starts and Python-integer trajectories. If the campaign result contains an exceptional candidate, its freeze replay records exact checkpoints, valuation counts, freeze reason and (for fixed-path escape) the exact arbitrary-precision escaped next odd state.
