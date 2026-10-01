# CDM3-P1 — Bounded Sparse High-Magnitude Pilot Report

**Date:** 2026-10-01  
**Claim status:** COMPUTATIONAL-EVIDENCE for the pilot results; FINITE-VERIFIED for implementation/preflight integrity.  
**Decision:** **P1-B — MACHINE VALIDATED; ENGINEERING BOTTLENECK FOUND.**  
**Counterexample found or claimed:** **NO.**

## Executive result

Every mandatory preflight gate passed before scientific population execution.

The frozen pilot then completed exactly:

- 30,000,000 generated starts;
- 5,000,000 Arm U + 5,000,000 Arm L at each of 256, 512 and 1024 bits;
- 6,665,220 exact Arm-L mod-9 pre-trajectory kills;
- 23,334,780 trajectories actually executed;
- 23,334,780 Tier-2 basin hits at `n<2^71`;
- 29,648,213,924 exact U-steps;
- 59,296,470,918 exact shortened-map-equivalent steps;
- 0 cache hits;
- 0 exceptional freezes;
- 0 repeated states;
- 0 bigint/4096-bit escapes;
- 0 invariant failures;
- 0 candidates transferred to structural analysis.

No finite pilot result is evidence of a counterexample. No unbounded orbit was found or claimed.

## Implementation

The production core is C11 with reusable 64-limb / 4096-bit fixed-capacity arithmetic and exact odd-only execution

`U(n)=(3n+1)/2^v2(3n+1)`.

The generator is deterministic, counter-based and domain-separated by bit band and arm. Arm U has no least-divergent-only first-descent rejection. Arm L applies only the approved exact mod-9 smaller-preimage kill.

Production source bundle SHA-256:

`e0e3d93821659aadbef80d5828afd2ea04285b608cafc70189f88f92cc56491f`

Production executable SHA-256:

`dd44ddc4d3006a48717117768ebbc60ae7ae0b50e64d119b87cbc0dff0ac9031`

Independent Python replay SHA-256:

`f17830c57a5b7143c84742c26f65b1564253b5dd75881c44545c3814ea833136`

## Preflight

All mandatory gates passed.

- Fixed-limb vs GMP: 49,152 exact transitions across every supported band/arm.
- Odd-only vs shortened map: 384 deterministic equivalence cases.
- Forced fast-path escape: production route froze correctly; GMP reconstructed an exact 4097-bit escaped state.
- Deterministic work-unit replay digest: `1810e26638535844`.
- Checkpoint/restart semantic digest: `6eeaea22aab07ff4`.
- Multi-thread determinism digest: `804cc931a8b255a9`.
- One-thread vs four-thread preflight speedup: 2.891x, or 72.3% four-thread efficiency.
- Release and ASan/UBSan builds both passed.
- Executable resource guards are equal to or stricter than the frozen repository ceilings.

See `experiments/CDM3_P1_PREFLIGHT_REPORT.md`.

## Pilot results by band and arm

| bits | arm | generated | exact kills | executed | basin hits | mean U | p99.9 U | max U | max peak excess | digest |
|---:|:---:|---:|---:|---:|---:|---:|---:|---:|---:|:---|
| 256 | U | 5,000,000 | 0 | 5,000,000 | 5,000,000 | 448.086 | 714 | 938 | +26 | `f779e027c3505f87` |
| 256 | L | 5,000,000 | 2,220,858 | 2,779,142 | 2,779,142 | 448.149 | 706 | 914 | +21 | `52ab06c4e0c4391c` |
| 512 | U | 5,000,000 | 0 | 5,000,000 | 5,000,000 | 1064.924 | 1444 | 1749 | +25 | `c255feb75ad4e0c2` |
| 512 | L | 5,000,000 | 2,223,547 | 2,776,453 | 2,776,453 | 1064.971 | 1445 | 1733 | +20 | `fbd8edf760827d62` |
| 1024 | U | 5,000,000 | 0 | 5,000,000 | 5,000,000 | 2298.568 | 2848 | 3237 | +24 | `646d8b3b75918bd5` |
| 1024 | L | 5,000,000 | 2,220,815 | 2,779,185 | 2,779,185 | 2298.519 | 2846 | 3234 | +25 | `e27e24f3d92f4228` |

The p99.9 figures come from deterministic `counter mod 97 == 0` replay samples over the complete frozen counter intervals. Arm-L sample starts killed by the exact mod-9 rule are counted separately and are not assigned trajectory costs.

## Survivor-cost question

No architecture-changing heavy trajectory tail appeared.

The maximum U-step counts were 938, 1749 and 3237 in the 256-, 512- and 1024-bit bands. Even the 1024-bit maximum is below 10% of the frozen 32,768-U-step exceptional threshold.

Maximum peak-bit excess over the start was only +26 bits anywhere in the full campaign, versus the frozen +512-bit exceptional trigger.

