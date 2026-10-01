# CDM1 — State-of-the-Art Divergence-Search and Computational-Reach Audit

**Audit date:** 2026-10-01  
**Scope:** positive-integer shortened Collatz map T(n)=n/2 for even n and T(n)=(3n+1)/2 for odd n.  
**Root objective:** an explicit positive integer whose forward orbit is rigorously proved unbounded and rigorously proved never to reach 1.  
**Cycle policy:** nontrivial finite-cycle research is out of scope. Cycle-only results are not used as research objectives here.

## 0. Audit status and frozen compute

**Claim status: FINITE-VERIFIED.** Before any possible local experiment, CDM1 froze the audit-only envelope in docs/COMPUTE_BUDGET.md. No broad or high-range counterexample search was run. No local trajectory experiment was needed for this audit, so the scientific-promotion count is zero and the local trajectory-compute consumption is zero starts.

The external literature and project pages were researched on 2026-10-01. The repository, not these web pages, remains the authoritative project state after this document is committed.

## 1. Executive findings

1. **FINITE-VERIFIED (external computation):** David Barina's live project page, generated 2026-10-01, reports convergence for every positive starting value below 2075*2^60, approximately 2^71.02. The peer-reviewed 2025 result establishes the slightly smaller round bound 2^71 under the same shortened map. [S1, S2]
2. **FINITE-VERIFIED (external computation with stronger publication provenance):** the 2^71 result is implemented by ascending exact verification: once an orbit falls below its start, convergence follows inductively from already verified lower starts. The implementation uses 128-bit arithmetic with GMP fallback on CPU, distributed work units, checksums, and recorded maxima. Source code is public. [S2]
3. **UNKNOWN:** this audit did not identify an independently completed full recomputation of the entire 2^71 or 2075*2^60 range by a separate modern project. Earlier ranges have substantial independent overlap: the yoyo@home range 87*2^60 was checked twice independently, and smaller ranges have still more independent coverage. [S2, S9]
4. **PROVED:** if any unbounded positive-integer orbit exists for a deterministic self-map of the positive integers, that orbit tends to infinity. This does not add a new certification requirement; it follows automatically from unboundedness because an unbounded orbit cannot repeat a state, and therefore can visit any finite set only finitely often.
5. **PROVED:** if any divergent Collatz start exists, then a least divergent start exists by well-ordering. That least divergent start can never fall below itself. Consequently, divergence existence may be searched for through the mathematically narrower class of no-first-descent starts without losing logical completeness.
6. **PROVED / literature theorem:** Lagarias records the necessary asymptotic parity condition for a divergent shortened-map orbit: if N*(k) counts odd iterates through time k, then liminf N*(k)/k >= 1/log_2(3), approximately 0.63093. [S5]
7. **PROVED / literature theorem:** Angeltveit's 2026 exact descent bound gives a stronger finite-prefix screen in the large-value regime. If all intermediate values are at least 99,781 and 485 f_k <= 306 k, where f_k is the number of odd shortened-map steps, then T^k(n)<n. Therefore a least divergent start above the present verified frontier must satisfy 485 f_k > 306 k at every positive prefix length k. [S3]
8. **FAILED as a standalone promotion idea:** long parity runs, long first-descent times, large peak/start ratios, and large finite peaks are each constructible without divergence structure. In particular, n=2^p-1 has p consecutive odd shortened-map sources and reaches 3^p-1 after p steps, producing arbitrarily long initial growth and unbounded finite peak/start ratios as p grows. These quantities remain useful diagnostics, but not standalone reasons for promotion.
9. **HEURISTIC but audit-supported:** magnitude-only random search immediately above the verified frontier is information-poor. Almost-all descent results, modern sieve algorithms, and the exact parity/residue structure all favor theorem-conditioned parity/residue generation over "pick a huge integer and iterate it."
10. **CDM2 first experiment:** calibrate exact parity-prefix/residue-class filters on a fully known-convergent domain, using an explicit matched-control experiment. The first candidate generator should be a symbolic parity-prefix generator constrained by the every-prefix integer parity-debt 485 f_j - 306 j > 0 and pruned by exact descent/path-merging/preimage rules. Its predictive value must be tested against controls before it is used beyond the verified frontier.

## 2. What has already been computationally verified?

### 2.1 Current reported frontier

| Result | Map convention | Status | Exact reported claim | Provenance interpretation |
|---|---|---|---|---|
| all n < 2075*2^60 (~2^71.02) | shortened T | FINITE-VERIFIED external assertion | every start in the contiguous range is reported convergent | live Barina project page generated 2026-10-01; strong provenance, but extension beyond the paper is not separately peer-reviewed [S1] |
| all n < 2^71 | shortened T | FINITE-VERIFIED external exact computation | every start in the contiguous range converges | peer-reviewed 2025 paper, detailed algorithms, public code, distributed checksums [S2] |
| all n < 87*2^60 | equivalent convergence computation | FINITE-VERIFIED external, independently duplicated | every start was independently checked twice | yoyo@home result as reported by Barina; useful independent overlap below the frontier [S2] |
| all n < 5*2^60 | equivalent convergence computation | FINITE-VERIFIED external overlap | convergence coverage by an independent Oliveira e Silva computation | different software/hardware; older independent overlap [S2, S9] |
| all n < 2^60 | equivalent convergence computation | FINITE-VERIFIED external overlap | at least four projects reported coverage | current Roosendaal status summary [S9] |

