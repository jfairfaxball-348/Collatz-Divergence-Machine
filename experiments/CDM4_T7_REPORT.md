# CDM4-T7 — Higher-rank p-adic S-unit Mahler-system audit

**Date:** 2026-10-02  
**Entry authority:** `f06af7e9eb22f40d7764b45f6761187759cdb151`  
**Session type:** theory / literature / exact symbolic-structure audit only  
**Scientific starts generated:** **0**  
**Scientific trajectories executed:** **0**  
**Substitution enumeration:** **NONE**  
**Finite residue / carry / exponent-code optimization:** **NONE**  
**CPU / GPU / cloud / distributed work:** **NONE**  
**Explicit anchored aperiodic word found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## Classification

**D — no qualifying theorem found**

T7 does not prove the universal higher-rank statement

[
	ext{non-eventually-periodic balanced Collatz automatic coefficients}
Longrightarrow
G(2^B/3^k)
otinmathbb Q.
]

It also does not produce an aperiodic rational or positive-integer anchor.

The main durable result is a sharper exact boundary.

1. Every true finite (k)-kernel gives an explicit homogeneous matrix Mahler system over (mathbb Z[z]).
2. Every scalar Collatz output from that system satisfies a scalar Mahler equation of order at most the true kernel dimension.
3. Order (>1) is not covered by the Bugeaud–Yao theorem used in T6.
4. A large natural higher-rank subclass — finite abelian translation kernels — diagonalizes exactly by finite Fourier transform into first-order character equations.
5. In rank greater than the T6 binary case, the Collatz output is generally a **sum of several character values at the same 2-adic point**. Even if each character value can individually be shown transcendental, that does not imply their prescribed sum is nonrational.
6. No peer-reviewed p-adic lifting / algebraic-independence theorem was verified in T7 whose checked hypotheses remove this same-point cancellation problem for the exact Collatz (S)-unit point (W=2^B/3^k).
7. Regular-singular structure, when present, is functional structure only. The audited regular-singular papers do not supply the missing p-adic arithmetic value theorem.

Thus the residual higher-rank obstruction is no longer merely “matrix dimension (>1)”. For the best structured subclass found, it is specifically a **p-adic no-cancellation / simultaneous-value theorem**.

No new scientific compute is justified. `COMPUTE_BUDGET.md` and `METRIC_CATALOG.md` remain unchanged.

---

## 1. Authority and scope

The required governance and prior research files through `experiments/CDM4_T6_REPORT.md` were read at the authoritative commit before T7 mathematical work. The repository, not conversational memory, was treated as the research authority.

The root objective remains:

> find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach (1).

Nontrivial finite cycles remain out of scope.

T7 obeyed the frozen restrictions:

- no new scientific starts;
- no candidate trajectories;
- no substitution enumeration;
- no residue, carry, or exponent-code optimization;
- no generator or sampling distribution;
- no CPU campaign;
- no GPU / cloud / distributed / volunteer work;
- no finite automatic-kernel dimension claim promoted as an arithmetic-value theorem;
- no complex value theorem substituted for a 2-adic value theorem;
- no reuse of the López–Stoll 2021 density route.

No executable symbolic fixture was needed.

---

## 2. Exact balanced one-variable setup

Let (u=(u_n)_{nge0}) be a balanced (k)-automatic control word arising from a (k)-uniform Collatz valuation construction. “Balanced” means that every substituted length-(k) block has the same valuation sum (B).

As established in T5/T6, the inverse-Collatz value has the exact form

[
H=-rac13G(W),
qquad
W=rac{2^B}{3^k},
]

where

[
G(z)=sum_{nge0} g_n z^n
]

has a finite-valued (k)-automatic coefficient sequence. In the subcritical case relevant to a hypothetical aperiodic positive anchor,

[
|W|_2<1,
qquad
0<W<1.
]

For actual block constants, if (w=(a_1,dots,a_k)) is a valuation block, with prefix sums

[
A_j=a_1+cdots+a_j,qquad A_0=0,
]

then its affine constant is

