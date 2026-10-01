# CDM2-R2 — Least-Divergent Minimality and Inverse-Tree Constraints on the Lift Quotient

**Session:** CDM2-R2 — lift-quotient constraint theorem audit  
**Date:** 2026-10-01  
**Root objective:** unchanged: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.  
**Cycle policy:** nontrivial finite cycles remain out of scope.  
**Session type:** mathematical/literature audit.  
**Executable computation:** **NONE**. No candidate trajectories, symbolic enumeration campaign, or calibration experiment were run.  
**Counterexample claim:** **NONE**.

## 1. Decision

**OUTCOME C — q REMAINS EFFECTIVELY FREE.**

Least-divergent minimality does produce exact conditions involving the lift quotient

`q=(N-r)/2^K`,

but the conditions found fall entirely into categories already excluded from promotion:

1. exact no-descent inequalities inside the already observed length-`K` prefix;
2. exact binary smaller-preimage/path-merging kills;
3. non-effective density statements whose exceptional-set membership is defined by future orbit behavior; or
4. prefix-only necessary conditions.

No cheap exact predicate on surviving `q` was found that predicts or forces post-`K` persistence without inspecting future parity.

A stronger obstruction is proved below: every **finite** inverse-tree sieve reduces eventually to odd-modulus (power-of-3) residue pruning on `q`. If even one unbounded survivor residue remains, the Chinese remainder theorem combines it with every prescribed residue modulo `2^s`. Since the next length-`s` parity block is equivalent to one residue of `q mod 2^s`, every finite future parity block still occurs among the surviving lifts.

Therefore:

- **CDM2-E2 is not authorized.**
- **CDM3 remains blocked.**
- no candidate trajectory was extended;
- no counterexample was found or claimed.

## 2. Conditional least-divergent setup

Assume conditionally that at least one positive integer has an unbounded shortened-Collatz orbit. By well-ordering let `N` be the least such positive integer.

Use

`T(n)=n/2` for even `n`, and `T(n)=(3n+1)/2` for odd `n`.

Fix `K>=1`. Let the observed source-parity prefix be

`epsilon_0,...,epsilon_{K-1}`,

let

`f_j=sum_{0<=i<j} epsilon_i`,

and write the exact affine iterate formula

`T^j(n)=(3^{f_j}n+c_j)/2^j`.

Let `r` be the unique residue in `[0,2^K)` realizing the length-`K` parity prefix. Every lift is

`n_q=r+2^K q`.

For the least divergent start, `N=n_q` for its actual quotient `q`.

## 3. The least-divergent orbit is strictly above N

### Theorem 3.1 — strict orbit-minimum theorem

If `N` is the least positive integer with an unbounded orbit, then for every `j>=1`,

`T^j(N)>N`.

**Proof.** The tail beginning at `T^j(N)` is the same unbounded tail as the orbit of `N`, so `T^j(N)` is itself a divergent starting value. Minimality rules out `T^j(N)<N`. If `T^j(N)=N`, determinism makes the orbit periodic from `N`, hence bounded, contradicting divergence. Therefore `T^j(N)>N`. QED.

Immediate consequences, all conditional on the existence of a least divergent start:

- `N` is odd, since an even `N` would satisfy `T(N)=N/2<N`;
- all forward states are distinct;
- `N` is the strict global minimum of its forward orbit;
- its first stopping/descent time is infinite;
- its total stopping time to 1 is infinite;
- the orbit tends to infinity: if it visited a finite set infinitely often, two forward states would repeat, forcing periodic bounded behavior.

### Theorem 3.2 — smaller-ancestor exclusion

If `p` is a positive integer with `p<N` and

`T^a(p)=T^j(N)`

for some `a,j>=0`, then `N` cannot be least divergent.

**Proof.** From the merge point onward, `p` has the same unbounded tail as `N`. Hence `p` is a smaller divergent start, contradicting minimality. QED.

This theorem is the exact basis of all smaller-preimage and path-merging kills.

## 4. Full-prefix minimality gives only an interval cap on q

For every `1<=j<=K`, define

`b_j=(3^{f_j}r+c_j)/2^j`.

This is an integer, and substituting `n_q=r+2^Kq` gives

`T^j(n_q)=3^{f_j}2^{K-j}q+b_j`.

