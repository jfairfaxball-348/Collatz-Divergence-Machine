# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM0 scaffold; calibration to be frozen before CDM1**
- Authoritative handover: this file plus `AGENTS.md`, `ROADMAP.md`, and the policies under `docs/`
- Latest compute envelope: `docs/COMPUTE_BUDGET.md`
- Latest experiment ledger entry: final line of `state/experiments.jsonl`
- Latest compute ledger entry: final line of `state/compute_ledger.jsonl`
- Candidate frontier: CDM0 calibration only
- Symbolic frontier: exact parity-word affine machinery scaffolded; no promoted symbolic divergence family
- Open blocker: CDM0 calibration must be frozen before CDM1
- Immediate bounded task: run the deterministic CDM0 calibration, then begin CDM1

The live repository HEAD is the current default-branch HEAD on GitHub. A session that mutates the repository must record the exact commit SHA in its experiment and compute-ledger entries.

## Read before working

1. `AGENTS.md`
2. `PROJECT_CHARTER.md`
3. `docs/RESEARCH_PROTOCOL.md`
4. `docs/COMPUTE_BUDGET.md`
5. `docs/PROMOTION_POLICY.md`
6. `docs/CERTIFICATION_POLICY.md`
7. `docs/FAILURE_AND_LESSON_LEDGER.md`
8. `docs/PREVIOUS_WORK_AUDIT.md`

## CDM1 authoritative kickoff prompt

### CDM1 — STATE-OF-THE-ART DIVERGENCE-SEARCH AND COMPUTATIONAL-REACH AUDIT

Work only on the divergent/unbounded-orbit failure mode of Collatz. Nontrivial finite-cycle research remains out of scope except where a result is directly necessary to distinguish what prior computation does or does not establish.

Determine, with dated and citable primary or high-quality sources where possible:

- what integer ranges have already been exhaustively checked by others;
- exactly what those checks establish and what they do **not** establish about unbounded orbits;
- existing record trajectories relevant to sustained growth, while separating finite extremality from divergence evidence;
- established accelerated Collatz algorithms and implementation techniques;
- current practical arbitrary-precision and distributed-computation methods relevant to explicit search;
- rigorous mathematical necessary conditions known for an unbounded orbit;
- what explicit search space is redundant because it is already covered by trusted verified ranges or reusable basin information;
- a realistic representation, trajectory, structural-analysis, and certification frontier for this repository;
- which candidate-generation and cheap-filter strategies plausibly maximise mathematical information per unit compute.

Before any experiment, freeze a finite CDM1 compute envelope. Do not begin a high-range search. Produce a source-audited baseline, a list of non-redundant search questions, and a bounded recommendation for CDM2 filter/metric experiments.

Every statement must be classified according to `AGENTS.md`. Do not infer a counterexample from finite survival or compute exhaustion.

Permanent philosophy:

> SEARCH FOR SUSTAINED GROWTH.  
> COMPUTE IN STAGES.  
> RESPECT PHYSICAL COMPUTE LIMITS.  
> PROMOTE VERY RARELY.  
> TURN NUMERICAL ANOMALIES INTO STRUCTURE.  
> TURN STRUCTURE INTO MATHEMATICS.  
> FINITE SURVIVAL IS NOT DIVERGENCE.  
> NONTRIVIAL CYCLES ARE NOT THIS PROJECT.  
> PRESERVE EVERY IMPORTANT FAILURE.  
> NEVER CLAIM MORE THAN HAS BEEN PROVED.