MathWorld, updated 2026-09-30, independently reports the current Barina 2075*2^60 figure as the best reported computational limit. This is secondary confirmation of the report, not an independent recomputation. [S10]

### 2.2 What "verified convergence" means in the best computation

**Status: FINITE-VERIFIED.** Barina uses the same shortened map as this repository. The baseline algorithm processes starts in ascending order and may stop a start n when an iterate falls below n, because every smaller positive integer has already been handled. Therefore "first descent" plus the induction over all lower starts establishes eventual arrival at 1 for the entire finite interval. [S2]

This is stronger than merely recording a finite stopping time for isolated values.

The distinctions are:

- **PROVED as logic:** "T^k(n)<n for some k" alone does not prove n reaches 1 unless convergence of that lower value is already justified.
- **FINITE-VERIFIED:** a contiguous ascending computation can convert first-descent checks into finite-range convergence by induction from the base case.
- **FINITE-VERIFIED:** a complete explicit replay from n to 1 also establishes finite-range convergence for that n.
- **UNKNOWN / provenance-dependent:** an inherited basin hit establishes only what the provenance of that basin entry establishes.
- **PROVED:** no finite checked range says anything universal about all larger starting values.

### 2.3 Public reproducibility, checksums, and independent verification

**FINITE-VERIFIED:** Barina's 2025 paper publishes the implementation reference (GitHub repository xbarin02/collatz, paper-pinned commit 53c2a06). Work units contain 2^40 starting values. Server-side records contain checksum/proof-of-work information, overflow counts, the offset of the maximum value encountered, client information, and flags. CPU code uses C with compiler 128-bit integers and GMP for excursions beyond 128 bits; GPU code uses OpenCL. [S2]

**UNKNOWN:** CDM1 found no complete public downloadable archive of all server work-unit records/checksums sufficient to replay the entire 2^71 computation as a compact certificate. The paper establishes that these records exist on the project server, and the worker source is public. Absence of a public archive was not proved; it simply was not identified in the audited sources.

**FINITE-VERIFIED:** older independent coverage is real and useful. Barina reports that yoyo@home independently checked each number twice through 87*2^60. Roosendaal's current status page says 5*2^60 has at least triple coverage and 2^60 has at least four-project coverage. [S2, S9]

**Policy consequence:** neither the peer-reviewed 2^71 result nor the live 2075*2^60 extension is silently converted into a locally certified basin. They are external coverage layers with explicit provenance.

## 3. Extreme finite trajectories: what is informative and what is not

All items in this section are finite trajectories. **None is divergence evidence by itself.**

### 3.1 Stopping/descent records

Oliveira e Silva's 1999 paper defines, under the shortened map, the stopping time s(n) as the first k>0 with T^k(n)<n and the maximum excursion t(n) as the maximum value in the trajectory. His exhaustive computation to 3*2^53 both searched record holders and verified convergence in that interval. [S8]

Roosendaal's current record pages instead use the unshortened map C(n)=3n+1 on odd n and n/2 on even n. Under that convention:

- **FINITE-VERIFIED external record data:** the current status page lists 32 confirmed Glide records, with highest confirmed Glide 1575 at n=180,352,746,940,718,527. A separate Glide table also lists two larger values discovered by Oliveira e Silva (Glide 1614 and 1639) but the current summary does not include them in the confirmed count; CDM therefore preserves that provenance distinction rather than silently upgrading them. [S9, S11]
- **FINITE-VERIFIED external record data:** the current status page lists 147 confirmed Delay records, with highest confirmed Delay 2456 at n=28,019,077,177,231,758,495. A June 2026 progress note reports a possible Delay 2480, not a confirmed record. [S9]
- **HEURISTIC relevance:** total delay is weak for divergence-search ranking because much of it may occur after the trajectory has already fallen below its start. First-descent behavior is closer to the minimal-divergent-start necessary condition.

Map convention matters numerically: a shortened odd step combines an unshortened odd multiplication/addition and the forced following halving. Step counts from the two conventions are not interchangeable.

### 3.2 Path/maximum-excursion records

Barina's shortened-map 2^71 computation found five new path-record starting values:

- 274,133,054,632,352,106,267
- 1,378,299,700,343,633,691,495
- 1,735,519,168,865,914,451,271
- 1,765,856,170,146,672,440,559
- 2,358,909,599,867,980,429,759

The live path-record table gives the final record's shortened-map peak as 494,114,680,693,632,162,318,569,565,806,744,468,898,092. Roosendaal's unshortened-map summary gives approximately 9.88e41 for the corresponding path record: essentially the factor-of-two convention difference caused by retaining the 3n+1 intermediate before the forced division by 2. [S2, S12, S9]

**COMPUTATIONAL-EVIDENCE:** Barina observes that known finite path-record peaks are compatible with the Lagarias-Weiss stochastic prediction that record peak size scales roughly like n^2. This is an empirical consistency observation, not evidence that any orbit is unbounded. [S2]

### 3.3 A constructive warning against naive growth metrics

**PROVED:** for n_p=2^p-1 and 0<=j<=p,

T^j(n_p)=3^j 2^(p-j)-1.

For j<p these source states are odd. Hence the first p shortened steps are all odd and T^p(n_p)=3^p-1.