The least-divergent requirement `T^j(n_q)>n_q` is exactly

`(3^{f_j}-2^j)(r+2^Kq)+c_j>0`.

### Theorem 4.1 — prefix-minimality q-interval theorem

Fix the length-`K` parity prefix.

For each `j<=K`:

- if `3^{f_j}>2^j`, then `T^j(n_q)>n_q` holds for every positive lift, so this step imposes **no restriction on q**;
- equality `3^{f_j}=2^j` is impossible for `j>=1`;
- if `3^{f_j}<2^j`, set `h_j=2^j-3^{f_j}>0`. Then strict no-descent is equivalent to

  `h_j(r+2^Kq)<c_j`,

  hence

  `q <= Q_j := floor((c_j-1-h_j r)/(h_j 2^K))`.

Therefore the simultaneous system `T^j(n_q)>n_q` for all `1<=j<=K` has one of only two forms:

- all nonnegative `q`, if every prefix multiplier is expanding; or
- a finite initial interval `0<=q<=Q_*`, where `Q_*=min Q_j` over the multiplier-deficient steps, provided `Q_*>=0`; if `Q_*<0`, no lift survives.

**Interpretation.** This is a genuine `q` dependence whenever a multiplier-deficient step exists, but it is exactly the already-observed first-descent/K-survival predicate written algebraically. It contributes no new post-conditioning rank information after exact K-survival has been required.

It yields no congruence restriction on `q`; only an upper interval cut.

### Corollary 4.2 — no forward-minimality q signal in the current CDM2-E1 family

The repository already proved that for the declared 60-bit, `K<=24` CDM2-E1 regime, every-prefix debt positivity is equivalent to exact no-descent and, at each admissible prefix, corresponds to `3^{f_j}>2^j`.

Consequently, within the present theorem-conditioned prefix family, every inequality in Theorem 4.1 is satisfied by **all** lifts. Least-divergent forward minimality supplies no additional q restriction there.

### Why Terras coefficient stopping time does not strengthen this

Terras defined the coefficient stopping time as the first `j` for which `3^{f_j}/2^j<1`. It is always no later than the actual stopping time. Terras conjectured equality of coefficient and actual stopping time, but this is not a general theorem.

Therefore one may **not** infer from infinite stopping time that `3^{f_j}>2^j` for every `j`. The positive affine correction `c_j` is exactly why a multiplier-deficient finite prefix can still remain above its start for a bounded range of `q`.

## 5. Exact inverse-tree conditions on q

Fix an observed state

`m_j(q)=T^j(n_q)=2^{K-j}3^{f_j}q+b_j`.

Let `u` be a fixed realizable inverse parity word of depth `d`, containing `a` odd forward steps, with affine constant `c_u`. A predecessor `p` following that word satisfies

`m_j=(3^a p+c_u)/2^d`,

so

`p(q)=(2^d m_j(q)-c_u)/3^a`.

### Theorem 5.1 — inverse-word q congruence theorem

The integrality condition for `p(q)` is

`2^{d+K-j}3^{f_j}q == c_u-2^d b_j (mod 3^a)`.

Let `C=c_u-2^d b_j`.

- If `a<=f_j`, integrality is either true for every `q` or false for every `q`, according as `3^a|C` or not.
- If `a>f_j`, solutions exist only if `3^{f_j}|C`; when they exist, `q` lies in exactly one residue class modulo `3^{a-f_j}`.

For such an integral predecessor, the smaller-than-start condition is the exact linear inequality

`[2^{d+K-j}3^{f_j}-3^a2^K]q < 3^a r+c_u-2^d b_j`,

together with `p(q)>0`.

Thus a fixed inverse word gives an exact **binary kill set** consisting of an all/none condition or one power-of-3 residue class intersected with an interval/half-line.

This is a real arithmetic restriction on `q`, but it does not rank the survivors. If `0<p(q)<n_q`, the candidate is killed by Theorem 3.2. If not, R1 already proved that the quantitative clearance is only an observed magnitude margin and has no proved persistence meaning.

### Corollary 5.2 — the mod-9 preimage sieve excludes exactly four q classes mod 9

Angeltveit's exact preimage identities imply that a least divergent `N` cannot satisfy

`N == 2,4,5,8 (mod 9)`,