[
C_w=sum_{j=0}^{k-1}3^{k-1-j}2^{A_j}.
]

For chronological concatenation (uv),

[
C_{uv}=3^{|v|}C_u+2^{B_u}C_v.
]

In the balanced uniform construction the same block data determine both:

- the finite coefficient alphabet, through exact (C_{sigma(s)}) (or the T5/T6 normalization (g(s)=C_{sigma(s)}/3^{k-1})); and
- the evaluation point (W=2^B/3^k).

This is the principal Collatz-specific coupling unavailable to an arbitrary automatic series.

---

## 3. The true finite (k)-kernel system

Let the distinct (k)-kernel sequences of (g=(g_n)) be

[
g^{(1)},dots,g^{(m)}.
]

The integer (m) is the **exact kernel dimension / presentation size**. For each digit (rin{0,dots,k-1}), define the transition

[
delta(i,r)=j
]

when

[
g^{(i)}_{kn+r}=g^{(j)}_n.
]

Let

[
G_i(z)=sum_{nge0}g^{(i)}_n z^n.
]

Then exactly

[
mathbf G(z)=M(z)mathbf G(z^k),
]

with

[
M_{ij}(z)=sum_{substack{0le r<k\ delta(i,r)=j}}z^r.
]

Equivalently,

[
M(z)=sum_{r=0}^{k-1}z^r A_r,
]

where each (A_r) is the deterministic transition matrix with exactly one (1) in each row.

### Exact data

- **Mahler base:** (k).
- **System dimension:** (m=|ker_k(g)|), the true number of distinct kernel sequences.
- **Coefficient field:** (mathbb Q); in fact (M(z)in M_m(mathbb Z[z])).
- **Rank:** (operatorname{rank}_{mathbb Q(z)}M(z)).
- **Determinant:** (det M(z)inmathbb Z[z]); it may vanish identically.
- **System singularities:** zeros and poles of (M(z)^{-1}) when the inverse formulation exists.
- **Evaluation orbit:** (W,W^k,W^{k^2},ldots).

Finite kernel dimension alone has no arithmetic-value consequence; T6 already gave a generic one-point counterexample.

---

## 4. Scalar reduction exists, but generally at order greater than one

Let the Collatz output be

[
L(z)=ell^Tmathbf G(z)
]

for a fixed rational row vector (ell).

### Theorem T7.1 — scalar equation of order at most the kernel dimension

**Status: PROVED in T7.**

For every finite (m)-dimensional homogeneous Mahler system

[
mathbf G(z)=M(z)mathbf G(z^k)
]

and every linear output (L(z)=ell^Tmathbf G(z)), there is a nonzero scalar Mahler relation

[
a_0(z)L(z)+a_1(z)L(z^k)+cdots+a_m(z)L(z^{k^m})=0
]

with (a_j(z)inmathbb Q(z)), not all zero. After clearing denominators, the (a_j) may be taken in (mathbb Q[z]).

### Proof

For (0le jle m), express (mathbf G(z^{k^j})) in terms of (mathbf G(z^{k^m})):

[
mathbf G(z^{k^j})
=
M(z^{k^j})M(z^{k^{j+1}})cdots M(z^{k^{m-1}})
mathbf G(z^{k^m}),
]

with the empty product for (j=m).

Hence

[
L(z^{k^j})=r_j(z)mathbf G(z^{k^m})
]

for (m+1) row vectors (r_j(z)inmathbb Q(z)^m). They are linearly dependent over (mathbb Q(z)), giving the stated relation. QED.

### Consequence

The exact scalar order is the least (d) for which the corresponding rows are dependent. It is at most (m), and can be found by exact cyclic-vector / Ore-elimination algebra.

This is not enough for T7. The p-adic theorem used in T6 is a **first-order** theorem. A scalar equation of order (2,dots,m) is not automatically covered.

Also, scalar elimination can introduce new denominators and therefore new singularities. Those must be checked on every point

[
W^{k^j}.
]

No “matrix system (Rightarrow) Bugeaud–Yao” inference is valid.