Consequences:

- max_parity_run can be arbitrarily large by construction;
- finite first-descent time can be forced arbitrarily large;
- peak/start ratio is at least approximately (3/2)^p and therefore can be arbitrarily large;
- a long high-growth parity prefix is not, by itself, a divergence mechanism.

**FAILED:** promoting candidates merely because max_parity_run, first_descent_time, max_excursion, or peak_start_ratio is large.

**Useful residual role:** these remain descriptive diagnostics and can be used as labels in calibration, but promotion requires an additional structural hypothesis capable of continuing indefinitely.

### 3.4 What record trajectories are actually useful for

**HEURISTIC, falsifiable:** record trajectories are best used as positive controls for filter calibration. A proposed cheap filter that has no enrichment at all for independently defined finite extremals is less interesting as a sustained-growth detector. Conversely, recovering records does not prove the filter points toward divergence; it only shows the filter captures known finite extremality.

The most useful structural objects to extract from records are:

- exact shortened-map parity prefixes;
- prefix odd counts and exact parity-debt;
- exact affine parity-word coefficients;
- odd-to-odd 2-adic valuations v2(3n+1);
- exact residue classes responsible for the prefix;
- path-merging events and first descent.

The raw decimal size of a record is not itself structural information.

## 4. Exact acceleration and search algorithms

### 4.1 Established exact methods

| Technique | Exactness | Main idea | Recommended CDM stage |
|---|---|---|---|
| odd-to-odd acceleration | exact if v2(3n+1) is retained | map odd n to (3n+1)/2^a with a=v2(3n+1) | L1/L2 and structural analysis |
| parity-word / residue stepping | exact | first k source parities depend only on n mod 2^k; T^k has an exact affine form | L0/L3 |
| 2^k descent sieve | exact under its theorem | precompute low-bit classes whose k-step image is below the start | L0 |
| mod 3^k / mod 9 preimage sieve | exact | eliminate starts already lying on paths of smaller starts | L0 |
| path-merging sieve | exact with trusted smaller tail | eliminate a candidate when its path joins a smaller trusted path | L0/L1 |
| precomputed jump tables | exact for endpoints | perform k exact steps from low bits and high-part affine update | L1 |
| compressed bitvectors | exact when derived from exact sieve predicates | represent many low-bit exclusion decisions compactly | L0 |
| batch/congruence-class processing | exact | process starts sharing low bits together | high-throughput L1 |
| arbitrary-precision fallback | exact | escape fixed-width overflow without losing states | rare L2 replay |
| distributed work units + checksums | engineering verification, not theorem certification | partition the finite computation and detect mismatches | large external-style finite campaigns |

Barina's exact identity for block stepping is

T^k(2^k n_H+n_L) = 3^odd(n_L) n_H + T^k(n_L),

which is also the basis of exact parity-prefix affine work already scaffolded in this repository. [S2]

Angeltveit gives the equivalent exact low-bit identity

T^k(n_0+a2^k)=T^k(n_0)+3^f a,

where f is the number of odd steps in the common parity prefix. He also records that every binary parity word of length M corresponds to exactly one residue class modulo 2^M. [S3]

### 4.2 Angeltveit's 2026 algorithm: important but not a new frontier result yet

**COMPUTATIONAL-EVIDENCE:** Angeltveit's February 2026 preprint describes a recursive low-bit search with four exact sieves, precomputed 2^B bitvectors, and CPU/GPU implementations. The paper reports completed GPU verification through 2^60 in 24.4 hours on an RTX 3060 and cross-checks path records below 2^60. CPU and GPU versions compute matching checksums on sampled comparisons. [S3]

**HEURISTIC / prospective:** the same paper estimates that its method could make 2^75 or 2^77 verification practical with substantial compute. Those are proposed resource estimates, not completed verified ranges as of the audited version. The current frontier remains Barina's live 2075*2^60 report. [S1, S3]

### 4.3 Exactness pitfalls

**PROVED engineering rules for this project:**

1. Fixed-width overflow invalidates exactness unless detected and replayed with a wider exact type.
2. A block-step endpoint is not enough to compute max excursion exactly unless the block table also certifies intermediate maxima. Rare candidates requiring peak claims should be replayed step by step or with an exact peak-aware jump table.
3. Odd-to-odd acceleration changes the step clock. The valuation a=v2(3n+1) must be retained if translating to shortened-map step counts or parity densities.
4. "Odd" means source-state parity in the project metric definitions. Target-state parity is a different quantity.
5. Floating logarithms may summarize growth but must not decide exact filters. Comparisons such as 3^f versus 2^k, or the integer inequality 485f versus 306k, can be exact.
6. A path merge only resolves a candidate to 1 if the merged tail has adequate provenance.
7. GPU and distributed checksums detect many engineering faults but do not turn a finite computation into a universal proof.
8. External verified ranges must be tagged by map convention and provenance before use.

## 5. Practical compute frontier for this repository

### 5.1 Representation ceiling

**FINITE-VERIFIED repository fact:** the scaffold uses Python arbitrary-precision integers and includes an exact transition test on a roughly 5000-bit integer. CDM1 itself capped any local peak at 4096 bits. This demonstrates that fixed-width representation is not the immediate bottleneck for the intended early research stages.

