# CDM4-T14 — Multivariate / unbalanced finite-state Mahler tail-regularity / completion-sign audit

**Date:** 2026-10-03  
**Authoritative input commit:** c9d945045b27d9d9496e2e749f2dbfd606a19433  
**Session type:** theorem / exact algebra / literature audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue/carry/exponent-code optimization: **NONE**  
CPU/GPU/cloud/distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T14 does **not** obtain a qualifying new positive-anchor obstruction for a genuinely multivariate/unbalanced finite-state class.

The exact failure is now sharply localized.

T14 reconstructs the full T5 multivariate system, separates finite-state minimization from rational-function linear minimization, derives the exact Collatz monomial orbit, proves an algebraic-dynamical dichotomy for infinite intersections with singular varieties, and proves a useful dominant/admissible tail-regularity theorem. It also proves that a hypothetical aperiodic positive anchor in a primitive unbalanced substitution forces the **entire deep real monomial orbit** into the open unit polydisc, not merely a scalar mean inequality.

However, the completion-sign argument still lacks one load-bearing bridge:

> No peer-reviewed characteristic-zero **nonarchimedean multivariate/monomial Mahler relation-lifting theorem with exact specialization** was verified that covers the exact T5 system.

Adamczewski–Faverjon, *Annals of Mathematics* 204 (2026), gives the required multivariate lifting architecture, regularity notion, and admissibility classification, but its value theory is explicitly formulated for complex values. It therefore remains wrong-completion evidence for the 2-adic anchor relation.

Enzo Brechler's July 2026 preprint explicitly advertises multivariate meromorphy on p-adic unit balls and a strengthening of the Adamczewski–Faverjon lifting theorem, but it remains a preprint as of this audit. Under the project rules it is non-load-bearing.

The strongest exact new structural theorem is therefore:

\[
\boxed{
\text{multivariate singular hits are eventually finite or contain an arithmetic-progression suborbit}
}
\]

after passage to the stable image torus. In the dominant Adamczewski–Faverjon class \(\mathcal M\), if the exact Collatz point is \(T\)-independent, the orbit is Zariski dense and every proper rational singular variety is hit only finitely often. Hence every invertible rational minimal system in that subclass has a regular tail.

This regular-tail theorem is not enough to close positive anchoring without a nonarchimedean multivariate relation-lifting theorem.

The primitive real side is better behaved. If a primitive unbalanced fixed point had a genuinely aperiodic positive anchor, its Perron–Frobenius mean valuation \(\alpha\) would satisfy

\[
\alpha<\log_2 3.
\]

Then, uniformly over all states,

\[
\frac{B_j(s)}{k^j}\to\alpha,
\]

so

\[
q_{j,s}=\frac{2^{B_j(s)}}{3^{k^j}}\to0
\]

in the ordinary real absolute value as well as 2-adically. Thus the positivity/reconstruction side of the T13 mechanism survives for primitive substitutions once a regular tail exists.

The missing bridge is specifically the **completion-correct multivariate lift**, not generic real convergence.

Accordingly:

- no newly covered genuinely multivariate/unbalanced family is proved to have no positive integer anchor;
- no new implication \(R_m\) bounded \(\Rightarrow\) eventual periodicity is promoted beyond T13;
- no rational exceptional inverse value is constructed;
- no scientific compute is justified.

The exact next theorem-sized obligation is to obtain a peer-reviewed arbitrary-place multivariate/monomial lifting theorem for the regular/admissible T14 tail class, or to prove an equivalent nonarchimedean lifting theorem directly. A separate secondary obligation is to make rational-linear minimalization on the stable-image torus fully formal when the incidence matrix is singular.

---

## 2. Inherited T13 state

T14 treats the following as closed infrastructure.

For every exact balanced one-variable true finite-\(k\)-kernel Collatz coefficient system,

\[
\mathbf F(z)=M(z)\mathbf F(z^k),
\qquad
M(z)=\sum_{r=0}^{k-1}z^rA_r,
\]

T13 established:

1. the canonical states are the distinct reachable true kernel sequences;
2. \(M(0)=A_0\), and \(A_0\) is invertible exactly when the digit-zero map is a permutation;
3. if \(\det M\not\equiv0\), only finitely many nonzero Mahler iterates can be singular;
4. if \(\det M\equiv0\), the canonical state functions are rational-function linearly dependent;
5. exact rational-linear minimalization preserves the prescribed root coordinate \(F_0\);
6. every invertible one-variable rational minimal system has a sufficiently deep regular nonzero tail;
7. early singular canonical matrices need not be inverted because the exact root relation transports forward;
8. Adamczewski–Bell–Smertnig Theorem 4.3 is a valid arbitrary-place one-variable relation-lifting theorem with exact specialization;
9. a hypothetical genuinely aperiodic positive anchor forces \(0<W<1\) in the real completion;
10. real evaluation of the lifted identity reconstructs the positive exact series and contradicts positive anchoring.

Therefore

\[
\boxed{
\text{no genuinely nonperiodic balanced one-variable finite-}k\text{-kernel family has }
H\in\mathbb Z_{>0}.
}
\]

T14 does not reopen this branch.

---

## 3. Exact T5 multivariate finite-state system

Let

\[
\sigma:\Gamma\to\Gamma^k
\]

be a \(k\)-uniform substitution prolongable on an initial letter \(a_0\), and let

\[
u=u_0u_1u_2\cdots
\]

be its fixed point.

Let

\[
v:\Gamma\to\mathbb Z_{>0}
\]

be the accelerated-Collatz valuation coding.

Write \(d=|\Gamma|\). For a prefix of length \(n\), let

\[
c(n)\in\mathbb N^d
\]

be the Parikh vector of

\[
u_0u_1\cdots u_{n-1}.
\]

Let \(M\in M_d(\mathbb Z_{\ge0})\) be the substitution incidence matrix in the column convention:

\[
M_{\ell,s}
=
\#\{0\le r<k:\sigma(s)_r=\ell\}.
\]

Every column has sum \(k\), so

