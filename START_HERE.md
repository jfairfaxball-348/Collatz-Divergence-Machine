# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM2-E1 complete; CDM2 filter redesign is next**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach `1`
- Nontrivial finite cycles: **out of scope**
- Current authoritative CDM2 report: `experiments/CDM2_E1_REPORT.md`
- Current machine-readable CDM2 result: `experiments/CDM2_E1_RESULT.json`
- Latest compute policy: `docs/COMPUTE_BUDGET.md`
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as audited on 2026-10-01
- Current explicit candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both resolved; **no scientific divergence candidate**
- Current symbolic frontier: exact parity/residue construction, debt arithmetic, affine parity-word representation, mod-9 smaller-preimage pruning, path-merging pruning, and bounded CDM2-E1 calibration results
- Current certification frontier: none
- CDM3 generator: **NONE AUTHORIZED**
- Immediate next bounded task: **CDM2-R1 — Non-Tautological Filter Redesign Audit**
- Forbidden next action: high-range explicit search, larger brute-force calibration, GPU/distributed scaling, or CDM3

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

## Frozen findings that must not be silently undone

### Scope and proof boundary

Finite survival is not divergence. No finite trajectory prefix, finite peak, statistical anomaly, or compute exhaustion can satisfy the root objective.

Nontrivial finite-cycle research remains out of scope.

### External coverage and provenance

Peer-reviewed external exact computation covers all starts below `2^71` for discovery purposes. The current audited official live report extends reported coverage through `2075*2^60`.

External coverage is provenance-tagged search masking, not local certification.

### Least-divergent necessary structure

If any divergent positive start exists, a least divergent start exists and can never fall below itself.

Above the audited frontier, the Angeltveit descent criterion yields the every-prefix necessary condition

`D(k)=485 f_k-306k>0`.

This is a necessary condition in its theorem scope, not sufficient evidence of divergence.

### Preserved route kills

Do not restore as standalone promotion logic:

- magnitude-only search;
- finite survival alone;
- peak magnitude or peak/start ratio;
- long parity runs;
- total stopping/delay records;
- arbitrary residue histograms without theorem linkage;
- GPU/distributed throughput before filter information value.

The family `2^p-1` manufactures arbitrarily long all-odd initial prefixes and arbitrarily large finite peak/start ratios.

## CDM2-E1 frozen result

**Claim status: COMPUTATIONAL-EVIDENCE.**

CDM2-E1 used `K=24`, exactly 60-bit deterministic representatives, 4,096 conditioned classes, 4,096 disjoint controls, exact `f_K` matching, a 512-step first-descent horizon, zero L2 promotions, and a 60-second wall/CPU envelope.

Authoritative replay consumed approximately 12.44 wall seconds and 12.44 CPU seconds.

Exact aggregate outcomes:

- symbolic nodes visited: 735,398;
- legal length-24 leaves: 286,581;
- mod-9 smaller-preimage kills: 127,293;
- path-merging kills: 23,425;
- eligible deterministic representatives: 135,863;
- 2K survival: 866/4096 conditioned vs 914/4096 control;
- 4K survival: 75/4096 vs 71/4096;
- 512-step survival: 0 vs 0;
- deterministic replication folds disagreed in direction;
- precommitted reproducible-enrichment rule: **FAILED**.

### Metric dispositions

- `parity_debt_end`: **DEMOTED** to binary necessary-screen/interpretation use; at fixed K it is determined by `f_K`.
- `parity_debt_min`: **FAILED** as a ranker.
- completed odd-to-odd valuation load: **FAILED** as an independent ranker.
- odd-step density: matching/interpretation only.
- exact parity/residue mapping, mod-9 smaller-preimage pruning, path-merging pruning: **KEEP** as exact pruning.
- peak/start ratio: outcome only; standalone promotion remains **FAILED**.
- merge depth: operational only.

### Bounded equivalence discovered in CDM2-E1

**PROVED for the declared 60-bit / `K<=24` regime:**

every-prefix `D(j)>0` is equivalent to exact no-descent through the prefix.

Therefore a correctly constructed exact-K-survivor control necessarily shares the binary debt property. The binary debt screen cannot provide incremental ranking information after K-survival has already been conditioned on.

## CDM2 end decision

**No cheap filter or metric tested in CDM2-E1 demonstrated reproducible information value beyond its conditioning event.**

Accordingly:

> **CDM3 HAS NO AUTHORIZED GENERATOR.**

Do not advance the failed parity-prefix generator merely to keep the project moving.

## Authoritative kickoff prompt

### CDM2-R1 — NON-TAUTOLOGICAL FILTER REDESIGN AUDIT

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository—not conversational memory—as the authoritative research state.

