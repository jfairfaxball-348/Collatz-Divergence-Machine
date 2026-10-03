# CDM4-T15 — Nonarchimedean multivariate Mahler lifting / stable-image completion audit

Date: 2026-10-03

Authoritative input commit: 611daad24587f3333c4f07c78af7236624136f18

Session type: theory / literature / exact algebraic-structure audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue / carry / exponent-code optimization: **NONE**  
CPU / GPU / cloud / distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T15 does **not** obtain the missing characteristic-zero nonarchimedean multivariate Mahler relation-lifting theorem.

The literature audit sharpens the T14 boundary in three ways.

First, Adamczewski–Faverjon's peer-reviewed 2026 Annals theorem is exactly the right **multivariate lifting theorem with exact specialization**, but its value theory is formulated for complex analytic Mahler functions and admissible points in the ordinary complex setting. Its Theorem 2.3 gives the exact identity

\[
Q(\alpha,\mathbf X)=P(\mathbf X),
\]

but it does not take a relation among values in a nonarchimedean completion as input.

Second, Adamczewski–Bell–Smertnig 2023 remains the exact arbitrary-place theorem needed for **one variable only**. Its Section 4, especially Theorems 4.2 and 4.3, works at an arbitrary place and preserves exact specialization. It is the correct theorem behind T10–T13, but it does not cover the genuinely multivariate T14 system.

Third, the July 2026 Brechler preprint does not close this gap. It remains a preprint as of 2026-10-03. Proposition 3.12 genuinely proves multivariate meromorphy on every p-adic open unit ball, while Theorem 1.2 strengthens Adamczewski–Faverjon's lifting theorem to polynomial coefficients. However, Theorem 1.2 is still the ordinary multivariate value-lifting theorem: its admissibility condition is introduced for the monomial action on \(\mathbb C^n\), and its proof explicitly invokes Adamczewski–Faverjon's lifting theorem. The p-adic part of the preprint is functional/analytic infrastructure, not a stated arbitrary-place lifting theorem for p-adic value relations.

A direct transplantation of Adamczewski–Faverjon Theorem 2.3 was also audited. Large parts of the argument are algebraic, but the published proof uses complex analytic germs and convergent polydiscs, Cauchy–Hadamard/Cauchy estimates, translated complex expansions, and analytic continuation between complex domains. A nonarchimedean proof would need a complete rigid-analytic replacement of this local analytic package and a proof that the specialization ideal constructed from a p-adic value relation is preserved with the same polynomial. T15 did not complete those replacements and therefore does not state a new lifting theorem.

T15 does, however, complete the **character-lattice stable-image construction** for singular incidence matrices and proves an exact scalar-preserving meromorphic rational-linear reduction on the stable-image torus. This closes an algebraic gap left by T14, but it does not by itself put the system into the standard Adamczewski–Faverjon power-series-at-the-origin class: an intrinsic basis of the stable-image character lattice can introduce negative exponents, the induced nonsingular exponent matrix need not have nonnegative entries, and the ambient origin is a boundary point rather than a point of the torus.

Accordingly:

- no new genuinely multivariate/unbalanced positive-anchor class is excluded;
- no new rational exceptional inverse value is ruled out;
- no new bounded-\(R_m\) implies periodicity class follows;
- no explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample is found;
- no scientific compute is justified.

The exact next theorem-sized obligation is now narrower:

> Prove an arbitrary-place exact relation-lifting theorem for a nonsingular monomial torus isogeny, or prove a rigid-analytic variant of Adamczewski–Faverjon Theorem 2.3 that accepts a nonarchimedean value relation at the T14 regular tail. The theorem must preserve the exact specialization polynomial.

---

## 2. T14 theorem state inherited without reproof

T15 treats the following T14 facts as authoritative.

For a \(k\)-uniform substitution on the exact reachable/output quotient \(\Lambda\),

\[
c(kn+r)=Mc(n)+p_r(u_n).
\]

For

\[
F_t(x)=\sum_{\substack{n\ge0\\u_n=t}}x^{c(n)}
\]

and

\[
\tau(x)_s=\prod_t x_t^{M_{t,s}},
\]

the exact finite system is

\[
\boxed{\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x)).}
\]

The exact Collatz point and prescribed scalar are

\[
q_s=\frac{2^{v(s)}}3,
\qquad
S(x)=\sum_tF_t(x),
\qquad
\boxed{H=-\frac13S(q).}
\]

Reachability/output minimality is not rational-functional minimality. The exact functional dimension in the dominant ambient case is

\[
r=
\dim_{\mathbb Q(x)}
\operatorname{span}_{\mathbb Q(x)}
\{F_t\}.
\]

If \(\det M\neq0\), pullback by \(\tau\) is injective on \(\mathbb Q(x)\). An exact rational basis can be chosen with

\[
G_1=S,
\]

giving

\[
\mathbf G(x)=A(x)\mathbf G(\tau(x)),
\qquad
A(x)\in\operatorname{GL}_r(\mathbb Q(x)).
\]

For

\[
q_j=\tau^j(q),
\]

T14 proved

\[
q_{j,s}
=
\frac{2^{B_j(s)}}{3^{k^j}},
\qquad
B_j(s)=v^TM^je_s.
\]

The \(q_j\) are pairwise distinct and converge coordinatewise to \(0\) in the 2-adic completion.

For \(\mu\in\mathbb Z^m\),

\[
q_j^\mu
=
\frac{2^{v^TM^j\mu}}
{3^{k^j\mathbf1^T\mu}},
\]

hence

\[
q_j^\mu=1
\iff
\mathbf1^T\mu=0
\quad\text{and}\quad
v^TM^j\mu=0.
\]

The exact Adamczewski–Faverjon \(T\)-independence obstruction is the existence of

\[
\mu\ne0,\qquad a\ge0,\qquad r\ge1
\]

such that

\[
\mathbf1^T\mu=0
\]

and

\[
v^TM^{a+rn}\mu=0
\qquad
\forall n\ge0.
\]

After passage to the stable image torus, T14's dynamical Mordell–Lang argument gives the exact singular-hit dichotomy: every algebraic bad locus has only finitely many orbit hits, or contains an arithmetic-progression suborbit.