\[
\mathbf 1^T M=k\mathbf 1^T.
\tag{1}
\]

For \(0\le r<k\), let

\[
p_r(s)\in\mathbb N^d
\]

be the Parikh vector of the length-\(r\) prefix of \(\sigma(s)\).

Then T5's exact recurrence is

\[
\boxed{
c(kn+r)=Mc(n)+p_r(u_n).
}
\tag{2}
\]

For each letter \(t\), define

\[
F_t(x)
=
\sum_{\substack{n\ge0\\u_n=t}}
x^{c(n)},
\qquad
x^{c}=\prod_{s\in\Gamma}x_s^{c_s}.
\tag{3}
\]

Define the monomial transformation

\[
\boxed{
\tau(x)_s
=
\prod_{t\in\Gamma}x_t^{M_{t,s}}.
}
\tag{4}
\]

Then

\[
\tau(x)^{c}=x^{Mc}.
\]

Define the exact functional matrix

\[
\boxed{
\mathcal A_{t,s}(x)
=
\sum_{\substack{0\le r<k\\\sigma(s)_r=t}}
x^{p_r(s)}.
}
\tag{5}
\]

Equations (2)–(5) give

\[
\boxed{
\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x)).
}
\tag{6}
\]

The entries of \(\mathcal A\) lie in

\[
\mathbb Z[x_1,\ldots,x_d].
\]

The natural rational-function coefficient field is

\[
K=\mathbb Q(x_1,\ldots,x_d).
\]

The exact Collatz point is

\[
\boxed{
q_s=\frac{2^{v(s)}}3.
}
\tag{7}
\]

Since

\[
q^{c(n)}
=
\frac{2^{A_n}}{3^n},
\qquad
A_n=\sum_{i=0}^{n-1}v(u_i),
\tag{8}
\]

the prescribed scalar is

\[
\boxed{
S(x)=\sum_{t\in\Gamma}F_t(x)
}
\tag{9}
\]

and the exact T5 inverse value is

\[
\boxed{
H=-\frac13 S(q).
}
\tag{10}
\]

This normalization is load-bearing. T14 never replaces \(S\) by a signed reduced coordinate without exact reconstruction.

---

## 4. Exact reachable and output-identification reduction

The formal source alphabet can contain states irrelevant to the fixed point.

For each digit \(r\), define

\[
\delta_r(s)=\sigma(s)_r.
\]

The exact reachable set from the prolongation state is

\[
\Gamma_R
=
\{\delta_w(a_0):w\in\{0,\ldots,k-1\}^*\}.
\tag{11}
\]

Every state outside \(\Gamma_R\) is unreachable and is deleted.

On \(\Gamma_R\), define output equivalence

\[
s\sim t
\iff
v(\delta_w(s))=v(\delta_w(t))
\quad
\text{for every digit word }w.
\tag{12}
\]

Because the empty word is allowed, \(s\sim t\) implies \(v(s)=v(t)\). Because (12) is stable under every \(\delta_r\), it is an exact deterministic congruence.

Let

\[
\Lambda=\Gamma_R/{\sim}.
\tag{13}
\]

The quotient substitution is

\[
[s]\longmapsto
[\sigma(s)_0]\cdots[\sigma(s)_{k-1}],
\tag{14}
\]

and the valuation coding descends exactly.

Thus:

- all unreachable states are removed by (11);
- all duplicate/output-equivalent states are removed by (12);
- the quotient generates exactly the same valuation word.

For the remainder of T14, the canonical multivariate state alphabet is this exact quotient \(\Lambda\). Write

\[
m=|\Lambda|.
\]

There is no universal numerical value of \(m\); T14 is a family theorem rather than an enumeration.

The incidence matrix, Parikh maps, monomial map, and functional matrix below are understood for the quotient substitution.

---

## 5. Finite-state minimality is not functional linear minimality

Define

\[
K_m=\mathbb Q(x_1,\ldots,x_m).
\]

The exact rational-function relation module is

\[
\mathcal R
=
\left\{
a(x)\in K_m^m:
a(x)^T\mathbf F(x)=0
\right\}.
\tag{15}
\]

The exact functional rank is

\[
\boxed{
r=
\dim_{K_m}
\operatorname{span}_{K_m}
\{F_t:t\in\Lambda\}.
}
\tag{16}
\]

Output-minimality of the finite automaton says only that the state sequences are distinct. It does **not** imply

\[
r=m.
\]

This is the direct multivariate analogue of T13's distinction between true kernel states and rational Mahler-linear dimension.

The prescribed scalar

\[
S=\mathbf1^T\mathbf F
\]

is nonzero and belongs to this span.

Whenever the rational substitution map on \(K_m\) is legitimate, one may therefore choose an exact basis

\[
\mathbf G=(G_1,\ldots,G_r)^T
\]

with

\[
\boxed{
G_1=S.
}
\tag{17}
\]

Equivalently, if a basis from original state functions is desired, one may choose such a basis and retain \(S\) as an exact rational row. T14 uses (17) because it makes scalar preservation explicit.

---

## 6. Dominant monomial maps admit exact rational-linear minimalization

There is a new multivariate subtlety absent from T13.

Let

\[
\phi:K_m\to K_m,
\qquad
\phi(f)=f\circ\tau.
\]

A monomial map extends from the Laurent polynomial ring to its full fraction field only when nonzero rational denominators do not become identically zero after substitution.

A sufficient and natural condition is

\[
\boxed{
\det M\ne0.
}
\tag{18}
\]

Then \(\tau\) is a dominant isogeny of the algebraic torus and \(\phi\) is an injective endomorphism of \(K_m\).

Choose matrices \(B(x)\) and \(C(x)\) with

\[
\mathbf G=B(x)\mathbf F,
\qquad
\mathbf F=C(x)\mathbf G.
\tag{19}
\]

Using (6),

\[
\mathbf G(x)
=
B(x)\mathcal A(x)C(\tau(x))\mathbf G(\tau(x)).
\]

Thus

\[
\boxed{
\mathbf G(x)=A(x)\mathbf G(\tau(x)),
}
\tag{20}
\]

