# CDM4-T16 — Rigid/nonarchimedean monomial lifting at a regular torus tail

**Date:** 2026-10-03  
**Authoritative input commit:** 6fc5002731e53ff6521072b25b242cf2f2cb3da6  
**Session type:** theorem / rigid-analytic / multivariate Mahler audit only  
**Scientific Collatz starts generated:** **0**  
**Candidate trajectories extended:** **0**  
**Substitution enumeration:** **NONE**  
**Finite residue / carry / exponent-code search:** **NONE**  
**CPU / GPU / cloud / distributed scientific work:** **NONE**  
**Explicit anchored aperiodic word found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## 1. Executive result

T16 proves a completion-correct exact relation-lifting theorem that is sufficient for the primitive dominant T14 class.

The theorem is not a completely place-free replacement for Adamczewski–Faverjon. It is a **mixed-place / bi-admissible theorem**:

- the algebraic orbit and global vanishing machinery are certified by the ordinary Adamczewski–Faverjon admissibility of the same algebraic pair \((T,\alpha)\);
- the input value relation, the local analytic relation matrix, the auxiliary-function upper bound, and the specialization argument are carried out in a chosen complete nonarchimedean field;
- the output is an algebraic functional relation with the **same prescribed specialization polynomial**.

This is exactly enough for the Collatz completion-sign argument because T14 already supplies both sides for a primitive dominant tail:

1. \(T=M^T\in\mathcal M\) and exact \(T\)-independence give ordinary Adamczewski–Faverjon admissibility and a deep algebraically regular tail;
2. the same tail converges coordinatewise to \(0\) 2-adically;
3. primitive real contraction gives ordinary real convergence to \(0\);
4. the exact scalar \(S=\sum_tF_t\) survives rational minimalization and forward transport.

The resulting T16 theorem gives, for every homogeneous algebraic relation

\[
P(1,G_1(\alpha),\ldots,G_r(\alpha))=0
\]

holding in the chosen nonarchimedean completion, an algebraic functional relation

\[
Q(x,1,\mathbf G(x))=0
\]

with

\[
\boxed{Q(\alpha,\mathbf X)=P(\mathbf X).}
\]

The theorem is proved for the full homogeneous polynomial relation problem under the mixed-place hypotheses. The Collatz application needs only degree one.

Applying it to a hypothetical positive rational anchor

\[
H=N\in\mathbb Q_{>0}
\]

gives the exact transported 2-adic relation

\[
\ell_J\mathbf G(q_J)+3N=0.
\]

After adjoining \(1\), T16 lifts that exact polynomial. The lifted algebraic identity can be embedded into the real completion. Exact reconstruction then gives

\[
S^{(\infty)}(q)+3N=0,
\]

contradicting

\[
S^{(\infty)}(q)>0,\qquad N>0.
\]

Therefore

\[
\boxed{
\text{no genuinely aperiodic primitive dominant }
T\in\mathcal M,\ T\text{-independent T14 system}
}
\]

has a positive rational anchor. In particular no positive integer anchor exists in that class.

Negative rational values are not excluded. If \(H=N<0\), the real identity

\[
S^{(\infty)}(q)=-3N>0
\]

has the correct sign, so the T16 sign obstruction does not apply.

Combining with T2 gives a new restricted Periodicity-Conjecture consequence:

\[
\boxed{
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
}
\]

for the newly closed primitive dominant multivariate class, subject to the exact T2 finite-alphabet anchoring hypotheses.

The T15 singular-incidence stable-image torus class is **not** closed. The successful affine proof still uses the positive monoid \(\mathbb N^m\), degree truncation at the affine origin, and analytic neighborhoods of a boundary point represented by \(0\). A Laurent monomial torus isogeny approaching a toric boundary requires a new intrinsic toric version of the auxiliary-function argument.

No new scientific compute is justified.

---

## 2. Exact T15 state inherited

T16 treats the following as closed infrastructure.

### 2.1 Exact multivariate system and scalar

After exact reachable/output quotienting,

\[
c(kn+r)=Mc(n)+p_r(u_n).
\]

For

\[
F_t(x)=\sum_{\substack{n\ge0\\u_n=t}}x^{c(n)}
\]

and the monomial map

\[
\tau(x)_s=\prod_t x_t^{M_{t,s}},
\]

the exact system is

\[
\boxed{\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x)).}
\]

The exact Collatz point is

\[
q_s=\frac{2^{v(s)}}3,
\]

the prescribed scalar is

\[
S(x)=\sum_tF_t(x),
\]

and

\[
\boxed{H=-\frac13S(q).}
\]

### 2.2 Dominant rational-linear minimalization

If

\[
\det M\ne0,
\]

then the monomial pullback is injective on the rational-function field. One may choose a rational basis

\[
\mathbf G=(G_1,\ldots,G_r)^T,
\qquad
G_1=S,
\]

and obtain

\[
\boxed{
\mathbf G(x)=A(x)\mathbf G(\tau(x)),
\qquad
A(x)\in\operatorname{GL}_r(\mathbb Q(x)).
}
\]

For T16 it is useful to strengthen the basis choice slightly without changing the span: by Steinitz exchange, after inserting \(S\), the remaining basis elements may be chosen from the original canonical state series. Consequently every \(G_i\) is an algebraic linear combination of canonical analytic series and is analytic on every strict sub-polydisc of the nonarchimedean unit polydisc. In particular, the proof does not require a rational basis vector that is itself merely meromorphic at the origin.

### 2.3 Exact orbit and independence

For

\[
q_j=\tau^j(q),
\]

\[
q_{j,s}=
\frac{2^{v^TM^je_s}}{3^{k^j}}.
\]

The \(q_j\) are pairwise distinct and tend coordinatewise to \(0\) 2-adically.

The exact \(T\)-independence criterion from T14/T15 is retained unchanged.

### 2.4 Regular tails and real contraction