For the dominant class with \(T=M^T\) in the Adamczewski–Faverjon class \(\mathcal M\) and exact Collatz point \(T\)-independent, T14 proved Zariski density and hence a sufficiently deep regular tail for every proper algebraic singular locus.

For a primitive substitution and a hypothetical genuinely aperiodic positive anchor, T14 also proved

\[
\alpha=v^T\pi<\log_2 3
\]

and uniform convergence

\[
\frac{B_j(s)}{k^j}\to\alpha.
\]

Thus every coordinate \(q_{j,s}\) tends to \(0\) in the ordinary real completion.

Finally, forward transport is exact:

\[
P_J(q)
=
\mathcal A(q_0)\cdots\mathcal A(q_{J-1}),
\]

\[
\mathbf F(q)
=
P_J(q)\mathbf F(q_J),
\]

and after a valid reduction \(\mathbf F=C\mathbf G\),

\[
\boxed{
S(q)
=
\mathbf1^TP_J(q)C(q_J)\mathbf G(q_J).
}
\]

No early singular matrix has to be inverted.

---

## 3. Exact T15 system and the dominant/singular split

Write

\[
\mathbb T=(\mathbb G_m)^m
\]

for the ambient torus. With the column convention used by the exact T5/T14 monomial map,

\[
x^\mu\circ\tau=x^{M\mu}
\]

for every character exponent \(\mu\in\mathbb Z^m\). Thus the pullback on the character lattice is exactly

\[
\tau^*=M:\mathbb Z^m\to\mathbb Z^m.
\]

There are two structurally different cases.

### 3.1 Dominant incidence

If

\[
\det M\ne0,
\]

then \(\tau:\mathbb T\to\mathbb T\) is dominant and finite. The T14 rational-functional reduction over \(\mathbb Q(x)\) applies unchanged.

For the project-relevant regular/admissible subclass,

\[
T=M^T\in\mathcal M,
\qquad
q\text{ is }T\text{-independent},
\]

all algebraic singular loci are eventually avoided.

The sole load-bearing missing step is nonarchimedean multivariate exact relation lifting.

### 3.2 Singular incidence

If

\[
\det M=0,
\]

ambient pullback is not an endomorphism of the whole field \(\mathbb Q(x_1,\ldots,x_m)\). A nonzero denominator can vanish identically after restriction to the lower-dimensional image.

T15 therefore constructs the stable image intrinsically before any rational minimalization.

---

## 4. Theorem T15.1 — exact stable-image torus at character-lattice level

**Status: PROVED STRUCTURAL THEOREM in T15.**

Let

\[
L_j=\ker_{\mathbb Z}(M^j)\subseteq\mathbb Z^m.
\]

Choose \(J_0\) so that the rational ranks of \(M^j\) have stabilized for \(j\ge J_0\). Then

\[
\ker_{\mathbb Q}(M^{J_0})
=
\ker_{\mathbb Q}(M^{J_0+1}),
\]

and therefore, after intersecting with \(\mathbb Z^m\),

\[
\boxed{
L_{J_0}=L_{J_0+1}=L_{J_0+2}=\cdots=:L.
}
\]

Each \(L_j\) is saturated: if \(a\mu\in L_j\) for a nonzero integer \(a\), then

\[
aM^j\mu=0
\]

in the torsion-free group \(\mathbb Z^m\), hence \(M^j\mu=0\).

Let

\[
X=\operatorname{im}(\tau^{J_0})\subseteq\mathbb T.
\]

A character \(x^\mu\) is trivial on \(X\) exactly when

\[
M^{J_0}\mu=0.
\]

Hence the character lattice of \(X\) is

\[
\boxed{
X^*(X)
\cong
\mathbb Z^m/L.
}
\]

The induced map on the character lattice is

\[
\boxed{
\overline M[\mu]=[M\mu].
}
\]

This is injective. Indeed, if \(M\mu\in L\), then

\[
M^{J_0+1}\mu=0,
\]

so stable-kernel equality gives \(\mu\in L\).

Since \(X^*(X)\) is a free abelian group of finite rank and \(\overline M\) is injective, its cokernel is finite. Dually,

\[
\boxed{
\tau_X:=\tau|_X:X\to X
}
\]

is a surjective finite torus isogeny. In characteristic zero it is étale.

Choosing any \(\mathbb Z\)-basis of \(\mathbb Z^m/L\) represents \(\overline M\) by a nonsingular integral matrix

\[
M_X\in\operatorname{Mat}_d(\mathbb Z),
\qquad
d=\operatorname{rank}M^{J_0}.
\]

No claim is made that such a basis makes every entry of \(M_X\) nonnegative.

### Exact embedding of the Collatz orbit

Because

\[
q_{J_0}=\tau^{J_0}(q),
\]

we have

\[
q_{J_0}\in X
\]

and for every \(n\ge0\),

\[
\boxed{
q_{J_0+n}=\tau_X^n(q_{J_0}).
}
\]

Thus the eventual Collatz monomial orbit is exactly an orbit of the stable-image isogeny.

This construction is canonical up to the choice of \(J_0\) after rank stabilization and a basis of the quotient character lattice.

---

## 5. Restriction of rational coefficients and canonical series to the stable image

The coordinate ring and rational function field of \(X\) are

\[
K[X]
\cong
K[\mathbb Z^m/L],
\qquad
K(X)=\operatorname{Frac}K[X].
\]

Equivalently, an ambient Laurent character \(x^\mu\) restricts according to the class \([\mu]\in\mathbb Z^m/L\).

An ambient rational function

\[
R=P/Q
\]

restricts to an element of \(K(X)\) only when the restriction of \(Q\) is not identically zero on \(X\). This is the exact reason that ambient rational-functional relations cannot simply be pushed through a singular monomial map.

The canonical coefficient matrix \(\mathcal A(x)\), by contrast, has finite Laurent/polynomial entries coming from the substitution. Those entries restrict canonically to regular/Laurent functions on \(X\).

### Analytic restriction of the canonical functions

The canonical series