where

\[
A(x)
=
B(x)\mathcal A(x)\phi(C)(x)
\in M_r(K_m).
\tag{21}
\]

If \(A\) were singular over \(K_m\), a nonzero left-null row would give a nontrivial \(K_m\)-linear relation among the basis \(\mathbf G\). Therefore

\[
\boxed{
A(x)\in\operatorname{GL}_r(K_m).
}
\tag{22}
\]

Hence, for dominant incidence:

\[
\boxed{
\text{exact rational-linear minimalization exists and can retain }G_1=S.
}
\]

This is the clean multivariate analogue of T13's minimalization theorem.

---

## 7. Singular incidence creates a new formal obstruction

If

\[
\det M=0,
\]

the monomial map has lower-dimensional image. Then a nonzero denominator in \(K_m\) can vanish identically on that image. Consequently the rule

\[
f(x)\mapsto f(\tau(x))
\]

does **not** automatically extend to a well-defined endomorphism of the full field \(K_m\).

This breaks the naive T13 argument at a precise point.

The polynomial canonical equation (6) remains exact, but a rational basis change over \(K_m\) may not be stable under substitution.

A universal singular-incidence minimalization would have to pass first to the function field of an appropriate invariant stable-image torus, or to another exact quotient on which the monomial transformation is dominant, and then prove that:

1. every chosen rational coefficient restricts well;
2. the functional identity survives;
3. the prescribed scalar \(S\) survives;
4. reconstruction is valid at the exact Collatz orbit.

T14 does not promote such a theorem universally.

Therefore:

\[
\boxed{
\det M=0
\text{ is not proved intrinsically fatal, but it blocks naive full-field minimalization.}
}
\tag{23}
\]

This is a genuine multivariate obstruction not present in the one-variable T13 setting.

---

## 8. Exact Collatz monomial orbit

Let

\[
q_j=\tau^j(q).
\]

Define

\[
B_j(s)
=
\sum_{\ell\in\Lambda}
v(\ell)(M^j)_{\ell,s}
=
v^T M^j e_s.
\tag{24}
\]

This is exactly the total coded valuation of \(\sigma^j(s)\).

Since every substituted word has length \(k^j\),

\[
\boxed{
q_{j,s}
=
\frac{2^{B_j(s)}}{3^{k^j}}.
}
\tag{25}
\]

### 8.1 Pairwise distinctness

If \(q_i=q_j\), then for any coordinate \(s\),

\[
\frac{2^{B_i(s)}}{3^{k^i}}
=
\frac{2^{B_j(s)}}{3^{k^j}}.
\]

Unique factorization forces \(k^i=k^j\), hence \(i=j\).

Therefore

\[
\boxed{
q_0,q_1,q_2,\ldots
\text{ are pairwise distinct.}
}
\tag{26}
\]

### 8.2 2-adic convergence

Because every valuation is at least \(1\),

\[
B_j(s)\ge k^j.
\]

Hence

\[
|q_{j,s}|_2=2^{-B_j(s)}\to0
\]

for every coordinate.

Thus

\[
\boxed{
q_j\to0
\quad\text{coordinatewise in the 2-adic completion.}
}
\tag{27}
\]

This part is unconditional for positive valuation coding.

---

## 9. Exact multiplicative-relation and \(T\)-independence criterion

Adamczewski–Faverjon use the exponent matrix

\[
T=M^T
\]

for the monomial map.

For any integer vector

\[
\mu\in\mathbb Z^m,
\]

equation (25) gives

\[
q_j^\mu
=
\frac{
2^{v^T M^j\mu}
}{
3^{k^j\mathbf1^T\mu}
}.
\tag{28}
\]

Therefore

\[
\boxed{
q_j^\mu=1
\iff
\mathbf1^T\mu=0
\ \text{and}\
v^T M^j\mu=0.
}
\tag{29}
\]

Adamczewski–Faverjon Definition 4.4 calls \(q\) \(T\)-independent when there is no nonzero \(\mu\) such that

\[
q_j^\mu=1
\]

for every \(j\) in an arithmetic progression.

For the Collatz point this is exactly:

\[
\boxed{
\text{there do not exist }
\mu\ne0,\ a\ge0,\ r\ge1
}
\]

such that

\[
\boxed{
\mathbf1^T\mu=0,
\qquad
v^T M^{a+rn}\mu=0
\quad
\forall n\ge0.
}
\tag{30}
\]

For a fixed proposed progression \(a+r\mathbb N\), Cayley–Hamilton for \(M^r\) reduces the second condition to finitely many exact linear equalities:

\[
v^T M^{a+rn}\mu=0,
\qquad
0\le n<m.
\tag{31}
\]

Thus each proposed dependence progression is an exact rational linear-algebra problem.

\(T\)-independence is **not automatic**. For example, if the valuation coding is constant, then every \(\mu\) with \(\mathbf1^T\mu=0\) satisfies (29) at every depth.

The incidence matrix can therefore impose persistent multiplicative relations on the exact Collatz orbit.

---

## 10. Correct multivariate regularity notion

For a rational minimal system

\[
\mathbf G(x)=A(x)\mathbf G(\tau(x)),
\qquad
A(x)\in\operatorname{GL}_r(K_m),
\tag{32}
\]

let \(Z_A\) be the proper algebraic bad locus obtained from:

- poles of the entries of \(A\);
- zeros of \(\det A\);
- poles of the entries of \(A^{-1}\).

A point \(\alpha\) is regular for the forward monomial orbit precisely when

\[
\tau^j(\alpha)\notin Z_A
\qquad
\forall j\ge0.
\tag{33}
\]

This must be kept separate from:

1. \(A\) being invertible over the rational-function field;
2. \(q\notin Z_A\);
3. every future \(q_j\notin Z_A\);
4. existence of a tail \(q_J\) satisfying (33);
5. admissibility / \(T\)-independence of the pair \((T,q_J)\).

In several variables, \(Z_A\) is generally a hypersurface or finite union of algebraic subvarieties. The one-variable argument “a rational matrix has only finitely many nonzero singular points” does not generalize.