---

## 5. Exact first-order criterion in module language

Suppose (det M(z)
otequiv0), so one may write

[
mathbf G(z^k)=A(z)mathbf G(z),
qquad A(z)=M(z)^{-1}.
]

A homogeneous first-order scalar equation

[
L(z)=a(z)L(z^k)
]

exists when the one-dimensional row space generated by the output is invariant under the appropriate dual Mahler action.

More generally, an inhomogeneous first-order equation

[
L(z)=a(z)L(z^k)+b(z),
qquad b(z)inmathbb Q(z),
]

can arise when the output becomes one-dimensional modulo a rational invariant subspace. This is exactly what happens in T6: the rational sum character is separated off and the remaining difference character is one-dimensional.

T7 found no theorem forcing this one-dimensional quotient for a general balanced kernel.

Triangularization or diagonalization of the matrix is therefore useful only if the **specific Collatz output** has controlled support on the resulting one-dimensional factors.

---

## 6. Finite abelian translation kernels: exact Fourier diagonalization

T7 isolated the largest natural higher-rank family for which the matrix algebra completely diagonalizes.

Let (A) be a finite abelian group. Choose digits

[
arepsilon_0,dots,arepsilon_{k-1}in A
]

and define a (k)-uniform translation substitution

[
sigma(a)_r=a+arepsilon_r.
]

Assume it is prolongable at the chosen initial state and balanced under the valuation coding (v:A	omathbb Z_{>0}):

[
sum_{r=0}^{k-1}v(a+arepsilon_r)=B
]

independently of (a).

Its fixed point satisfies

[
u_{kn+r}=u_n+arepsilon_r.
]

Let (C_a) be the exact integer Collatz block constant attached to (sigma(a)), and define shifted state series

[
F_a(z)=sum_{nge0} C_{u_n+a}z^n.
]

Then

[
F_a(z)=sum_{r=0}^{k-1}z^rF_{a+arepsilon_r}(z^k).
]

In vector form,

[
mathbf F(z)=M_A(z)mathbf F(z^k),
qquad
M_A(z)=sum_{r=0}^{k-1}z^rP_{arepsilon_r},
]

where (P_b) is translation by (b) on the group algebra.

### Fourier transform

Over the cyclotomic splitting field of (A), every character (chiinwidehat A) gives

[
widehat F_chi(z)=sum_{ain A}chi(a)F_a(z).
]

The system diagonalizes exactly:

[
widehat F_chi(z)=S_chi(z)widehat F_chi(z^k),
]

where, up to the harmless convention (chileftrightarrowchi^{-1}),

[
S_chi(z)=sum_{r=0}^{k-1}chi(arepsilon_r)z^r.
]

Hence

[
det M_A(z)=prod_{chiinwidehat A}S_chi(z)
]

over the splitting field.

The trivial character satisfies

[
widehat F_1(z)
=
rac{sum_{ain A}C_a}{1-z},
]

because summing (C_{u_n+a}) over all (a) is independent of (u_n).

Fourier inversion gives the Collatz output

[
F_0(z)=rac1{|A|}sum_{chiinwidehat A}widehat F_chi(z).
]

### Relation to T6

For (A=mathbb Z/2mathbb Z), there is only one nontrivial character. Thus

[
F_0=rac12(	ext{rational trivial character}+	ext{one nontrivial character}),
]

and the system collapses to one first-order nonrational component. This is the T6 mechanism.

For (|A|>2), the output generally contains two or more nontrivial characters. Fourier diagonalization therefore solves the **functional** higher-rank problem but not the **arithmetic value** problem.

---

## 7. The exact no-cancellation gap

Assume, optimistically, that for each nontrivial character (chi) occurring in the Fourier support one can prove

[
widehat F_chi(W)
]

is transcendental in the relevant 2-adic completion.

That still does not imply

[
F_0(W)=rac1{|A|}sum_chiwidehat F_chi(W)
]

is irrational. Distinct transcendental numbers can have rational sums.

Thus the required theorem is simultaneous:

> prove sufficient linear or algebraic independence of the nontrivial character values at the **same algebraic 2-adic point** (W), modulo the rational trivial-character contribution.

This is the precise T7 bottleneck for finite abelian translation kernels.

The problem is especially clean for elementary (2)-groups. All characters then take values in ({pm1}), so the character polynomials (S_chi(z)) and Fourier coefficients are rational/integral. Even there, T7 found no verified peer-reviewed p-adic theorem giving the needed same-point no-cancellation conclusion for the entire family.

Therefore the obstacle is not merely cyclotomic coefficients.

---

## 8. Singularity audit

For a matrix theorem stated in the inverse orientation, one needs

[
det M(W^{k^j})
e0
quad	ext{for every }jge0.
]

For the Fourier-diagonal family this is equivalent to

[
S_chi(W^{k^j})
e0
]

for every relevant character and every (j).

T6 had a special rational-root argument for its one nontrivial polynomial (S(z)). There is no generic analogue for arbitrary (S_chi):

- coefficients may be cyclotomic rather than rational;
- rational roots need not be restricted to (pm1);
- even over (mathbb Q), a polynomial can have a rational root strictly between (0) and (1).

Therefore singularity avoidance remains a theorem hypothesis to be checked family by family. It cannot be inferred from (0<W<1).

Scalar elimination can add further denominator factors; these also require exact orbit checks.

---

## 9. Regular-singular audit

Write the system as

[
mathbf G(z^k)=A(z)mathbf G(z)
]

when (M(z)) is invertible.

A simple sufficient condition for regular singularity at (0) is that (A(z)) be regular at (0) with invertible (A(0)). For the direct kernel presentation this is guaranteed when (M(0)=A_0) is invertible, equivalently when the digit-(0) transition is a permutation of the kernel states.

The audited Faverjon–Poulet regular-singular work is about recognizing and describing regular-singular Mahler systems and their local solution structure. It does **not** state the p-adic arithmetic-value lifting theorem required here.

Accordingly:

[
	ext{regular singular}

otLongrightarrow
	ext{Collatz value irrational/transcendental}.
]

Regular singularity is retained as useful structural metadata, not as a value theorem.

---

## 10. Literature audit

The audit standard was deliberately conservative: a theorem is load-bearing only when its actual completion, functional-equation class, point hypotheses, singularity conditions, and conclusion were verifiable.

### 10.1 Bugeaud–Yao 2017

**Peer reviewed. p-adic. Load-bearing only in the T6 first-order scope.**

T6 already verified Theorem 3.1 and the remark extending (p^w) to

[
r p^w/s,qquad p
mid rs.
]

Thus (W=2^B/3^k) is admissible in their first-order class.

T7 found no basis for extending that remark to arbitrary higher-order scalar equations or matrix systems.

**T7 disposition:** applicable only after a verified first-order scalar reduction with every singularity checked.

### 10.2 Flicker 1979

Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” J. Austral. Math. Soc. Ser. A 27 (1979), 173–188.

**Peer reviewed. Works over arbitrary completions, including p-adic completions.**

The paper treats sequences of functional systems under nonnegative integral matrix transformations and proves algebraic independence under substantial hypotheses, including algebraic independence of limiting functions and dominance / valuation conditions.

It is not a modern generic lifting theorem saying that algebraic independence of Mahler functions automatically transfers to their values at every regular algebraic p-adic point. The paper itself notes p-adic limitations in simultaneous algebraic-independence settings.

T7 did not establish Flicker’s hypotheses for the exact Collatz character family.

**T7 disposition:** relevant prior p-adic Mahler machinery, but not applicable as presently verified.

### 10.3 Loxton–van der Poorten / Kubota

The 1970s work supplies foundational Mahler transcendence and algebraic-independence machinery, including multivariable transformations and p-adic variants referenced by later authors.

The audited statements are specialized and do not provide a ready theorem for an arbitrary finite automatic kernel at the single Collatz (S)-unit point.

**T7 disposition:** historically relevant; no exact Collatz application verified.