**HEURISTIC:** exact Python integers can represent far larger values than CDM needs for ordinary finite prefixes, but that fact has little search value. Memory, candidate count, step count, and structural interpretability become limiting first.

### 5.2 Trajectory ceiling

**UNKNOWN quantitatively for production use.** CDM0 only benchmarked a tiny cached calibration and is not a valid extrapolation to 60-100 bit starts with long unresolved prefixes. The current Python engine is a correctness/reference scaffold, not a competitor to Barina's C/OpenCL or Angeltveit's Rust/CUDA/OpenCL implementations.

External scale gives the correct economic warning:

- Barina's current project reports about five seconds per 2^40 work unit on modern GPUs after aggressive sieving. [S1]
- Angeltveit's RTX 3060 experiment took 24.4 hours for its complete 2^60 demonstration while explicitly checking only a small fraction of starts. [S3]

**FAILED strategy:** attempt to reproduce frontier-scale contiguous verification in the current Python repository. The information gained per unit compute would be poor because the range has already been checked by optimized external projects.

### 5.3 Structural-analysis ceiling

**HEURISTIC:** structural analysis should become the bottleneck long before integer representation. CDM should deliberately keep the survivor set tiny enough that each survivor can receive exact parity-word, affine, residue, merge, and valuation analysis.

For CDM2 the recommended design target is thousands, not millions, of L1 survivors, with parity prefixes on the order of tens of bits/steps for calibration. Longer symbolic prefixes should be earned by observed information gain, not by available RAM.

### 5.4 Certification ceiling

**PROVED project rule:** no finite number of exact steps is a certification ceiling. Certification begins only when there is an exact mechanism that can be iterated indefinitely or an equivalent theorem implying unboundedness and exclusion from 1.

A candidate should not move to L4 merely because its trajectory becomes expensive. Compute exhaustion is not mathematical information.

## 6. Rigorous divergence-relevant mathematics

### 6.1 Unbounded orbit implies escape to infinity

**Status: PROVED.**

Let f:N+ -> N+ be deterministic and suppose the forward orbit of n is unbounded. If any state repeated, the orbit from the first repetition onward would be periodic and bounded, contradicting unboundedness. Thus every visited state is distinct. For any bound B there are only B positive integers <=B, so the orbit can visit values <=B only finitely often. Therefore eventually all iterates exceed B. Since B was arbitrary, f^k(n)->infinity.

**Relevance:** Lagarias-style theorems stated for trajectories tending to infinity apply to the project's unbounded-orbit target. CDM still need not prove the limit separately if it directly proves unboundedness.

### 6.2 A least divergent start exists and never descends

**Status: PROVED.**

If any positive starting value has an unbounded orbit, the set of such starts is nonempty and therefore has a least element n*. If T^k(n*)<n* for some k, the tail beginning at T^k(n*) is the same unbounded tail, making a smaller divergent start. Contradiction.

Therefore T^k(n*)>=n* for all k>=0.

**Relevance:** this gives a logically complete target class for existence search. Filters that eliminate a start because it descends below itself do not risk eliminating the least counterexample.

### 6.3 Necessary odd-step density

**Status: PROVED (Lagarias 1985).**

For the shortened map, if N*(k) counts odd iterates among the first k source states of a divergent trajectory, Lagarias gives

liminf_{k->infinity} N*(k)/k >= 1/log_2(3) ~= 0.63093. [S5]

**Hypothesis:** the trajectory is divergent in the sense that its magnitude tends to infinity.

**Relevance:** by Section 6.1 this covers a genuinely unbounded positive-integer orbit. A long finite prefix below this density can still grow because of additive terms or temporary effects; the theorem is asymptotic.

### 6.4 An every-prefix rational filter for the least counterexample

**Status: PROVED (Angeltveit 2026, Theorem 4.1 plus Section 6.2).**

Angeltveit proves: if a k-step shortened-map prefix contains f odd applications, every intermediate value is at least 99,781, and 485f<=306k, then T^k(n)<n. [S3]

The current verified frontier is vastly above 99,781. A least divergent start above that frontier never descends below itself, so every intermediate value is at least its start. Hence any such least divergent start must satisfy

485 f_k > 306 k

for every k>=1.

Define the exact integer parity debt

D(k)=485 f_k - 306 k.

A least divergent candidate above the frontier must have D(k)>=1 at every positive prefix.

**Relevance:** this is unusually valuable for L0 because it is exact, integer-only, O(1) to update per parity bit, and has a direct necessary-condition interpretation.

### 6.5 Exact parity-word / affine constraint

**Status: PROVED.**

For a prescribed shortened-map parity word of length k with h odd steps,

T^k(n)=(3^h n+c)/2^k

for an exactly computable nonnegative integer c. The first k parities depend only on n mod 2^k, and each length-k parity word is realized by exactly one residue class modulo 2^k. [S3; also implemented in the repository scaffold]

**Relevance:** parity words are not merely descriptive. They are exact symbolic families of starting integers and therefore a natural bridge from finite anomalies to arithmetic families.

### 6.6 Exact descent and inverse/path-merging restrictions

**Status: PROVED (Angeltveit 2026).**

If n1=n0+a2^k and T^k(n0)<n0, then T^k(n1)<n1. Thus a low-bit residue class can sometimes be discarded as a possible least divergent start without testing every lift. [S3]

