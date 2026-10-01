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

The CDM3-P1 resource design is frozen in docs/COMPUTE_BUDGET.md but is marked **EXECUTION NOT YET AUTHORIZED** until the committed production driver passes every required preflight check.

## Authoritative next-session prompt

### CDM3-P1 — IMPLEMENT, VALIDATE, AND RUN THE BOUNDED SPARSE HIGH-MAGNITUDE PILOT

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

jfairfaxball-348/Collatz-Divergence-Machine

Treat the repository — not conversational memory — as the authoritative research state.

Before implementation or computation, read the complete Read before working list above, especially:

- experiments/CDM2_R3_REPORT.md
- docs/CDM2_R3_ARCHITECTURE.md
- experiments/CDM2_R3_BENCHMARK_RESULT.json
- docs/COMPUTE_BUDGET.md
- docs/BASIN_AND_CACHE_POLICY.md
- docs/CERTIFICATION_POLICY.md

### Root objective

The only root objective remains:

**FIND AN EXPLICIT POSITIVE INTEGER WHOSE SHORTENED-COLLATZ ORBIT CAN BE RIGOROUSLY PROVED UNBOUNDED AND WHICH NEVER REACHES 1.**

Finite survival is not divergence. A large peak is not divergence. A pilot survivor is not a counterexample.

### Task

Implement the CDM3-P1 deterministic multi-core CPU engine around the validated fixed-limb odd-only kernel.

The production driver must include:

- deterministic counter-based generation for exactly 256, 512 and 1024-bit bands;
- Arm U uniform odd starts;
- Arm L least-divergent-targeted exact pruning;
- exact fixed-limb odd-only execution;
- exact shortened-step-equivalent accounting;
- Tier-2 discovery-basin stop at n<2^71;
- no first-descent-as-convergence shortcut in Arm U;
- deterministic work-unit IDs and non-overlapping counter ranges;
- work-unit checksums and replay digests;
- checkpoint/restart support;
- exact exceptional-candidate freeze records;
- forced overflow/escape handling;
- independent GMP/Python replay hooks.

### Mandatory preflight

The frozen CDM3-P1 campaign may not execute until all of these pass:

1. deterministic fixed-limb vs GMP/Python transition tests on every bit band;
2. exact odd-only/shortened-map equivalence tests;
3. forced 4096-bit fast-path escape proving the candidate is frozen/routed, never dropped;
4. deterministic work-unit checksum replay;
5. checkpoint/restart equality;
6. compiler/runtime/source/executable provenance capture;
7. executable limits equal to or stricter than docs/COMPUTE_BUDGET.md.

If any gate fails, stop and fix the implementation. Do not spend the pilot budget.

### Frozen pilot population

Do not enlarge or redesign after seeing outcomes.

- 256, 512, 1024 bits;
- <=10,000,000 generated starts per band;
- <=5,000,000 Arm U and <=5,000,000 Arm L per band;
- <=30,000,000 generated starts total;
- <=8 worker threads;
- <=15 minutes wall;
- <=120 CPU-minutes;
- <=1 GiB memory;
- <=200 MiB committed result storage.

Exceptional broad-search freeze triggers are those already frozen in docs/COMPUTE_BUDGET.md, including 32,768 U-steps, start_bit_length+512 peak bits, leaving the 4096-bit fast path, repetition, invariant mismatch, or resource-ceiling pressure.

### If an exceptional object appears

Stop broad processing of that candidate immediately. Preserve exact provenance and checkpoints, replay independently, verify every transition, check basin/merge status, extract parity/residue/affine structure, and move it to structural/certification analysis.

Do not automatically extend its trajectory within the broad-search budget.

### Session decision

At closeout report:

- implementation/preflight status;
- whether the frozen pilot ran;
- exact generated/executed counts by band and arm;
- measured throughput and work-unit scaling;
- basin-hit and freeze disposition counts;
- all exceptional objects, if any;
- whether independent replay passed;
- whether any candidate entered structural analysis;
- whether any counterexample was found or claimed;
- whether larger CDM3 scaling is justified, requires another benchmark, or remains blocked.

A null result does not justify increasing the budget by itself.

### Permanent operating rule

Search may discover an object. Only mathematics can certify the object.

No finite computation satisfies the root objective.