---

## 11. Stable-image torus and exact infinite-hit dichotomy

T14 does obtain a universal algebraic-dynamical replacement for the one-variable finite-zero-set argument.

Consider the torus

\[
\mathbb G_m^m
\]

and the monomial endomorphism \(\tau\).

If \(M\) is singular, the images

\[
\operatorname{im}(\tau^j)
\]

form a descending chain of connected subtori. Choose \(J_0\) after the rational ranks of \(M^j\) stabilize and set

\[
X=\operatorname{im}(\tau^{J_0}).
\tag{34}
\]

Then

\[
\tau(X)=X.
\]

The restriction

\[
\tau|_X:X\to X
\]

is a surjective endomorphism of an algebraic torus of the same dimension, hence an isogeny. In characteristic zero it is étale.

The Bell–Ghioca–Tucker dynamical Mordell–Lang theorem therefore applies to the orbit of

\[
q_{J_0}\in X.
\]

For every algebraic subvariety \(Z\subseteq X\),

\[
\{j\ge0:q_{J_0+j}\in Z\}
\]

is a finite union of arithmetic progressions together with finitely many exceptional indices.

Consequently:

\[
\boxed{
\text{every singular variety has either finitely many orbit hits}
}
\]

or

\[
\boxed{
\text{it contains a complete arithmetic-progression suborbit}
\quad
q_{J_0+a+rn},\ n\ge0.
}
\tag{35}
\]

This is the exact multivariate replacement for T13's finite set of singular points.

It also identifies the precise infinite obstruction. One must not replace (35) by finite-depth determinant sampling.

---

## 12. A useful dominant/admissible tail theorem

Adamczewski–Faverjon define a class \(\mathcal M\) of nonnegative integer matrices \(T\) with:

1. \(T\) nonsingular;
2. no eigenvalue of \(T\) a root of unity;
3. a positive eigenvector for the spectral radius.

They also define \(T\)-independence as in Section 9.

Their Theorem 4.6 identifies admissibility, in the complex setting, with:

\[
T\in\mathcal M,
\qquad
T^j q\to0,
\qquad
q\text{ is }T\text{-independent}.
\tag{36}
\]

T14 uses these structural conditions, not their complex value theorem, to isolate a regular-tail subclass.

### Theorem T14.1 — admissible Collatz monomial orbits are Zariski dense

Assume:

\[
T=M^T\in\mathcal M,
\qquad
q\text{ is }T\text{-independent}.
\tag{37}
\]

Then the exact Collatz monomial orbit

\[
\{q_j:j\ge0\}
\]

is Zariski dense in \(\mathbb G_m^m\).

#### Proof sketch

All coordinates of all \(q_j\) lie in the finitely generated multiplicative group generated by \(2\) and \(3\). Thus the orbit lies in a finitely generated subgroup of the torus.

If its Zariski closure were proper, Laurent's torus Mordell–Lang theorem would place infinitely many orbit points in a proper torus coset.

Bell–Ghioca–Tucker then gives an arithmetic-progression suborbit lying in that coset.

A proper torus coset satisfies an equation

\[
x^\mu=c
\]

for some nonzero integer character \(\mu\). Along the progression,

\[
q_{a+rn}^\mu=c.
\]

Comparing consecutive progression terms gives

\[
q_{a+rn}^{(M^r-I)\mu}=1
\qquad
\forall n.
\]

Because no eigenvalue of \(M\) is a root of unity,

\[
(M^r-I)\mu\ne0.
\]

This contradicts \(T\)-independence.

QED.

### Corollary T14.2 — regular tail for dominant minimal systems

Under (37), every proper algebraic subvariety meets the orbit only finitely often by Bell–Ghioca–Tucker Corollary 1.4.

Therefore, for every exact rational minimal system (32),

\[
q_j\in Z_A
\]

for only finitely many \(j\).

Hence:

\[
\boxed{
\exists J\text{ such that }q_J
\text{ is regular for the complete future orbit.}
}
\tag{38}
\]

This is a genuine multivariate tail-regularity theorem.

It is a **structural theorem only**. T14 has not yet supplied the nonarchimedean relation-lifting theorem needed to turn (38) into a positive-anchor obstruction.

---

## 13. Why the universal tail theorem still fails

Without the density/admissibility condition, (35) permits a singular locus to contain a complete arithmetic-progression suborbit.

This can occur for exact algebraic reasons arising from:

- persistent multiplicative relations;
- a lower-dimensional invariant torus;
- a singular-incidence stable image;
- a singular variety containing a periodic subvariety of the monomial dynamics.

Thus an invertible rational matrix over \(K_m\) does **not** by itself imply a regular monomial tail.

The exact dichotomy is:

\[
\boxed{
\text{finite singular hits}
\quad\text{or}\quad
\text{arithmetic-progression trapping in the singular variety}.
}
\tag{39}
\]

In the second branch, T14 does not prove universally that trapping forces:

- periodicity of the valuation language;
- balance;
- a further rational-function reduction;
- or impossibility of positive anchoring.

That remains an exact residual structural problem.

---

## 14. Peer-reviewed multivariate lifting theorem audit

### 14.1 Adamczewski–Faverjon 2026

Source:

Boris Adamczewski and Colin Faverjon, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 455–533, DOI 10.4007/annals.2026.204.2.1.

The published article gives a general multivariate linear Mahler theory.

The checked theorem package includes:

- Definition 2.1: linear \(T\)-Mahler systems with rational invertible functional matrix;
- Definition 2.2: regularity along the full \(T\)-orbit;
- Theorem 2.3: lifting of every homogeneous algebraic relation at a regular admissible point to a functional relation with the **same exact specialization**;
- Remark 2.4: adjoining the constant function \(1\) handles inhomogeneous relations;
- Definition 4.2: class \(\mathcal M\);
- Definition 4.4: \(T\)-independence;
- Theorem 4.6: exact admissibility criterion.

These are exactly the structural hypotheses T14 needs.

However, the article explicitly formulates the value problem for