Angeltveit also gives exact preimage restrictions: starts congruent to 2, 4, 5, or 8 modulo 9 are already on the path of a smaller positive integer and can be excluded when searching for the least counterexample. Further path-merging and odd-even-even sieves identify additional low-bit classes whose trajectories join smaller paths. [S3]

**Relevance:** inverse-tree information is best used first as an exact redundancy eliminator. Generating arbitrary inverse-tree nodes without an accompanying growth invariant is not automatically informative.

### 6.7 Sparsity of a hypothetical divergent orbit

**Status: PROVED.**

Lagarias records a bound showing that the set of values <=x lying on any divergent orbit grows at most on the order of x^(1-eta), with eta approximately 0.05004; he summarizes this as a divergent trajectory being unable to go to infinity "too slowly." [S5]

Garcia and Tal (1999), in a generalized 3n+1 setting satisfying a parameter condition that includes the usual Collatz map, prove that the Banach density of the orbit of any integer is zero; therefore a divergent Collatz trajectory has Banach density zero. [S6, S7]

**Relevance:** a successful symbolic family should not implicitly require an orbit that occupies a positive-density portion of the integers. These theorems constrain orbit-value density, not the density of starting values.

### 6.8 Almost-all descent results: exact implication and non-implication

**Status: PROVED.**

Terras and Everett established that almost every starting integer has finite stopping time (eventually falls below its own start). Later results sharpened the typical depth of descent. Tao proved in 2022 that for any function f(N)->infinity, the minimum value attained by the ordinary Collatz orbit is below f(N) for almost all N in logarithmic density. Korec's earlier natural-density result gave a power bound N^theta for any theta>log(3)/log(4). [S10, S4]

**What this does imply for CDM:** no-descent behavior is exceptional in a precise density sense, so unconditioned random sampling spends most compute on ordinary descending starts. This supports an exact prefilter.

**What this does not imply:** these almost-all results do not prove that almost all starts reach 1, and they do not rule out a particular divergent orbit. A start can descend to a smaller value and, hypothetically, that smaller tail could later diverge. CDM must not transform "almost all descend" into "almost all converge."

## 7. Redundant explicit search space and provenance hierarchy

### 7.1 Ranges not worth brute-force searching again

**FAILED as a search strategy:** contiguous brute force below the external verified frontier.

For discovery economics:

- n<2^71 is redundant by a peer-reviewed external exact computation with public code. [S2]
- 2^71<=n<2075*2^60 is additionally covered by Barina's live project assertion as of 2026-10-01. [S1]
- smaller overlapping ranges have independent duplicate/triplicate coverage. [S9]

If local code produces an apparent nonconvergent anomaly inside these ranges, the default hypothesis is an implementation/provenance error until exact independent replay resolves the conflict.

### 7.2 Structural families redundant for a least-counterexample search

**PROVED exclusions:**

- even starts, because one step halves the start;
- starts/classes whose exact trajectory is proved to fall below the start;
- mod-9 preimage classes 2,4,5,8 when applying the smaller-path argument;
- any candidate whose path is proved to merge into a smaller trusted start;
- low-bit classes eliminated by an exact descent sieve.

These are not cycle arguments. They are least-divergent-start redundancy arguments.

### 7.3 Provenance hierarchy for future basin/cache imports

#### Tier 1 — Full mathematical certificate

**Status: PROVED / certificate-grade.** An independently checkable proof object or exact replay object establishes the asserted basin membership.

Use: may resolve candidates mathematically, subject to map/version verification.

#### Tier 2 — Reproducible external exact computation

**Status: FINITE-VERIFIED external.** Published algorithm, sufficiently specified software/version, exact arithmetic safeguards, and reproducible finite claim.

Use: may suppress redundant discovery search and may create an external-coverage cache class. It must remain tagged external. A later proof/certification pipeline should replay the actual tail it relies upon rather than silently treating the whole external range as local proof.

Barina's peer-reviewed 2^71 result belongs here for search-coverage purposes. [S2]

#### Tier 3 — Externally asserted verified range with strong provenance

**Status: FINITE-VERIFIED as an external report, not locally reproduced.** Current official project status with credible continuity but without a separately audited certificate/publication for the newest extension.

Use: search mask and prioritization only; keep the source/date/version. The live extension from 2^71 to 2075*2^60 is treated this way in CDM1. [S1]

#### Tier 4 — Heuristic or unverified claim

**Status: HEURISTIC or UNKNOWN.**

Use: candidate-generation hint only. Never resolve a basin entry.

### 7.4 Cache rule after CDM1

The future cache should store a provenance enum, source identifier, map convention, source date/version, and whether the entry is allowed to resolve a candidate for discovery versus certification. "Covered externally" must not be serialized as "locally certified."

## 8. Candidate generation for CDM2/CDM3

### 8.1 Primary: theorem-conditioned parity-prefix residue classes

**Status: HEURISTIC generator built from PROVED constraints.**

Generate source parity words of bounded length k and retain only words/classes consistent with necessary least-divergent behavior:

1. every-prefix parity debt D(j)=485 f_j-306j remains positive;
2. exact symbolic descent sieves do not kill the low-bit class;
3. exact preimage/path-merging rules do not prove it redundant;
4. the corresponding residue modulo 2^k is constructed exactly;
5. representatives are evaluated only after the symbolic class survives L0.