because in each such case a positive smaller start reaches `N`.

Since `gcd(2^K,9)=1`, the map

`q -> r+2^Kq (mod 9)`

is a bijection. Therefore, for every fixed length-`K` prefix, exactly four residue classes of `q mod 9` are killed:

`q != (a-r)(2^K)^{-1} (mod 9)`

for `a in {2,4,5,8}`.

Exactly five classes mod 9 survive this one sieve. This is substantial deterministic pruning, but it is the already-preserved binary smaller-preimage rule, not a post-kill ranker.

## 6. Finite inverse sieves cannot restrict any finite future parity block unless they kill all large lifts

The preceding theorem has a stronger consequence.

### Theorem 6.1 — finite inverse-sieve / future-parity orthogonality

Fix a length-`K` prefix. Apply any **finite** family of exact inverse-word smaller-preimage/path-merging tests attached to states already observed through step `K`.

Then there exist integers `A>=0` and `Q_0` such that, for all `q>=Q_0`, survival of that finite inverse sieve depends only on `q mod 3^A`.

Hence exactly one of the following occurs:

1. every sufficiently large lift is killed; or
2. at least one residue class `rho mod 3^A` survives for arbitrarily large `q`, and then **every prescribed finite future parity block still occurs among survivors**.

**Proof.** By Theorem 5.1, each fixed inverse-word kill is a power-of-3 congruence condition intersected with linear inequalities in `q`. Beyond a sufficiently large threshold, each linear inequality has stabilized: it is always true, always false, or constant according to the sign of its coefficient. Positivity of `p(q)` also stabilizes because `p(q)` is affine with positive slope. A finite union is therefore eventually periodic modulo one common power `3^A`.

If at least one eventual survivor residue `rho mod 3^A` remains, fix any future block length `s`. R1 proved

`T^K(n_q)=3^{f_K}q+b_K`,

and multiplication by odd `3^{f_K}` is invertible modulo `2^s`. Thus each desired future parity word corresponds to exactly one residue

`q == alpha (mod 2^s)`.

Because `gcd(3^A,2^s)=1`, the Chinese remainder theorem gives infinitely many solutions to

`q == rho (mod 3^A)`,
`q == alpha (mod 2^s)`.

Choose one above `Q_0`. It survives the finite inverse sieve and realizes the prescribed future block. QED.

### Consequence

Finite-depth inverse-tree arithmetic can be excellent exact pruning. It cannot become a theorem that favors one finite future parity block over another unless it eliminates all sufficiently large lifts of the prefix.

This extends the R1 lift-bijection obstruction from prefix-only information to every finite family of the currently available inverse-tree binary rules.

## 7. Stopping-time and density results: rigorous but not pre-future q predicates

Terras proved, with later clarification and an independent short proof by Everett, that the set of positive integers having finite stopping time has natural density one. Therefore the set

`E={n : sigma(n)=infinity}`

has natural density zero.

For any fixed `K,r`, the corresponding exceptional quotients

`E_{K,r}={q>=0 : r+2^Kq in E}`

also have relative natural density zero among the nonnegative integers: the count up to `q<=Q` is bounded by the global exceptional count up to approximately `2^KQ`, which is `o(Q)`.

This is a rigorous and strong population statement about `q`, but it does **not** provide the required R2 object. Membership in `E_{K,r}` is defined by infinite future stopping behavior. It is not a cheap arithmetic predicate that can be evaluated before future parity is inspected.

Tao's almost-all minimum-value theorem is stronger in a different density sense, but has the same R2 limitation: it shows hypothetical divergent starts are exceptional; it does not identify a computable pre-future subset of `q` containing them.

Lagarias's necessary lower bound on asymptotic odd-step density for a divergent trajectory similarly constrains the **future infinite parity sequence**, not `q` before that sequence is inspected.

## 8. Literature audit and relevance to R2

### Terras 1976; Everett 1977

Riho Terras, *A stopping time problem on the positive integers*, Acta Arithmetica 30 (1976), 241-252.  
https://eudml.org/doc/205476

C. J. Everett, *Iteration of the number-theoretic function f(2n)=n, f(2n+1)=3n+2*, Advances in Mathematics 25 (1977), 42-45.  
https://doi.org/10.1016/0001-8708(77)90087-1