\[
F_t(x)=\sum_{\substack{n\ge0\\u_n=t}}x^{c(n)}
\]

are not asserted to become rational functions on \(X\).

They do have an exact analytic restriction on the nonarchimedean domain

\[
D_v
=
X(C_v)\cap
\{x:\max_s|x_s|_v<1\}
\]

for every nonarchimedean place for which the coordinates are inside the unit polydisc.

Indeed,

\[
\mathbf1^Tc(n)=n,
\]

so if \(\rho=\max_s|x_s|_v<1\), then

\[
|x^{c(n)}|_v\le\rho^n.
\]

Thus the series converge uniformly on each smaller closed polydisc.

For the exact 2-adic Collatz orbit,

\[
q_j\in D_2
\]

for every \(j\), and \(\tau_X\) preserves the orbit inside \(D_2\).

Accordingly, the restricted system

\[
\boxed{
\mathbf F|_{D_2}(x)
=
\mathcal A|_X(x)\,
\mathbf F|_{D_2}(\tau_X(x))
}
\]

is exact as an analytic identity wherever both sides are evaluated.

What is **not** automatic is a formal power-series realization in intrinsic torus coordinates centered at an intrinsic origin. The torus \(X\) has no affine origin, and a basis of \(X^*(X)\) can represent \(\tau_X\) by a matrix with negative entries. This distinction becomes important in Section 7.

---

## 6. Theorem T15.2 — scalar-preserving rational-linear minimalization on the stable image

**Status: PROVED STRUCTURAL THEOREM in T15, as a meromorphic system on the stable-image analytic domain.**

Let \(\mathcal M(D_2)\) denote a common meromorphic-function field on a nonempty stable-image analytic domain containing a generic part of the orbit. The algebraic function field \(K(X)\) embeds in this field.

Define

\[
r_X
=
\dim_{K(X)}
\operatorname{span}_{K(X)}
\{F_t|_{D_2}:t\in\Lambda\}.
\]

This is the exact stable-image rational-functional dimension.

The prescribed scalar

\[
S|_{D_2}
=
\sum_tF_t|_{D_2}
\]

is not the zero function. At every sufficiently deep 2-adic Collatz point its constant term is \(1\) and all positive-degree terms are 2-adically smaller, so it cannot vanish identically on the stable-image domain.

Choose a \(K(X)\)-basis

\[
\mathbf G=(G_1,\ldots,G_{r_X})^T
\]

from the span with

\[
\boxed{G_1=S|_{D_2}.}
\]

There are matrices

\[
B(x),\ C(x)
\]

over \(K(X)\) with

\[
\mathbf G=B\mathbf F,
\qquad
\mathbf F=C\mathbf G
\]

as meromorphic identities.

Because \(\tau_X\) is dominant, pullback

\[
f\mapsto f\circ\tau_X
\]

is injective on \(K(X)\). Therefore

\[
\mathbf G(x)
=
B(x)\mathcal A|_X(x)
C(\tau_X(x))
\mathbf G(\tau_X(x)).
\]

Define

\[
A_X(x)
=
B(x)\mathcal A|_X(x)
C(\tau_X(x)).
\]

Then

\[
\boxed{
\mathbf G(x)=A_X(x)\mathbf G(\tau_X(x)),
\qquad
A_X(x)\in\operatorname{GL}_{r_X}(K(X)).
}
\]

Invertibility is forced by basis minimality. If \(A_X\) were singular over \(K(X)\), a nonzero row \(u^T\) with \(u^TA_X=0\) would give

\[
u^T\mathbf G=0,
\]

contradicting \(K(X)\)-linear independence of the basis.

This proves that the T13/T14 rational-linear minimalization mechanism **does survive singular incidence after passing to the exact stable image**, provided it is interpreted as a meromorphic torus system rather than as an ambient rational system.

### Exact scalar preservation

By construction,

\[
G_1=S|_{D_2}.
\]

Thus no signed reduced coordinate is substituted for the positive scalar. The prescribed Collatz scalar survives exactly.

### Exact forward transport

No original early matrix is inverted. The ambient canonical identity still gives

\[
\mathbf F(q)
=
P_{J_0}(q)\mathbf F(q_{J_0}).
\]

At a stable-image point where the chosen reduction matrix is defined,

\[
\mathbf F(q_{J_0})
=
C(q_{J_0})\mathbf G(q_{J_0}),
\]

so

\[
\boxed{
S(q)
=
\mathbf1^TP_{J_0}(q)
C(q_{J_0})\mathbf G(q_{J_0}).
}
\]

If a chosen rational basis has a pole at \(q_{J_0}\), one shifts farther before evaluating it. Whether such a pole can trap an entire arithmetic-progression suborbit is the issue in Section 10.

---

## 7. Why the stable-image reduction does not yet put the singular case in the published multivariate theorem class

Theorem T15.2 completes the algebraic/meromorphic reduction, but two theorem-interface problems remain.

### 7.1 Intrinsic exponent matrix need not be nonnegative

The induced lattice matrix

\[
M_X
\]

is nonsingular over \(\mathbb Z\), but changing from the ambient quotient lattice to an arbitrary basis can introduce negative entries.

The Adamczewski–Faverjon/Brechler multivariate Mahler formalism is built from monomial maps represented by nonsingular matrices with nonnegative integer entries acting on affine coordinates.

A general torus isogeny with Laurent monomials is therefore not automatically one of their transformations.

### 7.2 The limiting point is a toric boundary point

The ambient Collatz orbit satisfies

\[
q_j\to0
\]

2-adically, and in the primitive positive-anchor branch also in the ordinary real completion.

But \(0\) is not a point of \(X\subset(\mathbb G_m)^m\). It is a boundary point in an affine toric compactification.

After choosing intrinsic torus coordinates, the same orbit need not converge to the coordinate origin in every coordinate.

Therefore the stable-image system is exact, dominant, and meromorphic, but a further **toric/rigid Mahler theorem** is required before the standard power-series-at-the-origin lifting theorem can be invoked.

This is the exact remaining stable-image completion gap.

---

## 8. Literature audit: theorem-by-theorem result

### 8.1 Adamczewski–Faverjon 2026

