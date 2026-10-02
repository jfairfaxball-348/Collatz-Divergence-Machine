# CDM3-P2 Frozen 60-Million-Start CPU Campaign Report

**Date:** 2026-10-02  
**Status:** COMPLETE — exact frozen population exhausted.  
**Classification:** **P2-ORDINARY-NULL**.  
**Claim status:** campaign accounting is FINITE-VERIFIED; scientific interpretation is COMPUTATIONAL-EVIDENCE.  
**Counterexample found or claimed:** NO.  
**Structural/certification promotion:** NONE.

## Executive result

The exact frozen CDM3-P2 population was exhausted without an exceptional freeze.

Exactly **60,000,000** generated starts were consumed across the six predeclared, pairwise-disjoint counter intervals. Arm L pruned **13,330,798** starts before trajectory execution. The engine then executed **46,669,202** exact odd-only trajectories, and every one of those trajectories reached the Tier-2 discovery basin `n < 2^71`.

There were:

- 0 cache hits;
- 0 exceptional freezes;
- 0 repeated states;
- 0 4096-bit / bigint escapes;
- 0 invariant failures;
- 0 campaign resource stops.

No candidate therefore entered structural/certification analysis and no exceptional-object replay was required.

This is a bounded computational null result. It is not evidence that the Collatz conjecture is true and is not a proof that any untested orbit converges.

## Execution provenance

The authoritative scientific engine remained **CDM3-P2-v1** and the generator remained **CDM3-P1-gen-v1**.

The authoritative integration parent on `main` was:

`c98154f858e30902b51127a61ba0424c4738454c`

The connected GitHub interface available in the execution session exposed workflow inspection/retry but not manual `workflow_dispatch`. To execute the already-frozen workflow without changing any scientific semantics, an execution-only branch `cdm3-p2-exec-20261002` was created from that exact main commit. Its sole delta added a branch-scoped `push` trigger to `.github/workflows/cdm3_p2.yml`. No production source, generator, counters, work-unit logic, resource guard, exception trigger, preflight gate, or aggregation logic changed.

Execution trigger commit:

`e0e0da447f4b708f719c5bda6b7c528adf356bd3`

Authoritative campaign workflow:

- run: `36984984470`;
- preflight job: `110767847299`, PASS;
- aggregate job: `110770234382`, PASS;
- campaign artifact: `11217427170`;
- artifact archive digest: `sha256:c70a5c009e019124ac86caf3edd14fcf97f3999287128490094e81f8441b34be`.

Raw aggregate result SHA-256:

`59f2ec5e6f9d60910116a453d290b3045c3c8a5f3201944bfb1d61038bc67da4`

Raw full work-unit-manifest SHA-256:

`8d244a0b1319a4e02c5a3fb8a111886411438e58ea3490905b672a85b08e9476`

Committed compact digest manifest `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json` retains every one of the 600 work-unit digests, all six checkpoint hashes, the six config digests, counter bases and unit geometry, and anchors them to the raw workflow artifact.

## Frozen population accounting

| Band | Arm | Counter interval | Generated | Pretrajectory pruned | Exact trajectories | Tier-2 basin hits |
|---:|:---:|:---|---:|---:|---:|---:|
| 256 | U | [100,000,000, 110,000,000) | 10,000,000 | 0 | 10,000,000 | 10,000,000 |
| 256 | L | [112,000,003, 122,000,003) | 10,000,000 | 4,441,655 | 5,558,345 | 5,558,345 |
| 512 | U | [124,000,006, 134,000,006) | 10,000,000 | 0 | 10,000,000 | 10,000,000 |
| 512 | L | [136,000,009, 146,000,009) | 10,000,000 | 4,445,381 | 5,554,619 | 5,554,619 |
| 1024 | U | [148,000,012, 158,000,012) | 10,000,000 | 0 | 10,000,000 | 10,000,000 |
| 1024 | L | [160,000,015, 170,000,015) | 10,000,000 | 4,443,762 | 5,556,238 | 5,556,238 |
| **Total** |  |  | **60,000,000** | **13,330,798** | **46,669,202** | **46,669,202** |

All 600 planned 100,000-counter work units completed. There were no interrupted partial records in the authoritative population.

## Exact trajectory cost

Totals:

- exact U-steps: **59,293,075,669**;
- shortened-step-equivalent count: **118,586,359,433**;
- mean U-steps per executed trajectory: **1,270.496882912204**;
- mean U-steps per generated start, including Arm-L pretrajectory kills: **988.217927816667**.

Per band and arm:

| Band | Arm | Mean U | p50 | p90 | p99 | p99.9 | Max U | Max shortened | Max peak bits | Max peak excess |
|---:|:---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| 256 | U | 448.109 | 444 | 544 | 638 | 711 | 963 | 1,713 | 280 | +24 |
| 256 | L | 448.093 | 444 | 543 | 634 | 706 | 945 | 1,683 | 282 | +26 |
| 512 | U | 1,064.900 | 1,060 | 1,209 | 1,344 | 1,447 | 1,795 | 3,286 | 535 | +23 |
| 512 | L | 1,064.967 | 1,060 | 1,211 | 1,346 | 1,450 | 1,833 | 3,351 | 537 | +25 |
| 1024 | U | 2,298.528 | 2,295 | 2,510 | 2,700 | 2,851 | 3,232 | 6,079 | 1,053 | +29 |
| 1024 | L | 2,298.600 | 2,293 | 2,512 | 2,701 | 2,846 | 3,357 | 6,273 | 1,048 | +24 |