The sampled p99.9/median ratios also remained modest and decreased with magnitude:

- 256-bit Arm U: 714 / 444 = 1.61;
- 512-bit Arm U: 1444 / 1060 = 1.36;
- 1024-bit Arm U: 2848 / 2293 = 1.24.

Within this finite sample, the survivor-cost tail therefore remained computationally manageable. This does not establish any asymptotic tail law.

## Arm L compute effect

Arm L rejected 6,665,220 of 15,000,000 generated starts before trajectory execution: **44.4348%**.

The executed Arm-L trajectories had essentially the same trajectory-cost distribution as Arm U at the corresponding bit length. Therefore the exact binary rule saved trajectory work by reducing the population; it did not create evidence that Arm L predicts divergence.

## Checkpoint/recovery integrity

The execution environment imposed shorter per-call limits than the repository's 15-minute pilot ceiling. The candidate-affecting engine and generator were not changed.

The authoritative frozen population was completed by deterministic checkpoint/restart of the same 100,000-counter work units. All 300 work units completed. The six final checkpoint SHA-256 values and every work-unit digest are preserved in:

`experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`.

A prior interrupted replay of the 256-bit Arm-U group independently produced the same final digest `f779e027c3505f87`, providing an additional retry/replay consistency check.

The authoritative campaign's active execution wall time is conservatively bounded above by 407.6 seconds (6.80 minutes). Exact completed-work-unit CPU time is 1035.487 seconds (17.26 CPU-minutes). Even the deliberately conservative bound `8 * active-wall-upper-bound` is only 3260.8 CPU-seconds (54.35 CPU-minutes), below the frozen 120 CPU-minute ceiling.

## Comparison with CDM2-R3 economics

The R3 fixed-limb benchmark was compiled with `-O3 -march=native` and measured median one-core rates of approximately:

- 84.04 million U-steps/s at 256 bits;
- 80.15 million U-steps/s at 512 bits;
- 62.86 million U-steps/s at 1024 bits.

For the complete Arm-U P1 work units, U-steps per completed worker CPU-second were:

- 19.12 million at 256 bits — 22.8% of the R3 rate;
- 33.48 million at 512 bits — 41.8% of the R3 rate;
- 29.72 million at 1024 bits — 47.3% of the R3 rate.

The mean U-step counts themselves closely match R3, so this gap is not explained by a newly discovered heavy trajectory tail. It is an implementation/economics regression.

One visible source is the production safety path copying the full 4096-bit `bigfix` state on every U-step before `3n+1`, even when the current state is far below capacity. The production build also omitted R3's `-march=native`. These are engineering hypotheses, not yet isolated causal claims.

Because the throughput regression is material to larger-scale economics, P1 closes as **P1-B**, not P1-A.

## GPU decision

A GPU production engine is **not** justified yet.

The first engineering priority is to recover/understand CPU hot-path throughput while preserving exact overflow routing and deterministic digests. Only after that comparison should sparse-GPU economics be benchmarked.

## Frozen next step

Larger-scale CDM3 search is **NOT AUTHORIZED**.

Freeze the smallest decisive engineering benchmark:

1. identical deterministic 256/512/1024-bit start sets and identical result digests;
2. current P1 production build;
3. the same source with `-march=native`;
4. an overflow-safe `mul3add1` path that avoids copying all 64 limbs on every U-step while preserving exact escape/freeze semantics;
5. 1/2/4/8-thread scaling;
6. sanitizer and GMP/Python agreement retained;
7. no scientific population increase.

Only after that benchmark should the repository decide whether the next action is a CPU scale-up, further CPU engineering, or a sparse-GPU benchmark.

## Closeout

- all preflight gates passed: **YES**;
- implementation: C11, deterministic counter generator, fixed 64-limb odd-only CPU engine, checkpoint/restart, Python/GMP replay;
- frozen pilot population consumed: **30,000,000 generated starts exactly**;
- trajectories executed: **23,334,780**;
- total U-steps: **29,648,213,924**;
- shortened-step equivalents: **59,296,470,918**;
- Arm-L exact kills: **6,665,220**;
- basin hits: **23,334,780**;
- cache hits: **0**;
- exceptional freezes: **0**;
- bigint/overflow escapes: **0**;
- candidate entered structural analysis: **NO**;
- exceptional survivor found: **NO**;
- counterexample found or claimed: **NO**;
- P1 classification: **P1-B — MACHINE VALIDATED; ENGINEERING BOTTLENECK FOUND**;
- larger-scale CDM3 search authorized: **NO**;
- exact next step: bounded production-hot-path throughput benchmark described above.

The standard remains unchanged: only an explicit positive integer with a rigorously proved unbounded shortened-Collatz orbit that never reaches 1 satisfies the project objective.