Source: Boris Adamczewski and Colin Faverjon, “Mahler’s method in several variables and finite automata,” Annals of Mathematics 204 (2026), 455–533.

Publication status: **peer reviewed / published**.

Primary candidate: **Theorem 2.3 (Lifting)**, with the full general statement appearing as Theorem 6.2.

The theorem covers:

- characteristic zero;
- several variables;
- a nonsingular nonnegative integral monomial transformation;
- an algebraic evaluation point;
- regularity of the whole forward orbit;
- admissibility of \((T,\alpha)\), including \(T\) in the prescribed matrix class, \(T^n\alpha\to0\), and \(T\)-independence;
- an invertible rational system matrix;
- homogeneous algebraic relations;
- exact specialization of the lifted relation:
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X).
  \]

Remark 2.4 permits adjoining the constant function \(1\).

The theorem is compatible with a rational-functional minimal system and with a tail shift once all poles of the reduction and system are included in the bad locus.

However, the values are complex analytic values. The theorem does **not** state an arbitrary-place or p-adic input relation.

**T15 disposition: exact theorem shape, wrong completion.**

### 8.2 Adamczewski–Bell–Smertnig 2023

Source: Boris Adamczewski, Jason Bell, Daniel Smertnig, “A height gap theorem for coefficients of Mahler functions,” Journal of the European Mathematical Society 25 (2023), 2525–2571.

Publication status: **peer reviewed / published**.

Relevant results: **Theorems 4.2 and 4.3**.

Section 4 is explicitly formulated at an arbitrary place \(v\) of a number field. Theorem 4.3 gives exact homogeneous relation lifting with exact specialization at a regular algebraic point satisfying

\[
0<|\alpha|_v<1.
\]

This is genuinely nonarchimedean when \(v\mid p\).

But it is one-variable Mahler theory:

\[
z\mapsto z^k.
\]

It does not cover a genuinely multivariate monomial map.

**T15 disposition: correct completion and exact specialization, wrong dimension.**

### 8.3 Flicker 1979

Source: Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” Journal of the Australian Mathematical Society, Series A 27 (1979), 173–188.

Publication status: **peer reviewed / published**.

Relevant result: **Theorem 2**.

Flicker explicitly works over \(K_p\), allowing a p-adic completion and also the complex completion. The theorem is genuinely multivariate and genuinely nonarchimedean.

It is an algebraic-independence theorem for specialized values under a substantial package involving a sequence of transformed functions, convergence to limiting functions, algebraic independence of those limiting functions over \(K_p[z]\), and additional growth/valuation hypotheses.

It is not a general relation-lifting theorem for every regular rational Mahler system. In particular, T14 regularity, \(T\)-independence, and rational-functional minimality do not verify Flicker's limiting-function hypotheses.

The theorem also does not produce a lifted polynomial with prescribed specialization.

**T15 disposition: genuinely multivariate and p-adic, but not applicable to the T14 class from the available hypotheses.**

### 8.4 Loxton–van der Poorten

The 1970s papers on arithmetic properties of functions in several variables and transcendence/algebraic independence by Mahler's method are peer-reviewed/foundational multivariate sources.

The statements recovered in T15 concern complex holomorphic values or specialized function classes and predate the modern exact lifting formulation.

No theorem text was recovered that simultaneously has:

- characteristic zero;
- a general multivariate rational matrix Mahler system;
- an arbitrary nonarchimedean completion;
- regular/admissible algebraic point hypotheses matching T14;
- lifting of **every** value relation;
- exact preservation of the specialization polynomial.

**T15 disposition: no matching theorem found. No theorem number is promoted as a T15 candidate because no inspected statement had the required scope.**

### 8.5 Kubota 1977

Source: K. K. Kubota, “On the algebraic independence of holomorphic solutions of certain functional equations and their values,” Mathematische Annalen 227 (1977), 9–50.

Publication status: **peer reviewed / published**.

Kubota supplies foundational functional and value algebraic-independence results for special Mahler-type systems. Later sources, including Flicker, explicitly describe the scope as narrower than Flicker's general transformation-sequence theorem.

The available inspected material did not yield a theorem with the T15 general arbitrary-place exact-lifting statement.

**T15 disposition: foundational but not a verified match. No theorem number is used load-bearingly.**

### 8.6 Nishioka

Nishioka's classical multivariate Mahler theory and the 1996 monograph are fundamental to the complex value theory. The specifically p-adic paper audited earlier in CDM4,

Kumiko Nishioka, “p-adic transcendental numbers,” Proceedings of the American Mathematical Society 108 (1990), 39–41,

constructs p-adic transcendence/algebraic-independence examples; it is not a general multivariate exact relation-lifting theorem for an arbitrary regular Mahler system.

**T15 disposition: no matching theorem.**

### 8.7 Xu–Wang 2004

Source: Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930.

Publication status: **peer reviewed / published**.

The source is genuinely p-adic by subject. The accessible journal metadata did not expose enough theorem text to verify a theorem number and complete hypotheses to project standard. Earlier CDM4 audits therefore correctly left it non-load-bearing.

No evidence recovered in T15 shows that it is a general multivariate matrix relation-lifting theorem with exact specialization.

**T15 disposition: p-adic and relevant, but exact theorem hypotheses/number not recovered from authoritative accessible text; no application certified.**

### 8.8 Wang 2006 and Wang–Xu 2006

Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194, is peer-reviewed and genuinely p-adic, but the accessible source states results for “some Mahler type functions” and did not expose a theorem text matching the T15 system.

The Wang–Xu 2006 work on p-adic transcendence measures for functions satisfying algebraic functional equations of Mahler type is also genuinely p-adic, but T15 did not recover a simultaneous multivariate exact-lifting theorem from it.

**T15 disposition: no verified match; no theorem number is promoted load-bearingly.**

### 8.9 Later peer-reviewed extensions

The focused 2026 search did not recover a later peer-reviewed characteristic-zero theorem that combines the missing properties:

\[
\boxed{
\text{multivariate}
+
\text{nonarchimedean value relation}
+
\text{general rational Mahler system}
+
\text{exact relation specialization}.
}
\]