Relevant exact results: finite stopping time has density one; stopping-time-`k` sets are described by congruence classes modulo `2^k` up to finite exceptions; Terras introduced coefficient stopping time. These describe prefix/future stopping structure but yield no effective pre-future q ranker. The coefficient-stopping-time equality is conjectural in general and is not imported as proof.

### Lagarias 1985 and annotated bibliography

Jeffrey C. Lagarias, *The 3x+1 Problem and Its Generalizations*, American Mathematical Monthly 92 (1985), 3-23.  
https://doi.org/10.1080/00029890.1985.11971528

Jeffrey C. Lagarias, *The 3x+1 Problem: An Annotated Bibliography (1963-1999)*, arXiv:math/0309224.  
https://arxiv.org/abs/math/0309224

Relevant exact result already preserved in CDM1: a divergent shortened-map trajectory must have asymptotic lower odd-step density at least `1/log_2(3)`. This is a future-sequence condition, not a pre-future q condition. The bibliography also records the Terras stopping-time and coefficient-stopping-time results used above.

### Böhm-Sontacchi 1978

Corrado Böhm and Giovanna Sontacchi, *On the existence of cycles of given length in integer sequences like x_{n+1}=x_n/2 ...*, 1978.  
https://eudml.org/doc/290184

The paper is historically relevant to affine parity representations. Its cycle objective is outside this project's scope. The affine-prefix information needed here has already been rederived exactly in R1; it supplies no additional restriction on the lift quotient.

### Bernstein-Lagarias 1996

Daniel J. Bernstein and Jeffrey C. Lagarias, *The 3x+1 Conjugacy Map*, Canadian Journal of Mathematics 48 (1996), 1154-1169.  
https://doi.org/10.4153/CJM-1996-060-x

They show that the 2-adic conjugacy map induces a permutation modulo `2^n`. This is consistent with, and conceptually strengthens, the parity-vector realizability used by R1: finite parity data are 2-adically free across the appropriate residue classes. It does not impose an odd-modulus restriction on `q`.

### Applegate-Lagarias 1995 inverse trees

David Applegate and Jeffrey C. Lagarias, *Density Bounds for the 3x+1 Problem I. Tree-Search Method*, Mathematics of Computation 64 (1995), 411-426.  
https://dept.math.lsa.umich.edu/~lagarias/doc/applegateI.pdf

David Applegate and Jeffrey C. Lagarias, *The Distribution of 3x+1 Trees*, Experimental Mathematics 4 (1995), 193-209.  
https://doi.org/10.1080/10586458.1995.10504321

These works prove substantial lower bounds and structural results for inverse-tree growth and study dependence on root classes modulo powers of 3. They do not guarantee a predecessor **smaller than the root**, which is the comparison required by least-divergent minimality. Leaf counts or expected tree richness therefore cannot be imported as a q ranker.

### Angeltveit 2026

Vigleik Angeltveit, *An improved algorithm for checking the Collatz Conjecture for all n<2^N*, arXiv:2602.10466v1 (2026).  
https://arxiv.org/abs/2602.10466

Relevant exact results:

- the first `k` parity decisions depend only on the low `k` bits;
- lifts satisfy `T^k(n_0+a2^k)=T^k(n_0)+3^f a`;
- every binary parity pattern of length `M` corresponds to exactly one residue modulo `2^M`;
- exact descent, mod-9 preimage, and path-merging sieves;
- the exact large-state `485 f<=306k` descent theorem already used by CDM1.

For R2, the first three reinforce 2-adic future freedom; the preimage/path-merging results instantiate the binary q kills characterized in Theorem 5.1; and the 485/306 condition is prefix-only once the parity prefix is fixed.

### Tao 2022

Terence Tao, *Almost all orbits of the Collatz map attain almost bounded values*, Forum of Mathematics, Pi 10 (2022), e12.  
https://doi.org/10.1017/fmp.2022.8

This gives a powerful almost-all statement but not an explicit arithmetic characterization of a hypothetical exceptional q. It cannot be used as a pre-future ranker for an individual lift.

## 9. Candidate R(q; prefix) audit

The requested ranker target was a cheap predicate or quantity genuinely depending on `q`, not inspecting future parity, rigorously related to least-divergent behavior, substantially excluding/ranking lifts, and plausibly persistent.

