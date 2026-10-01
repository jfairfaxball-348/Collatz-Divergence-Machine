# CDM2-R1 — Non-Tautological Filter Redesign Audit

**Session:** CDM2-R1 — theory-first filter redesign  
**Date:** 2026-10-01  
**Root objective:** unchanged: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.  
**Cycle policy:** nontrivial finite cycles remain out of scope.  
**Session type:** theory/design audit only.  
**Executable computation:** **NONE**. No candidate trajectories, symbolic enumeration, or calibration campaign were run in CDM2-R1.  
**Counterexample claim:** **NONE**.

## 1. End result

**Decision:** **NO** cheap, exact, non-tautological filter was found that currently has a mathematically motivated reason to predict post-conditioning persistence.

The required affine-correction route is **FAILED as a post-conditioning ranker**. The secondary smaller-preimage/path-merging quantitative route is also **FAILED as a post-conditioning ranker**. The exact binary smaller-preimage/path-merging predicates remain valid pruning rules.

Therefore:

- **CDM2-E2 is not authorized.**
- **CDM3 remains blocked.**
- No production trajectory search is justified by this session.

The next mathematical task is to determine whether least-divergent minimality or exact inverse-tree constraints impose any nontrivial restriction on the **lift quotient / future parity block** after a surviving prefix. Prefix-only affine data do not.

## 2. Affine formula under the shortened map

Let the source-parity word be

`epsilon_0,...,epsilon_{K-1}`, with `epsilon_i in {0,1}`,

where `epsilon_i=1` means the source state at step `i` is odd. Define

`F_j = sum_{0<=i<j} epsilon_i`, so `F_K=f_K`.

Write

`T^j(n) = (3^{F_j} n + c_j)/2^j`.

Then `c_0=0` and exact one-step composition gives

`c_{j+1} = 3^{epsilon_j} c_j + epsilon_j 2^j`.

Therefore

`c_K = sum_{i=0}^{K-1} epsilon_i 2^i 3^{F_K-F_{i+1}}`.

If the odd positions are

`0 <= i_1 < i_2 < ... < i_f <= K-1`,

then equivalently

`c_K = sum_{r=1}^{f} 2^{i_r} 3^{f-r}`.

All formulae here are exact integer identities.

## 3. Tight bounds and arrangement dependence

For `f=0`, `c_K=0`.

For `f>=1`, the ordering constraints imply

`r-1 <= i_r <= K-f+r-1`.

Termwise substitution therefore gives the tight bounds

`3^f-2^f <= c_K <= 2^{K-f}(3^f-2^f)`.

The lower bound is attained when the `f` odd steps occupy the first `f` positions. The upper bound is attained when they occupy the last `f` positions.

Thus, at fixed `K,f`, moving odd steps later increases the affine correction. The correction is not determined by `K` and `f` alone.

More strongly, at fixed `K,f`, `c_K` is an exact encoding of the observed parity word. The length-`K` word corresponds to the unique starting residue `r mod 2^K`, and the affine identity requires

`3^f r + c_K == 0 (mod 2^K)`.

Since `3^f` is invertible modulo `2^K`,

`r == -c_K (3^f)^{-1} (mod 2^K)`.

Hence two distinct length-`K` parity words with the same `f` cannot have the same `c_K`: equal `c_K` would give equal residue and therefore the same parity word.

**Interpretation:** an exact injective transformation of `c_K` does not create new structure; it repackages the already observed prefix.

## 4. Size of the correction above the present discovery frontier

Let

`N0 = 2075*2^60`.

The current repository treats `n<N0` as externally covered for discovery purposes, with the stated provenance limitations. Since `2075>2048`,

`N0 > 2^71`.

From the tight bound,

`0 <= c_K/n <= 2^{K-f}(3^f-2^f)/n < 2^{K-f}3^f/N0`.

For the CDM2-E1 prefix scale `K<=24`, the worst case over `f` is `f=K`, so

`c_K/n < 3^24/2^71`.

Because `3^24<2^39`,

`c_K/n < 2^-32`.

So at the existing `K=24` scale, `c_K/n` is uniformly tiny for a least divergent start above the present discovery frontier.

However, CDM2-R1 does **not** claim that `c_K/n` is uniformly tiny for arbitrarily large `K`. The crude worst-case bound can cease to be small when `K` approaches `log_3 n`.

The quantity that actually enters the endpoint/start ratio is smaller:

`T^K(n)/n = 3^f/2^K + c_K/(2^K n)`.

Using the tight bound,

`0 <= c_K/(2^K n) <= ((3/2)^f-1)/n < (3/2)^K/N0`.

At `K<=24`, `(3/2)^24<2^15`, hence

`c_K/(2^K n) < 2^-56`.

Thus at the calibrated CDM2 scale the affine correction makes a rigorously negligible contribution to the endpoint/start ratio. This does **not** by itself prove lack of predictive value, because future parity is discontinuous in the integer state. The decisive obstruction is structural, below.

## 5. Lift theorem: the prefix correction does not constrain the future parity block

Fix a realizable length-`K` parity word, with `f=f_K`, affine correction `c=c_K`, and unique starting residue `r mod 2^K`.

Every lift has the form

`n = r + 2^K q`.

Define the integer

`b = (3^f r + c)/2^K`.

Then the exact endpoint is

`T^K(n) = 3^f q + b`.

