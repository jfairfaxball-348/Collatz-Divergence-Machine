# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM4-T1 COMPLETE — C: NEW THEORETICAL OBSTRUCTION FOUND; NO NEW SCIENTIFIC COMPUTE AUTHORIZED**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach `1`
- Nontrivial finite cycles: **out of scope**
- Current authoritative theory report: `experiments/CDM4_T1_REPORT.md`
- Current authoritative scientific-search report: `experiments/CDM3_P2_REPORT.md`
- Current authoritative post-campaign audit: `experiments/CDM3_P2A_REPORT.md`
- Current authoritative engineering benchmark: `experiments/CDM3_B1_REPORT.md`
- Current CDM3-B1 machine-readable result: `experiments/CDM3_B1_RESULT.json`
- Current CDM3-B1 implementation note: `docs/CDM3_B1_ENGINEERING.md`
- Current CDM3-P2 preflight report: `experiments/CDM3_P2_PREFLIGHT_REPORT.md`
- Current CDM3-P2 preflight result: `experiments/CDM3_P2_PREFLIGHT_RESULT.json`
- Current CDM3-P2 integration closeout: `experiments/CDM3_P2_INTEGRATION_CLOSEOUT.md`
- Current CDM3-P2 scientific result: `experiments/CDM3_P2_RESULT.json`
- Current CDM3-P2 work-unit provenance: `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`
- Current R3 architecture specification: `docs/CDM2_R3_ARCHITECTURE.md`
- Current R3 benchmark result: `experiments/CDM2_R3_BENCHMARK_RESULT.json`
- Current CDM3-P1 preflight report: `experiments/CDM3_P1_PREFLIGHT_REPORT.md`
- Current CDM3-P1 pilot result: `experiments/CDM3_P1_RESULT.json`
- Current CDM3-P1 work-unit provenance: `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`
- Current machine-readable CDM2 experiment result: `experiments/CDM2_E1_RESULT.json`
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as audited on 2026-10-01
- Current explicit candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both resolved; **no scientific divergence candidate**
- Current symbolic frontier: parity/residue affine identities; the R1/R2 finite inverse-sieve/CRT obstruction; CDM4-T1 eventual-periodic parity obstruction; the arithmetic-progression family closure obstruction; and the nested-residue ordinary-integer anchoring criterion
- Current computational-reach frontier: **P2 exhausted 60,000,000 additional frozen 256/512/1024-bit sparse starts using CDM3-P2-v1 / CDM3-P1-gen-v1; 13,330,798 Arm-L starts were exactly pruned, 46,669,202 exact trajectories all reached the Tier-2 basin, and no exceptional freeze occurred**
- Current certification frontier: none
- CDM2-E2: **NOT AUTHORIZED**
- CDM3: **CDM3-P2A COMPLETE; same-distribution CPU scaling, GPU work, and a new generator/distribution remain unauthorized. The sparse-search machine is parked pending a new scientific mechanism.**
- Immediate next task: **CDM4-T2 — aperiodic integer-anchor / nested-cylinder theorem audit: theory-only work on recursively generated valuation/parity languages that must simultaneously anchor to one explicit positive integer and force unbounded growth**
- Forbidden next action: P3/further same-distribution CPU scaling, GPU production or benchmark work, cloud/distributed/volunteer scaling, a new sampling distribution/generator, a new ranking metric or finite exponent-code optimization campaign, longer candidate trajectories, or any scientific starts not separately justified and frozen after a later research decision
- Explicitly permitted next action: **CDM4-T2 theory/structural analysis only** on aperiodic recursive languages, nested cylinders, and positive-integer anchoring; no new scientific starts are authorized

The repository, not conversational memory, is the authoritative research state.

## Read before working