Why this is preferable to random magnitude: each unit of compute is attached to a mathematical condition that a least divergent orbit must satisfy.

### 8.2 Secondary: record-prefix controls

Extract parity/debt/valuation patterns from known Glide and path records and include them as a control/reference population. Do not assume record patterns generalize. Their purpose is to test whether a proposed filter actually recognizes known finite persistence.

### 8.3 Secondary: affine parity-word reverse engineering

Choose a parity word because of an exact desired multiplier/residue property, then solve for the unique residue modulo 2^k and study its lifts. This is better than choosing a huge decimal start first and asking afterward what its parity prefix happened to be.

### 8.4 Secondary: complement of inverse/path-merging sieves

Use inverse-tree reasoning mainly to remove classes known to merge into smaller starts. Only promote inverse constructions positively if they also preserve an exact growth/no-descent invariant.

### 8.5 Baseline only: random large starts

**Status: HEURISTIC baseline; DEMOTED as a primary generator.**

Random magnitude remains useful as a matched control. It should not be the main discovery generator because almost-all descent theory predicts that most starts rapidly become structurally ordinary, while modern exact sieves can remove large fractions before expensive iteration.

### 8.6 Rejected: "largest integer we can represent"

**Status: FAILED.**

Numerical size without a structural condition has no known connection to divergence. Arbitrary-precision reach is not search reach.

## 9. Metric and filter recommendations for CDM2

### 9.1 Keep as an exact hard screen

#### first_descent_time

Definition: least k>=1 with T^k(n)<n.

Cost: O(s), exact.

Theory relevance: a least divergent start has no finite first descent.

Decision: **KEEP as a screen, DEMOTE as a standalone ranker.** The Mersenne family shows arbitrarily long first-descent behavior can be manufactured.

Kill criterion for ranking use: if, after conditioning on equal prefix survival, larger first-descent values show no reproducible enrichment for further persistence, retain only its logical screen role.

### 9.2 Add: minimum parity debt and endpoint parity debt

For prefix j, D(j)=485 f_j-306j.

Metrics:

- parity_debt_min = min_{1<=j<=s} D(j)
- parity_debt_end = D(s)

Cost: O(s), exact integer updates.

Theory relevance: for a least divergent candidate above the present frontier, D(j)>=1 at every prefix.

Decision: **HIGHEST-PRIORITY CDM2 calibration metric.**

Kill/demotion rule: the positivity test remains a valid hard necessary-condition filter regardless of predictive performance. As a ranker among survivors, demote it if debt magnitude provides no out-of-sample enrichment for additional survival.

### 9.3 Keep/augment: odd_step_density

Definition: f_s/s.

Cost: O(s), exact rational.

Theory relevance: Lagarias asymptotic lower bound.

Decision: **KEEP, but never use the floating density alone when the exact integer debt can be used.** Density is interpretable; debt is safer for decisions.

### 9.4 Add for odd-to-odd analysis: valuation load

For odd-to-odd steps x_{i+1}=(3x_i+1)/2^{a_i}, record a_i=v2(3x_i+1), cumulative A_m=sum a_i, and count m.

Cost: exact; v2 is cheap.

Theory relevance: growth is controlled by the balance between 3^m and 2^{A_m}, with an exactly positive additive correction.

Decision: **CALIBRATE at L1, not L0.**

Kill criterion: demote as a ranker if it adds no persistence information beyond ordinary shortened-map parity debt.

### 9.5 peak_start_ratio and max_excursion

Cost: exact after trajectory.

Decision: **KEEP as descriptive outcomes/resources; DEMOTE as promotion filters.**

Reason: Mersenne prefixes produce arbitrarily large finite ratios; known path records are compatible with finite stochastic scaling.

Kill criterion: already killed as standalone promotion metrics. Reconsider only if a separate theorem connects a normalized excursion pattern to an indefinitely reproducible structure.

### 9.6 peak_bit_length

Decision: **KEEP only as a resource-pressure metric.** It helps enforce peak ceilings, not select mathematical candidates.

### 9.7 max_parity_run

Decision: **FAILED as a standalone candidate score.** Retain only for diagnostics/record comparison.

Reason: 2^p-1 gives arbitrarily long all-odd initial runs by construction.

### 9.8 window_log_growth

Decision: **DISPLAY ONLY.** Floating point must not control promotion. Exact endpoint comparisons or parity/valuation balances should be used for filters.

### 9.9 trajectory_merge_depth

Decision: **KEEP as an operational/cache metric.** A shallow merge into a trusted tail is strong evidence a candidate is uninteresting for minimal divergence, but merge depth itself is not a growth score.

### 9.10 residue_mod_3_8 histogram

Decision: **DEMOTE.** An arbitrary residue histogram has weak theorem linkage. Replace broad residue counting with exact sieve predicates (especially mod 9 preimage classes and path-merging conditions) when possible.

## 10. CDM1 negative findings and falsifiability

The following outcomes count as useful failures, not reasons to expand compute:

1. **FAILED:** magnitude-only brute force below or just above the known frontier has poor information economics compared with exact residue/parity conditioning.
2. **FAILED:** max_parity_run as a promoter; arbitrarily long odd runs are explicitly constructible.
3. **FAILED:** peak magnitude or peak/start ratio as standalone promotion evidence.
4. **FAILED:** total stopping/delay records as the primary divergence signal; post-descent tails dominate them and a least divergent start is characterized first by no descent.
5. **HEURISTIC route to test:** if theorem-conditioned parity-prefix survivors show no extra persistence beyond matched no-descent controls, retain the filter only as pruning and do not elevate it into a candidate generator.
6. **HEURISTIC route to test:** if known finite record trajectories show no stable structural enrichment under the proposed metrics, do not build a record-imitation generator.
7. **HEURISTIC route to test:** if longer symbolic prefixes are overwhelmingly removed by exact descent/path-merging rules and no stable family remains, treat that as evidence against the selected symbolic family, not as a reason to raise the compute budget.
8. **FAILED:** GPU/distributed engineering before filter value is established. Throughput alone is not mathematical information.
9. **UNKNOWN:** whether any finite-record statistic contains a stable signature of genuine divergent behavior, because no divergent positive Collatz orbit is known.

## 11. CDM2 first experiment — authoritative recommendation

### CDM2-E1: theorem-conditioned parity-prefix survivor enrichment calibration

**Status: HEURISTIC experiment based on PROVED filters.**

Goal: determine whether exact parity-prefix/residue filters identify finite starts that continue to exhibit unusual no-descent persistence after the conditioning prefix, using only a known-convergent calibration domain.

Suggested frozen envelope for CDM2 to confirm or reduce before execution:

- parity prefix length K = 24;
- recursively visited symbolic nodes <= 2,000,000;
- selected conditioned residue classes <= 4,096;
- matched control classes <= 4,096;
- representatives < 2^60, so the experiment is entirely inside heavily independently verified external territory;
- one deterministic representative per class chosen by a fixed published seed/lift rule;
- exact shortened-map L1 horizon <= 512 steps per representative, stopping immediately on first descent;
- peak ceiling 4096 bits;
- no L2 promotion;
- wall/CPU ceiling to be frozen after a tiny implementation benchmark, with an absolute planned ceiling of 180 wall seconds / 180 CPU-seconds for the calibration;
- memory <=512 MiB; storage <=50 MiB.

Conditioned arm:

1. parity word/residue class survives every-prefix D(j)>0;
2. class is not eliminated by implemented exact low-bit descent logic;
3. class is not eliminated by exact preimage/path-merging logic available at that prefix.

Matched controls:

- same start-bit range and same K;
- exact K-step no-descent controls where possible;
- match or stratify by total odd count f_K so the experiment tests more than merely "has more odd steps."

Primary endpoint:

- additional first-descent survival beyond K, especially survival through 2K, 4K, and the fixed L1 horizon.

Secondary endpoints:

- future minimum/endpoint parity debt;
- odd-to-odd valuation load;
- peak/start ratio as an outcome, not a selector;
- whether known finite Glide/path-record controls are enriched.

Falsification rule:

- if conditioned classes do not show reproducible enrichment in post-prefix survival relative to matched K-survivors, the parity-prefix construction is **FAILED as a ranker/generator** and retained only as an exact hard-pruning method;
- if debt magnitude among legal survivors gives no additional predictive value, it is demoted to a binary necessary-condition screen;
- if the filter only rediscovers peak or parity-run extremality without longer post-prefix survival, do not promote it.

Why this should run first:

- every expensive candidate is selected by a necessary mathematical condition rather than size;
- the experiment is completely inside known-convergent territory, so it calibrates information value without pretending to search for a counterexample;
- it directly tests whether the project's proposed L0 structure predicts anything beyond what it was conditioned to guarantee;
- failure is informative and cheap;
- success yields a precise, auditable generator for later CDM3 search.

## 12. Source ledger

### S1 — Barina live convergence project

David Barina, "Convergence verification of the Collatz problem." Live project page.  
URL: https://pcbarina.fit.vut.cz/  
Audited: 2026-10-01. Page generated 2026-10-01 14:22:48 +0200 during CDM1.  
Claim used: all starts below 2075*2^60 (~2^71.02) reported verified; public source link; project milestone dates.  
Status: FINITE-VERIFIED external report.  
Limitation: newest live extension is not separately peer-reviewed in the source audited.

### S2 — Barina 2025 peer-reviewed verification

David Barina, "Improved verification limit for the convergence of the Collatz conjecture," The Journal of Supercomputing 81, article 810 (2025), published 2025-05-02.  
DOI: https://doi.org/10.1007/s11227-025-07337-0  
Claim used: shortened map, exact ascending-descent induction, 2^71 finite verification, 3^k and 2^k sieves, distributed implementation, 128-bit/GMP handling, checksums, work-unit metadata, path records, public code commit.  
Status: FINITE-VERIFIED external exact computation / peer-reviewed report.  
Limitation: finite computational result, not a proof for all positive integers.

### S3 — Angeltveit 2026 algorithm

Vigleik Angeltveit, "An improved algorithm for checking the Collatz Conjecture for all n<2^N," arXiv:2602.10466v1, submitted 2026-02-11.  
URL: https://arxiv.org/html/2602.10466v1  
Claim used: exact parity/residue identities, recursive descent sieve, mod-9 preimage sieve, path-merging sieve, rational 485/306 descent criterion, CPU/GPU implementation and benchmarks, public code.  
Status: PROVED for stated lemmas/theorems in the preprint; COMPUTATIONAL-EVIDENCE for reported runs; HEURISTIC for projected 2^75-2^77 resource estimates.  
Limitation: preprint v1; it does not report a new completed frontier above Barina's current live result.