\[
f_i(\alpha)\in\mathbb C
\]

with convergent complex power series and ordinary complex convergence.

Therefore:

\[
\boxed{
\text{Adamczewski–Faverjon 2026 is not a 2-adic lifting theorem.}
}
\tag{40}
\]

The presence of a multivariate lifting theorem does not authorize direct transfer of the 2-adic anchor relation.

### 14.2 Adamczewski–Bell–Smertnig 2023

The arbitrary-place theorem used in T10–T13 is still load-bearing in **one variable**.

T14 found no theorem in that source extending Theorems 4.2–4.3 to a general monomial map in several variables.

It therefore remains closed one-variable infrastructure, not a multivariate bridge.

### 14.3 Brechler 2026

Enzo Brechler, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877, submitted 27 July 2026.

The abstract explicitly states:

- analytic behavior near the origin;
- meromorphy on the complex open unit ball;
- meromorphy on \(p\)-adic open unit balls for every prime;
- a rational/transcendental dichotomy;
- a strengthening of Adamczewski–Faverjon's lifting theorem;
- a multivariate descent theorem at regular points.

This is exactly the direction required by T14.

But the source remains a **preprint** as of 2026-10-03. The project instructions explicitly forbid making it load-bearing before peer review or a peer-reviewed replacement.

Therefore:

\[
\boxed{
\text{Brechler 2026 is relevant but non-load-bearing.}
}
\tag{41}
\]

### 14.4 Older multivariate / p-adic Mahler work

Flicker, Loxton–van der Poorten, Kubota, Nishioka, Xu–Wang, Wang, and related sources were already audited in T7–T10.

T14 found no newly verified peer-reviewed theorem among these sources with all of:

- several variables;
- the exact monomial transformation;
- characteristic zero;
- a nonarchimedean place;
- regular/admissible algebraic point;
- lifting of the actual same-point value relation;
- exact specialization preservation.

No older theorem is promoted by title or analogy.

---

## 15. Primitive positive anchoring forces full real tail contraction

The real-completion side can be sharpened beyond T13's scalar balanced condition.

Assume the quotient substitution is primitive.

Let \(\pi\) be its Perron–Frobenius right eigenvector, normalized by

\[
M\pi=k\pi,
\qquad
\mathbf1^T\pi=1.
\tag{42}
\]

Because \(M\) is an integer matrix and the eigenvalue \(k\) is rational and simple, \(\pi\) is rational.

Define the mean valuation

\[
\alpha=v^T\pi\in\mathbb Q.
\tag{43}
\]

The fixed point has letter frequencies \(\pi\), so

\[
\frac{A_n}{n}\to\alpha.
\tag{44}
\]

If a positive integer realized a genuinely aperiodic valuation word, T3's distinct-positive-orbit height theorem gives

\[
\limsup_{n\to\infty}\frac{A_n}{n}
\le
\log_2 3.
\tag{45}
\]

Hence

\[
\alpha\le\log_2 3.
\]

Since \(\alpha\in\mathbb Q\) while \(\log_2 3\notin\mathbb Q\),

\[
\boxed{
\alpha<\log_2 3.
}
\tag{46}
\]

By primitive Perron–Frobenius convergence,

\[
\frac{M^j}{k^j}
\to
\pi\mathbf1^T.
\]

Therefore, uniformly over all states \(s\),

\[
\boxed{
\frac{B_j(s)}{k^j}
=
\frac{v^TM^je_s}{k^j}
\to
\alpha.
}
\tag{47}
\]

Choose \(\varepsilon>0\) with

\[
\alpha+\varepsilon<\log_2 3.
\]

For all sufficiently large \(j\),

\[
B_j(s)\le
(\log_2 3-\varepsilon)k^j
\]

for every state \(s\). Hence

\[
0<q_{j,s}
\le
2^{-\varepsilon k^j}
\to0
\]

in the ordinary real absolute value.

Thus:

\[
\boxed{
q_j\to0
\text{ in the real polydisc for every primitive hypothetical aperiodic positive anchor.}
}
\tag{48}
\]

This is the correct primitive unbalanced subcriticality theorem.

A scalar mean inequality alone would not have justified (48); the uniform Perron–Frobenius convergence is load-bearing.

---

## 16. Nonprimitive real contraction is not automatic

For nonprimitive substitutions, T3 controls the valuation mean along the actual fixed-point prefixes.

That does not automatically imply

\[
\max_s\frac{B_j(s)}{k^j}
<
\log_2 3
\]

for every reachable state \(s\).

A state that occurs sparsely in the fixed point may still have substitution blocks with a different asymptotic valuation profile.

The correct general real-tail hypothesis is therefore a uniform subcriticality condition such as:

\[
\boxed{
\exists\varepsilon>0,\ J
\text{ such that }
\frac{B_j(s)}{k^j}
\le
\log_2 3-\varepsilon
}
\]

for every reachable \(s\) and every \(j\ge J\).

T14 does not prove this automatically outside the primitive class.

This is a distinct failure mode from absence of p-adic lifting.

---

## 17. Exact real convergence of the prescribed positive scalar

For every \(j\),

\[
q_j^{c(n)}
=
\frac{2^{A_{k^j n}}}{3^{k^j n}}.
\tag{49}
\]

This follows because applying \(\sigma^j\) to the first \(n\) letters of the fixed point gives the first \(k^j n\) letters.

If \(q_j\) lies in the positive real open unit polydisc, then

\[
0<
q_j^{c(n)}
\le
\left(\max_s q_{j,s}\right)^n.
\]

Hence every \(F_t(q_j)\) and \(S(q_j)\) converges absolutely in the real completion.

All coefficients are nonnegative and the total scalar is strictly positive:

\[
\boxed{
S^{(\infty)}(q)>0
}
\tag{50}
\]

whenever it is reconstructed through a deep real tail.

T14 therefore does not infer positivity from signed reduced basis coordinates. Positivity belongs only to the reconstructed original scalar \(S\).

---

## 18. Exact transport of the Collatz scalar through early singularities

Define the canonical forward product