### 10.4 Nishioka 1990

Kumiko Nishioka, “p-adic transcendental numbers,” Proc. Amer. Math. Soc. 108 (1990), 39–41.

The paper constructs explicit large algebraically independent sets of p-adic numbers. It is not a generic higher-rank Mahler-system value theorem for automatic kernels.

**T7 disposition:** non-applicable.

### 10.5 Xu–Wang 2004

Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Math. Sinica, Chinese Series 47 (2004), 921–930, DOI 10.12386/A2004sxxb0116.

This is directly relevant by title and journal provenance.

However, the authoritative journal page exposed bibliographic metadata but not an inspectable theorem statement during T7. The exact functional equations, coefficient field, evaluation-point restrictions, independence hypotheses, and singularity assumptions could therefore not be checked to the project’s load-bearing standard.

**T7 disposition:** promising but **NON-LOAD-BEARING / HYPOTHESES NOT VERIFIED**.

This source is a primary target for the next theorem audit.

### 10.6 Wang 2006

Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Math. Sinica (English Series) 22 (2006), 187–194, DOI 10.1007/s10114-005-0534-4.

The journal abstract states only that transcendence and measures are proved for “some Mahler type functions.” The accessible journal metadata did not expose the theorem statement.

No claim is therefore made that it covers higher-order automatic-kernel scalar equations, matrix systems, or (2^B/3^k).

**T7 disposition:** peer-reviewed and relevant, but **NON-LOAD-BEARING / HYPOTHESES NOT VERIFIED** beyond the narrow information already recorded in T6.

### 10.7 Wang–Xu 2006 algebraic functional equations

The peer-reviewed / journal-indexed work on p-adic transcendence measures for values of functions satisfying algebraic Mahler-type functional equations is relevant to nonlinear first-order equations.

T7 did not verify a theorem statement matching the linear higher-rank cancellation problem.

**T7 disposition:** no application promoted.

### 10.8 Becker / classical algebraic-independence measures

Classical Mahler algebraic-independence measure results are important in the archimedean theory. No completion-correct theorem from this route was verified to solve the exact 2-adic Collatz specialization.

**T7 disposition:** non-load-bearing.

### 10.9 Adamczewski–Faverjon

The 2017 lifting/value theorems and the 2026 Annals paper “Mahler’s method in several variables and finite automata” are powerful modern results on algebraic relations among Mahler values.

Their audited value statements concern the **complex / archimedean analytic setting**. The use of Diophantine tools does not turn them into p-adic specialization theorems.

The 2026 Annals paper does not repair the T7 completion mismatch.

**T7 disposition:** not applicable to (G(W)inmathbb Q_2).

### 10.10 Faverjon–Poulet 2022 / 2026

The regular-singular papers provide algorithms and structural criteria for Mahler systems/equations. The 2026 paper explicitly concerns regular singularity, Frobenius methods, Puiseux solutions, and Newton polygons.

No p-adic arithmetic-value lifting conclusion is part of the audited theorem scope.

**T7 disposition:** useful for system classification only; not a value theorem.

### 10.11 Brechler 2026

The multivariate Mahler preprint is not peer reviewed as of T7. It is therefore not load-bearing under the repository literature standard.

**T7 disposition:** monitor only.

### Literature conclusion

No verified peer-reviewed theorem found in T7 has the exact shape:

> for a higher-rank / multi-character Mahler system over the 2-adic completion, evaluated at the rational non-torsion (S)-unit (W=2^B/3^k), functional independence or nonrationality of the relevant functions forces the specific Collatz linear combination of their values to be nonrational.

That is the missing theorem.

---

## 11. Rational non-torsion unit audit

Both authoritative T6 facts remain unchanged.

### Exact finite scaled-copy closure

For (c
e0),

[
c, c^k, c^{k^2},dots
]

has a finite orbit if and only if (c) is a root of unity.

Thus the actual Collatz unit (3^{-k}) cannot be absorbed into finitely many scaled copies.

### Direct first-order allowance

Bugeaud–Yao nevertheless permits rational p-adic unit factors in its first-order theorem.