The global maxima were **3,357 U-steps**, **6,273 shortened steps**, **1,053 peak bits**, and **+29 peak bits above the start band**. These remained far below the frozen exceptional thresholds of 32,768 U-steps and +512 peak bits.

The quantiles above are deterministic modulo-97 survivor-tail samples recorded by the frozen engine. Their sample sizes are preserved in `experiments/CDM3_P2_RESULT.json`.

## Survivor-cost tail relative to P1

P2 reproduces the P1 cost profile closely.

Mean U-step differences P2 minus P1 by band/arm were:

- 256-L: -0.056;
- 256-U: +0.023;
- 512-L: -0.005;
- 512-U: -0.024;
- 1024-L: +0.081;
- 1024-U: -0.041.

The p50/p90/p99/p99.9 shifts were only a few U-steps in every cell. This is consistent with the P1 observation that trajectory-cost geometry is stable across the same generator semantics and bit bands.

Because P2 doubles the sampled population, some finite maxima moved upward. The clearest example is 1024-L: max U rose from 3,234 in P1 to 3,357 in P2 and max shortened steps from 6,082 to 6,273. The largest P2 peak was 1,053 bits / +29, still nowhere near an exceptional trigger. These are ordinary extreme-value changes in a larger finite sample, not evidence of divergence.

## Resource accounting

Frozen ceilings were respected.

- maximum concurrent worker threads: **6** <= 8;
- active scientific wall: **437.370285 s** = 7.2895 min <= 15 min;
- summed process CPU: **1,081.483885 s** = 18.0247 CPU-min <= 60 CPU-min;
- summed per-group maximum RSS observations: **15,468 KiB**; every group was individually far below 1 GiB;
- committed closeout files are far below the 300 MiB result-storage ceiling;
- GPU execution: **none**.

The campaign ran on GitHub-hosted x86_64 runners with GCC 13.3.0 and GMP 6.3.0. Because the required production build uses `-march=native`, executable hashes vary with runner CPU while the source bundle is invariant.

Scientific source-bundle SHA-256:

`8d8f85f179cf4f122e097a747e7bf3d1ff0a65151af75242ee5c2e8c08b29d80`

Observed production executable SHA-256 values:

- `0f2fa3bf341ed83d13c45aa976dd19664906375c064c15ba95a4709341e8af33`;
- `cb2aaac1ff772e69ab06568f18ba38ca69e0adbdd8df4342467190c920a4c298`;
- `bb878e63521c3787f2bfbc62eaaea4231e5078dfbd67a1fd8527f1afdd2b5455`.

Full host-to-group mapping is preserved in `experiments/CDM3_P2_RESULT.json`.

## Checkpoint integrity

Checkpoint SHA-256:

| Band | Arm | Checkpoint SHA-256 |
|---:|:---:|:---|
| 256 | U | `1aaf50027ae39201a9359adccd2a4bbc19731023c02b1507ee237c603429e8f5` |
| 256 | L | `f8bc798b713a88746d632ce33b9ea1ea810c9df910351eb2d2b68730fdfbd809` |
| 512 | U | `4e7b20df0fa77094a4db228597f9d5864dd1bb33d6401282e48774c9f39db4e4` |
| 512 | L | `c5fa754c24d4281236e1b5edf772f67f4d044ef4bb360ee2e02bb684887efdff` |
| 1024 | U | `9a30261d29c8f4b51d777665091beea338dffecaf61ec791230fbd7cb92d62bc` |
| 1024 | L | `18977cd3503681648a89e03db2c3d36f872034cba85471336b92da4f5d9bb5b1` |

Every work-unit digest is preserved in `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`.

## Exceptional-object protocol

No candidate hit any exceptional trigger. Therefore:

- no start was frozen;
- no candidate needed GMP/Python exceptional replay;
- no candidate was transferred to structural analysis;
- no candidate was transferred to certification;
- no broad-search trajectory budget was extended.

The independent replay requirement for exceptional objects was therefore zero. The pre-execution implementation/replay gates remained satisfied.

## Scientific conclusion

CDM3-P2 produced a clean, fully exhausted bounded null result under the frozen distribution.

The correct conclusion is narrow: within these exact 60,000,000 deterministic generated starts, after approved Arm-L pruning, every executed trajectory reached the Tier-2 basin before any exceptional trigger.

No explicit unbounded orbit was found. No counterexample is claimed.

The P2 result does not justify automatic P3 scaling, further CPU expansion, a GPU benchmark, a new distribution, or a new ranker.

The scientifically justified next state is **STOP AND AUDIT**: compare P1/P2 tail stability and pruning economics, examine whether the current distribution/metric architecture has any credible mechanism for reaching qualitatively different behavior, and require a fresh frozen authorization before any further compute.

## Final session questions

- **Was the exact 60,000,000-start frozen population exhausted?** YES.
- **How many starts were pruned before trajectory execution?** 13,330,798.
- **How many exact trajectories were executed?** 46,669,202.
- **How many reached the Tier-2 basin?** 46,669,202.
- **Did any exceptional candidate freeze?** NO.
- **Did any candidate require bigint escape?** NO.
- **Did any repeated state occur?** NO.
- **Did any invariant fail?** NO.
- **Did any candidate enter structural/certification analysis?** NO.
- **Were all resource ceilings respected?** YES.
- **What did the survivor-cost tail look like relative to P1?** Closely matched P1 quantiles/means; maxima rose modestly as expected in the doubled finite sample, with no approach to exceptional thresholds.
- **Was any explicit unbounded orbit found?** NO.
- **Was any counterexample claimed?** NO.
- **What is scientifically justified next?** STOP AND AUDIT. No automatic P3, CPU scale-up, GPU benchmark, new distribution, or new ranker is authorized.
