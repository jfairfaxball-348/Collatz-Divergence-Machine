# CDM2-E1 — Theorem-Conditioned Parity-Prefix Survivor-Enrichment Calibration

**Session:** CDM2 — Filter and Metric Design  
**Date:** 2026-10-01  
**Root objective:** unchanged: an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.  
**Cycle policy:** nontrivial finite cycles remain out of scope.  
**Experiment claim status:** **COMPUTATIONAL-EVIDENCE**.  
**Counterexample claim:** **NONE**.

Machine-readable aggregate: `experiments/CDM2_E1_RESULT.json`.

## 1. Question and falsification rule

CDM2-E1 asked whether theorem-linked parity-prefix conditioning predicts **additional first-descent persistence after the prefix that was conditioned to survive**.

The precommitted generator rule required a positive conditioned-minus-control survival difference at both `2K` and `4K`, in the pooled sample and in both deterministic matched replication folds. The final 512-step endpoint was descriptive because it could be sparse.

Failure meant: mark the parity-prefix construction **FAILED as a ranker/generator** and retain valid theorem-linked pieces only as exact pruning.

## 2. Frozen envelope and process correction

The envelope was frozen before the substantive run in `docs/COMPUTE_BUDGET.md`:

- `K=24`;
- <=2,000,000 symbolic nodes;
- <=4,096 conditioned and <=4,096 controls;
- deterministic exactly 60-bit representatives, `2^59 <= n < 2^60`;
- deterministic SHA-256 lift tag `CDM2-E1-v1`;
- <=512 exact shortened-map steps, stop on first descent;
- 4096-bit peak ceiling;
- 60 wall seconds / 60 CPU-seconds;
- 512 MiB memory / 50 MiB storage;
- zero L2 promotions.

The first full post-freeze execution finished below 60 seconds but was **SUPERSEDED** because report audit found that the driver still encoded the earlier provisional 180-second internal guard. That result was not accepted as authoritative. The driver was corrected at `2a90b45cd9876c1e039ddf1da91c42b849a1e81d`, the bounded threshold test was added at `0fb67ff1db89064d33f66f4126d876937a02c34f`, and the correction was frozen in `docs/COMPUTE_BUDGET.md` at `f073dc77d5a1f49cd1ffafb60592137be56eadec`.

The authoritative replay passed 7/7 CDM2 tests and reproduced the same deterministic sample digests and endpoint counts.

## 3. Exact machinery

### 3.1 Parity debt

For a length-`j` prefix with `f_j` odd source steps,

`D(j)=485 f_j-306j`.

CDM2 implements exact integer debt, every-prefix positivity, `parity_debt_min`, and `parity_debt_end`.

### 3.2 Exact parity-word residue classes

The implementation recursively constructs the unique residue modulo `2^K` for each source-parity word and validates the parity prefix by exact replay of its deterministic representative.

### 3.3 Exact pruning

The experiment applied:

- every-prefix debt positivity;
- exact low-bit/canonical descent pruning;
- exact mod-9 smaller-preimage witnesses;
- exact path-merging witnesses into a smaller start.

External verified ranges were not converted into local basin certificates.

## 4. A bounded equivalence exposed by the design

**PROVED for the declared CDM2-E1 regime.**

For every prefix length `1<=j<=24`, exact finite checking gives

`485 f-306j>0  <=>  3^f>2^j`.

For a prescribed parity prefix,

`T^j(n)=(3^f n+c)/2^j`

with `c>=0`.

If the debt is positive, `3^f>2^j`, so `T^j(n)>n`.

If the debt is nonpositive, then through `j<=24` one has `f<=15`. A crude exact bound on the affine correction is

`c < 24 * 2^24 * 3^15 < 2^53`.

Every CDM2-E1 representative has `n>=2^59`, while `2^j-3^f` is a positive integer. Therefore

`(2^j-3^f)n > c`

and `T^j(n)<n`.

Thus, in this exact 60-bit / `K<=24` calibration regime:

> every-prefix debt positivity is equivalent to exact no-descent through the prefix.

This explains an important design consequence: once controls are properly required to be exact `K`-survivors, the binary debt screen itself cannot provide independent arm-level information. The experiment can still test whether **debt margin**, parity arrangement, or valuation load adds information beyond that conditioning event.

## 5. Symbolic and pruning counts

| Quantity | Exact count |
|---|---:|
| symbolic nodes visited | 735,398 |
| killed by nonpositive debt | 81,119 |
| killed by additional canonical low-bit descent after debt | 0 |
| legal length-24 leaves | 286,581 |
| killed by mod-9 smaller-preimage rule | 127,293 |
| killed by path-merging rule | 23,425 |
| deterministic representatives eligible after pruning | 135,863 |

The representative-level exact-descent check killed zero additional objects, consistent with the bounded equivalence above.

The mod-9 rule removed about 44.42% of legal leaves and path merging a further about 8.17%; 47.41% remained eligible. These are **exact pruning economics**, not evidence of divergence.

## 6. Matched samples

Both arms contained exactly 4,096 deterministic representatives.

The `f_K` distribution was matched exactly:

| `f_K` | each arm |
|---:|---:|
| 16 | 1,433 |
| 17 | 1,409 |
| 18 | 797 |
| 19 | 338 |
| 20 | 94 |
| 21 | 22 |
| 22 | 1 |
| 23 | 2 |

Sample digests:

- conditioned: `90da5ddc9b0bf99605a96d244ff57f4852bf9becc7a6b2886dcc6c8807ed8108`
- control: `128a0158765027751a5b7ee811493efe3c34a31590ed3a6fd3c2afd5533b14ce`

## 7. Primary endpoints