T7 found no verified higher-rank theorem to which this allowance can simply be copied.

Therefore:

> “the unit is non-torsion” blocks naive finite scaled-copy closure;  
> it does not block T6 first-order evaluation;  
> and it neither proves nor disproves admissibility for an unrelated higher-rank theorem.

---

## 12. Generic higher-rank converses remain false or unsupported

T6 already proved that a nonrational finite-valued positive automatic series can take a rational value at a prescribed algebraic p-adic point.

That construction already prevents any theorem based solely on:

- finite automatic kernel;
- positivity of the coefficient alphabet;
- nonperiodicity;
- algebraicity of the evaluation point;
- (|W|_2<1).

T7 did not prove stronger generic counterexamples simultaneously satisfying all of:

- irreducibility of a minimal matrix system;
- regular singularity;
- primitivity;
- Collatz-like row sums;
- the exact algebraic coupling between coefficient block constants and (W).

Accordingly, those stronger structural assumptions remain possible locations for a future theorem, but none may be silently promoted.

In particular, T7 does **not** claim that regular-singular p-adic one-point rationality converses are generically false. It says only that no such theorem was verified and T6’s weaker generic converse is already false.

---

## 13. Collatz-specific arithmetic structure

The balanced Collatz alphabet is more rigid than an arbitrary finite automatic alphabet.

### 13.1 Exact block constants

For a length-(k) valuation block (w),

[
C_w=sum_{j=0}^{k-1}3^{k-1-j}2^{A_j}.
]

Different legal valuation blocks have distinct affine constants in the T5/T6 setting.

### 13.2 Concatenation law

[
C_{uv}=3^{|v|}C_u+2^{B_u}C_v.
]

This gives exact recursive arithmetic, not arbitrary letter labels.

### 13.3 Same balance parameter controls the point

The common block valuation sum (B) fixes

[
W=2^B/3^k.
]

Thus the coefficient alphabet and the evaluation point come from the same substituted blocks.

### 13.4 What the kernel matrix does not see

The transition matrix

[
M(z)=sum_r z^rA_r
]

is determined by the automatic transition graph. The numerical Collatz constants enter through the output / initial linear combination, not through the transition graph alone.

This explains why determinant, rank, regular-singular structure, or Fourier diagonalization can be completely explicit while the value problem remains unresolved.

### T7 conclusion on the coupling

No exact congruence or concatenation identity was found that forbids rational cancellation among the higher-rank character values.

This is the Collatz-specific structure that remains to be exploited.

---

## 14. Connection back to bounded (R_m)

T2 remains authoritative:

for bounded valuation alphabets, bounded canonical start-cylinder representatives (R_m) are equivalent to an ordinary nonnegative anchor.

Therefore any future theorem proving

[
H
otinmathbb Q
]

for a nonperiodic recursive class immediately gives

[
(R_m)	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
]

for that class.

T7 proves no new p-adic exclusion class, so it gives **no new bounded-(R_m) periodicity theorem** beyond T6.

---

## 15. Positive branch

No higher-rank balanced system was proved to satisfy

[
Hinmathbb Qcapmathbb Z_2.
]

Hence there is no rational candidate to test for ordinary integrality or positivity, and no hostile certification protocol is triggered.

No explicit aperiodic anchored valuation word exists in the T7 result.

---

## 16. Multivariate T5 system

T7 does **not** extend to the multivariate Parikh/Mahler system

[
mathbf F(x)=A(x)mathbf F(	au(x))
]

at

[
q_s=2^{v(s)}/3.
]

Reason: the one-variable higher-rank arithmetic-value bridge is still unresolved. Beginning a multivariate p-adic lifting argument now would multiply unverified hypotheses without solving the simpler same-point cancellation problem.

The multivariate extension therefore remains deferred.

---

## 17. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base has been proved for the same relevant sequence.

Powers of (2) and (3) in Collatz arithmetic do not supply Cobham’s hypotheses.

**Applicable in T7:** NO.

### López–Stoll

