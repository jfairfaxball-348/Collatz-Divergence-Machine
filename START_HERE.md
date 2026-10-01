# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM2-R2 complete; strategic course correction installed; CDM2-R3 computational-reach audit is next**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach `1`
- Nontrivial finite cycles: **out of scope**
- Current authoritative theory report: `experiments/CDM2_R2_REPORT.md`
- Current machine-readable CDM2 experiment result: `experiments/CDM2_E1_RESULT.json`
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as audited on 2026-10-01
- Current explicit candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both resolved; **no scientific divergence candidate**
- Current symbolic frontier: parity/residue affine identities, exact K-survival logic, finite inverse-tree binary pruning, lift-quotient future-block freedom, and the finite inverse-sieve/CRT obstruction
- Current computational-reach frontier: **not yet redesigned for sparse starts many orders of magnitude above contiguous verification**
- Current certification frontier: none
- CDM2-E2: **NOT AUTHORIZED**
- CDM3: **BLOCKED pending CDM2-R3 reach-first architecture**
- Immediate next task: **CDM2-R3 — High-Magnitude Computational-Reach and Search-Machinery Audit**
- Forbidden next action: an undeclared or unbounded production campaign, or treating finite survival as a counterexample
- Explicitly permitted next action: serious audit/prototyping of sparse high-magnitude search algorithms, CPU/GPU/distributed methods, and new machinery capable of changing the reachable magnitude regime

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

## Authoritative next-session prompt

### CDM2-R3 — HIGH-MAGNITUDE COMPUTATIONAL-REACH AND SEARCH-MACHINERY AUDIT

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository—not conversational memory—as the authoritative research state.

Before doing any research or computation, read and obey the complete **Read before working** list above.

### ROOT OBJECTIVE

The only root objective remains:

**FIND AN EXPLICIT POSITIVE INTEGER WHOSE SHORTENED-COLLATZ ORBIT CAN BE RIGOROUSLY PROVED UNBOUNDED AND WHICH NEVER REACHES 1.**

Use the shortened map

`T(n)=n/2` for even `n`,

`T(n)=(3n+1)/2` for odd `n`.

Nontrivial finite-cycle search remains out of scope.

### WORKING SEARCH HYPOTHESIS

For search-design purposes, assume conditionally:

> Far above the currently verified range—potentially by many orders of magnitude—there exists a regime containing many unbounded Collatz orbits, sufficiently numerous that a capable sparse or targeted search machine can encounter one.

This is the project's working discovery hypothesis, **not a theorem**.

The purpose of CDM2-R3 is to determine what machine or algorithm could realistically test that hypothesis.

### STRATEGIC CORRECTION

Do **not** make another bounded algebraic ranker audit the primary task.

The R1/R2 mathematical obstructions remain valid and must not be contradicted, but they are not a reason to halt computational reach work.

The principal task is now:

> FIND GENUINELY PLAUSIBLE METHODS FOR SEARCHING STARTING VALUES AT MAGNITUDES FAR ABOVE THE CONTIGUOUSLY VERIFIED FRONTIER, OR BUILD THE MACHINERY NEEDED TO DO SO.

### A. CURRENT ALGORITHM / LITERATURE AUDIT

Search current literature, implementations, project reports, source repositories, and technical discussions for the best available Collatz computation methods.

At minimum investigate:

- current contiguous-verification algorithms;
- first-descent/sieve methods;
- residue-class and parity-block sieves;
- Angeltveit-style recursive pruning;
- Barina-style CPU/GPU/distributed verification;
- Oliveira e Silva / Roosendaal style record and trajectory search methods;
- accelerated odd-only formulations;
- branchless/vectorized execution;
- SIMD;
- GPU/OpenCL/CUDA-style kernels where relevant;
- distributed work-unit architectures;
- arbitrary-precision overflow handling;
- checkpointing and proof-of-work/checksum methods;
- compressed or symbolic multi-step transition methods;
- known time-memory tradeoffs.

Distinguish peer-reviewed fact, implementation claim, benchmark, projection, and heuristic.

### B. CONTIGUOUS VERIFICATION VS SPARSE COUNTEREXAMPLE HUNTING

Do not assume the best algorithm for proving all `n<X` is the best algorithm for finding a counterexample at `n >> X`.

Analyze the two objectives separately.

For sparse high-magnitude hunting, ask:

- can starts be sampled directly at 128, 256, 512, 1024, or larger bit lengths?
- what does per-start cost depend on?
- which filters require knowledge that all smaller starts converge, and therefore fail for sparse search?
- which first-descent/path-merge ideas remain useful without contiguous induction?
- can trajectories be cheaply rejected after reaching a known or locally certified basin?
- can many starts share computation?
- can residue or parity blocks be executed in bulk without pretending they predict divergence?

### C. COMPUTATIONAL ECONOMICS

Build a realistic cost model.

Estimate, separately for representative CPU, GPU/workstation, and distributed regimes:

- starts/second;
- shortened steps/second;
- expected big-integer transition frequency as start bit length grows;
- memory bandwidth and arithmetic bottlenecks;
- checkpoint/storage requirements;
- communication overhead;
- cost per billion/trillion sampled starts where meaningful;
- cost per candidate surviving successive filters;
- reachable starting bit lengths;
- reachable sample counts at those bit lengths.