For \(T=M^T\in\mathcal M\) and an exact \(T\)-independent point, the orbit is Zariski dense. Every proper algebraic bad locus is therefore hit only finitely often. A sufficiently deep tail may simultaneously avoid every denominator introduced by

- \(A\);
- \(A^{-1}\);
- basis and reconstruction matrices;
- exact scalar transport.

For a primitive substitution, a hypothetical genuinely aperiodic positive anchor forces the Perron–Frobenius valuation mean below \(\log_2 3\), and therefore

\[
q_j\to0
\]

coordinatewise in the ordinary real completion.

### 2.5 Exact scalar transport

If

\[
P_J(q)=\mathcal A(q_0)\cdots\mathcal A(q_{J-1}),
\]

then

\[
\mathbf F(q)=P_J(q)\mathbf F(q_J).
\]

After the exact reduction \(\mathbf F=C\mathbf G\),

\[
\boxed{
S(q)=\mathbf1^TP_J(q)C(q_J)\mathbf G(q_J).
}
\]

No early singular matrix is inverted.

### 2.6 Stable-image torus

For singular incidence, T15 proved the stable-image torus and the induced finite torus isogeny, but also isolated two exact theorem-interface problems:

- an intrinsic character-lattice basis may produce negative exponents;
- ambient convergence to \(0\) is convergence to a toric boundary, not convergence to a point of the torus.

T16 does not erase those problems.

---

## 3. Targeted source update and publication boundary

T16 did not restart the generic literature search.

The primary source audited line-by-line was the final revised proof underlying:

Boris Adamczewski and Colin Faverjon, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 455–533, DOI 10.4007/annals.2026.204.2.1.

The Annals record shows that the paper was revised on 2025-02-10, accepted on 2025-09-29, and published online on 2026-09-13.

The same issue contains:

Boris Adamczewski and Colin Faverjon, “Addendum to: Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 535–543, DOI 10.4007/annals.2026.204.2.2.

The addendum was checked because it postdates much of the earlier project audit. It does not supply an arbitrary-place lifting theorem and does not change the local analytic steps audited below.

Brechler was checked only for publication status:

Enzo Brechler, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877.

As of 2026-10-03 the source remains an arXiv preprint. Its p-adic meromorphy statement therefore remains non-load-bearing, and T16 does not use it to justify relation lifting.

Adamczewski–Bell–Smertnig 2023 remains the arbitrary-place one-variable source used by T10–T13. It is not used to infer the T16 multivariate theorem.

---

## 4. The dominant regular-tail system used in T16

Fix the first load-bearing case:

\[
\det M\ne0,
\qquad
T=M^T\in\mathcal M,
\qquad
q\text{ is }T\text{-independent}.
\]

Assume the substitution is primitive when the completion-sign conclusion is invoked.

Choose \(J\) so deep that

\[
\alpha=q_J
\]

has all of the following properties.

1. The complete future orbit is regular for \(A\) and \(A^{-1}\).
2. Every rational basis and reconstruction denominator used in exact scalar transport is nonzero on the future orbit.
3. The canonical and chosen basis series converge in a 2-adic open unit polydisc containing the future orbit.
4. The same algebraic point lies sufficiently deep in the ordinary real unit polydisc for real convergence.
5. The \(T\)-independence hypothesis is inherited.
6. The pair \((T,\alpha)\) is admissible in the Adamczewski–Faverjon complex sense.

The last item is not a new assumption in the T14 primitive dominant subclass: it is exactly the already-proved consequence of \(T\in\mathcal M\), \(T\)-independence, and the real contraction of the tail.

The system at the tail is

\[
\boxed{
\mathbf G(x)=A(x)\mathbf G(Tx),
\qquad
A(x)\in\operatorname{GL}_r(\overline{\mathbb Q}(x)).
}
\]

Here \(Tx\) denotes the monomial transformation represented by \(T\). This is the orientation used in Sections 7–9 of the final Adamczewski–Faverjon proof.

---

## 5. Exact nonarchimedean analytic category

Let \(K\) be a number field containing all algebraic coefficients and coordinates needed for the tail system, let \(v\) be a nonarchimedean place of characteristic zero, and let \(K_v\) be its completion. Work after finite scalar extension inside a fixed completed algebraic closure \(\mathbb C_v\).

For \(0<r<1\), write

\[
\mathcal T_r
=
\mathbb C_v\langle r^{-1}x_1,\ldots,r^{-1}x_m\rangle
\]

for the strict Tate algebra on the closed polydisc of radius \(r\), with Gauss norm

\[
\left\|\sum_\nu a_\nu x^\nu\right\|_r
=
\max_\nu |a_\nu|_v r^{|\nu|}.
\]

For a center \(\xi\), use

\[
\mathcal T_{\xi,r}
=
\mathbb C_v\langle r^{-1}(x_1-\xi_1),\ldots,r^{-1}(x_m-\xi_m)\rangle.
\]

The rigid open unit polydisc is the increasing union of these closed affinoids:

\[
D_v(0,1^-)=\bigcup_{r<1}D_v(0,r).
\]

The local ring of analytic germs at \(\xi\) is the direct limit of the \(\mathcal T_{\xi,r}\) over sufficiently small \(r\). Meromorphic germs are taken in the corresponding fraction fields.

No dagger or overconvergent algebra is required for the dominant T14 application. The canonical state series already converge on every strict closed sub-polydisc of \(D_v(0,1^-)\), and the basis can be chosen from those analytic series while retaining \(G_1=S\).

For algebraic coefficients, define

\[
\overline{\mathbb Q}(x)_{\xi,v}^{\rm alg}
\]

to mean the algebraic closure of \(\overline{\mathbb Q}(x)\) represented by algebraic rigid-analytic germs at \(\xi\). This is the nonarchimedean analogue of the algebraic analytic-germ field used in Adamczewski–Faverjon.

---

## 6. Step-by-step audit of the Adamczewski–Faverjon lifting proof

