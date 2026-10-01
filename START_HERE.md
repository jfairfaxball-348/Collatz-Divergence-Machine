# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM2-R1 complete; no CDM2-E2 authorized; lift-quotient theorem audit is next**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach `1`
- Nontrivial finite cycles: **out of scope**
- Current authoritative redesign report: `experiments/CDM2_R1_REPORT.md`
- Current machine-readable CDM2 result: `experiments/CDM2_E1_RESULT.json`
- Latest compute policy: `docs/COMPUTE_BUDGET.md`
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as audited on 2026-10-01
- Current explicit candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both resolved; **no scientific divergence candidate**
- Current symbolic frontier: exact parity/residue construction, debt arithmetic, affine parity-word representation and tight correction bounds, lift-quotient future-block bijection obstruction, mod-9 smaller-preimage pruning, path-merging pruning, and bounded CDM2-E1 calibration results
- Current certification frontier: none
- CDM3 generator: **NONE AUTHORIZED**
- Immediate next bounded task: **CDM2-R2 — Lift-Quotient Constraint Theorem Audit**
- Forbidden next action: CDM2-E2 without a new theorem-linked statistic, high-range explicit search, larger brute-force calibration, broad modular feature engineering, GPU/distributed scaling, or CDM3

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

## CDM2-R1 frozen result

**Claim status: PROVED for the exact identities/obstructions; FAILED for the proposed ranking routes.**

Authoritative report: `experiments/CDM2_R1_REPORT.md`.

For odd positions `i_1<...<i_f` in a length-`K` source-parity word,

`c_K = sum_{r=1}^f 2^{i_r}3^{f-r}`

with tight bounds

`3^f-2^f <= c_K <= 2^{K-f}(3^f-2^f)`.

At fixed `K,f`, `c_K` determines the same low-`K)-bit residue that determines the already observed prefix. Writing every lift as `n=r+2^Kq` gives

`T^K(n)=3^f q+b`.

Because `3^f` is invertible modulo every `2^s`, one fixed prefix realizes every possible next length-`s` parity block as `q` varies. Prefix-only affine correction therefore does not constrain the future parity block across lifts.

Above the current discovery frontier and at `K<=24`,

- `c_K/n<2^-32`;
- the actual affine contribution to `T^K(n)/n`, `c_K/(2^K n)`, is (<2^-56).

The secondary smaller-preimage/path-merging audit also failed to produce a ranker: after the exact smaller-preimage kill is absent, any quantitative clearance is algebraically an observed endpoint/start magnitude margin conditioned on an inverse residue word.

**End decision:** no new cheap exact non-tautological persistence filter exists in the audited routes. **CDM2-E2 is not authorized. CDM3 remains blocked.**

## CDM2 end decision

**No cheap filter or metric tested in CDM2-E1 demonstrated reproducible information value beyond its conditioning event, and CDM2-R1 found no replacement statistic in the affine-correction or quantitative smaller-preimage routes.**

Accordingly:

> **CDM2-E2 IS NOT AUTHORIZED, AND CDM3 HAS NO AUTHORIZED GENERATOR.**

Do not advance the failed parity-prefix generator merely to keep the project moving.

## Authoritative kickoff prompt

### CDM2-R2 — LIFT-QUOTIENT CONSTRAINT THEOREM AUDIT

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository—not conversational memory—as the authoritative research state.

Before doing any research or computation, read and obey the full **Read before working** list above, plus `experiments/CDM2_R1_REPORT.md`.

#### ROOT OBJECTIVE

The only root objective remains:

**FIND AN EXPLICIT POSITIVE INTEGER WHOSE SHORTENED-COLLATZ ORBIT CAN BE RIGOROUSLY PROVED UNBOUNDED AND WHICH NEVER REACHES 1.**

Use `T(n)=n/2` for even `n`, and `T(n)=(3n+1)/2` for odd `n`.

Finite survival is not divergence. Nontrivial finite cycles remain out of scope.

#### FROZEN INPUT FROM CDM2-R1

For a fixed observed length-`K` prefix residue `r mod 2^K`, with `f` odd steps and affine correction `c_K`, every lift is

`n=r+2^Kq`

and

`T^K(n)=3^f q+b`.

Modulo every `2^s`, `q -> 3^f q+b` is bijective. Therefore prefix-only affine data admit every possible next length-`s` parity block across lifts.

Quantitative smaller-preimage/path-merging clearance was also killed as a ranker because, once the exact kill is absent, its margin is only an observed endpoint/start magnitude inequality.

Do not undo these route kills without a new proof.

#### CDM2-R2 OBJECTIVE

Audit one question only:

> Does least-divergent minimality, exact inverse-tree exclusion, or another already proved necessary condition impose a nontrivial restriction on the lift quotient `q=(n-r)/2^K` — equivalently on the next parity block — **without computing that future block**?

A qualifying result must be an exact theorem or exact structural predicate, not a correlation.

If such a restriction exists, prove its hypotheses precisely and show why it can carry incremental information beyond exact K-survival, `K`, and `f_K`.

If no such restriction exists in the audited mathematics, preserve the obstruction. Do not manufacture modular features, residue histograms, learned scores, peak metrics, parity-run metrics, or throughput campaigns.

#### COMPUTE RULE

This is theory first. Before any executable check, freeze a finite envelope with domain, node/candidate/step ceilings if applicable, wall/CPU/memory/storage ceilings, stopping rule, expected information gain, and post-exhaustion action.

Prefer symbolic proof. Do not run CDM2-E2 in this session unless the repository is explicitly updated to authorize it **after** a qualifying theorem is established.

#### REQUIRED OUTPUTS

Produce a durable CDM2-R2 theorem/obstruction report. Preserve proofs and negative findings. Update the metric catalog, failure ledger, roadmap, and this file. Update compute/experiment ledgers only if computation occurs.

#### END DECISION

Finish by answering whether the lift quotient is now subject to a cheap exact theorem-linked restriction that plausibly predicts post-conditioning persistence.

If yes, specify exactly one bounded CDM2-E2 calibration design, but do not execute it unless separately authorized.

If no, keep CDM2-E2 and CDM3 blocked and state the next mathematical obstruction.

#### PERMANENT PHILOSOPHY

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
