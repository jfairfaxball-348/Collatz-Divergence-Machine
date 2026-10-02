# CDM3-P2A — Post-Campaign Scientific Audit and Next-Step Decision

**Date:** 2026-10-02  
**Session type:** analysis and research design only; no new scientific starts.  
**Root objective:** find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.  
**Cycle policy:** nontrivial finite cycles remain out of scope.  
**Claim status:** quantitative campaign comparisons are **FINITE-VERIFIED** from committed P1/P2 results; scientific interpretation is **COMPUTATIONAL-EVIDENCE / HEURISTIC** where stated.  
**Counterexample found or claimed:** **NO.**

## 1. Executive decision

**Classification: C — STRUCTURE/THEORY PIVOT JUSTIFIED; NO NEW COMPUTE CAMPAIGN AUTHORIZED.**

CDM3-P2 did not reveal a qualitatively new survivor population. Its main scientific contribution beyond P1 is a stronger replication result: on a disjoint deterministic population twice as large as P1, the same generator, bands, arms, exact pruning rule, basin stop and exceptional triggers reproduced essentially the same survivor-cost geometry.

The completed evidence does **not** justify:

- P3 or any further same-distribution CPU scaling;
- a GPU benchmark or GPU production campaign;
- cloud/distributed/volunteer scaling;
- a new magnitude band chosen only because it is larger;
- a new generator or distribution without a separate mathematical mechanism;
- a new ranker/metric campaign;
- longer candidate trajectories.

The next authorized research action is a **theory/structural programme**, provisionally named **CDM4-T1 — recursively closed divergence-mechanism audit**, using existing mathematics and completed evidence only. Its target is not another finite anomaly score. It is an exact, indefinitely reproducible mechanism capable in principle of bridging finite representation to unboundedness.

No new scientific starts are authorized by CDM3-P2A.

## 2. Evidence base and comparison boundary

P1 and P2 used the same deterministic generator semantics, `CDM3-P1-gen-v1`, at exactly 256, 512 and 1024 bits, with equal generated allocations to:

- **Arm U:** uniform odd B-bit starts with no least-divergent-only prefilter;
- **Arm L:** the same kind of generated odd starts followed by the exact mod-9 smaller-preimage least-divergent kill.

P1 generated 30,000,000 starts and executed 23,334,780 trajectories. P2 generated a disjoint 60,000,000 starts and executed 46,669,202 trajectories.

Across P1+P2:

- generated starts: **90,000,000**;
- exact Arm-L pretrajectory kills: **19,996,018**;
- exact trajectories executed: **70,003,982**;
- Tier-2 basin hits: **70,003,982**;
- exact U-steps: **88,941,289,593**;
- shortened-step equivalents: **177,882,830,351**;
- exceptional freezes: **0**;
- repeated states: **0**;
- bigint / 4096-bit escapes: **0**;
- invariant failures: **0**;
- structural/certification promotions: **0**.

The deterministic modulo-97 tail samples are useful finite summaries. They are not random samples from a stochastic population and are not used here to manufacture p-values or significance claims.

## 3. P1 versus P2 survivor-cost distributions

### 3.1 Means and deterministic tail quantiles

| Bits | Arm | P1 mean U | P2 mean U | P2-P1 | P1 p50/p90/p99/p99.9 | P2 p50/p90/p99/p99.9 |
|---:|:---:|---:|---:|---:|---|---|
| 256 | U | 448.086 | 448.109 | +0.023 | 444 / 542 / 635 / 714 | 444 / 544 / 638 / 711 |
| 256 | L | 448.149 | 448.093 | -0.056 | 443 / 542 / 633 / 706 | 444 / 543 / 634 / 706 |
| 512 | U | 1064.924 | 1064.900 | -0.024 | 1060 / 1207 / 1344 / 1444 | 1060 / 1209 / 1344 / 1447 |
| 512 | L | 1064.971 | 1064.967 | -0.005 | 1060 / 1209 / 1341 / 1445 | 1060 / 1211 / 1346 / 1450 |
| 1024 | U | 2298.568 | 2298.528 | -0.041 | 2293 / 2511 / 2695 / 2848 | 2295 / 2510 / 2700 / 2851 |
| 1024 | L | 2298.519 | 2298.600 | +0.081 | 2294 / 2512 / 2702 / 2846 | 2293 / 2512 / 2701 / 2846 |

All six P2-P1 mean shifts are below 0.013% of the corresponding P1 mean. The largest absolute deterministic-quantile shift is only 8 U-steps.

The relative p99.9/median tail ratios are also stable:

| Bits | P1 U | P1 L | P2 U | P2 L |
|---:|---:|---:|---:|---:|
| 256 | 1.608 | 1.594 | 1.601 | 1.590 |
| 512 | 1.362 | 1.363 | 1.365 | 1.368 |
| 1024 | 1.242 | 1.241 | 1.242 | 1.241 |

There is no empirical sign here of a tail that becomes progressively heavier with either the doubled sample or the tested increase in starting bit length.

### 3.2 Maxima

| Quantity | P1 global maximum | P2 global maximum |
|---|---:|---:|
| U-steps | 3,237 | 3,357 |
| shortened steps | 6,086 | 6,273 |
| peak bits | 1,049 | 1,053 |
| peak excess above start band | +26 | +29 |

Per-cell U-step maxima changed as follows:

- 256-L: 914 -> 945;
- 256-U: 938 -> 963;
- 512-L: 1,733 -> 1,833;
- 512-U: 1,749 -> 1,795;
- 1024-L: 3,234 -> 3,357;
- 1024-U: 3,237 -> 3,232.

P2 is a disjoint sample, not a superset of P1, so a per-cell maximum is not required to increase. The 1024-U maximum actually decreased slightly. Across the cells the modest movement of maxima, combined with the near-identity of means and quantiles and the absence of any approach to the 32,768-U-step or +512-bit triggers, is consistent with ordinary finite extreme-value variation. It provides no evidence for a new survivor-tail regime.

This is a descriptive finite conclusion, not an asymptotic theorem.

## 4. Trend with starting bit length

The principal observed trend is ordinary trajectory cost to the fixed Tier-2 basin.

Averaging the U/L means within a bit band gives approximately:

| Bits | P1 mean U | P2 mean U | mean U / (bits - 71), P1 | mean U / (bits - 71), P2 |
|---:|---:|---:|---:|---:|
| 256 | 448.118 | 448.101 | 2.422 | 2.422 |
| 512 | 1064.947 | 1064.933 | 2.415 | 2.415 |
| 1024 | 2298.544 | 2298.564 | 2.412 | 2.412 |

The normalization by distance in bits from the `2^71` basin is only an empirical diagnostic, not a Collatz law. Its striking stability reinforces the interpretation that these populations are dominated by ordinary transit-to-basin cost rather than by a growing exceptional component.

Peak excess does not grow with the starting bit length in the tested regime. P1 and P2 maxima remain roughly +20 to +29 bits above their start bands.

## 5. What P2 taught that P1 did not

P2 supplied three useful pieces of new information, all negative/replicative rather than discovery-positive.

1. **Replication at double population.** The P1 tail geometry was not a small-pilot artifact. A disjoint 60M-start campaign reproduced the same per-cell means and deterministic tail quantiles.
2. **Stable Arm-L pruning economics.** The mod-9 least-divergent kill continued to remove almost exactly the same fraction at every band and campaign.
3. **No emerging exceptional class.** Doubling the population created only modest finite maxima and zero structural promotions, freezes, bigint escapes or repeats.

What P2 did **not** add is a mechanism connecting larger sample count to higher probability of a divergence-relevant object. It therefore strengthens confidence in the machine and in the negative information about this distribution, but not the scientific case for P3.

## 6. Arm L audit

### 6.1 Mathematical status

The Arm-L mod-9 smaller-preimage rule remains an exact binary kill for a candidate interpreted as the least divergent start. Its mathematical validity is not weakened by the null campaigns.

It is not a predictor. CDM2-R1/R2 already prove that surviving finite inverse/pruning information does not constrain a finite future parity block in the required way: after finite inverse kills, any unbounded survivor residue can still be combined by CRT with every prescribed future `2^s` parity coordinate.

### 6.2 Exact pruning economics

| Campaign | Arm-L generated | Exact pretrajectory kills | Kill fraction | Arm-L trajectories executed |
|---|---:|---:|---:|---:|
| P1 | 15,000,000 | 6,665,220 | 44.4348% | 8,334,780 |
| P2 | 30,000,000 | 13,330,798 | 44.4360% | 16,669,202 |
| Combined | 45,000,000 | 19,996,018 | 44.4356% | 25,003,982 |

By band, the Arm-L kill fractions were:

- P1: 44.4172% / 44.4709% / 44.4163% at 256 / 512 / 1024 bits;
- P2: 44.4166% / 44.4538% / 44.4376%.

The exact compute saving that can be stated without a counterfactual is therefore:

> Arm L avoided **6,665,220** trajectory executions in P1, **13,330,798** in P2, and **19,996,018** across both campaigns.