The final revised proof proceeds through Theorem 7.2, Sections 8–9, and specializes to Theorem 3.3 in Section 10. The audit below is for the one-system case needed by T16.

| Proof component | Role in published proof | T16 classification | T16 treatment |
|---|---|---|---|
| Theorem 3.3 / Theorem 7.2 setup | exact homogeneous relation lifting | algebraic statement plus analytic hypotheses | same target, input relation allowed at \(v\) |
| Section 5 admissibility | orbit growth, convergence, zero avoidance | genuinely archimedean as stated | retained at an ordinary embedding; supplied by T14 |
| Theorem 6.4 vanishing theorem | zeros of algebraic/analytic functions along the algebraic orbit | global/archimedean theorem | retained unchanged at the ordinary embedding |
| Section 8.1 relation ideal/localization | define functional relation modules | purely algebraic once Theorem 6.4 is available | unchanged |
| Lemmas 8.2–8.7 | dimensions, complements, Hilbert-function bounds | algebraic / linear algebra / vanishing input | unchanged |
| Lemmas 8.8–8.10 | Nullstellensatz relation matrix and cocycle propagation | algebraic | unchanged |
| Lemma 8.11 | realize a primitive algebraic element as an analytic branch near a deep orbit point | complex analytic, nontrivial replacement | replaced by rigid Hensel/implicit-function lemma |
| Section 9.1 | iterated relation identities | algebraic | unchanged |
| Section 9.2 | nested local neighborhoods and Taylor expansions | complex analytic | replaced by nested affinoid polydiscs and Tate expansions |
| Lemma 9.4 | auxiliary polynomial by dimension counting | purely algebraic | unchanged |
| Lemma 9.6 | coefficient decay after monomial substitution and translation | complex Cauchy estimate + translated series | replaced by Gauss-norm tail estimate |
| Lemma 9.7 | coefficient growth of the transported relation matrix | algebraic recurrence plus archimedean coefficient estimate | replaced by ultrametric recurrence bound |
| Lemma 9.8 | combine 9.6 and 9.7 | analytic convolution | replaced by ultrametric finite convolution |
| Proposition 9.5 | upper bound for auxiliary evaluation | analytic continuation + 9.6–9.8 + Liouville for denominator | rigid identity theorem + local Liouville |
| Proposition 9.9 | lower bound | Theorem 6.4 + height/Liouville | same zero set; local-place Liouville |
| Section 9.3.4 | contradiction | numerical comparison of bounds | unchanged |
| Section 9.4 | build \(Q^\star\) and prove \(Q^\star(\alpha,X)=P^\star(X)\) | algebraic | unchanged |
| Section 10 | reduce Theorem 7.2 to Theorem 3.3 | algebraic | unchanged |

This audit corrects one overbroad T15 diagnosis.

The lower-bound side is not intrinsically archimedean. The paper formulates absolute Weil height using all places and invokes Liouville after bounding heights. At a fixed nonarchimedean place one has the same type of local lower bound from the product formula.

The genuinely local analytic work is concentrated in Lemma 8.11, Section 9.2, Lemmas 9.6–9.8, and the analytic-continuation sentence in Proposition 9.5.

A second important point is that T16 does **not** claim a nonarchimedean replacement for Theorem 6.4. The same algebraic tail is already admissible in the ordinary embedding, so the published theorem supplies exactly the zero-set information needed by Sections 8 and 9.9. The p-adic value relation is never fed into that archimedean vanishing theorem.

---

## 7. Rigid-analytic replacement lemmas

The following lemmas replace every local complex-analytic use in the lifting proof.

### Lemma T16.1 — Gauss/Cauchy coefficient bound

Let

\[
f(x)=\sum_{\nu\in\mathbb N^m}a_\nu(x-\xi)^\nu
\in\mathcal T_{\xi,r}.
\]

Then

\[
\boxed{
|a_\nu|_v r^{|\nu|}
\le
\|f\|_{\xi,r}.
}
\]

This is immediate from the definition of the Gauss norm.

It replaces the Cauchy–Hadamard/Cauchy coefficient estimate. No derivative estimate is needed.

### Lemma T16.2 — translated expansion on nested ultrametric polydiscs

Suppose

\[
f(x)=\sum_{\gamma\ge0}a_\gamma x^\gamma
\]

converges on \(D_v(0,r_1)\), and choose \(\xi\) and \(r_2\) such that

\[
\max(\|\xi\|_v,r_2)<r_1.
\]

Then \(f\) has a unique expansion on \(D_v(\xi,r_2)\),

\[
f(x)=\sum_{\lambda\ge0}h_\lambda(x-\xi)^\lambda,
\]

with

\[
\boxed{
h_\lambda
=
\sum_{\gamma\ge\lambda}
\binom{\gamma}{\lambda}
a_\gamma\xi^{\gamma-\lambda}.
}
\]

The series converges because the terms tend to zero, and

\[
\left|\binom{\gamma}{\lambda}\right|_v\le1
\]

for integral multi-binomial coefficients.

This is exactly the translated-expansion identity used in Adamczewski–Faverjon Lemma 9.6.

### Lemma T16.3 — rigid identity continuation on a polydisc