\[
P_J(q)
=
\mathcal A(q_0)
\mathcal A(q_1)
\cdots
\mathcal A(q_{J-1}).
\tag{51}
\]

No inverse is needed:

\[
\boxed{
\mathbf F(q)=P_J(q)\mathbf F(q_J).
}
\tag{52}
\]

Therefore

\[
\boxed{
S(q)
=
\mathbf1^TP_J(q)\mathbf F(q_J).
}
\tag{53}
\]

If a rational reduction

\[
\mathbf F(x)=C(x)\mathbf G(x)
\]

is valid and \(C(q_J)\) is defined, then

\[
\boxed{
S(q)
=
\mathbf1^TP_J(q)C(q_J)\mathbf G(q_J).
}
\tag{54}
\]

Thus the exact inverse value is

\[
\boxed{
H
=
-\frac13
\mathbf1^TP_J(q)C(q_J)\mathbf G(q_J).
}
\tag{55}
\]

This is the multivariate analogue of T13's forward transport mechanism.

Early canonical singularities do not themselves destroy the scalar. The problem is whether one can reach a regular/admissible tail system in a theorem-compatible coefficient field.

---

## 19. Attempted multivariate completion-sign theorem

Assume the favorable structural hypotheses:

1. dominant incidence \(\det M\ne0\);
2. exact rational minimalization with \(G_1=S\);
3. \(T=M^T\in\mathcal M\);
4. the exact Collatz point is \(T\)-independent;
5. hence a regular tail \(q_J\) exists by Corollary T14.2;
6. primitive substitution, so a hypothetical aperiodic positive anchor forces real tail contraction.

Suppose

\[
H=N\in\mathbb Z_{>0}.
\]

From (10),

\[
S(q)+3N=0
\]

in the 2-adic completion.

Transporting by (54) gives an exact homogeneous linear relation at \(q_J\) after adjoining the constant function \(1\).

At this point T13 would invoke an arbitrary-place relation-lifting theorem. If a multivariate nonarchimedean analogue of Adamczewski–Faverjon Theorem 2.3 were available with exact specialization, it would produce a functional identity whose real evaluation reconstructs

\[
S^{(\infty)}(q)+3N=0.
\]

But

\[
S^{(\infty)}(q)>0,
\qquad
3N>0,
\]

a contradiction.

Thus the entire T13 sign mechanism is structurally ready in this subclass **except for the nonarchimedean multivariate lifting theorem**.

T14 therefore records the conditional implication:

\[
\boxed{
\begin{array}{c}
\text{dominant + regular/admissible tail}\\
+\ \text{primitive real contraction}\\
+\ \text{arbitrary-place multivariate exact relation lifting}
\end{array}
\Longrightarrow
H\notin\mathbb Z_{>0}.
}
\tag{56}
\]

The final premise is not presently certified from a peer-reviewed source.

No positive-anchor theorem is promoted from (56).

---

## 20. Exact failure-mode separation

T14 separates the residual multivariate failures.

### F1. No verified peer-reviewed nonarchimedean multivariate lifting theorem

**ACTIVE / load-bearing failure.**

This is the decisive failure even in the best regular/admissible primitive subclass.

### F2. Singular incidence can obstruct rational-function minimalization

If \(\det M=0\), full-field composition on \(\mathbb Q(x)\) is not automatically defined after rational basis changes.

**ACTIVE structural failure.**

### F3. The monomial orbit can meet a singular variety infinitely often

By dynamical Mordell–Lang, infinite hits are not arbitrary: they contain an arithmetic-progression suborbit.

**CLASSIFIED but not universally eliminated.**

### F4. \(T\)-independence is not automatic

Persistent multiplicative relations are characterized exactly by (30).

**ACTIVE admissibility failure.**

### F5. Real contraction is not automatic in the nonprimitive case

The actual fixed-point mean does not automatically control every state block.

**ACTIVE real-completion failure.**

### F6. Scalar reconstruction after a valid dominant reduction

**SOLVED.** Equation (54) preserves the exact Collatz scalar.

### F7. Exact specialization in the complex multivariate theorem

**SOLVED in the wrong completion.** Adamczewski–Faverjon Theorem 2.3 preserves exact specialization, but only for complex value relations.

The failures must not be collapsed into “the multivariate case is difficult.”

---

## 21. Exact one-variable collapse through a tail point

T14 searched for exact, rather than artificial, one-variable reductions.

At depth \(J\),

\[
q_{J,s}
=
\frac{2^{B_J(s)}}{3^{k^J}}.
\]

The natural Collatz point lies on the diagonal monomial ray exactly when

\[
B_J(s)
\]

is independent of \(s\). Equivalently,

\[
\boxed{
v^T M^J
=
B_J\mathbf1^T
}
\tag{57}
\]

for some integer \(B_J\).

Since

\[
\mathbf1^TM=k\mathbf1^T,
\]

condition (57) implies all later orbit points remain diagonal.

Reblocking by \(\sigma^J\) then gives an exact balanced one-variable system with block length \(k^J\).

That branch is already covered by T13.

Thus:

\[
\boxed{
\text{eventual exact balance is an exact one-variable tail collapse, not a new T14 class.}
}
\tag{58}
\]

T14 does not claim to classify every possible invariant algebraic curve of the monomial map. No artificial parameterization is introduced merely to reuse T13.

---

## 22. Rational exceptional branch

For a valid prescribed valuation word, the inverse series defines

\[
H\in\mathbb Z_2.
\]

T14 proves no universal new statement excluding

\[
H\in\mathbb Q.
\]

In particular, for a genuinely multivariate/unbalanced family:

- \(H\in\mathbb Q_2\): **YES**, as the ambient inverse value;
- \(H\in\mathbb Z_2\): **YES**;
- \(H\in\mathbb Q\): **NOT EXCLUDED**;
- \(H\in\mathbb Z\): **NOT EXCLUDED**;
- \(H\in\mathbb Z_{>0}\): **NOT EXCLUDED by T14 for a new genuinely multivariate class**.

No such rational or positive exception is constructed.

