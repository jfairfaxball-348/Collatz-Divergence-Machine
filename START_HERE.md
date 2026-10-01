# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM3-B1 complete — B1-A throughput regression resolved; bounded CDM3-P2 CPU campaign frozen, execution conditional on P2 production integration/preflight**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach `1`
- Nontrivial finite cycles: **out of scope**
- Current authoritative theory report: `experiments/CDM2_R2_REPORT.md`
- Current authoritative scientific-search report: `experiments/CDM3_P1_REPORT.md`
- Current authoritative engineering benchmark: `experiments/CDM3_B1_REPORT.md`
- Current CDM3-B1 machine-readable result: `experiments/CDM3_B1_RESULT.json`
- Current CDM3-B1 implementation note: `docs/CDM3_B1_ENGINEERING.md`
- Current R3 architecture specification: `docs/CDM2_R3_ARCHITECTURE.md`
- Current R3 benchmark result: `experiments/CDM2_R3_BENCHMARK_RESULT.json`
- Current CDM3-P1 preflight report: `experiments/CDM3_P1_PREFLIGHT_REPORT.md`
- Current CDM3-P1 pilot result: `experiments/CDM3_P1_RESULT.json`
- Current CDM3-P1 work-unit provenance: `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`
- Current machine-readable CDM2 experiment result: `experiments/CDM2_E1_RESULT.json`
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as audited on 2026-10-01
- Current explicit candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both resolved; **no scientific divergence candidate**
- Current symbolic frontier: parity/residue affine identities, exact K-survival logic, finite inverse-tree binary pruning, lift-quotient future-block freedom, and the finite inverse-sieve/CRT obstruction
- Current computational-reach frontier: **P1 exhausted 30,000,000 frozen 256/512/1024-bit sparse starts; B1 recovered production hot-path parity with local R3 at 67.48M / 66.24M / 51.34M U-steps/s on its benchmark host**
- Current certification frontier: none
- CDM2-E2: **NOT AUTHORIZED**
- CDM3: **CDM3-B1 COMPLETE AS B1-A; the bounded CDM3-P2 CPU campaign is the only authorized larger scientific path and remains gated on committed P2 integration/preflight**
- Immediate next task: **CDM3-P2 — build a separately versioned production engine using the B1 rare-path-copy kernel and native compilation, prove counter non-overlap, pass every frozen preflight gate, then execute only the frozen 60,000,000-start CPU campaign if all gates pass**
- Forbidden next action: enlarging CDM3-P2 beyond its frozen 60,000,000 starts, GPU production/benchmark work, skipping P2 preflight, reusing P1 counters, or treating finite survival as proof
- Explicitly permitted next action: implement and validate the dedicated P2 engine; after every preflight gate passes, execute only the frozen CDM3-P2 CPU envelope in `docs/COMPUTE_BUDGET.md`

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

## Authoritative next-session prompt

### CDM3-P2 — INTEGRATE THE B1 KERNEL, PASS PREFLIGHT, AND RUN THE FROZEN 60-MILLION-START CPU CAMPAIGN

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository — not conversational memory — as the authoritative research state.

Before implementation or computation, read the complete Read before working list above and especially:

- `experiments/CDM3_P1_REPORT.md`
- `experiments/CDM3_P1_RESULT.json`
- `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`
- `experiments/CDM3_B1_REPORT.md`
- `experiments/CDM3_B1_RESULT.json`
- `experiments/CDM3_B1_COMMAND_RECORD.md`
- `docs/CDM3_B1_ENGINEERING.md`
- `docs/COMPUTE_BUDGET.md`

### Root objective

The only root objective remains an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.

Finite survival, throughput, magnitude and large peaks remain non-proof.

### Task

Create a separately versioned CDM3-P2 production engine. Do not alter the historical P1 source bundle.

Integrate exactly the B1-selected hot path:

- native production compilation;
- direct destructive `mul3add1` while the normalized state occupies fewer than 64 limbs;
- recovery copy only when the state already occupies all 64 limbs;
- exact restore/freeze/escape semantics if fixed capacity is exceeded.

Preserve the P1 deterministic generator algorithm, dual arms, Tier-2 basin stop, exceptional-candidate triggers, work-unit/checkpoint/replay machinery and proof boundaries.

Before scientific execution, pass every P2 preflight gate frozen in `docs/COMPUTE_BUDGET.md`, including explicit proof that the P2 counter intervals do not overlap any P1 work-unit interval.

### Frozen P2 population

Execute only after all gates pass:

- exactly 256, 512 and 1024 bits;
- exactly 10,000,000 Arm-U starts per bit length;
- exactly 10,000,000 Arm-L starts per bit length;
- exactly 60,000,000 generated starts total;
- <=8 workers;
- <=15 minutes wall;
- <=60 CPU-minutes;
- <=1 GiB RAM;
- <=300 MiB committed result storage;
- no GPU execution.

Do not enlarge the population after observing results.

### Exceptional object rule

If an exceptional candidate freezes, stop broad processing of that object, preserve exact provenance, replay independently, and transfer it to structural/certification analysis. Do not equate the finite event with divergence.

### Closeout

Report exact generated/executed/pruned/basin/freeze counts, U-step and shortened-step totals, survivor-tail statistics, work-unit/checkpoint integrity, production throughput, source/compiler/executable hashes, every exceptional object, whether any candidate entered structural analysis, and whether any counterexample was found or claimed.

A null result does not automatically authorize P3 or GPU work.