The modern peer-reviewed exact lifting theorem is Adamczewski–Faverjon 2026 in the complex setting; the modern arbitrary-place exact lifting theorem recovered by the project is Adamczewski–Bell–Smertnig 2023 in one variable.

---

## 9. Brechler 2026 status and exact role

Source: Enzo Brechler, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877v1, submitted 2026-07-27.

### Publication status

As of 2026-10-03:

- the arXiv record remains version 1;
- bibliographic services inspected still classify it as a **preprint**;
- no peer-reviewed journal publication, acceptance notice with stable theorem text, or superseding peer-reviewed paper was found.

It remains non-load-bearing under project rules.

### What is genuinely p-adic

**Proposition 3.12** is genuinely all-place analytic infrastructure. It proves that an \(M_T\)-function is analytic on a uniform neighborhood of the origin and meromorphic on the open unit ball in \(C_p^n\) for every prime \(p\), as well as in the complex case.

This is directly relevant to a future nonarchimedean proof architecture.

### What the lifting theorem actually says

**Theorem 1.2** is an optimal multivariate lifting theorem with

\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]

and, more strongly than Adamczewski–Faverjon, polynomial coefficients

\[
Q\in\overline{\mathbb Q}[z,\mathbf X].
\]

But the theorem is presented in the ordinary multivariate value setting inherited from Adamczewski–Faverjon. Its admissibility definition is introduced for the monomial transformation on \(\mathbb C^n\), and the proof of Theorem 1.2 explicitly invokes the Adamczewski–Faverjon lifting theorem once a functional regularity statement is proved.

Brechler does **not** state Theorem 1.2 as an arbitrary-place theorem taking a p-adic relation among \(f_i(\alpha)\) as input.

Thus:

\[
\boxed{
\text{Brechler p-adic meromorphy}
\ne
\text{p-adic multivariate value lifting}.
}
\]

This distinction is load-bearing.

---

## 10. Direct audit of Adamczewski–Faverjon Theorem 2.3

T15 did not stop after the literature search. The proof architecture of the multivariate lifting theorem was audited for a possible nonarchimedean transplant.

### 10.1 Algebraic parts that survive in principle

The following ingredients are algebraic or difference-algebraic and do not intrinsically require the complex absolute value:

- the monomial action on exponent lattices;
- rational Mahler systems and matrix iteration;
- homogeneous relation ideals;
- specialization of rational/polynomial coefficients at algebraic points;
- adjoining the constant function \(1\);
- regularity as avoidance of zero/pole loci;
- \(T\)-independence as an orbit-character condition;
- algebraic field-extension arguments;
- product-formula/Liouville-type lower bounds, provided a place-uniform formulation is supplied;
- the exact identity requirement
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X).
  \]

The T14 dynamical tail machinery is likewise completion-independent at the algebraic level.

### 10.2 Genuinely archimedean/local-complex steps in the published proof

The published proof is not a formal argument over an arbitrary complete algebraically closed field.

It uses:

1. rings of **complex convergent germs** and complex polydiscs;
2. absolute convergence and translated power-series expansions in complex neighborhoods;
3. Cauchy–Hadamard/Cauchy coefficient bounds in the ordinary absolute value;
4. analytic continuation to enlarge an identity from one complex domain to another;
5. ordinary complex local analytic geometry around the specialization point;
6. archimedean upper estimates paired with arithmetic lower estimates in the auxiliary-polynomial argument.

The proof also uses p-adic Diophantine tools internally in other places, but that does not change the completion in which the value relation is posed.

### 10.3 Exact direct-proof obstruction

A p-adic proof would require, at minimum:

- a rigid-analytic replacement for the local rings of complex convergent germs used in the lifting construction;
- a proof that the Mahler functions and every auxiliary relation needed by the proof live on compatible affinoid domains along the whole relevant orbit;
- a nonarchimedean identity/continuation theorem replacing the complex continuation step;
- ultrametric coefficient/auxiliary-polynomial bounds strong enough to reproduce the decisive vanishing/nonvanishing estimates;
- and, crucially, a proof that the resulting functional relation specializes to **the original p-adic relation polynomial**, not merely that some functional dependence exists.

Brechler Proposition 3.12 supplies a useful first item—global p-adic meromorphy for multivariate Mahler functions in his class—but it does not supply the arbitrary-place lifting theorem or the full specialization-ideal argument.

T15 did not complete this rigid-analytic replacement package.

Therefore:

\[
\boxed{
\text{no direct nonarchimedean lifting theorem is proved in T15}.
}
\]

This is an exact proof-status statement, not evidence that the theorem is false.

---

## 11. Tail inheritance of every relevant hypothesis

Suppose now that

\[
T=M^T\in\mathcal M,
\qquad
q\text{ is }T\text{-independent},
\]

and choose a sufficiently deep tail point

\[
q_J=\tau^J(q).
\]

### 11.1 \(T\)-independence is inherited

Assume \(q_J\) failed \(T\)-independence. Then there would exist

\[
\mu\ne0,\qquad a\ge0,\qquad r\ge1
\]

such that

\[
(T^{a+rn}q_J)^\mu=1
\]

for every \(n\ge0\).

But

\[
T^{a+rn}q_J
=
T^{J+a+rn}q,
\]

so the same character relation holds on an arithmetic progression of the original orbit. This contradicts \(T\)-independence of \(q\).

Hence

\[
\boxed{
q\text{ \(T\)-independent}
\Longrightarrow
q_J\text{ \(T\)-independent}.
}
\]

### 11.2 Admissibility is inherited at a tail

The matrix condition \(T\in\mathcal M\) is unchanged.

For a hypothetical nonarchimedean theorem, 2-adic convergence is inherited because

\[
q_{J+n}\to0
\]

coordinatewise.

For the existing complex theorem in the primitive hypothetical positive-anchor branch, T14's real contraction gives

\[
q_{J+n}\to0
\]

in the ordinary real/complex embedding.

Together with inherited \(T\)-independence, the corresponding admissibility condition survives the shift.

### 11.3 Regularity

In the dominant \(T\)-independent class, T14 gives finite intersection of the orbit with every proper algebraic bad locus.

