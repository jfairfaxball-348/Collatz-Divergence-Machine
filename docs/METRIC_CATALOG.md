# Metric Catalog

Metrics are modular search diagnostics. They are not proof unless a separate theorem gives them proof significance.

| Metric | Exact definition | Exact? | Complexity | CDM1 disposition |
|---|---|---|---|---|
| `first_descent_time` | least `k>=1` with `T^k(n)<n`, else null in prefix | yes | O(s) | KEEP as exact screen/label; DEMOTE as standalone ranker |
| `max_excursion` | max state in finite prefix | yes | O(s) | KEEP as outcome; FAILED as standalone promoter |
| `peak_bit_length` | bit length of maximum | yes | O(s) | KEEP as resource metric only |
| `peak_start_ratio` | exact rational maximum/start | yes | O(s) | KEEP as outcome; FAILED as standalone promoter |
| `odd_step_density` | odd-source transitions / transitions | yes rational | O(s) | KEEP for interpretation; prefer exact debt for decisions |
| `max_parity_run` | longest identical source-parity run | yes | O(s) | DIAGNOSTIC only; FAILED as standalone promoter |
| `window_log_growth` | display-only `log2(end/start)/steps` | approximate | O(s) | DISPLAY only; never an exact promotion predicate |
| `trajectory_merge_depth` | first step hitting trusted tail | yes | O(s) with hash lookup | KEEP as cache/operational metric |
| `residue_mod_3_8` | source-state counts mod 3 and mod 8 | yes | O(s) | DEMOTE; exact theorem-linked sieve predicates preferred |

`s` is the number of computed transitions.

Implementations live in `src/collatz_divergence_machine/metrics/registry.py`. CDM1 changes recommendations only; CDM2 must decide whether and how to implement new metrics.

## CDM1 proposed calibration metrics for CDM2

### `parity_debt_end`

For a shortened-map prefix of length `k` with `f_k` odd source steps,

`D(k) = 485*f_k - 306*k`.

Record `D(s)` at the end of the measured prefix.

**Exactness:** exact integer.  
**Cost:** O(1) update per step.  
**Theory link:** for a least divergent start above the current externally verified frontier, Angeltveit's descent theorem plus minimality forces `D(k)>=1` for every positive prefix.  
**Calibration question:** among prefixes already satisfying the hard condition, does larger endpoint debt predict additional no-descent survival?  
**Demotion rule:** if not, retain debt positivity as a hard necessary-condition filter but do not rank by debt magnitude.

### `parity_debt_min`

`min_{1<=j<=s} (485*f_j - 306*j)`.

**Exactness:** exact integer.  
**Cost:** O(1) update per step.  
**Theory link:** the hard candidate condition is every-prefix positivity, so the minimum margin is the natural exact summary.  
**Calibration question:** does a larger minimum margin enrich for post-prefix persistence after matching on total odd count?  
**Demotion rule:** if no out-of-sample enrichment appears, use only the binary every-prefix predicate.

### `odd_to_odd_valuation_load`

For successive odd-to-odd moves, record `a_i=v2(3x_i+1)`, cumulative `A_m=sum a_i`, and odd-step count `m`.

**Exactness:** exact integer data.  
**Cost:** cheap at L1; requires odd-to-odd representation.  
**Theory link:** multiplicative balance is controlled by `3^m/2^A_m`, with an exact positive affine correction.  
**Calibration question:** does valuation load add information beyond shortened-map parity debt?  
**Kill/demotion rule:** if it adds no predictive value, do not maintain it as an independent ranker.

## CDM1 route kills affecting metrics

**PROVED finite-family counterexample to naive ranking:** for `n=2^p-1`, the first `p` shortened steps are odd and `T^p(n)=3^p-1`. Thus arbitrarily long initial odd runs, arbitrarily long no-descent prefixes, and arbitrarily large finite peak/start ratios can be manufactured.

Therefore these metrics describe finite extremality but do not by themselves justify expensive promotion.

Do not create a large feature set in CDM2. The first experiment should calibrate only theorem-linked parity/debt structure plus a small number of pre-existing outcome/control metrics.


## CDM2-E1 calibrated dispositions — 2026-10-01

Authoritative report: `experiments/CDM2_E1_REPORT.md`. Aggregate result: `experiments/CDM2_E1_RESULT.json`.

### Bounded debt/K-survival equivalence

**Status: PROVED for the declared CDM2-E1 regime.**

For exactly 60-bit representatives and every prefix length `j<=24`, every-prefix `D(j)>0` is equivalent to exact no-descent through that prefix. Consequently the binary debt predicate has no independent ranking information after exact `K`-survival is used as a control condition.

This is a bounded calibration fact, not a replacement for the general least-divergent necessary condition.

### `parity_debt_end`

**CDM2 disposition: DEMOTED to a binary necessary-condition screen / interpretation variable.**

At fixed `K`, endpoint debt is exactly `485 f_K-306K`; its raw 4K AUC was 0.7600 but its 4K AUC within exact `f_K` strata was exactly 0.5000. The apparent raw information was only total odd-count information.

Do not rank candidates by endpoint-debt magnitude without a new theorem or a separately calibrated incremental effect.

### `parity_debt_min`

**CDM2 disposition: FAILED as a ranker; KEEP the sign test only where theorem scope applies.**

Raw 4K AUC was 0.5129; within exact `f_K` strata it was 0.4993. No incremental persistence information was demonstrated.

### `odd_to_odd_valuation_load`

**CDM2 disposition: FAILED as an independent ranker.**

Raw 4K AUC was 0.5497, within-`f_K` AUC 0.4869, and within `f_K` plus debt-min strata 0.4952. Do not maintain it as an independent promotion score.

### `odd_step_density`

**CDM2 disposition: KEEP for interpretation/matching only.**

At fixed `K` it is exactly `f_K/K`. CDM2-E1 matched `f_K` exactly, so odd-step density had no residual arm-level degrees of freedom.

### Exact sieve predicates

**CDM2 disposition: KEEP as exact pruning, not ranking.**

The mod-9 smaller-preimage and path-merging rules removed substantial deterministic redundancy before L1 evaluation. They remain theorem-linked pruning rules at justified provenance; their pruning rate is not divergence evidence.

### Outcome/operational metrics

`peak_start_ratio` remains outcome-only and already FAILED as a standalone promoter. `trajectory_merge_depth` remains operational/cache information. Neither is promoted by CDM2-E1.