The 2021 density route remains non-load-bearing. T7 does not repair the real/2-adic completion transfer or the prescribed-parity/actual-parity issue identified in T3.

**Load-bearing in T7:** NO.

---

## 18. Requested deliverable answers

- **Exact theorem proved or failed:** the universal higher-rank balanced p-adic nonrationality theorem remains **UNKNOWN**; T7 proves only structural scalarization and Fourier decomposition, not a new value obstruction.
- **Precise higher-rank balanced automatic class covered structurally:** arbitrary finite true (k)-kernel systems; with complete diagonalization for balanced finite abelian translation substitutions.
- **Exact (k)-kernel dimension:** (m=|ker_k(g)|) for the true kernel. In a translation presentation the unreduced group-state dimension is (|A|), compressed if shifted sequences coincide.
- **Exact matrix Mahler equation:** (mathbf G(z)=M(z)mathbf G(z^k)), (M_{ij}(z)=sum_{delta(i,r)=j}z^r).
- **Determinant and singularities:** (det M(z)); regular orbit requires nonvanishing on (W^{k^j}). In the abelian translation class, (det M_A(z)=prod_chi S_chi(z)) over the splitting field.
- **Coefficient field:** (mathbb Q) / (mathbb Z[z]) for the kernel system; cyclotomic splitting fields after general Fourier diagonalization.
- **Mahler base:** (k).
- **Exact 2-adic evaluation point:** (W=2^B/3^k), with (|W|_2<1).
- **Every external p-adic theorem audited:** see Section 10.
- **Rational non-torsion p-adic units permitted?** Verified YES only for the T6 Bugeaud–Yao first-order theorem; not extrapolated.
- **Scalar reduction exists?** YES.
- **Exact order:** at most (m); the minimal order is the cyclic-row rank for the chosen output.
- **First-order reduction always possible?** NO theorem proves this; false as a generic expectation.
- **Bugeaud–Yao applies generically?** NO. It applies only after a checked first-order reduction.
- **Another verified p-adic higher-rank value theorem applies?** NO.
- **Any new higher-rank automatic class ruled out?** NO.
- **New bounded-(R_mRightarrow) periodicity class?** NO.
- **Residual primitive constant-length class further reduced?** Not by a qualifying arithmetic obstruction. Its structural boundary is sharpened.
- **Remaining problem still a restricted Periodicity-Conjecture problem?** YES for the generic balanced automatic remainder.
- **Generic one-point rationality converse false?** YES, by T6. T7 found no rescue from finite kernel dimension alone.
- **Stronger generic converse under irreducible/regular-singular hypotheses disproved?** NOT ESTABLISHED.
- **Collatz-specific extra structure remaining:** exact (C_w), concatenation law, injectivity, common balance (B), and the coupling of those constants to (W); no no-cancellation theorem yet.
- **Cobham applicable?** NO.
- **López–Stoll load-bearing?** NO.
- **Explicit anchored aperiodic word exists?** NONE FOUND.
- **Candidate or unbounded orbit found?** NO.
- **Counterexample claimed?** NO.
- **Future scientific compute justified?** NO.
- **COMPUTE_BUDGET.md change justified?** NO.
- **METRIC_CATALOG.md change justified?** NO.

---

## 19. Exact next theorem-sized obligation

The next obligation should not be another generic matrix survey.

It is the **same-point p-adic no-cancellation problem** exposed by the abelian Fourier reduction.

### CDM4-T8 target

Begin with the most arithmetic-friendly genuine higher-rank subclass:

- finite abelian translation substitutions;
- preferably elementary (2)-group state spaces so all characters and Fourier coefficients are rational;
- exact balance (B);
- nonperiodic fixed point;
- every character singularity checked along (W^{k^j}).

For the nontrivial character functions

[
widehat F_{chi_i}(z)=S_{chi_i}(z)widehat F_{chi_i}(z^k),
]

prove one of the following:

1. a verified peer-reviewed p-adic theorem gives enough algebraic or linear independence of
   [
   widehat F_{chi_1}(W),dots,widehat F_{chi_t}(W)
   ]
   to forbid the exact Collatz linear combination from being rational;