When selecting \(J\), T15 includes not only zero/pole loci of the minimal system matrix \(A\) and \(A^{-1}\), but also:

- poles of the basis/reconstruction matrix \(C\);
- poles of the row used to reconstruct the prescribed scalar;
- any denominator introduced by adjoining/reordering the scalar basis.

Therefore \(J\) may be chosen so that all of these are defined along the full future orbit.

### 11.4 Coefficient field

The exact Collatz points \(q_j\) are rational. All canonical matrices have rational coefficients, and rational-functional minimalization can be performed over \(\mathbb Q(x)\) in the dominant case.

Thus the tail shift does not create a transcendental coefficient field.

### 11.5 Exact scalar reconstruction row

Define

\[
\ell_J
=
\mathbf1^TP_J(q)C(q_J).
\]

After choosing \(J\) outside the added denominator locus, \(\ell_J\) is defined and algebraic; in the rational setup it is rational.

The exact identity is

\[
\boxed{
S(q)=\ell_J\mathbf G(q_J).
}
\]

Nothing is inferred from the signs of the reduced basis coordinates.

---

## 12. Conditional completion-sign theorem if the missing lift is supplied

This section records the exact argument that becomes available immediately if a valid nonarchimedean multivariate lifting theorem is obtained.

Assume a hypothetical genuinely aperiodic primitive positive Collatz anchor

\[
H=N\in\mathbb Z_{>0}.
\]

Since

\[
H=-\frac13S(q),
\]

the exact 2-adic relation is

\[
S(q)+3N=0.
\]

At a sufficiently deep regular tail,

\[
\ell_J\mathbf G(q_J)+3N=0.
\]

Append the constant function

\[
G_0(x)=1.
\]

The relation is the homogeneous linear polynomial

\[
P(X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
\]

A qualifying nonarchimedean multivariate lifting theorem must produce a functional relation

\[
Q(x,X_0,\mathbf X)=0
\]

such that

\[
\boxed{
Q(q_J,X_0,\mathbf X)=P(X_0,\mathbf X).
}
\]

This exact specialization is essential.

Because the resulting functional identity is algebraic over a number field, it can then be embedded in the ordinary real completion.

T14's primitive theorem gives deep real contraction, so the original positive canonical series converge absolutely. Evaluating the functional identity in the real completion and reconstructing the **original scalar** gives

\[
S^{(\infty)}(q)+3N=0.
\]

But T14 gives

\[
S^{(\infty)}(q)>0
\]

and \(N>0\), impossible.

Thus a successful lift would prove:

\[
\boxed{
\text{no genuinely aperiodic primitive positive anchor}
}
\]

throughout the dominant \(T\in\mathcal M\), \(T\)-independent regular-tail subclass.

This argument is **not** equality of real and 2-adic limits. The bridge is the exact lifted functional identity.

T15 cannot promote this conditional statement to a theorem because the nonarchimedean multivariate lift was not obtained.

---

## 13. Rational exceptional values

The distinctions remain:

\[
H\in\mathbb Q_2,
\qquad
H\in\mathbb Z_2,
\qquad
H\in\mathbb Q,
\qquad
H\in\mathbb Z,
\qquad
H\in\mathbb Z_{>0}.
\]

T15 does not prove a new irrationality theorem.

If the missing exact lifting theorem were supplied, the real-sign argument would exclude every **positive rational** value in the primitive real-contractive subclass, not merely positive integers:

\[
H=h\in\mathbb Q_{>0}
\]

would yield the same contradiction after clearing denominators.

The same sign argument would also exclude \(H=0\).

It would not exclude negative rational values.

Therefore even the successful completion-sign theorem would not imply universal irrationality.

At T15's actual proved state, no new rational exceptional value is excluded.

---

## 14. Arithmetic-progression singular trapping

Suppose \(Z\subseteq X\) is an algebraic bad locus and

\[
q_{a+rn}\in Z
\qquad
\forall n\ge0.
\]

Let

\[
\phi=\tau_X^r
\]

and let

\[
Y=
\overline{
\{q_{a+rn}:n\ge0\}
}^{\,\mathrm{Zar}}.
\]

Then

\[
Y\subseteq Z
\]

and, because removing the first point does not change the closure of this infinite orbit,

\[
\boxed{\phi(Y)=Y.}
\]

Thus arithmetic-progression trapping has an exact algebraic meaning:

> the bad locus contains a proper \(\phi\)-invariant orbit closure.

This is stronger and more informative than calling infinitely many singular hits “pathological.”

### 14.1 Character-coset trapping

Suppose specifically that the trapped locus contains a character coset

\[
x^\mu=c.
\]

Then

\[
q_{a+rn}^\mu=c
\]

for all \(n\). Comparing consecutive \(n\) and using unique factorization of the rational numbers into powers of \(2\) and \(3\) gives

\[
\mathbf1^T\mu=0
\]

and

\[
v^TM^{a+r(n+1)}\mu
=
v^TM^{a+rn}\mu.
\]

Set

\[
\nu=(M^r-I)\mu.
\]

Then

\[
\mathbf1^T\nu=0,
\qquad
v^TM^{a+rn}\nu=0
\]

for all \(n\), so

\[
q_{a+rn}^{\nu}=1.
\]

Hence either

\[
\nu\ne0,
\]

which is an explicit failure of \(T\)-independence, or

\[
M^r\mu=\mu.
\]

In the Adamczewski–Faverjon class, the latter is impossible for nonzero \(\mu\), because it would make a root of unity an eigenvalue of \(M\).

Thus, inside the dominant admissible class, character-coset arithmetic-progression trapping forces failure of the exact \(T\)-independence hypothesis.

### 14.2 General algebraic trapping

For a general invariant algebraic subvariety \(Y\), T15 does **not** claim that a single torus-character relation must exist.

Without an additional classification theorem for invariant subvarieties of the particular torus isogeny, the exact conclusion is the invariant orbit closure above.

In the dominant \(T\in\mathcal M\), \(T\)-independent class, T14's Zariski-density theorem applied to the appropriate power already excludes a proper arithmetic-progression orbit closure.

Outside that class, trapping may reflect:

- failure of \(T\)-independence;
- a proper stable image;
- an invariant algebraic subvariety;
- a rational-functional reduction;
- or another algebraic degeneration.

It does not automatically imply eventual balance or periodicity.

---

## 15. Exact one-variable collapse boundary

T14 proved that if

\[
v^TM^J=B_J\mathbf1^T
\]

for some \(J\), then every sufficiently deep monomial coordinate is equal and the system has an exact one-variable reduction. That branch is already covered by T13.

T15 found no broader invariant algebraic curve or monomial ray that is both:

1. forced by the incidence lattice; and
2. guaranteed to preserve the exact scalar and yield a one-variable Mahler map.

No artificial parameterization is introduced merely to reuse T13.

The stable-image torus reduction in Sections 4–7 is the natural exact replacement.

---

## 16. Consequence back to T2

T2's project-level implication remains the test:

\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}.
\]