1. `AGENTS.md`
2. `PROJECT_CHARTER.md`
3. `ROADMAP.md`
4. `docs/RESEARCH_PROTOCOL.md`
5. `docs/COMPUTE_BUDGET.md`
6. `docs/PROMOTION_POLICY.md`
7. `docs/CERTIFICATION_POLICY.md`
8. `docs/FAILURE_AND_LESSON_LEDGER.md`
9. `docs/PREVIOUS_WORK_AUDIT.md`
10. `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`
11. `docs/METRIC_CATALOG.md`
12. `docs/BASIN_AND_CACHE_POLICY.md`
13. `experiments/CDM2_E1_REPORT.md`
14. `experiments/CDM2_E1_RESULT.json`
15. `experiments/CDM2_R1_REPORT.md`
16. `experiments/CDM2_R2_REPORT.md`
17. `experiments/CDM2_R3_REPORT.md`
18. `docs/CDM2_R3_ARCHITECTURE.md`
19. `experiments/CDM2_R3_BENCHMARK_RESULT.json`
20. `experiments/CDM3_P1_REPORT.md`
21. `experiments/CDM3_B1_REPORT.md`
22. `experiments/CDM3_B1_RESULT.json`
23. `docs/CDM3_B1_ENGINEERING.md`
24. `experiments/CDM3_P2_PREFLIGHT_REPORT.md`
25. `experiments/CDM3_P2_PREFLIGHT_RESULT.json`
26. `experiments/CDM3_P2_INTEGRATION_CLOSEOUT.md`
27. `experiments/CDM3_P2_REPORT.md`
28. `experiments/CDM3_P2_RESULT.json`
29. `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`
30. `experiments/CDM3_P2A_REPORT.md`
31. `experiments/CDM4_T1_REPORT.md`

## Strategic course correction — 2026-10-01

The project is not intended to remain indefinitely inside bounded algebraic refinement.

Its central **working search hypothesis** is:

> There exists a magnitude regime far beyond the presently verified Collatz frontier in which unbounded orbits occur often enough that a sufficiently capable search machine could realistically encounter one.

For **search design**, proceed conditionally as though this hypothesis is true.

This is a HEURISTIC / CONJECTURAL premise only. It is not a theorem and cannot appear as a premise in a certification proof.

The practical consequence is important:

> Increasing computational reach by many orders of magnitude is itself a legitimate research objective when the method is technically credible, finitely budgeted, exact in candidate-affecting decisions, and aimed at a qualitatively new magnitude regime.

The previous rule against throughput-first work is therefore narrowed, not erased. Blind scaling remains a failed strategy. **Reach-first engineering is now explicitly in scope.**

## Frozen proof boundary

Nothing about the course correction changes the standard of proof.

- finite survival is not divergence;
- a huge peak is not divergence;
- an unresolved compute budget is not divergence;
- a model prediction is not divergence;
- a high-magnitude start is not divergence;
- external finite verification is not local certification.

The root result still requires an explicit positive integer and a rigorous proof that its shortened-Collatz orbit is unbounded and never reaches `1`.

## Frozen CDM2-R2 mathematics

CDM2-R2 remains authoritative mathematics even though it no longer dictates the next strategy.

Conditional on a least divergent start `N`:

- every positive forward iterate satisfies `T^j(N)>N`;
- exact prefix minimality gives only K-survival/no-descent interval restrictions on the lift quotient;
- fixed inverse words give exact binary q kills through power-of-3 congruences plus linear inequalities;
- the mod-9 smaller-preimage sieve excludes exactly four q classes modulo 9 for a fixed prefix;
- any finite family of inverse-tree kills becomes eventually periodic modulo a power of 3;
- if any unbounded survivor residue remains, CRT combines it with every residue modulo `2^s`, so every finite future parity block still occurs.

Therefore no finite-depth q ranker was promoted. This kills one route; it does **not** imply that high-magnitude explicit search is pointless.

## Preserved failures — interpreted correctly

Do not revive these as proofs or standalone candidate claims:

- finite survival;
- peak chasing;
- parity-run chasing;
- total stopping-time extremality;
- arbitrary modular feature scores with no mechanism;
- affine-correction ranking;
- quantitative smaller-preimage clearance;
- finite inverse-depth residue scoring.

Also do not waste compute reproducing known contiguous verification with inferior machinery.

However, the following are now legitimate research objects:

- sparse high-magnitude sampling;
- radically different candidate-generation distributions;
- exact low-cost rejection filters;
- CPU vectorisation;
- GPU kernels;
- distributed work units;
- compressed/parity-block execution;
- accelerated odd-map execution;
- arbitrary-precision fallback design;
- checkpointing and deterministic replay;
- methods that avoid verifying every smaller integer;
- machine architectures designed specifically to reach starts many orders of magnitude above the current contiguous frontier.

## CDM2-R3 closeout — 2026-10-01

CDM2-R3 is complete with classification **R3-A — PRODUCTION-CREDIBLE ARCHITECTURE FOUND**.

Durable findings:

- sparse high-magnitude search and contiguous verification have different economics;
- first descent at an untrusted huge state is not convergence in the uniform sparse-search arm;
- a bounded exact benchmark directly executed 12,288 deterministic starts across 128–1024 bits;
- every benchmark start reached the Tier-2 discovery basin n<2^71;
- no overflow, repeat, horizon survivor, exceptional survivor or counterexample occurred;
- fixed-limb odd-only arithmetic materially outperformed both scalar shortened stepping and GMP odd-only reference execution on the benchmark host;
- starting magnitude through 1024 bits was not the dominant ordinary-candidate cost;
- the remaining dominant uncertainty is the survivor-cost tail and the truth/frequency of the counterexample-at-scale hypothesis.

The complete machine is specified in docs/CDM2_R3_ARCHITECTURE.md.

The CDM3-P1 resource design was frozen in docs/COMPUTE_BUDGET.md before execution. CDM3-P1 subsequently passed every required preflight gate and completed as **P1-B — MACHINE VALIDATED; ENGINEERING BOTTLENECK FOUND**.

## CDM3-B1 closeout — 2026-10-01

CDM3-B1 is complete as **B1-A — THROUGHPUT REGRESSION RESOLVED**.

The final exact optimized path recovered 102.35%, 101.39% and 99.70% of the side-by-side R3 U-step rate at 256, 512 and 1024 bits. Every correctness gate passed. Native compilation and unconditional recovery-copy placement were both confirmed material causes.

The next scientific action is frozen in `docs/COMPUTE_BUDGET.md` as CDM3-P2: exactly 60,000,000 generated starts, double P1, with no GPU execution.

On 2026-10-02 the dedicated `CDM3-P2-v1` integration passed every frozen preflight gate in workflow run `36982432002` / job `110759729097`. The exact P1 generator semantics remain `CDM3-P1-gen-v1`; the P2 counter audit proves all six frozen intervals are disjoint from P1 and each other. No P2 scientific start was executed by preflight. The immediate next action is now the exact frozen 60,000,000-start CPU campaign.

## CDM3-P2 closeout — 2026-10-02

CDM3-P2 is complete with classification **P2-ORDINARY-NULL**.

The exact frozen 60,000,000-start population was exhausted:

- generated: **60,000,000**;
- Arm-L pretrajectory pruned: **13,330,798**;
- exact trajectories executed: **46,669,202**;
- Tier-2 basin hits: **46,669,202**;
- exact U-steps: **59,293,075,669**;
- shortened-step equivalents: **118,586,359,433**;
- exceptional freezes: **0**;
- repeated states: **0**;
- 4096-bit / bigint escapes: **0**;
- invariant failures: **0**;
- campaign resource stops: **0**.

All 600 frozen work units completed. Active scientific wall was 437.370285 seconds and summed process CPU was 1,081.483885 seconds, inside the frozen 15-minute / 60-CPU-minute envelope. No candidate entered structural or certification analysis. No explicit unbounded orbit was found and no counterexample was claimed.

P2's survivor-cost means and deterministic tail quantiles closely matched P1 at the same bit-length/arm cells. The doubled sample produced only modest finite increases in maxima; the global P2 maximum was 3,357 U-steps and +29 peak bits, far below the exceptional thresholds.

This null result did not support automatic scaling and placed the repository in **STOP AND AUDIT** pending CDM3-P2A. The subsequent P2A audit has now closed that decision point.

## Historical CDM3-P2A session prompt — completed

### CDM3-P2A — POST-CAMPAIGN AUDIT AND NEXT-STEP DECISION

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository — not conversational memory — as the authoritative research state.

Before analysis, read the complete Read before working list above, especially:

- `experiments/CDM3_P1_REPORT.md`
- `experiments/CDM3_P1_RESULT.json`
- `experiments/CDM3_P2_REPORT.md`
- `experiments/CDM3_P2_RESULT.json`
- `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`
- `experiments/CDM3_B1_REPORT.md`
- `docs/COMPUTE_BUDGET.md`
- `docs/FAILURE_AND_LESSON_LEDGER.md`

### Root objective

The root objective remains an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.

### Task

Perform a no-new-scientific-start audit of P1 and P2.

Determine what the completed 30M + 60M campaigns actually taught about:

- survivor-cost tail stability by band/arm;
- Arm-L exact-pruning yield and whether it changed downstream cost distributions;
- finite maxima versus sample-size effects;
- production economics after B1;
- whether the current uniform/least-divergent-targeted sampling design has produced any scientifically useful signal beyond efficient ordinary resolution;
- whether the counterexample-at-scale search hypothesis has been meaningfully tested by this magnitude regime and sample size;
- what materially different research direction, if any, has a defensible information-gain argument.

Do **not** execute P3, new CPU starts, GPU work, a new distribution, or a new metric calibration in this audit.