Do not confuse starting magnitude with sample count.

### D. SEARCH-DISTRIBUTION DESIGN

Under the working high-scale hypothesis, compare plausible ways to choose starts:

- uniform random fixed-bit-length starts;
- stratified bit-length bands;
- odd starts only;
- residue classes surviving exact binary kills;
- theorem-safe no-descent prefix families;
- long-prefix parity/residue construction used only as a cheap screening mechanism, not as a claimed persistence predictor;
- record-like or growth-biased classes;
- adaptive search distributions;
- other mathematically or computationally justified sparse generators.

The previous failure of a ranker does not prohibit using exact sieves to avoid obviously redundant work.

### E. MULTI-STAGE MACHINE DESIGN

Design at least one complete search funnel whose purpose is **reach**.

A plausible architecture may include:

`L0 ultra-cheap exact block filter`
→ `L1 short trajectory / descent / basin / merge rejection`
→ `L2 longer exact survivor analysis`
→ `L3 extreme-survivor freeze and structural extraction`
→ `L4 certification research`.

For every stage specify:

- input representation;
- arithmetic;
- rejection rule;
- expected rejection rate if known;
- per-candidate cost;
- hardware target;
- data retained;
- promotion quota;
- failure mode.

### F. LOOK FOR QUALITATIVELY NEW MACHINERY

Do not limit the audit to scaling the current Python implementation.

Actively seek approaches such as:

- batched affine/parity-block transforms;
- residue automata;
- precomputed block transitions;
- large-word bit-slicing;
- vectorized valuation extraction;
- GPU warp-friendly formulations;
- hybrid fixed-width / bigint pipelines;
- compressed trajectory DAGs;
- hashing or quotienting repeated tails;
- distributed deterministic partitioning of sparse magnitude bands;
- probabilistic scheduling that does not affect exact candidate decisions;
- any novel method that changes the asymptotic or constant-factor economics enough to matter.

New machinery should be judged by actual reachable scale, not elegance.

### G. PILOT BENCHMARK

A small benchmark is allowed only after freezing a finite envelope under `docs/COMPUTE_BUDGET.md`.

Its purpose should be to measure a real bottleneck or compare two concrete implementations.

Do not run a large counterexample search in CDM2-R3 unless repository policy is explicitly updated during the session to authorize it after the architecture audit.

### H. EXCEPTIONAL-CANDIDATE PATH

The machine must be designed so that an exceptional survivor is not lost in throughput.

Specify exactly what happens if a candidate exhibits behavior serious enough to investigate:

- freeze start and exact generator provenance;
- freeze code revision/environment;
- preserve all exact checkpoints;
- independently replay;
- construct a minimal verifier;
- test for basin/path merges;
- extract parity/residue/affine structure;
- immediately switch from broad search to certification-oriented mathematics.

### I. DECISION

At session end classify the computational-reach outcome into one of:

**R3-A — PRODUCTION-CREDIBLE ARCHITECTURE FOUND**

A bounded method can plausibly inspect a qualitatively new high-magnitude regime at useful sample scale. Design the cheapest production/pilot campaign and state exactly what repository authorization is still needed.

**R3-B — PROMISING BUT ENGINEERING/BENCHMARK GAP**

A method plausibly changes reachable scale but needs a bounded implementation benchmark or specific engineering proof before production use.

**R3-C — NO CREDIBLE REACH GAIN FOUND**

Current methods do not produce meaningful sparse high-magnitude reach under realistic resources. Preserve the negative result and identify the precise bottleneck.

### REQUIRED DELIVERABLES

Create a durable CDM2-R3 report.

Update as appropriate:

- `ROADMAP.md`;
- `START_HERE.md`;
- `docs/COMPUTE_BUDGET.md` if a benchmark is frozen/run;
- `docs/FAILURE_AND_LESSON_LEDGER.md`;
- any implementation/architecture documentation created;
- experiment/result files if a benchmark occurs.

Read back all modified files.

### SESSION CLOSEOUT

Report:

- best credible search architecture;
- projected magnitude regime and sample scale;
- main bottleneck;
- whether a pilot or production search is authorized;
- whether CDM3 is unblocked;
- whether any trajectories were actually searched;
- whether any candidate was found;
- whether any counterexample was found or claimed;
- exact next step.

### PERMANENT PHILOSOPHY

> SEARCH FAR ENOUGH TO TEST THE PROJECT'S CENTRAL HYPOTHESIS.  
> DO NOT CONFUSE SEARCH WITH PROOF.  
> USE MATHEMATICS WHEN IT SAVES COMPUTE.  
> BUILD MACHINERY WHEN MACHINERY CHANGES THE REACHABLE REGIME.  
> PRESERVE EXACTNESS IN CANDIDATE-AFFECTING DECISIONS.  
> FREEZE EXCEPTIONAL SURVIVORS IMMEDIATELY.  
> TURN A DISCOVERY INTO STRUCTURE, THEN INTO PROOF.  
> FINITE SURVIVAL IS NOT DIVERGENCE.  
> NEVER CLAIM MORE THAN HAS BEEN PROVED.