T15 proves no new positive-anchor exclusion, because the required nonarchimedean multivariate lifting theorem is still missing.

Therefore:

\[
\boxed{
\text{no new bounded-}R_m\text{ periodicity class is promoted in T15}.
}
\]

The previously closed classes remain closed:

- the T6/T10/T11/T12/T13 classes remain excluded exactly as previously proved;
- the balanced one-variable finite-kernel branch remains closed;
- no result in T15 weakens those route kills.

---

## 17. Periodicity-Conjecture boundary after T15

| Recursive class | Status after T15 |
|---|---|
| Finite abelian translations | **Closed by T11**; genuinely nonperiodic positive anchoring excluded, with stronger irrational/transcendental conclusions in the covered class. |
| Finite nonabelian translations | **Closed as positive-anchor routes by T12** through regular lifting plus completion sign. |
| Balanced one-variable finite-kernel systems | **Closed as positive-anchor routes by T13** after rational-linear minimalization and regular-tail transport. |
| Dominant multivariate systems with \(T\in\mathcal M\), exact \(T\)-independence, regular tail | **Structurally ready but not closed**. T14 supplies regularity and T15 verifies all tail inheritance; the missing bridge is nonarchimedean multivariate exact lifting. |
| T15 newly closed positive-anchor class | **NONE.** |
| Singular-incidence systems | **Stable-image character lattice and scalar-preserving meromorphic minimalization completed in T15**, but compatibility with the standard affine nonnegative-matrix Mahler lifting class is unresolved. |
| Remaining multivariate/unbalanced finite-state systems | **OPEN.** |
| General morphic/substitutive recursive languages | **OPEN outside previously proved subclasses.** |
| Arbitrary automatic/morphic parity languages | **OPEN.** |
| Full Periodicity Conjecture | **OPEN.** |

No claim is made that the general Periodicity Conjecture is solved or substantially reduced beyond the exact classes already recorded.

---

## 18. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

The powers of \(2\) and \(3\) in the Collatz formulas do not supply Cobham's symbolic hypothesis.

**Applicable in T15: NO.**

### López–Stoll

The López–Stoll density route remains non-load-bearing.

T15 neither repairs nor uses the completion-transfer issue identified in T3.

**Load-bearing in T15: NO.**

---

## 19. Compute and promotion decision

No theorem-derived scientific workload follows from T15.

- New scientific starts: **NOT JUSTIFIED**.
- Candidate trajectories: **NOT JUSTIFIED**.
- Substitution enumeration: **NOT JUSTIFIED**.
- Finite residue/carry/exponent-code search: **NOT JUSTIFIED**.
- New generator/distribution: **NOT JUSTIFIED**.
- CPU campaign: **NOT JUSTIFIED**.
- GPU work: **NOT JUSTIFIED**.
- Cloud/distributed/volunteer work: **NOT JUSTIFIED**.
- docs/COMPUTE_BUDGET.md: **UNCHANGED**.
- docs/METRIC_CATALOG.md: **UNCHANGED**.

The bottleneck is theorem-level nonarchimedean relation lifting, not finite computation.

---

## 20. Deliverable checklist

| Required item | T15 result |
|---|---|
| exact T14 theorem state inherited | Section 2 |
| exact T5/T14 multivariate system | Sections 2–3 |
| dominant versus singular-incidence split | Section 3 |
| stable-image torus construction | **COMPLETED**, Section 4 |
| character lattice of stable image | \(\mathbb Z^m/\ker_{\mathbb Z}M^{J_0}\) |
| induced exponent matrix | injective endomorphism \(\overline M\), nonsingular integer matrix in a lattice basis |
| exact Collatz orbit in stable image | \(q_{J_0+n}=\tau_X^n(q_{J_0})\) |
| canonical functions on stable image | analytic restrictions on the unit-polydisc intersection; not automatically intrinsic formal power series |
| stable-image rational-functional dimension | \(r_X=\dim_{K(X)}\operatorname{span}\{F_t|_{D_2}\}\) |
| invertible minimal system in singular case | **YES as a meromorphic \(K(X)\)-system**, Section 6 |
| prescribed scalar | \(S=\sum_tF_t\), retained exactly as \(G_1\) |
| scalar survives stable-image reduction | **YES** |
| forward transport exact | **YES**, no early inverse |
| \(T\)-independence at tail | **INHERITED**, Section 11 |
| admissibility at tail | inherited once completion-specific convergence is supplied |
| regular-tail status | dominant \(T\in\mathcal M\), \(T\)-independent class: **YES**, inherited from T14 with basis-denominator loci added |
| arithmetic-progression trapping | proper invariant orbit closure; character-coset trap gives exact \(T\)-independence obstruction in the admissible class |
| AF 2026 audited | Theorem 2.3 / Theorem 6.2; multivariate, exact specialization, **complex** |
| ABS 2023 audited | Theorems 4.2/4.3; arbitrary place, exact specialization, **one variable** |
| Flicker audited | Theorem 2; genuinely p-adic and multivariate, but strong limiting-function/growth hypotheses, not generic lifting |
| Loxton–van der Poorten audited | no matching arbitrary-place exact-lifting theorem recovered |
| Kubota audited | no matching general theorem recovered |
| Nishioka audited | no matching general nonarchimedean multivariate lift |
| Xu–Wang audited | p-adic source; exact applicable theorem text not recovered |
| Wang / Wang–Xu audited | p-adic sources; no applicable multivariate exact-lifting theorem verified |
| Brechler status | **PREPRINT**, arXiv:2607.24877v1 as of 2026-10-03 |
| Brechler p-adic result | Proposition 3.12: p-adic meromorphy |
| Brechler lifting result | Theorem 1.2: exact polynomial specialization, but still the ordinary AF value-lifting setting; not stated arbitrary-place |
| direct nonarchimedean proof | **NOT OBTAINED** |
| exact proof step that fails | rigid-analytic replacement of complex-germ/polydisc continuation and auxiliary upper-bound/specialization package not completed |
| append constant function \(1\) | allowed structurally; AF Remark 2.4 in the complex theorem, and trivial block augmentation algebraically |
| completion-sign argument | **CONDITIONAL ONLY**, Section 12 |
| new genuinely multivariate/unbalanced class excluded | **NO** |
| positive rational exceptions newly excluded | **NO** at proved T15 state |
| negative rational exceptions | not excluded |
| new bounded-\(R_m\) periodicity class | **NO** |
| Periodicity-Conjecture boundary | Section 17 |
| Cobham applies | **NO** |
| López–Stoll load-bearing | **NO** |
| explicit anchored aperiodic word | **NONE** |
| candidate/unbounded orbit | **NONE** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |

---

## 21. Source ledger

1. Boris Adamczewski and Colin Faverjon, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 455–533, DOI 10.4007/annals.2026.204.2.1. Load-bearing for the **complex** multivariate theorem shape and admissibility framework; Theorem 2.3, Remark 2.4, and the full theorem in Section 6.
2. Boris Adamczewski, Jason Bell, Daniel Smertnig, “A height gap theorem for coefficients of Mahler functions,” *Journal of the European Mathematical Society* 25 (2023), 2525–2571, DOI 10.4171/JEMS/1244. Load-bearing inherited one-variable arbitrary-place source; Theorems 4.2 and 4.3.
3. Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” *Journal of the Australian Mathematical Society, Series A* 27 (1979), 173–188, DOI 10.1017/S144678870001209X. Theorem 2 explicitly allows p-adic completions but has a different strong hypothesis package.
4. K. K. Kubota, “On the algebraic independence of holomorphic solutions of certain functional equations and their values,” *Mathematische Annalen* 227 (1977), 9–50, DOI 10.1007/BF01360961.
5. J. H. Loxton and A. J. van der Poorten, “Arithmetic properties of certain functions in several variables,” *Journal of Number Theory* 9 (1977), 87–106, together with the associated 1977 several-variable papers and the chapter “Transcendence and algebraic independence by a method of Mahler.”
6. Kumiko Nishioka, *Mahler Functions and Transcendence*, Lecture Notes in Mathematics 1631, Springer, 1996; and “p-adic transcendental numbers,” *Proceedings of the AMS* 108 (1990), 39–41.
7. Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” *Acta Mathematica Sinica, Chinese Series* 47 (2004), 921–930, DOI 10.12386/A2004sxxb0116.
8. Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” *Acta Mathematica Sinica, English Series* 22 (2006), 187–194, DOI 10.1007/s10114-005-0534-4.
9. Tian Qin Wang and Guang Shan Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” *Advances in Mathematics (China)* 35 (2006), 463–475.
10. Enzo Brechler, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877v1 (2026). **Preprint / non-load-bearing.** Theorem 1.2 and Proposition 3.12 were inspected.
11. Bell–Ghioca–Tucker dynamical Mordell–Lang and Laurent's torus Mordell–Lang theorem remain inherited T14 infrastructure; T15 does not alter their scope.

---

## 22. Exact next theorem-sized obligation

The next research session should not repeat the generic literature search.

The exact obligation is:

> **CDM4-T16 — rigid/nonarchimedean monomial lifting at a regular torus tail.**
>
> Prove an exact homogeneous relation-lifting theorem for a characteristic-zero complete nonarchimedean field for a nonsingular monomial map at an algebraic regular point, with exact specialization
> \[
> Q(\alpha,\mathbf X)=P(\mathbf X).
> \]
> It is enough to cover the T14 dominant class
> \[
> T\in\mathcal M,\qquad q\text{ \(T\)-independent},
> \]
> after a sufficiently deep regular tail. A stronger version may work intrinsically on a torus isogeny and would also absorb the singular-incidence stable-image reduction completed in T15.
>
> The proof should isolate and replace the complex-germ/analytic-continuation/Cauchy-estimate steps of Adamczewski–Faverjon by rigid-analytic statements, using Brechler Proposition 3.12 only as non-load-bearing guidance unless publication status changes.
>
> If exact lifting is obtained, immediately execute the completion-sign argument of Section 12. Otherwise, record the first rigid-analytic lemma that cannot be established.

No scientific compute is authorized.

---

## 23. Permanent lesson

T15 separates two gaps that T14 left adjacent.

The **singular-incidence algebraic gap** is now substantially closed. The eventual image is a canonical torus whose character lattice is the quotient by the stable integer kernel of \(M\); the induced map is a torus isogeny; the exact Collatz orbit lies in it; the canonical analytic functions restrict to its 2-adic unit-domain; rational-linear minimalization can be performed over \(K(X)\); and the prescribed scalar survives.

The **completion gap** remains.

Neither a dominant ambient system nor a stable-image meromorphic system can use the complex Adamczewski–Faverjon lifting theorem to lift a 2-adic value relation. Flicker's genuinely p-adic multivariate theorem has a different and much stronger limit-function hypothesis package. Adamczewski–Bell–Smertnig is arbitrary-place but one-dimensional. Brechler supplies valuable p-adic meromorphy but, in the current preprint, not the missing arbitrary-place value-lifting statement.

The next theorem must therefore be completion-correct and specialization-exact. Until it is proved or recovered from peer-reviewed theorem text, the T14 completion-sign contradiction remains conditional.

D — no qualifying theorem found