| Endpoint | Conditioned | Control | conditioned - control |
|---|---:|---:|---:|
| survive through `2K=48` | 866/4096 = 21.143% | 914/4096 = 22.314% | -1.172 percentage points |
| survive through `4K=96` | 75/4096 = 1.831% | 71/4096 = 1.733% | +0.098 percentage points |
| survive through 512 | 0/4096 | 0/4096 | 0 |

Descriptive normal approximations for the risk difference are about [-2.958, +0.614] percentage points at 2K and [-0.475, +0.671] percentage points at 4K. Wilson intervals for each arm are stored in the executable result and were treated as descriptive model-based uncertainty, not random-sampling guarantees.

**COMPUTATIONAL-EVIDENCE:** there is no pooled post-prefix enrichment.

### Deterministic replication folds

Fold 0 (`n=2049` each):

- 2K: 439 vs 439, difference 0;
- 4K: 31 vs 44, difference -0.634 percentage points.

Fold 1 (`n=2047` each):

- 2K: 427 vs 475, difference -2.345 percentage points;
- 4K: 44 vs 27, difference +0.830 percentage points.

The directions disagree across folds. The precommitted reproducibility rule is **not met**.

## 8. Stratification by `f_K`

The dominant strata do not show a stable direction:

| `f_K` | n each | 2K conditioned/control | 4K conditioned/control |
|---:|---:|---:|---:|
| 16 | 1,433 | 97 / 100 | 5 / 6 |
| 17 | 1,409 | 238 / 270 | 19 / 16 |
| 18 | 797 | 255 / 277 | 17 / 27 |
| 19 | 338 | 194 / 177 | 20 / 12 |
| 20 | 94 | 60 / 69 | 10 / 9 |
| 21 | 22 | 19 / 18 | 4 / 0 |
| 22 | 1 | 1 / 1 | 0 / 1 |
| 23 | 2 | 2 / 2 | 0 / 0 |

The tiny high-`f_K` strata are too sparse to support a separate claim. No representative in any stratum survived to 512.

## 9. Incremental metric information

AUC=0.5 is no discrimination. These AUCs are deterministic finite-population diagnostics, not probability claims.

| Metric | raw 4K AUC | 4K AUC within `f_K` | further conditioning | CDM2 disposition |
|---|---:|---:|---:|---|
| `parity_debt_end` | 0.7600 | **0.5000** | — | **DEMOTE** to binary necessary screen |
| `parity_debt_min` | 0.5129 | **0.4993** | — | **FAILED** as ranker |
| completed odd-to-odd valuation load | 0.5497 | 0.4869 | **0.4952** within `f_K` + debt-min | **FAILED** as independent ranker |
| odd-step density | — | — | exactly `f_K/K` | matching/interpreting variable only |

The raw endpoint-debt AUC is entirely explained by `f_K`: at fixed `K`, `D(K)=485f_K-306K`. After exact `f_K` matching it has no remaining rank information.

## 10. Outcome-only quantities

Peak/start ratio was not used for selection. Median peak/start ratio was approximately 36.491 in both arms. Maxima differed substantially, but peak extremality is already a preserved failed standalone route and is not promoted.

Post-prefix path-merging witnesses were observed in 3,309 conditioned and 3,236 control trajectories before their descent/horizon stop. Merge depth remains an operational/redundancy quantity, not a growth score.

## 11. Compute economics

Authoritative replay:

- wall time: 12.4426 s;
- CPU time: 12.4354 s;
- wall time per selected representative: about 0.001519 s;
- wall time per legal symbolic leaf: about 0.0000434 s;
- memory peak: not instrumented; no memory-ceiling event was observed;
- storage: aggregate result/report only, far below the 50 MiB ceiling;
- L2 promotions: zero.

If the four predeclared disposition decisions are counted as useful calibration findings (generator, endpoint debt, minimum debt, valuation load), the run cost about 3.11 wall seconds per disposition. This is only an engineering accounting convention, not a mathematical metric.

## 12. CDM2-E1 dispositions

1. **FAILED — theorem-conditioned parity-prefix construction as a ranker/generator.** It showed no reproducible post-prefix enrichment after exact matching on what the prefix survival already guarantees.
2. **PROVED / KEEP — every-prefix debt positivity as a necessary least-divergent screen in its valid theorem scope.** In this bounded calibration it is also equivalent to K-survival, so it supplies no extra ranking signal after K-survival is conditioned on.
3. **FAILED — debt magnitude as a ranker among legal survivors.** Endpoint debt collapses to `f_K`; minimum debt is chance-level after `f_K` stratification.
4. **FAILED — completed odd-to-odd valuation load as an independent ranker.**
5. **PROVED / KEEP — exact parity-word/residue mapping, mod-9 smaller-preimage pruning, and path-merging pruning** at their justified scope.
6. **KEEP operationally — exact first descent and merge depth.**
7. **FAILED remains frozen — peak chasing, parity-run chasing, and magnitude-only brute force.**

No conclusion above is divergence evidence.

## 13. CDM2 end-of-session decision

**COMPUTATIONAL-EVIDENCE / FAILED generator decision:** no cheap metric tested in CDM2-E1 demonstrated reproducible information value beyond its conditioning event.

Therefore **CDM3 has no authorized generator from CDM2-E1**. Advancing the parity-prefix construction anyway would violate the precommitted falsification rule.

The correct next bounded task is not a high-range search. CDM2 should remain open for a narrowly scoped **filter-redesign audit** whose first obligation is to identify a theorem-linked statistic that is not algebraically determined by exact K-survival and `f_K`. No new trajectory campaign should be authorized until such a statistic has a clear incremental-information hypothesis and a new frozen envelope.
