# CDM3-P2 REPORT — FROZEN 60-MILLION-START CPU CAMPAIGN

**Date:** 2026-10-02  
**Status:** COMPLETE — ordinary null result.  
**Claim class:** COMPUTATIONAL-EVIDENCE.  
**Counterexample found or claimed:** NO.

CDM3-P2 integrated the B1 rare-path recovery-copy kernel into a separately versioned production engine, passed every frozen preflight gate, and exhausted the exact frozen 60,000,000-start population within budget. Historical P1 source remained unchanged.

## Scientific result

| bits | arm | generated | Arm-L kills | executed | Tier-2 basin hits | U-steps | shortened-equivalent |
|---:|:---:|---:|---:|---:|---:|---:|---:|
| 256 | U | 10,000,000 | 0 | 10,000,000 | 10,000,000 | 4,481,091,176 | 8,962,235,585 |
| 256 | L | 10,000,000 | 4,441,655 | 5,558,345 | 5,558,345 | 2,490,657,741 | 4,981,381,872 |
| 512 | U | 10,000,000 | 0 | 10,000,000 | 10,000,000 | 10,648,998,358 | 21,298,131,212 |
| 512 | L | 10,000,000 | 4,445,381 | 5,554,619 | 5,554,619 | 5,915,483,877 | 11,830,894,439 |
| 1024 | U | 10,000,000 | 0 | 10,000,000 | 10,000,000 | 22,985,276,597 | 45,970,676,483 |
| 1024 | L | 10,000,000 | 4,443,762 | 5,556,238 | 5,556,238 | 12,771,567,920 | 25,543,039,842 |
| **Total** | | **60,000,000** | **13,330,798** | **46,669,202** | **46,669,202** | **59,293,075,669** | **118,586,359,433** |

Cache hits: 0.  
Repeated states: 0.  
4096-bit escapes: 0.  
Invariant failures: 0.  
Exceptional freezes: 0.  
Resource stops: 0.

Every executed trajectory reached the independently trusted Tier-2 basin `n < 2^71`.

This is a finite null result only. It is not evidence that all Collatz trajectories converge, does not disprove sparse high-magnitude search, and does not establish anything about untested starts.

## Trajectory-cost distribution

The deterministic sample used counter modulo 97.

| bits | arm | mean U/executed | p50 | p90 | p99 | p99.9 | max U | max shortened | max peak bits | max peak excess |
|---:|:---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| 256 | U | 448.109 | 444 | 544 | 638 | 711 | 963 | 1,713 | 280 | +24 |
| 256 | L | 448.093 | 444 | 543 | 634 | 706 | 945 | 1,683 | 282 | +26 |
| 512 | U | 1,064.900 | 1,060 | 1,209 | 1,344 | 1,447 | 1,795 | 3,286 | 535 | +23 |
| 512 | L | 1,064.967 | 1,060 | 1,211 | 1,346 | 1,450 | 1,833 | 3,351 | 537 | +25 |
| 1024 | U | 2,298.528 | 2,295 | 2,510 | 2,700 | 2,851 | 3,232 | 6,079 | 1,053 | +29 |
| 1024 | L | 2,298.600 | 2,293 | 2,512 | 2,701 | 2,846 | 3,357 | 6,273 | 1,048 | +24 |

Across all executed trajectories the mean was 1,270.497 U-steps. No trajectory approached the 32,768-U freeze threshold or the +512-bit peak threshold. The maximum observed U-step count was 3,357; maximum peak-bit excess was +29.

The close Arm-U/Arm-L cost profiles are descriptive only. They do not imply equal or unequal divergence probability.

## Production throughput

Four worker threads were used.

| bits | arm | U-steps / wall-second | U-steps / completed-worker-CPU-second |
|---:|:---:|---:|---:|
| 256 | U | 250.982M | 63.852M |
| 256 | L | 252.194M | 63.342M |
| 512 | U | 209.382M | 52.542M |
| 512 | L | 209.128M | 52.399M |
| 1024 | U | 145.829M | 36.567M |
| 1024 | L | 145.252M | 36.406M |

Campaign-wide:

- wall time: **352.501992 s**
- process CPU: **1,404.529967 s = 23.409 CPU-min**
- completed-worker CPU: **1,404.467242 s**
- overall U-step wall throughput: **168.206M U-steps/s**
- total shortened-map-equivalent work: **118,586,359,433 steps**

The frozen ceilings were 900 wall seconds and 3,600 CPU seconds. Neither was approached closely enough to trigger a resource stop.

## B1 integration survived

Before the campaign, the same host ran B1 optimized and the dedicated P2 engine over identical 4,096-start workloads for three passes per band. Exact result digests matched in every pass.

P2/B1 median U-step ratios were 106.75% at 256 bits, 108.94% at 512 bits, and 96.44% at 1024 bits. Therefore the B1 hot-path recovery survived production integration.

## Determinism and checkpoint integrity

The production population was split into 600 deterministic 100,000-counter work units: 100 for each band/arm group. All 600 records were complete.

The exact work-unit records, group digests, and checkpoint hashes are preserved in `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json` and `experiments/CDM3_P2_CHECKPOINT_HASHES.txt`.

Preflight separately proved deterministic work-unit replay, checkpoint/restart equality, and one-thread/four-thread scientific equality.

## Exceptional-candidate handling

No exceptional object appeared. The independent post-run exceptional replay record therefore contains `exceptional_candidate: null`.

No candidate was transferred to structural or certification mathematics.

## Interpretation and decision

CDM3-P2 answers the frozen experimental question exactly: the repaired B1-class machine processed the complete disjoint 60-million-start population correctly and within budget, and every executed candidate resolved ordinarily to the trusted basin.

It does **not** answer the root mathematical question.

No explicit positive integer with a rigorously proved unbounded shortened-Collatz orbit was found. No counterexample is claimed.

A P3 CPU expansion is **not authorized by this null result**. A GPU benchmark is also **not authorized**. The next step is a no-new-search cross-campaign audit, **CDM3-R4 — P1/P2 survivor-tail, reach, and scaling-decision audit**, to compare P1 and P2 cost/tail behavior, assess the marginal information gained by doubling the population, and decide whether any subsequent bounded compute proposal is justified. R4 itself must not consume a new scientific population.

## Authoritative files

- `experiments/CDM3_P2_PREFLIGHT_REPORT.md`
- `experiments/CDM3_P2_PREFLIGHT_RESULT.json`
- `experiments/CDM3_P2_COUNTER_AUDIT.json`
- `experiments/CDM3_P2_INTEGRATION_CHECK.json`
- `experiments/CDM3_P2_RESULT.json`
- `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`
- `experiments/CDM3_P2_CHECKPOINT_HASHES.txt`
- `experiments/CDM3_P2_COMMAND_RECORD.md`
- `experiments/CDM3_P2_EXCEPTIONAL_REPLAY.json`
- `docs/CDM3_P2_ENGINEERING.md`