Classify candidate next directions, kill weak routes, and if a new compute campaign is scientifically justified, specify the smallest proposed frozen envelope but leave it **UNAUTHORIZED / NOT EXECUTED** pending a later explicit decision.

If no new direction clears that bar, say so and preserve STOP-AND-AUDIT / theory-design status.

No finite null result is evidence that Collatz is true, and no finite survivor statistic is proof of divergence.


## CDM3-P2A closeout — 2026-10-02

CDM3-P2A is complete. Authoritative audit: `experiments/CDM3_P2A_REPORT.md`.

**Decision: C — STRUCTURE/THEORY PIVOT JUSTIFIED; NO NEW COMPUTE CAMPAIGN AUTHORIZED.**

Across P1+P2, the programme generated **90,000,000** starts, exactly pruned **19,996,018** Arm-L starts before trajectory execution, executed **70,003,982** exact trajectories, and every executed trajectory reached the Tier-2 basin. No exceptional object entered structural or certification analysis.

P2's disjoint doubled population reproduced P1's per-band/per-arm means and deterministic p50/p90/p99/p99.9 tail geometry. The modest and inconsistent changes in finite maxima do not supply evidence of a changing survivor-tail regime.

Arm L remains mathematically valid as exact least-divergent binary pruning and removed **44.4356%** of generated Arm-L starts across P1+P2. Its surviving trajectories showed no empirical enrichment over Arm U. It is pruning, not a predictive ranker.

The current 256/512/1024-bit sparse distribution remains a valid baseline, but it is **not justified as the next production distribution**. More of the same CPU sampling has no current information-gain argument. GPU acceleration would presently address throughput rather than the scientific bottleneck.

No materially different reach-first design is ready to freeze. `docs/COMPUTE_BUDGET.md` is therefore unchanged.

The strongest unresolved bottleneck is the missing finite-description-to-infinite-behavior bridge: an effective nonlocal or recursively closed structure that forces indefinite future behavior after the finite-prefix and finite inverse-sieve freedoms already proved in CDM2-R1/R2.

No explicit unbounded orbit was found. No counterexample was claimed.

## CDM4-T1 closeout — 2026-10-02

CDM4-T1 is complete. Authoritative report: `experiments/CDM4_T1_REPORT.md`.

**Classification: C — NEW THEORETICAL OBSTRUCTION FOUND.**

No scientific Collatz starts were generated.

The session proved three durable project-level obstructions:

- **eventually periodic parity obstruction:** any positive integer with eventually periodic shortened-map parity has an eventually periodic, bounded orbit; therefore a fixed expanding block cannot repeat forever on a positive integer, and an autonomous deterministic finite-state block machine cannot certify divergence;
- **arithmetic-progression closure obstruction:** if a fixed positive-length Collatz block maps an entire arithmetic-progression family into another such family, the 2-adic valuation of the family period strictly drops; therefore no finite directed cycle of whole progression families can close recursively;
- **ordinary-integer anchoring criterion:** a compatible nested residue tower with moduli tending to infinity represents one nonnegative ordinary integer if and only if its canonical residues eventually stabilize. A 2-adic/profinite inverse-limit point is not by itself a positive-integer candidate.

The strongest surviving framework is an **aperiodic recursively generated parity/valuation language** with both:

1. exact start-cylinder residues eventually stabilizing to one explicit positive integer N; and
2. accumulated valuation growth forcing `limsup 3^m/2^A_m = infinity` (or another exact unbounded-growth theorem).

No such explicit language/anchor was found. No unbounded orbit was found. No counterexample was claimed.

No new compute, generator/distribution, finite-code ranker, or GPU workload is authorized.

## Authoritative next task — CDM4-T2

**CDM4-T2 — APERIODIC INTEGER-ANCHOR / NESTED-CYLINDER THEOREM AUDIT.**

Work theory-first on the single sharpened obligation left by T1:

> construct, or rule out for a broad recursive class, an aperiodic finitely generated parity/valuation language whose exact starting residue tower eventually stabilizes to one explicit positive integer while its accumulated valuations force an unbounded growth factor.

Priority objects may include substitutions/morphic words, recursively nested mixed-adic cylinders, transducers with an unbounded scale parameter, or equivalent exact structures. They must be proved equivalent to actual Collatz dynamics and must retain the ordinary-positive-integer anchor.

Do not optimize finite exponent codes, finite drift, finite residue rates, or another finite score.

**Scientific starts authorized: NO.**  
**GPU work authorized: NO.**  
**New generator/distribution authorized: NO.**  
**Theory/structural work authorized: YES.**