For eventual-balance systems reduced to T13, the inherited subcritical sign theorem still says that any rational exception has negative ordinary real sign.

T14 does not extend that conclusion beyond the classes where relation lifting is certified.

---

## 23. Consequence back to T2

T2 remains the project bridge:

\[
R_m\text{ bounded}
\]

produces an ordinary positive anchor for the bounded valuation alphabets under study.

T14 does not exclude any new genuinely multivariate/unbalanced positive-anchor class.

Therefore T14 does **not** newly prove

\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
\]

for a broader class.

The existing implications remain:

- balanced finite abelian translations — T11;
- balanced finite nonabelian translations — T12;
- all balanced one-variable finite-kernel systems — T13.

The T14 regular-tail subclass remains one theorem short of the T2 periodicity consequence.

---

## 24. Restricted Periodicity-Conjecture boundary after T14

| Class | Status after T14 |
|---|---|
| Balanced finite abelian translations | Closed by T11; stronger nonrationality/transcendence obstruction |
| Balanced finite nonabelian translations | Closed as positive-anchor routes by T12 |
| Balanced one-variable finite-\(k\)-kernel systems | Closed as positive-anchor routes by T13 |
| Eventually balanced multivariate tails satisfying (57) | Collapse exactly to T13; not a new class |
| Dominant \(T\in\mathcal M\), \(T\)-independent multivariate systems | **Regular tail proved by T14; positive anchoring still open because p-adic multivariate lifting is unverified** |
| Primitive unbalanced systems | Deep real monomial contraction proved under a hypothetical aperiodic positive anchor; p-adic lifting still missing |
| Singular-incidence multivariate systems | Stable-image orbit dichotomy proved; exact rational minimalization on the stable-image function field remains open |
| General multivariate/unbalanced finite-state systems | Open |
| General morphic/substitutive recursive valuation languages | Open |
| Arbitrary automatic/morphic parity languages | Open |
| Full 3x+1 Periodicity Conjecture | Open |

No general Periodicity-Conjecture claim is made.

---

## 25. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

The arithmetic appearance of \(2\) and \(3\) does not supply Cobham's hypotheses.

**Applicable:** **NO.**

### López–Stoll

The completion issue identified in T3 remains non-load-bearing.

T14 does not equate the 2-adic inverse value with the ordinary real sum. The intended bridge remains a lifted functional identity with exact specialization.

**Load-bearing:** **NO.**

---

## 26. External source and theorem-number audit

### Load-bearing structural sources

1. **Boris Adamczewski and Colin Faverjon**, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 455–533, DOI 10.4007/annals.2026.204.2.1.
   - Theorem 2.3: complex multivariate relation lifting with exact specialization.
   - Remark 2.4: adjoining \(1\) for nonhomogeneous relations.
   - Definition 4.2: class \(\mathcal M\).
   - Definition 4.4: \(T\)-independence.
   - Theorem 4.6: admissibility criterion.
   - **Completion:** complex / archimedean.
   - **Used by T14:** structural definitions and admissibility architecture only; not as a 2-adic value theorem.

2. **Jason P. Bell, Dragos Ghioca, Thomas J. Tucker**, “The dynamical Mordell–Lang problem for étale maps,” *American Journal of Mathematics* 132 (2010), 1655–1675, DOI 10.1353/ajm.2010.0014.
   - Theorem 1.3: orbit/subvariety intersection is a finite union of suborbits for étale maps.
   - Corollary 1.4: a Zariski-dense orbit meets every proper subvariety only finitely often.
   - **Used by T14:** Sections 11–13.

3. **Michel Laurent**, “Équations diophantiennes exponentielles,” *Inventiones Mathematicae* 78 (1984), 299–327.
   - Torus Mordell–Lang theorem: intersection of a subvariety with a finitely generated multiplicative subgroup lies in finitely many torus cosets contained in the subvariety.
   - **Used by T14:** Zariski-density proof in Theorem T14.1.

### Inherited one-variable source

4. **Boris Adamczewski, Jason Bell, Daniel Smertnig**, “A height gap theorem for coefficients of Mahler functions,” *Journal of the European Mathematical Society* 25 (2023), 2525–2571, DOI 10.4171/JEMS/1244.
   - Theorems 4.2–4.3: arbitrary-place one-variable specialization / relation lifting.
   - **Used in T10–T13.**
   - **Not extended by T14 to several variables.**

### Non-load-bearing source

5. **Enzo Brechler**, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877 (2026).
   - Explicitly discusses complex and p-adic multivariate meromorphy and strengthened lifting/descent.
   - **Status at T14:** preprint.
   - **Load-bearing:** **NO.**

No theorem is inferred from the Brechler preprint.

---

## 27. Compute and promotion decision

T14 establishes no theorem-derived scientific workload.

- new scientific starts: **NOT JUSTIFIED**;
- candidate trajectories: **NOT JUSTIFIED**;
- substitution enumeration: **NOT JUSTIFIED**;
- finite residue/carry/exponent-code search: **NOT JUSTIFIED**;
- new generator or sampling distribution: **NOT JUSTIFIED**;
- CPU campaign: **NOT JUSTIFIED**;
- GPU work: **NOT JUSTIFIED**;
- cloud/distributed/volunteer work: **NOT JUSTIFIED**;
- docs/COMPUTE_BUDGET.md: **UNCHANGED**;
- docs/METRIC_CATALOG.md: **UNCHANGED**.

No explicit anchored aperiodic word exists.

No candidate, unbounded orbit, or counterexample was found or claimed.

---

## 28. Deliverable checklist

