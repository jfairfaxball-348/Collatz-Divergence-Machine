# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM3-P1 complete — P1-B machine validated; production hot-path bottleneck found; larger scientific scaling blocked pending CDM3-B1**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach `1`
- Nontrivial finite cycles: **out of scope**
- Current authoritative theory report: `experiments/CDM2_R2_REPORT.md`
- Current authoritative computational-reach report: `experiments/CDM3_P1_REPORT.md`
- Current R3 architecture specification: `docs/CDM2_R3_ARCHITECTURE.md`
- Current R3 benchmark result: `experiments/CDM2_R3_BENCHMARK_RESULT.json`\n- Current CDM3-P1 preflight report: `experiments/CDM3_P1_PREFLIGHT_REPORT.md`\n- Current CDM3-P1 pilot result: `experiments/CDM3_P1_RESULT.json`\n- Current CDM3-P1 work-unit provenance: `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`
- Current machine-readable CDM2 experiment result: `experiments/CDM2_E1_RESULT.json`
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as audited on 2026-10-01
- Current explicit candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both resolved; **no scientific divergence candidate**
- Current symbolic frontier: parity/residue affine identities, exact K-survival logic, finite inverse-tree binary pruning, lift-quotient future-block freedom, and the finite inverse-sieve/CRT obstruction
- Current computational-reach frontier: **exact sparse 128–1024-bit starts directly benchmarked; fixed-limb odd-only median one-core rates ~187k/s at 256 bits, ~75k/s at 512 bits, ~27k/s at 1024 bits on the R3 host**
- Current certification frontier: none
- CDM2-E2: **NOT AUTHORIZED**
- CDM3: **CDM3-P1 COMPLETE AS P1-B; larger scientific scaling is NOT AUTHORIZED until the bounded CDM3-B1 hot-path benchmark closes the production-throughput regression**
- Immediate next task: **CDM3-B1 — bounded production-hot-path benchmark comparing the R3 reference kernel, current P1 production path, `-march=native`, and an exact overflow-safe no-full-copy U-step path; no scientific population increase**
- Forbidden next action: any larger scientific search, GPU production campaign, or population increase before CDM3-B1 resolves the P1 throughput regression; finite survival remains non-proof
- Explicitly permitted next action: execute only the separately frozen CDM3-B1 engineering benchmark; do not enlarge the scientific search population

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

## Authoritative next-session prompt

### CDM3-B1 — ISOLATE AND RECOVER THE PRODUCTION HOT-PATH THROUGHPUT REGRESSION

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository — not conversational memory — as the authoritative research state.

Before implementation or benchmarking, read the complete Read before working list above and, in particular:

- `experiments/CDM3_P1_PREFLIGHT_REPORT.md`
- `experiments/CDM3_P1_RESULT.json`
- `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`
- `experiments/CDM3_P1_REPORT.md`
- `experiments/CDM3_P1_COMMAND_RECORD.md`
- `docs/COMPUTE_BUDGET.md`
- `docs/FAILURE_AND_LESSON_LEDGER.md`
- `benchmarks/cdm2_r3_sparse_bench.c`
- `production/cdm3_p1_engine.c`

### Root objective

The root objective is unchanged: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.

CDM3-B1 is engineering-only. It does not enlarge the scientific population and cannot certify divergence.

### Task

Execute exactly the frozen CDM3-B1 benchmark in `docs/COMPUTE_BUDGET.md`.

Under identical deterministic starts and exact result digests, compare:

1. the CDM2-R3 fixed-limb odd-only reference kernel;
2. the current CDM3-P1 production U-step path;
3. the current P1 path compiled with `-march=native`;
4. an exact overflow-safe production path that avoids copying the full 64-limb state on every ordinary U-step, also compiled with `-march=native`.

Preserve exact 4096-bit escape/freeze semantics. Do not remove a safety check merely for speed.

Measure the best exact candidate path at 1, 2, 4 and 8 workers inside the frozen B1 envelope.

### Required decision

Determine whether the R3-to-P1 throughput gap is explained sufficiently to make the next campaign economics auditable.

- If the optimized exact production path remains materially slower than the side-by-side R3 reference, keep larger search blocked and localize the remaining bottleneck.
- If substantial parity with the R3 reference is recovered without weakening correctness, freeze — but do not execute — the smallest justified next CPU scale-up or sparse-GPU benchmark.

Do not run a larger scientific campaign in CDM3-B1.

### Permanent proof boundary

Finite computation, throughput, magnitude, a large peak, or long survival is not a Collatz counterexample. Only rigorous certification of an explicit unbounded orbit satisfies the root objective.