2. the Xu–Wang 2004 / Wang 2006 theorem statements can be recovered and their full hypotheses checked against this system;
3. a Collatz-specific relation among (C_a), (S_chi), and (W) prevents cancellation directly;
4. or prove that even this Fourier-diagonal higher-rank subclass remains outside current p-adic Mahler value theory and state the exact missing theorem.

Do not enumerate substitutions to find convenient character polynomials.

No scientific compute is authorized.

---

## 20. Source ledger

Primary and authoritative sources inspected or re-audited in T7:

1. **Y. Bugeaud, J.-Y. Yao**, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” *Annali di Matematica Pura ed Applicata* 196 (2017), 929–946. DOI: 10.1007/s10231-016-0602-7. T6 theorem scope preserved.
2. **Y. Z. Flicker**, “Algebraic independence by a method of Mahler,” *J. Austral. Math. Soc. Ser. A* 27 (1979), 173–188. DOI: 10.1017/S144678870001209X. Full-text theorem framework inspected; p-adic completion explicitly included.
3. **J. H. Loxton, A. J. van der Poorten**, “Arithmetic properties of certain functions in several variables,” *Journal of Number Theory* 9 (1977), 87–106. DOI: 10.1016/0022-314X(77)90053-1.
4. **K. Nishioka**, “p-adic transcendental numbers,” *Proceedings of the AMS* 108 (1990), 39–41. DOI: 10.1090/S0002-9939-1990-0994783-3.
5. **G. S. Xu, T. Q. Wang**, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” *Acta Mathematica Sinica, Chinese Series* 47 (2004), 921–930. DOI: 10.12386/A2004sxxb0116. Theorem text not sufficiently exposed for load-bearing use.
6. **T. Q. Wang**, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” *Acta Mathematica Sinica, English Series* 22 (2006), 187–194. DOI: 10.1007/s10114-005-0534-4. Abstract verified; theorem hypotheses not sufficiently exposed for load-bearing use.
7. **T. Q. Wang, G. S. Xu**, work on p-adic transcendence measures for values satisfying algebraic functional equations of Mahler type, *Advances in Mathematics (China)* 35 (2006), 463–475. Relevant but no matching higher-rank theorem verified.
8. **B. Adamczewski, C. Faverjon**, “Méthode de Mahler : relations linéaires, transcendance et applications aux nombres automatiques,” *Proc. London Math. Soc.* 115 (2017), 55–90. Modern lifting/value theory; archimedean value setting.
9. **B. Adamczewski, C. Faverjon**, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 455–533. DOI: 10.4007/annals.2026.204.2.1. Powerful multivariate complex-value theory; not a 2-adic value theorem.
10. **C. Faverjon, M. Poulet**, “An algorithm to recognize regular singular Mahler systems,” *Mathematics of Computation* 91 (2022), 2905–2928.
11. **C. Faverjon, M. Poulet**, “Regular singular Mahler equations and Newton polygons,” *Journal of the Mathematical Society of Japan* 78 (2026), 799–831. DOI: 10.2969/jmsj/94739473. Functional regular-singular structure; no p-adic arithmetic-value lifting conclusion.
12. **E. Brechler**, 2026 multivariate Mahler preprint. Non-peer-reviewed and non-load-bearing.

---

## 21. Permanent lesson

Higher-rank automaticity is not blocked because matrix Mahler systems are too opaque. In an important family they are completely diagonalizable.

The obstruction is arithmetic:

> after diagonalization, the exact Collatz anchor is a prescribed sum of several p-adic Mahler values at one rational non-torsion (S)-unit point.

T6 solved the one-nontrivial-character case. T7 shows that the first genuinely higher-rank step requires a **simultaneous p-adic value theorem or a Collatz-specific no-cancellation identity**.

Function transcendence, regular singularity, finite kernel dimension, scalar equations of order (>1), and separate transcendence of components do not supply that implication.

**D — no qualifying theorem found**