An exact number of U-steps "saved" cannot be stated, because the killed starts were deliberately not executed. Assigning them the survivor mean would be a counterfactual estimate, not an exact measurement.

Operationally, actual U-step work per generated start in Arm L was about 706.02 in P1 and 705.92 in P2, versus about 1270.53 and 1270.51 for the equal-sized generated Arm-U populations. The ratio is about 55.56%, essentially the survivor fraction. This is strong evidence that the rule buys compute almost entirely through exact population reduction.

### 6.3 Survivor enrichment

There is no empirical evidence of enrichment among Arm-L survivors.

Within each campaign and band, L-minus-U mean U-step differences are tiny:

- P1: +0.064, +0.047, -0.050 U-steps at 256 / 512 / 1024 bits;
- P2: -0.016, +0.067, +0.072 U-steps.

The p50/p90/p99/p99.9 values likewise differ only by a few steps and with no coherent favorable direction.

**Disposition:** KEEP Arm L as an exact pruning arm when a least-divergent-targeted search is independently justified. Do not describe it as an enrichment arm, ranker, or divergence prior.

## 7. Current search-distribution audit

The present architecture samples deterministic odd integers at exactly 256, 512 and 1024 bits, then resolves them exactly to the trusted Tier-2 basin unless an exceptional trigger occurs.

The post-P2 evidence most strongly supports category:

**B — the current machine is resampling ordinary high-magnitude starts whose trajectory statistics remain stable and unexceptional.**

This statement is restricted to the tested generator, bands and finite campaigns. It does not imply that all large integers behave this way, and it does not falsify the counterexample-at-scale working hypothesis.

However, the current distribution has no demonstrated mechanism by which another 2x, 10x or 100x sample at the same bands should produce qualitatively new information. Its operational scientific rationale has therefore weakened.

The uniform arm remains conceptually clean as a baseline, but "clean baseline" is not sufficient reason to allocate another production campaign after 90M generated starts have produced stable ordinary geometry.

The least-divergent-targeted arm remains computationally efficient, but its survivors are not enriched by any observed trajectory-cost statistic.

## 8. Same-distribution scaling and GPU decision

### Same-distribution CPU scaling

**Not scientifically justified.**

The engine is fast enough. That is no longer the limiting uncertainty. The missing ingredient is a reason to believe that more draws from the same distribution materially improve the chance of discovering a divergence-relevant object or reveal new mathematics.

No such reason is supplied by P1/P2.

### GPU acceleration

**Not authorized and not presently scientifically justified.**

A GPU could plausibly solve a throughput bottleneck. P2A finds that throughput is not the current scientific bottleneck.

Accelerating the same distribution would multiply the rate at which the machine reproduces ordinary tail geometry. Without a new search question, distribution, or structural mechanism, that is engineering progress without a demonstrated information-gain argument.

A sparse-GPU benchmark may become justified later if a new scientifically motivated workload is too expensive on CPU. That condition does not currently hold.

## 9. Is a materially different reach-first design ready to freeze?

**No.**

Several superficially different proposals fail the present standard:

- moving from 1024 to 2048/4096 bits solely because those starts are larger;
- increasing the same uniform sample by orders of magnitude;
- using GPU/cloud/distributed execution to increase sample count;
- selecting finite peak, no-descent, stopping-time, parity-run or valuation extremals;
- resurrecting finite inverse-depth or modular feature scores.

A higher-bit campaign could be materially different in engineering representation, but it is not yet materially different in scientific mechanism. P1/P2 show no trend suggesting a scale transition, and the repository has no theorem identifying a characteristic magnitude at which the counterexample-at-scale hypothesis should change behavior.

Therefore no future compute envelope is frozen by P2A and `docs/COMPUTE_BUDGET.md` is intentionally unchanged.

## 10. Theory/structural pivot

The strongest next route is a theory-first search for an **indefinitely reproducible growth mechanism** rather than another finite survivor statistic.

### CDM4-T1 — proposed authorized research question

Seek an exact finitely describable structure that can survive recursive application of the Collatz dynamics and bridge to certification. A qualifying object would need something of the following form:

- a nonempty explicitly anchored family or state set `S`;
- an exact return/renormalization map induced by Collatz that sends members of `S` back into `S`;
- a rigorously increasing integer-valued or exact rational height on successive returns;
- an exact argument excluding entry into the 1-basin;
- an explicit positive integer whose orbit is proved to remain in the mechanism.

Equivalent formulations are allowed. The essential requirement is recursive closure plus provable growth, not finite-prefix extremality.

The first theoretical target should be the obstruction already isolated by CDM2-R2:

> find a genuinely nonlocal or recursively closed invariant that couples the 2-adic future-parity coordinate with the 3-adic/inverse-tree constraints, or prove that a proposed representation cannot do so.

This route is materially different from finite inverse-depth residue scoring. It asks for closure across arbitrary depth, not a larger finite sieve.

### Falsification discipline

A candidate representation should be killed if its constraints reduce after finite depth to:

- observed-prefix information;
- a finite union of power-of-3 residue classes;
- a magnitude/clearance score;
- or another object to which the existing lift/CRT future-block freedom applies.

The theory programme should prefer proof-level obstructions over empirical tuning.

No new scientific starts are needed or authorized for this task.

## 11. Single strongest unresolved bottleneck

The strongest unresolved bottleneck is **not computational throughput**.

It is the absence of a finite, checkable mathematical object that constrains the orbit **indefinitely** after the observed prefix.

Current mathematics gives exact finite prefix identities, exact least-divergent binary kills and strong density statements, but after any finite family of known prefix/inverse tests, the lift quotient remains sufficiently free that every finite future parity block is still realizable among surviving lifts unless all sufficiently large lifts are killed.

The missing bridge is therefore:

> an effective recursively closed/nonlocal structure that converts finite description into forced infinite future behavior and, ultimately, a divergence certificate.

Until that bridge exists, the machine is strong at resolving ordinary finite trajectories but weak at converting discovery into certification.

## 12. Final questions

1. **What did P2 teach us that P1 did not?**  
   It independently replicated P1's survivor-cost geometry at twice the population, confirmed stable Arm-L pruning economics, and showed no emerging exceptional class.

2. **Did doubling the population reveal evidence of a changing survivor-tail regime?**  
   **No.** Means and deterministic quantiles were essentially unchanged; maxima moved modestly and inconsistently across cells.

3. **What exact compute savings did Arm L provide, and did its survivors show enrichment?**  
   It exactly avoided 6,665,220 P1 and 13,330,798 P2 trajectory executions, 44.4356% of combined Arm-L generated starts. Exact counterfactual U-step savings are unknowable because killed starts were not run. Surviving Arm-L trajectories showed no enrichment relative to Arm U.

4. **Is the current 256/512/1024-bit uniform sparse distribution still scientifically defensible as the next search distribution?**  
   **Not as the next production campaign.** It remains a valid baseline distribution, but P1/P2 supply no mechanism-based information-gain argument for another same-distribution scale-up.

5. **Does more of the same CPU sampling have a credible information-gain argument?**  
   **No current argument clears the project standard.**

6. **Does GPU acceleration solve a scientific bottleneck, or only a throughput bottleneck?**  
   At present, **only a throughput bottleneck**. Throughput is not the limiting scientific issue.

7. **Is there a materially different reach-first design worth freezing?**  
   **No current design is ready to freeze.** A magnitude-only jump is insufficient without a testable scale/distribution mechanism.

8. **Is there a structural/theory route that now deserves priority?**  
   **Yes.** A recursively closed, nonlocal divergence-mechanism audit should have priority.

9. **What is the single strongest unresolved bottleneck between the current machine and an actual divergence certificate?**  
   The missing finite-description-to-infinite-behavior bridge: no effective recursively closed invariant or recurrence currently forces indefinite growth while excluding the 1-basin.

10. **What exact next action is authorized?**  
    **CDM4-T1 theory/structural audit only**, focused on recursively closed divergence mechanisms and on escaping/proving the existing finite-depth CRT obstruction. No scientific starts.

11. **What actions remain forbidden?**  
    P3; further same-distribution CPU scaling; GPU benchmark/production; cloud/distributed/volunteer search; a new generator/distribution; new metric/ranker campaigns; longer candidate trajectories; finite-depth inverse/residue feature revival; scientific starts not separately justified and frozen.

12. **Was any explicit unbounded orbit found?**  
    **NO.**

13. **Was any counterexample claimed?**  
    **NO.**

## 13. Repository-state consequence

CDM3-P2A closes the current sparse-search scaling cycle.

Authoritative state after this audit:

- **same-distribution scaling:** NOT AUTHORIZED;
- **new scientific compute:** NOT AUTHORIZED;
- **GPU work:** NOT AUTHORIZED;
- **new generator/distribution:** NOT AUTHORIZED;
- **theory/structural pivot:** RECOMMENDED AND AUTHORIZED AS THE NEXT RESEARCH MODE;
- **compute-budget amendment:** NONE;
- **counterexample:** NONE FOUND OR CLAIMED.

The high-magnitude sparse-search architecture remains a reusable machine. It is not discarded. It is parked until a new mathematical or empirical mechanism supplies a scientifically defensible workload.