Now fix any future block length `s>=1`. Modulo `2^s`,

`q -> 3^f q + b`

is a bijection because `3^f` is odd and therefore invertible modulo `2^s`.

Consequently, as `q` ranges through the residues modulo `2^s`, `T^K(n)` ranges through **every** residue modulo `2^s` exactly once.

But a length-`s` future source-parity word is itself in bijection with the endpoint residue modulo `2^s`. Therefore:

> **PROVED:** for a fixed observed prefix, hence fixed `K,f,c_K`, the lifts realize every possible next length-`s` parity word.

In any prefix family for which exact `K`-survival holds throughout sufficiently large lifts — in particular the multiplier-safe prefixes used in the bounded CDM2-E1 regime — conditioning on `K`-survival does not remove this future-block freedom.

This is the main obstruction. An exact scale-free statistic depending only on `K,f,c_K` cannot have a theorem asserting that one value forces a favorable future parity pattern across lifts, because every future parity block occurs for that same prefix data.

A normalization involving the exact start, such as `c_K/n`, does not rescue the route. At fixed prefix `c_K` is constant while `n=r+2^Kq`; the normalization is therefore essentially a reciprocal-magnitude encoding of the lift. No theorem was found connecting it to future no-descent, and magnitude-only ranking is already a preserved failed route.

**Affine-correction disposition: FAILED as a post-conditioning ranker.**

The exact affine formula remains useful for symbolic identities and proofs; the failure is specifically the proposed use of the correction as an incremental persistence filter.

## 6. Secondary audit: quantitative smaller-preimage / path-merging structure

Only one secondary theory source was audited: exact smaller-preimage/path-merging mathematics already used for pruning.

Suppose an observed state `m` on the candidate suffix has a legal predecessor `p` described by a length-`d` inverse parity word with `a` odd steps and forward affine constant `c_u`. Exact forward composition says

`m = (3^a p + c_u)/2^d`,

hence

`p = (2^d m - c_u)/3^a`.

If this is a positive integer with `p<n`, then `p` reaches `m` and shares the full suffix from `m` onward. If `n` were the least divergent start, `p` would be a smaller divergent start, a contradiction.

Therefore the exact predicate

`there exists a legal positive preimage p<n`

is a valid least-divergent **kill rule**.

Now consider any quantitative “clearance” after the kill is absent. The condition `p>=n` is exactly

`m >= (3^a n + c_u)/2^d`.

Thus every signed distance from the smaller-preimage boundary is algebraically a rescaling of the already observed endpoint/start magnitude margin, conditioned on the inverse residue word.

This produces a dichotomy:

1. if `p<n`, the theorem gives an exact kill and the object should be pruned;
2. if `p>=n`, the quantitative margin is an observed-prefix magnitude quantity, with no theorem found that constrains the future parity block after `m`.

Counting legal inverse words, residue opportunities, or near misses without an implication theorem would revert to modular/residue feature engineering, which is explicitly excluded by project policy.

**Secondary-route disposition: FAILED as a post-conditioning ranker. KEEP the exact binary smaller-preimage/path-merging predicates as pruning only.**

## 7. Why no executable experiment was justified

The theory audit supplied a proof-level obstruction before any calibration campaign was needed:

- `c_K` exactly repackages the observed parity prefix;
- the lift quotient leaves the entire future parity block free;
- quantitative smaller-preimage clearance reduces to an observed magnitude margin once the exact pruning event is absent.

A survivor-enrichment experiment on either route would therefore lack the required pre-experiment mathematical mechanism. Running one merely to look for correlation would violate the “do not manufacture a feature” and “theory first” instructions.

Accordingly CDM2-R1 executed:

- zero candidate trajectories;
- zero symbolic enumeration nodes;
- zero additional Collatz steps;
- zero L2 promotions;
- no wall/CPU campaign envelope.

No experiment or compute ledger update is required beyond this explicit zero-compute record.

## 8. End-of-session decision

### IS THERE NOW A CHEAP, EXACT, NON-TAUTOLOGICAL FILTER WITH A MATHEMATICALLY MOTIVATED REASON TO PREDICT POST-CONDITIONING PERSISTENCE?

**NO.**

No CDM2-E2 calibration is authorized, because there is no surviving statistic to calibrate.

**CDM3 remains blocked.**

## 9. Next mathematical obstruction/design task

The unresolved object is the **lift quotient**

`q = (n-r)/2^K`

for a surviving prefix residue `r mod 2^K`.

The affine-correction audit proves that prefix data alone do not restrict the next parity block: all of that freedom lives in `q`.

The next bounded theory task should therefore be:

> **CDM2-R2 — Lift-Quotient Constraint Theorem Audit:** determine whether least-divergent minimality, exact inverse-tree exclusions, or another already proved necessary condition imposes any nontrivial congruence or structural restriction on `q` (equivalently on the next parity block) without computing that future block. If no such restriction can be derived, preserve the obstruction and keep CDM3 blocked.

This is a theorem/obstruction task, not a trajectory campaign. It must not become broad modular feature engineering.

## 10. Permanent interpretation

No finite-survival evidence was generated in this session. No candidate was found. Nothing here is evidence that the Collatz conjecture is false.

The useful result is negative but structural: the exact affine correction and quantitative refinements of current smaller-preimage pruning do not presently bridge an observed surviving prefix to a constrained future. That missing bridge, rather than additional throughput, is the current bottleneck.