The audited candidates fail as follows:

- **full-prefix minimality:** genuinely depends on q only in multiplier-deficient prefixes, but is exactly the already-observed K-survival condition; after K-survival it has no residual information;
- **mod-9 / deeper finite inverse congruences:** genuine q dependence and often substantial pruning, but only binary kills; if any unbounded residue survives, Theorem 6.1 leaves every future parity block possible;
- **path-merging inequalities:** exact binary kills; post-kill clearance was already demoted in R1;
- **Terras/Everett exceptional-set density:** rigorous and density-zero, but membership is defined by future stopping behavior and is not a pre-future computable predicate;
- **asymptotic odd-density conditions:** inspect the future parity sequence by definition;
- **inverse-tree leaf counts/3-adic richness:** do not imply existence of a smaller ancestor and hence have no least-divergent exclusion theorem.

No qualifying `R(q;prefix)` remains.

## 10. Strongest obstruction and exact next bottleneck

The strongest obstruction proved in R2 is:

> After exact K-survival is enforced, every finite family of known inverse-tree smaller-preimage/path-merging tests either kills all sufficiently large lifts or leaves an unbounded set of lifts containing every possible finite future parity block.

The unresolved mathematical object is therefore not another finite residue feature. It is an **effective description of the survivor complement after all finite prefix and finite inverse kills** that is stable under the affine lift transport

`q -> 3^{f_K}q+b_K`

and constrains future behavior without reading future parity.

A plausible form would be a genuinely nonlocal or recursively closed invariant coupling the 2-adic future-block coordinate with the 3-adic/inverse-tree constraints. No such theorem was found in the audited literature.

This is the exact next bottleneck.

## 11. Compute and search record

CDM2-R2 executed no trajectory experiment and no symbolic enumeration campaign.

- candidate trajectories extended: **0**;
- additional candidate Collatz steps: **0**;
- CDM2-E2 runs: **0**;
- L2 promotions: **0**;
- counterexamples found or claimed: **0**.

No compute-budget or experiment-result update is required.

## 12. Closeout

**Strongest theorem/obstruction:** Theorems 4.1, 5.1, and especially 6.1: forward minimality gives only exact prefix no-descent interval cuts; finite inverse rules give power-of-3 semilinear binary kills; and any unbounded residue surviving a finite inverse sieve still realizes every finite future parity block by CRT.

**Is q nontrivially constrained?** Yes in a literal sense by exact K-survival and smaller-preimage kills, but **no new useful post-conditioning restriction** exists beyond those already-preserved binary/prefix rules.

**Qualifying ranker:** none.

**CDM2-E2 authorized:** no.

**CDM3 blocked:** yes.

**Candidate trajectories extended:** no.

**Counterexample found or claimed:** no.

**Next mathematical bottleneck:** an effective nonlocal/recursive invariant on the post-pruning q survivor set that couples 2-adic future freedom to 3-adic inverse constraints without inspecting future parity.

No progress toward a Collatz counterexample is claimed.


## 13. Post-report strategic direction — human course correction

**Status:** PROJECT-STRATEGY UPDATE; the theorems and route obstructions above are unchanged.

After the mathematical audit was completed, the project owner restored the original counterexample-at-scale emphasis.

The R2 conclusion is therefore interpreted narrowly:

- finite-depth prefix/inverse mathematics did not yield a qualifying q ranker;
- this remains a valid theorem-level route obstruction;
- it does **not** imply that explicit high-magnitude search should remain blocked indefinitely while ever more algebraic rankers are sought.

The next session is redirected to **CDM2-R3 — High-Magnitude Computational-Reach and Search-Machinery Audit**.

For discovery design, R3 is to proceed under the explicit HEURISTIC / CONJECTURAL working hypothesis that a magnitude regime far beyond present verification may contain many unbounded orbits, sufficiently numerous to be discoverable by a capable sparse search machine.

The next task is therefore to assess or build methods that change the reachable magnitude regime by orders of magnitude: exact sparse sampling, efficient rejection, vectorized/GPU/distributed execution, compressed transitions, hybrid fixed-width/bigint pipelines, and related machinery.

The proof standard is unchanged. No finite computation or search hypothesis is certification.