For \(0<r'<r\), the restriction map

\[
\mathcal T_{\xi,r}\longrightarrow\mathcal T_{\xi,r'}
\]

is injective.

Consequently, if two analytic functions on \(D_v(\xi,r)\) agree on a nonempty smaller concentric polydisc, they agree on the whole larger polydisc.

Proof: write the difference in its unique Tate expansion at \(\xi\). Vanishing on the smaller polydisc forces every coefficient to vanish.

This replaces exactly the analytic-continuation sentence in Proposition 9.5. No topological connectedness assertion is used.

### Lemma T16.4 — algebraic rigid branch / implicit function

Let

\[
P(x,y)\in L[x,y]
\]

over a finite extension \(L/K_v\), and let

\[
P(\xi,\beta)=0,
\qquad
\partial_yP(\xi,\beta)\ne0.
\]

After shrinking to a sufficiently small closed affinoid polydisc \(D_v(\xi,r)\), there is a unique

\[
\phi\in\mathcal T_{\xi,r}
\]

with

\[
\phi(\xi)=\beta,
\qquad
P(x,\phi(x))=0.
\]

This is the standard Hensel/implicit-function argument in the complete Tate algebra: after scaling by the nonzero derivative, the Newton map is a strict contraction on a sufficiently small coefficient ball.

Because \(\phi\) satisfies \(P(x,\phi)=0\), it is algebraic over \(L(x)\).

In Adamczewski–Faverjon Lemma 8.11 the discriminant is forced nonzero at the chosen deep algebraic point. Therefore the primitive algebraic element defining the relation matrix admits such a branch at \(v\). The determinant-normalizing polynomial \(q_0\) used there is also nonzero, so the relation matrix remains invertible on a sufficiently small affinoid neighborhood.

### Lemma T16.5 — nonarchimedean replacement for Lemma 9.6

Let

\[
G_i(x)=\sum_{|\mu|\ge p}g_{\mu,i}x^\mu
\]

be analytic on \(D_v(0,r)\) with \(r>r_1\). Let \(T^n\) be a nonnegative nonsingular monomial exponent matrix satisfying the same exponent-growth estimate used in the published proof:

\[
|\mu T^n|
\ge
cE^n|\mu|.
\]

Write the translated expansion

\[
G_i(T^n x)
=
\sum_\lambda h_{\lambda,i,n}(x-\xi)^\lambda.
\]

Gauss gives

\[
|g_{\mu,i}|_v
\le
C r_1^{-|\mu|}.
\]

After monomial substitution the support begins at total degree at least \(cE^np\). Applying Lemma T16.2 and the ultrametric triangle inequality gives, for fixed \(\lambda\),

\[
|h_{\lambda,i,n}|_v
\le
C\|\xi\|_v^{-|\lambda|}
\left(\frac{\|\xi\|_v}{r_1}\right)^{cE^np}
\]

once \(n\) is large enough that \(cE^np>|\lambda|\).

Since

\[
\|\xi\|_v<r_1,
\]

there is \(\sigma>0\) such that

\[
\boxed{
|h_{\lambda,i,n}|_v
\le
\exp(-\sigma E^np)
}
\]

for the parameter hierarchy used in Section 9.

This is stronger than the complex estimate in one respect: the ultrametric maximum removes the combinatorial sum over multiindices.

### Lemma T16.6 — nonarchimedean replacement for Lemma 9.7

The denominator-cleared relation matrices in Section 9 satisfy a fixed finite recurrence of the form

\[
b_{n+1}(x)\Theta_{n+1}(x)
=
b_n(x)\Theta_n(x)\Gamma_n(x),
\]

where the coefficient data come from finitely many fixed algebraic rational functions composed with monomial maps.

Expand at \(\xi\).

For every fixed multiindex \(\lambda\), integral binomial coefficients have \(v\)-adic norm at most \(1\), powers of the coordinates of \(\xi\) have norm at most \(1\), and each recurrence step introduces only a bounded multiplicative coefficient norm. Hence there is a constant \(\kappa(\delta_1,\lambda)\) with

\[
\boxed{
|\theta_{\lambda,i,n}|_v
\le
\exp(\kappa(\delta_1,\lambda)n).
}
\]

The proof is the same induction as published Lemma 9.7, with finite sums replaced by maxima when applying the ultrametric inequality.

### Lemma T16.7 — nonarchimedean replacement for Lemma 9.8

For fixed \(\lambda\), the coefficient convolution is finite:

\[
\epsilon_{\lambda,n}
=
\sum_i\sum_{\gamma\le\lambda}
h_{\gamma,i,n}\theta_{\lambda-\gamma,i,n}.
\]

Lemmas T16.5 and T16.6 yield

\[
|\epsilon_{\lambda,n}|_v
\le
\max_{i,\gamma\le\lambda}
|h_{\gamma,i,n}|_v
|\theta_{\lambda-\gamma,i,n}|_v.
\]

The exponential-in-\(n\) growth is absorbed by the \(E^np\) decay. Thus for some \(\gamma_0>0\),

\[
\boxed{
|\epsilon_{\lambda,n}|_v
\le
\exp(-\gamma_0E^np).
}
\]

### Lemma T16.8 — local-place Liouville bound

Let \(K\) be a number field and \(v\) a normalized place. For every nonzero

\[
\beta\in K,
\]

the product formula gives

\[
-\log|\beta|_v
\le
C(K,v)\log H(\beta).
\]

Therefore every degree/height estimate used in Propositions 9.5 and 9.9 gives the same exponential **lower** bound at the chosen nonarchimedean place, with a place-dependent constant.

No archimedean maximum principle, Schwarz lemma, Jensen formula, or derivative estimate is used.

### Lemma T16.9 — portability of the lifted algebraic identity

The output of Section 9.4 has coefficients in a finite algebraic extension of

\[
\overline{\mathbb Q}(x).
\]

The nonarchimedean analytic branch constructed by Lemma T16.4 is an embedding of that algebraic extension into a rigid meromorphic germ field.

The intrinsic field

\[
\overline{\mathbb Q}(x)(G_1,\ldots,G_r)
\]

is defined by the algebraic-coefficient formal series themselves. Its embedding into the nonarchimedean germ field is faithful: a rational expression in the \(G_i\) that vanishes as a germ has zero formal series after clearing denominators.

Hence

\[
Q(x,\mathbf G(x))=0
\]

in the \(v\)-adic germ field is an algebraic field identity, not an equality tied only to one metric completion.

Likewise,

\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]

is an equality of algebraic coefficients. It remains true under every field embedding.

If the discriminant and denominators are nonzero at \(\alpha\), the same algebraic coefficient field has ordinary complex analytic branches near the real embedding of \(\alpha\). Therefore the functional identity may be evaluated there whenever the \(G_i\) converge.

This is the rigorous completion bridge used below. It does not identify raw real and 2-adic sums.

---

## 8. Theorem T16.10 — mixed-place exact nonarchimedean lifting

### Statement

Let \(K\) be a number field, \(v\) a characteristic-zero nonarchimedean place, and

\[
T\in M_m(\mathbb N)
\]

be nonsingular.

Let

\[
\mathbf f(x)=(f_1(x),\ldots,f_r(x))^T
\]

have algebraic coefficients and satisfy

\[
\boxed{
\mathbf f(x)=A(x)\mathbf f(Tx),
\qquad
A(x)\in\operatorname{GL}_r(\overline{\mathbb Q}(x)).
}
\]

Let

\[
\alpha\in(\overline{\mathbb Q}^\times)^m.
\]

Assume:

1. **regularity:** the complete forward orbit of \(\alpha\) avoids every zero and pole required for \(A\) and \(A^{-1}\);
2. **archimedean admissibility:** under some ordinary complex embedding, the pair \((T,\alpha)\) satisfies the Adamczewski–Faverjon admissibility hypotheses needed for Theorem 6.4;
3. **nonarchimedean contraction:** \(T^n\alpha\to0\) in the \(v\)-adic open polydisc;
4. **nonarchimedean analyticity:** all \(f_i\) converge on a \(v\)-adic neighborhood of \(0\) containing a sufficiently deep future orbit;
5. all algebraic denominators introduced by the relation-matrix construction are nonzero at a sufficiently deep orbit point.

Then every homogeneous polynomial

\[
P(\mathbf X)\in\overline{\mathbb Q}[\mathbf X]
\]

satisfying

\[
P(\mathbf f_v(\alpha))=0
\]

in the \(v\)-adic completion admits a homogeneous polynomial

\[
Q(x,\mathbf X)
\in
\overline{\mathbb Q}(x)_{\alpha,v}^{\rm alg}[\mathbf X]
\]

of the same degree such that

\[
\boxed{
Q(x,\mathbf f(x))=0
}
\]

as an algebraic functional identity and

\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

The conclusion remains valid after adjoining the constant function \(1\).

### Proof

The proof follows the final Adamczewski–Faverjon proof of Theorem 7.2 with one system.

#### Step 1 — retain the global algebraic/vanishing layer

Sections 8.1–8.10 construct the relation ideal, complements, Nullstellensatz relation matrix, and its Mahler propagation from algebraic identities and Theorem 6.4.

By Hypothesis 2, Theorem 6.4 applies to the same algebraic orbit under the ordinary embedding. Its conclusions are statements that specified algebraic functions are zero or nonzero at specified algebraic orbit points. Those conclusions are independent of the later choice of completion.

Thus the entire Section 8 algebraic skeleton, through Lemma 8.10, is retained unchanged.

#### Step 2 — construct the relation matrix in the \(v\)-adic germ field

In Lemma 8.11, choose the same deep index \(l_0\) at which the discriminant, determinant certificate, and rational denominators are nonzero.

Instead of the complex implicit-function theorem, apply Lemma T16.4 to the primitive algebraic element. This produces a rigid-analytic algebraic branch near

\[
\xi=T^{k_{l_0}}\alpha.
\]

All relation-matrix polynomial identities survive under the branch embedding, and the determinant certificate makes the matrix invertible.

This is the exact rigid replacement for Lemma 8.11.

#### Step 3 — replace Section 9.2 by nested affinoids

Choose radii

\[
\|\xi\|_v<r_2<r_1<1
\]

after shrinking if necessary.

Every canonical/basis function and every denominator-cleared relation-matrix entry used in Section 9 is analytic on the required closed affinoids. Monomial substitution preserves the open unit polydisc because \(T\) has nonnegative entries.

All Taylor expansions at \(\xi\) are Tate expansions in \(\mathcal T_{\xi,r_2}\).

#### Step 4 — retain the auxiliary-polynomial construction

Lemma 9.4 is dimension counting in finite-dimensional spaces of algebraic polynomials modulo the relation ideal. It is unchanged.

The assumed value relation \(P\) enters only through the same algebraic construction of \(F\), \(\Theta_l\), and the auxiliary function. No complex absolute value is used in this step.

#### Step 5 — prove the nonarchimedean upper bound

Replace published Lemmas 9.6, 9.7, and 9.8 by Lemmas T16.5, T16.6, and T16.7.

The equality that the published proof initially knows on a smaller polydisc and extends by complex analytic continuation is extended instead by Lemma T16.3.

The denominator-clearing factor is a nonzero algebraic number at each regular iterate. Its lower bound follows from Lemma T16.8 and the unchanged global degree/height estimate.

Hence Proposition 9.5 holds with \(|\cdot|_v\):

\[
|E(R_{k_l}(\alpha),T^{k_l}\alpha)|_v
\le
\exp\!\left(
-c_2E^l\delta_1^{1/N}\delta_2
\right)
\]

for the same parameter hierarchy.

#### Step 6 — prove the nonarchimedean lower bound

Theorem 6.4 and Lemma 8.4 already give the same infinite set of indices on which the relevant algebraic auxiliary value is nonzero.

The degree and height estimates are algebraic and unchanged.

Apply Lemma T16.8 at \(v\). This gives

\[
|E(R_{k_l}(\alpha),T^{k_l}\alpha)|_v
\ge
\exp(-c_3E^l\delta_2)
\]

on an infinite set.

Choosing \(\delta_1\) large gives the same contradiction as Section 9.3.4.

#### Step 7 — exact specialization

Section 9.4 is algebraic.

The normalized relation is built so that

\[
\Theta_{l_0}(\xi)=R_{k_{l_0}}(\alpha).
\]

Substitution into the explicit formula for \(Q^\star\) therefore gives, exactly as in the published proof,

\[
Q^\star(\alpha,\mathbf X)=P^\star(\mathbf X).
\]

No limiting argument and no transcendence-degree comparison is used.

Lemma T16.9 promotes the resulting rigid-germ equality to an algebraic functional identity and makes the exact specialization portable between completions.

This proves the theorem.

---

## 9. Linear relation case versus the full polynomial case

The Collatz sign argument needs only degree one after adjoining \(1\).

T16 audited whether that case has a materially shorter direct proof.

No such shorter proof was established.

Even when the input relation has degree one, the Adamczewski–Faverjon contradiction constructs auxiliary polynomials involving powers up to the auxiliary degree parameter \(\delta_1\). The relation-matrix, dimension, translated-expansion, upper-bound, and lower-bound machinery remains.

Rather than claim an unproved shortcut

\[
\text{functional linear independence}
\Longrightarrow
\text{value linear independence},
\]

T16 proves the full homogeneous lifting statement under the mixed-place hypotheses. The linear case is then an immediate specialization.

This is stronger and safer than a transcendence-degree equality: the original polynomial \(P\) is tracked exactly.

---

## 10. Appending the constant function \(1\)

For

\[
\mathbf G(x)=A(x)\mathbf G(Tx),
\]

put

\[
\widetilde{\mathbf G}(x)
=
(1,\mathbf G(x))^T.
\]

Then

\[
\widetilde{\mathbf G}(x)
=
\begin{pmatrix}
1&0\\
0&A(x)
\end{pmatrix}
\widetilde{\mathbf G}(Tx).
\]

Therefore:

- the augmented matrix remains invertible;
- regularity is unchanged;
- the monomial dynamics and admissibility hypotheses are unchanged;
- the constant function is analytic in every chosen affinoid domain;
- a relation
  \[
  c+\ell\mathbf G(\alpha)=0
  \]
  becomes the homogeneous linear relation
  \[
  cX_0+\ell\mathbf X=0.
  \]

Appending \(1\) is therefore harmless in the T16 theorem exactly as required.

---

## 11. Theorem T16.11 — primitive dominant Collatz completion-sign obstruction

### Statement

Consider the exact T14/T15 multivariate finite-state Collatz system. Assume

\[
\det M\ne0,
\qquad
T=M^T\in\mathcal M,
\qquad
q\text{ is }T\text{-independent},
\]

and assume the substitution is primitive.

If the associated recursive parity/valuation language is genuinely aperiodic, then its exact inverse anchor satisfies

\[
\boxed{
H\notin\mathbb Q_{>0}.
}
\]

In particular,

\[
\boxed{
H\notin\mathbb Z_{>0}.
}
\]

### Proof

Assume for contradiction that

\[
H=N\in\mathbb Q_{>0}.
\]

The exact scalar identity is

\[
H=-\frac13S(q),
\]

so in the 2-adic completion

\[
S(q)+3N=0.
\]

Choose the deep tail \(q_J\) from Section 4. By exact forward scalar transport,

\[
\boxed{
\ell_J\mathbf G(q_J)+3N=0
}
\]

for the exact reconstruction row

\[
\ell_J=\mathbf1^TP_J(q)C(q_J).
\]

Adjoin the constant function \(1\) and define

\[
P(X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
\]

This is a homogeneous linear polynomial over \(\overline{\mathbb Q}\), and

\[
P(1,\mathbf G_2(q_J))=0
\]

in the 2-adic completion.

All hypotheses of Theorem T16.10 hold:

- T14 gives ordinary Adamczewski–Faverjon admissibility from \(T\in\mathcal M\) and \(T\)-independence;
- the exact Collatz tail tends to \(0\) 2-adically;
- the tail was chosen regular for every introduced denominator;
- the canonical/basis functions are analytic on the nonarchimedean unit domain.

Therefore there is an algebraic functional relation

\[
Q(x,X_0,\mathbf X)=0
\]

along \((1,\mathbf G(x))\) with

\[
\boxed{
Q(q_J,X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
}
\]

Now use primitivity.

T14 proves that the same tail tends to \(0\) in the ordinary real completion and that the original canonical series converge absolutely there. By Lemma T16.9, embed the lifted algebraic functional identity into a complex/real germ at \(q_J\). Evaluating gives

\[
\ell_J\mathbf G^{(\infty)}(q_J)+3N=0.
\]

Exact reconstruction is completion-independent, so

\[
\ell_J\mathbf G^{(\infty)}(q_J)
=
S^{(\infty)}(q).
\]

Hence

\[
S^{(\infty)}(q)+3N=0.
\]

But the canonical series have nonnegative coefficients and the exact scalar has a nonzero positive contribution, so

\[
S^{(\infty)}(q)>0.
\]

Also \(N>0\). Contradiction.

Therefore

\[
H\notin\mathbb Q_{>0}.
\]

QED.

---

## 12. Exact rational sign boundary

T16 closes more than the positive-integer branch.

For the covered primitive dominant class,

\[
\boxed{
H\notin\mathbb Q_{>0}.
}
\]

Thus every positive rational and every positive integer is excluded.

T16 does **not** prove

\[
H\notin\mathbb Q
\]

without a sign restriction.

If a rational value \(H=N<0\) survived, the transported and lifted real identity would read

\[
S^{(\infty)}(q)=-3N>0,
\]

which is compatible with positivity.

Therefore:

- positive rational anchor: **EXCLUDED**;
- positive integer anchor: **EXCLUDED**;
- zero anchor: incompatible with the positive real scalar, but irrelevant to the root objective;
- negative rational anchor: **NOT EXCLUDED BY T16**;
- negative integer anchor: **NOT EXCLUDED BY T16**;
- negative rational value as a Collatz counterexample: **NO**.

The theorem does not assert equality of a 2-adic and a real limit. The bridge is the lifted algebraic functional identity with exact specialization.

---

## 13. Consequence back to T2

T2 proves, in the bounded finite valuation alphabets covered by the project, that bounded canonical representatives \(R_m\) produce an ordinary positive anchor; for an aperiodic realized positive orbit, that is the branch relevant to the root objective.

Suppose a recursive language belongs to the T16 primitive dominant class and is genuinely aperiodic.

If

\[
R_m
\]

were bounded, T2 would produce a positive ordinary anchor.

Theorem T16.11 excludes every positive integer anchor in this class.

Therefore

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for the newly closed T16 class, with the exact T2 finite-alphabet hypotheses retained.

This is a new recursive-language obstruction. It is not an explicit divergent orbit.

---

## 14. Intrinsic torus-isogeny test

The dominant affine proof succeeds, so T16 next tested whether it depends only on the intrinsic torus data from T15.

It does not yet.

The following parts are intrinsic or nearly intrinsic:

- algebraic orbit regularity;
- finite torus isogeny;
- relation ideals over a function field;
- algebraic relation matrices;
- local Hensel lifting at a regular torus point;
- local Liouville bounds;
- exact specialization algebra.

The obstruction is the auxiliary-function upper-bound architecture.

The published and T16 affine proofs use:

1. the positive exponent monoid
   \[
   \mathbb N^m;
   \]
2. truncation by total degree at the affine origin;
3. exponent growth
   \[
   |\lambda T^n|\gg\rho(T)^n|\lambda|;
   \]
4. a high-order tail whose support starts beyond degree \(p\);
5. an analytic origin inside the affine polydisc;
6. translation from that origin expansion to a deep orbit point.

For the T15 stable-image torus, an intrinsic lattice basis can turn the isogeny into a Laurent monomial map. Negative exponents destroy the naive \(\mathbb N^m\)-filtration. Moreover the ambient limit \(q_j\to0\) is a toric boundary limit, while \(0\) is not a point of the torus.

Therefore T16 does **not** claim that the stable-image singular-incidence class is covered.

A toric extension needs at least the following new ingredients:

- a toric compactification or formal/rigid chart containing the attracting boundary stratum;
- a finitely generated semigroup of characters regular on that chart;
- an intrinsic degree/weight filtration replacing total degree in \(\mathbb N^m\);
- a toric analogue of Lemma T16.5 showing exponential support displacement under the isogeny;
- analytic relation-matrix branches on the boundary chart;
- an admissibility/vanishing statement compatible with that chart;
- exact specialization preserved through the toric coordinate changes.

Forcing an arbitrary lattice basis into a nonnegative affine matrix is neither proved nor required.

---

## 15. Exact Periodicity-Conjecture boundary after T16

| Recursive class | Status after T16 | Strongest project conclusion |
|---|---|---|
| finite abelian translations | closed by T11 | genuinely nonperiodic covered values are nonrational; no positive anchor |
| finite nonabelian translations | closed by T12 | no genuinely nonperiodic positive-integer anchor |
| balanced one-variable finite-kernel systems | closed by T13 | no genuinely nonperiodic positive-integer anchor; bounded \(R_m\Rightarrow\) eventual periodicity |
| primitive dominant multivariate \(T\in\mathcal M\), exact \(T\)-independent systems | **newly closed by T16** | no positive rational anchor; hence no positive integer anchor; bounded \(R_m\Rightarrow\) eventual periodicity |
| nonprimitive dominant multivariate systems | open | T16 lifting may apply if both completions are available, but T14 real contraction/positivity transport is not proved generally |
| singular-incidence stable-image torus systems | open | T15 algebraic reduction exists; toric lifting theorem still missing |
| general multivariate/unbalanced finite-state systems | open | outside the proved primitive dominant theorem |
| general morphic/substitutive recursive languages | open | no universal Mahler reduction/lifting theorem |
| arbitrary automatic/morphic parity languages | open | no universal positive-anchor obstruction |
| full 3x+1 Periodicity Conjecture | open | not solved |

No statement in the table is an explicit Collatz counterexample.

---

## 16. Cobham, López–Stoll, and external-theorem status

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

**Applicable in T16:** **NO.**

### López–Stoll

T16 does not use a density or cross-completion inference from López–Stoll.

**Load-bearing:** **NO.**

### Brechler 2026

Publication status was checked because T16 explicitly permitted a targeted recheck.

As of 2026-10-03, arXiv:2607.24877 remains a preprint.

Its p-adic meromorphy result is compatible with the analytic category used here but is **not** used as a value-relation lifting theorem.

### Adamczewski–Faverjon addendum

The 2026 addendum is published in the same Annals issue. It does not supply the missing arbitrary-place theorem and is not load-bearing for T16.

---

## 17. What T16 does and does not prove

### Proved

- an explicit rigid-analytic category for the dominant regular tail;
- Tate/Gauss replacements for Cauchy coefficient bounds;
- exact translated expansion in ultrametric polydiscs;
- a rigid identity-continuation lemma with checked domain hypotheses;
- a rigid Hensel/implicit replacement for the analytic relation matrix;
- nonarchimedean analogues of Adamczewski–Faverjon Lemmas 9.6–9.8;
- local-place Liouville bounds for the two auxiliary-value inequalities;
- exact preservation of the original specialization polynomial;
- portability of the lifted **algebraic** functional identity across completions;
- harmlessness of adjoining \(1\);
- a mixed-place exact nonarchimedean multivariate lifting theorem;
- exclusion of every positive rational anchor in the primitive dominant \(T\in\mathcal M\), exact \(T\)-independent class;
- exclusion of every positive integer anchor in that class;
- a new bounded-\(R_m\Rightarrow\) eventual-periodicity class.

### Not proved

- a purely nonarchimedean replacement for Adamczewski–Faverjon Theorem 6.4;
- a multivariate theorem requiring no archimedean admissible embedding at all;
- an intrinsic Laurent/torus-isogeny lifting theorem;
- the T15 stable-image singular-incidence class;
- real contraction for arbitrary nonprimitive substitutions;
- exclusion of negative rational anchors;
- the full Periodicity Conjecture.

---

## 18. Compute and promotion decision

T16 establishes no theorem-derived scientific workload.

- new scientific starts: **NOT JUSTIFIED**;
- candidate trajectories: **NOT JUSTIFIED**;
- substitution enumeration: **NOT JUSTIFIED**;
- finite residue optimization: **NOT JUSTIFIED**;
- finite carry optimization: **NOT JUSTIFIED**;
- finite exponent-code search: **NOT JUSTIFIED**;
- generator or sampling-distribution work: **NOT JUSTIFIED**;
- CPU campaign: **NOT JUSTIFIED**;
- GPU work: **NOT JUSTIFIED**;
- cloud/distributed/volunteer work: **NOT JUSTIFIED**;
- docs/COMPUTE_BUDGET.md: **UNCHANGED**;
- docs/METRIC_CATALOG.md: **UNCHANGED**.

No explicit anchored aperiodic word was found.

No candidate or unbounded orbit was found.

No counterexample was claimed.

---

## 19. Deliverable checklist

| Required item | T16 result |
|---|---|
| exact T15 theorem state inherited | **YES**, Section 2 |
| exact dominant regular-tail system used | Section 4 |
| exact nonarchimedean analytic category | rigid open unit polydisc exhausted by strict Tate affinoids |
| exact function rings/local rings | \(\mathcal T_r\), \(\mathcal T_{\xi,r}\), analytic-germ direct limits, meromorphic fraction fields, algebraic germ extension |
| dagger/overconvergent algebra required | **NO** |
| every Adamczewski–Faverjon proof step audited | Section 6 |
| algebraic steps identified | **YES** |
| place-independent height steps identified | **YES** |
| rigid replacements identified | **YES** |
| every required rigid lemma proved | Lemmas T16.1–T16.9 |
| required lemma left unproved for dominant theorem | **NONE** |
| purely nonarch Theorem 6.4 proved | **NO; not needed for the mixed-place theorem** |
| linear case substantially easier | **NO shorter proof established** |
| full homogeneous relation case obtained | **YES under Theorem T16.10 hypotheses** |
| exact specialization preserved | **YES** |
| appending \(1\) valid | **YES** |
| direct nonarchimedean lifting theorem obtained | **YES, with explicit archimedean-admissibility side hypothesis** |
| exact hypotheses | Theorem T16.10 |
| T14 dominant \(T\in\mathcal M\), \(T\)-independent class covered | **YES when primitive for the sign conclusion** |
| intrinsic torus-isogeny extension | **NO** |
| T15 stable-image singular class covered | **NO** |
| completion-sign argument applies | **YES** |
| positive rational anchors excluded | **YES in the covered primitive dominant class** |
| positive integer anchors excluded | **YES in the covered primitive dominant class** |
| negative rational exception survives | **YES, not excluded** |
| new bounded-\(R_m\) periodicity class | **YES** |
| Periodicity-Conjecture boundary audited | Section 15 |
| Cobham applies | **NO** |
| López–Stoll load-bearing | **NO** |
| Brechler publication status checked | **YES; still preprint as of 2026-10-03** |
| explicit anchored aperiodic word exists | **NO** |
| candidate or unbounded orbit found | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |

---

## 20. Exact next theorem-sized obligation

The dominant affine primitive branch is now closed as a positive-anchoring route.

The next theorem-sized obligation is:

> **CDM4-T17 — intrinsic toric/nonarchimedean lifting at an attracting boundary stratum.**
>
> Starting from the T15 stable-image torus \(X\) and finite torus isogeny
> \[
> \tau_X:X\to X,
> \]
> choose a toric compactification or rigid/formal boundary chart adapted to the actual Collatz tail. Replace the affine \(\mathbb N^m\) total-degree filtration in Adamczewski–Faverjon/T16 by an intrinsic semigroup or weight filtration of characters regular on that chart. Prove the toric analogue of the exponential support-displacement/Gauss estimate, retain exact specialization, and determine whether the mixed-place lifting theorem extends to Laurent monomial isogenies converging toward the toric boundary.
>
> Do not force a nonnegative matrix representation unless it arises naturally.
>
> In parallel, keep the nonprimitive real-contraction issue separate. No completion-sign theorem may be claimed for a nonprimitive class until the ordinary real canonical series are known to converge at the transported tail.

No scientific computation is authorized.

---

## 21. Permanent lesson

T15 correctly identified that p-adic meromorphy is not p-adic relation lifting, but its list of complex ingredients was broader than the genuinely completion-sensitive core of the final Adamczewski–Faverjon proof.

T16 separates the proof into two layers.

The first is global and algebraic/arithmetic:

\[
\text{admissible algebraic orbit}
\to
\text{vanishing theorem}
\to
\text{relation ideal}
\to
\text{Nullstellensatz relation matrix}
\to
\text{height bounds}.
\]

For the primitive dominant Collatz tail, T14 already supplies an ordinary admissible embedding, so this layer can be retained exactly.

The second is local:

\[
\text{analytic branch}
+
\text{translated expansions}
+
\text{coefficient upper bound}
+
\text{local Liouville}.
\]

This layer is completion-sensitive, but Tate algebras replace it without loss. In fact, the ultrametric inequality simplifies the translated-tail and convolution estimates.

The decisive condition is therefore not “a published theorem is already stated p-adically.” It is that the algebraic orbit has enough global admissibility to support the vanishing theorem while the same functions and orbit also live in the chosen nonarchimedean analytic domain.

That mixed-place structure is exactly what the primitive dominant Collatz tail already has.

The bridge between completions remains a lifted **algebraic functional identity with exact specialization**, never an identification of raw 2-adic and real limits.

C — new recursive-language obstruction found