| Required item | T14 result |
|---|---|
| exact T13 theorem inherited | Section 2 |
| exact multivariate finite-state system | Sections 3–4 |
| exact source alphabet | reachable/output quotient \(\Lambda\) |
| unreachable states | deleted by reachability (11) |
| duplicate/output-equivalent states | quotient (12)–(14) |
| valuation coding | exact descended \(v:\Lambda\to\mathbb Z_{>0}\) |
| incidence matrix | \(M_{\ell,s}=\#\{r:\sigma(s)_r=\ell\}\) |
| prefix Parikh maps | \(p_r(s)\) |
| monomial map | equation (4) |
| exact functional matrix | equation (5) |
| coefficient field | canonical \(\mathbb Q\); minimal rational field \(K_m=\mathbb Q(x)\) |
| exact prescribed Collatz scalar | \(S=\sum_tF_t\), \(H=-S(q)/3\) |
| exact functional dimension | \(r=\dim_{K_m}\operatorname{span}\{F_t\}\) |
| rational-function rank | \(r\); no universal numeric value |
| every exact rational-linear redundancy | relation module \(\mathcal R\), equation (15) |
| finite-state minimality implies functional minimality | **NO** |
| prescribed scalar survives dominant reduction | **YES**, choose \(G_1=S\) |
| invertible minimal system exists | **YES when \(\det M\ne0\); not proved universally when \(\det M=0\)** |
| exact 2-adic monomial orbit | \(q_{j,s}=2^{B_j(s)}/3^{k^j}\) |
| pairwise distinct orbit | **YES** |
| 2-adic convergence to origin | **YES** |
| exact multiplicative relation criterion | equations (28)–(31) |
| \(T\)-independence automatic | **NO** |
| singular variety | bad locus \(Z_A\) of \(A,A^{-1}\) |
| universal finite singular hits | **NO** |
| exact infinite-hit obstruction | arithmetic-progression suborbit trapped in singular variety |
| universal orbit-subvariety dichotomy | **YES**, Section 11 |
| useful regular-tail subclass | **YES**, \(T\in\mathcal M\) plus \(T\)-independence |
| successful tail shift | exact forward transport (51)–(55) |
| prescribed scalar survives tail shift | **YES** |
| exact multivariate lifting theorem used for p-adic anchor | **NONE** |
| Adamczewski–Faverjon 2026 completion | **complex, not p-adic** |
| Brechler 2026 status | **preprint, non-load-bearing** |
| exact specialization preserved by published complex theorem | **YES, but wrong completion** |
| primitive real subcriticality | \(\alpha<\log_2 3\) under hypothetical aperiodic positive anchor |
| primitive real monomial orbit | converges to origin uniformly in coordinates |
| nonprimitive real convergence automatic | **NO** |
| completion-sign argument applies | **NO new multivariate class; missing p-adic lifting** |
| newly excluded unbalanced finite-state class | **NONE** |
| universal multivariate positive-anchor theorem | **NO** |
| rational exceptional inverse value | not classified beyond \(H\in\mathbb Z_2\); no example found |
| new bounded \(R_m\Rightarrow\) periodicity class | **NO** |
| exact one-variable collapse | eventual balance (57) reduces to T13 |
| Cobham applies | **NO** |
| López–Stoll load-bearing | **NO** |
| explicit anchored aperiodic word | **NONE** |
| candidate or unbounded orbit found | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |
| exact next obligation | Section 29 |

---

## 29. Exact next theorem-sized obligation

The next obligation is now precise.

> **CDM4-T15 — NONARCHIMEDEAN MULTIVARIATE MAHLER LIFTING / STABLE-IMAGE COMPLETION AUDIT.**
>
> First, determine whether a peer-reviewed characteristic-zero arbitrary-place multivariate/monomial Mahler relation-lifting theorem is available whose hypotheses cover the T14 regular/admissible tail:
> \[
> T=M^T\in\mathcal M,
> \qquad
> q\text{ is }T\text{-independent},
> \qquad
> q_J\text{ regular}.
> \]
> It must lift the exact homogeneous linear 2-adic anchor relation and preserve its specialization exactly.
>
> If no such peer-reviewed theorem exists, prove the required nonarchimedean lifting statement directly for this restricted monomial class, or identify the exact obstruction.
>
> In parallel, for \(\det M=0\), formalize the stable-image torus reduction and determine when the exact canonical multivariate system descends to a dominant rational Mahler system while preserving the prescribed scalar \(S\).
>
> If the arbitrary-place lift is obtained for the primitive dominant admissible subclass, immediately combine it with T14's regular-tail theorem, exact scalar transport, and primitive real-tail contraction to run the completion-sign contradiction.

No scientific computation is authorized.

Do not reopen:

- balanced one-variable finite-kernel regularity;
- finite abelian/nonabelian translation analysis;
- Walsh-product coboundaries;
- generic one-variable p-adic lifting;
- substitution enumeration;
- finite residue/carry/exponent-code optimization;
- candidate trajectory search.

---

## 30. Permanent lesson

The multivariate obstruction is not merely that a determinant can vanish on a hypersurface.

T14 separates three genuinely different layers.

First, **functional algebra**: when the monomial map is dominant, rational-linear minimalization works and the prescribed Collatz scalar can be retained exactly. When the incidence matrix is singular, the full rational-function field is the wrong ambient object unless one first descends to a stable image.

Second, **orbit geometry**: a hypersurface can meet a multivariate monomial orbit infinitely often. Dynamical Mordell–Lang makes the obstruction exact: infinite intersections contain arithmetic-progression suborbits. Under \(T\)-independence and the standard monomial admissibility conditions, the orbit is Zariski dense and every proper singular variety is hit only finitely often, so a regular tail exists.

Third, **completion**: the 2026 peer-reviewed multivariate lifting theorem is complex. The p-adic relation required by Collatz cannot be fed into it. The preprint that appears to address precisely this gap is not load-bearing.

The real sign side is not the primary remaining obstacle in the primitive case. A hypothetical aperiodic positive anchor forces uniform deep real contraction and therefore gives a legitimate positive real reconstruction once a functional identity exists.

Thus the exact T14 bridge stops at:

\[
\boxed{
\text{MULTIVARIATE REGULAR TAIL}
+
\text{EXACT SCALAR TRANSPORT}
+
\text{REAL POSITIVITY}
}
\]

with

\[
\boxed{
\text{NONARCHIMEDEAN MULTIVARIATE EXACT RELATION LIFTING}
}
\]

still missing.

D — no qualifying theorem found