### S4 — Tao 2022 almost-all result

Terence Tao, "Almost all orbits of the Collatz map attain almost bounded values," Forum of Mathematics, Pi 10 (2022), e12. Published online 2022-05-20.  
DOI: https://doi.org/10.1017/fmp.2022.8  
Claim used: for every f(N)->infinity, Col_min(N)<f(N) for almost all N in logarithmic density; background on Terras/Everett and Korec.  
Status: PROVED.  
Limitation: almost-all minimum-value theorem; does not prove convergence to 1 or rule out an individual divergent orbit.

### S5 — Lagarias 1985 survey/theorems

Jeffrey C. Lagarias, "The 3x+1 Problem and Its Generalizations," American Mathematical Monthly 92 (1985), 3-23.  
DOI: https://doi.org/10.1080/00029890.1985.11971528  
Author bibliography: https://dept.math.lsa.umich.edu/~lagarias/3x+1.html  
Claim used: divergent trajectory definition, necessary odd-step liminf >=1/log_2(3), polynomial sparsity bound for values on a divergent trajectory, 2-adic context.  
Status: PROVED results as reported in the published survey.  
Limitation: historical source; use only theorem statements relevant to divergence, not old computational frontiers.

### S6 — Garcia and Tal 1999 bibliographic record

Manuel V. P. Garcia and Fabio A. Tal, "A note on the generalized 3n+1 problem," Acta Arithmetica 90(3) (1999), 245-250.  
URL: https://eudml.org/doc/207326  
Claim used: generalized-map orbit/equivalence-class density theorem including ordinary 3x+1 as a special case.  
Status: PROVED.  
Limitation: theorem is about Banach density of orbit values/equivalence representatives, not convergence.

### S7 — Lagarias annotated bibliography summary of Garcia–Tal

Jeffrey C. Lagarias, "The 3x+1 Problem: An Annotated Bibliography (1963-1999)," arXiv:math/0309224.  
Claim used: concise statement of Garcia–Tal hypotheses and the corollary that any divergent trajectory has Banach density zero.  
Status: high-quality secondary theorem summary.

### S8 — Oliveira e Silva 1999 record computation

Tomás Oliveira e Silva, "Maximum Excursion and Stopping Time Record-Holders for the 3x+1 Problem: Computational Results," Mathematics of Computation 68(225) (1999), 371-384.  
DOI: https://doi.org/10.1090/S0025-5718-99-01031-5  
Author page: https://sweet.ua.pt/tos/bib/4.8.html  
Claim used: shortened-map stopping-time and maximum-excursion definitions; exhaustive search to 3*2^53; finite convergence verification as by-product.  
Status: FINITE-VERIFIED / peer-reviewed computational result.

### S9 — Eric Roosendaal current 3x+1 project pages

Eric Roosendaal, "On The 3x+1 Problem."  
URL: https://ericr.nl/wondrous/  
Last modified 2026-06-30 in the audited page.  
Additional pages: https://ericr.nl/wondrous/delrecs.html , https://ericr.nl/wondrous/glidrecs.html , https://ericr.nl/wondrous/pathrecs.html , https://ericr.nl/wondrous/techpage.html  
Claim used: current confirmed record summaries, independent historical coverage summary, standard-map convention, sieve engineering.  
Status: FINITE-VERIFIED external/community computation where explicitly marked confirmed; HEURISTIC for observational conjectures.  
Limitation: not a peer-reviewed current record census; preserve confirmed/candidate distinctions.

### S10 — MathWorld current secondary summary

Eric W. Weisstein, "Collatz Conjecture," MathWorld. Last updated 2026-09-30.  
URL: https://mathworld.wolfram.com/CollatzConjecture.html  
Claim used: current reported verification table and concise Terras/Tao background.  
Status: high-quality secondary source.  
Limitation: not an independent recomputation.

### S11 — Roosendaal Glide records

URL: https://ericr.nl/wondrous/glidrecs.html  
Claim used: table containing discovered Glide 1614 and 1639 values beyond the 32 currently confirmed records in the main status summary.  
Status: FINITE-VERIFIED as table content; confirmation status preserved exactly as stated.

### S12 — Barina live path records

URL: https://pcbarina.fit.vutbr.cz/path-records.htm  
Claim used: shortened-map path-record peaks corresponding to the current verification project.  
Status: FINITE-VERIFIED external record data.

## 13. CDM1 end-of-session decision

**Decision status: HEURISTIC, bounded and falsifiable.**

CDM2 should first run CDM2-E1, the theorem-conditioned parity-prefix survivor enrichment calibration described in Section 11.

The reason is not that these prefixes look dramatic. The reason is that the least possible divergent start is rigorously forced to avoid first descent, Angeltveit's integer parity-debt gives a cheap every-prefix necessary condition in the relevant large-value regime, low-bit parity words correspond to exact residue classes, and modern descent/preimage/path-merging sieves can remove mathematically redundant classes before expensive iteration. This creates the strongest current bridge from a cheap L0 computation to a statement that a genuine least divergent orbit would have to satisfy.

Random magnitude, peak chasing, long parity runs, and total stopping-time chasing do not provide that bridge.

**No CDM2 computation is performed in CDM1.**