Before doing any research or computation, read and obey all files listed in the **Read before working** section above, especially `experiments/CDM2_E1_REPORT.md`, `docs/METRIC_CATALOG.md`, and `docs/FAILURE_AND_LESSON_LEDGER.md`.

### ROOT OBJECTIVE

The only root objective remains:

**FIND AN EXPLICIT POSITIVE INTEGER WHOSE SHORTENED-COLLATZ ORBIT CAN BE RIGOROUSLY PROVED UNBOUNDED AND WHICH NEVER REACHES 1.**

Use

`T(n)=n/2` for even `n`,

`T(n)=(3n+1)/2` for odd `n`.

A successful counterexample requires rigorous proof both that the orbit never reaches 1 and that its forward values are unbounded.

Finite survival is not divergence.

### SCOPE

**NONTRIVIAL FINITE CYCLES ARE OUT OF SCOPE.**

Repeated-state detection is allowed only as a computational safety mechanism.

Do not begin CDM3.

### CDM2-R1 OBJECTIVE

CDM2-E1 falsified the theorem-conditioned parity-prefix construction as a post-prefix ranker/generator and found no incremental value from debt margin or completed odd-to-odd valuation load.

This session is a **THEORY-FIRST FILTER REDESIGN AUDIT**.

Its purpose is to identify **at most one** cheap, exact, theorem-linked statistic or structural predicate that:

1. is not algebraically determined by exact K-survival, `K`, and `f_K`;
2. can be computed without using future trajectory information that would leak the endpoint being predicted;
3. has an explicit mathematical mechanism plausibly connecting it to further no-descent/growth;
4. has a finite exact implementation cost suitable for L0/L1;
5. has a predeclared falsification rule capable of killing it.

If no such statistic is found, say so. Do not manufacture a feature merely to keep the programme moving.

### FIRST REQUIRED THEORY AUDIT: THE AFFINE CORRECTION

For a length-K parity word,

`T^K(n)=(3^{f_K} n+c_K)/2^K`.

Since CDM2-E1 showed that the multiplicative term is already substantially controlled by `f_K`, audit the remaining exact affine correction `c_K` first.

Determine rigorously, before any campaign:

- exact formulae/bounds for `c_K` under the shortened map;
- how `c_K` depends on parity arrangement at fixed `K,f_K`;
- whether `c_K/n` is provably negligible in the scale regime relevant to a least divergent start above current verified coverage;
- whether any scale-free exact transformation of the correction has a theorem-linked relationship to future no-descent rather than merely encoding the already observed prefix.

If the affine correction cannot plausibly carry incremental information at relevant scales, mark that route **FAILED** and preserve the proof/obstruction.

### SECONDARY THEORY SOURCE, ONLY IF NEEDED

If the affine-correction route is killed, audit at most one alternative structure arising directly from already validated exact pruning mathematics, such as a non-leaking smaller-preimage/path-merging structural quantity.

Do not revive arbitrary modular histograms, peak metrics, parity-run metrics, broad feature engineering, or machine-learned scores.

### COMPUTE RULE

This is not a production trajectory session.

Before any executable experiment:

1. freeze a new finite CDM2-R1 envelope;
2. state exact generator/domain, symbolic-node ceiling, candidate count if any, step ceiling if any, wall/CPU/memory/storage ceilings, stopping conditions, expected information gain, and post-exhaustion action;
3. prefer exact symbolic proof or tiny bounded enumeration over trajectory extension;
4. no budget extension because an object looks interesting.

A reasonable default ceiling is no larger than CDM2-E1 and should normally be much smaller. Any substantive trajectory calibration requires its own separately justified precommitment.

### REQUIRED OUTPUTS

Produce:

- a durable CDM2-R1 theory/design report;
- proofs or exact finite checks for every claimed independence/obstruction;
- minimal implementation/tests only if needed;
- a frozen compute declaration for any executed experiment;
- updated metric catalog and failure ledger;
- updated experiment/compute ledgers if computation occurs;
- updated roadmap and `START_HERE.md`.

### END-OF-SESSION DECISION

Finish by answering:

**IS THERE NOW A CHEAP, EXACT, NON-TAUTOLOGICAL FILTER WITH A MATHEMATICALLY MOTIVATED REASON TO PREDICT POST-CONDITIONING PERSISTENCE?**

If yes, specify one exact bounded CDM2-E2 calibration design.

If no, keep CDM3 blocked and state the next mathematical obstruction/design task.

Do not start CDM2-E2 unless the repository explicitly authorizes it after the redesign. Do not start CDM3.

### PERMANENT PHILOSOPHY

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
