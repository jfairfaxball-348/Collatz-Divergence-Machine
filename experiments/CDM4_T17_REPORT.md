# CDM4-T17 — Intrinsic toric/nonarchimedean lifting at an attracting boundary stratum

**Date:** 2026-10-03  
**Authoritative input commit:** dc95249f5e250203da08359694dca4e8ee2c0091  
**Session type:** theorem / toric-geometry / rigid-analytic / multivariate Mahler audit only  
**Scientific Collatz starts generated:** **0**  
**Candidate trajectories extended:** **0**  
**Substitution enumeration:** **NONE**  
**Finite residue / carry / exponent-code search:** **NONE**  
**CPU / GPU / cloud / distributed scientific work:** **NONE**  
**Explicit anchored aperiodic word found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## 1. Executive result

**PROVED / CLASS C.**

T17 proves the missing intrinsic support-growth mechanism at the T15 stable-image torus and, under an explicit toric relative-admissibility/regular-tail package, extends the T16 mixed-place exact-lifting architecture to a genuinely singular-incidence subclass.

The main point is that an arbitrary basis of the stable character lattice is the wrong coordinate system. Let

\[
L=\ker_{\mathbb Z}(M^{J_0}),
\qquad
N=X^*(X)=\mathbb Z^m/L,
\qquad
\pi:\mathbb Z^m\to N,
\]

where \(J_0\) is after rational-rank stabilization and \(X=\operatorname{im}\tau^{J_0}\) is the T15 stable-image torus. Because the substitution is \(k\)-uniform,

\[
\mathbf 1^TM=k\mathbf1^T.
\]

Every \(\ell\in L\) satisfies \(\mathbf1^T\ell=0\). Hence the ambient total-degree functional descends **intrinsically** to the stable character lattice:

\[
\boxed{
w:N\to\mathbb Z,
\qquad
w(\pi(a))=\mathbf1^Ta.
}
\]

The canonical regular-character semigroup is not obtained by choosing a lattice basis. It is

\[
\boxed{
\Gamma_0=\pi(\mathbb N^m)\subset N.
}
\]

It is finitely generated, spans \(N\) as a group, is preserved by the induced injective endomorphism \(\overline M:N\to N\), and has the positive grading

\[
w(\gamma)\ge0,
\qquad
w(\gamma)=0\iff\gamma=0
\quad(\gamma\in\Gamma_0).
\]

Most importantly,

\[
\boxed{
w(\overline M^n\gamma)=k^n w(\gamma).
}
\]

This is the exact toric support-displacement theorem sought in T17. No Perron–Frobenius approximation and no arbitrary cone norm are required.

The affine toric boundary chart is

\[
U_0=\operatorname{Spec}K[\Gamma_0].
\]

Its cone is pointed. Its closed torus orbit is the point

\[
o:\chi^\gamma\mapsto0
\qquad(\gamma\ne0).
\]

For the exact Collatz tail, every nonconstant regular character satisfies

\[
\left|\chi^\gamma(q_j)\right|_2
\le
2^{-k^j w(\gamma)}.
\]

Thus

\[
\boxed{
q_{J_0+n}\longrightarrow o
}
\]

in the nonarchimedean analytic toric chart. The ambient statement \(q_j\to0\) is therefore replaced by the exact intrinsic statement that the stable-torus orbit approaches the torus-fixed boundary stratum \(o\). No claim is made that \(0\) is a point of \(X\).

T17 then constructs the weighted toric Tate algebra

\[
\mathcal T_{\Gamma_0,r}
=
\left\{
\sum_{\gamma\in\Gamma_0}a_\gamma\chi^\gamma:
|a_\gamma|_v r^{w(\gamma)}\to0
\right\},
\]

with Gauss norm

\[
\left\|\sum a_\gamma\chi^\gamma\right\|_r
=
\max_\gamma |a_\gamma|_v r^{w(\gamma)}.
\]

The coefficient estimate is exact:

\[
|a_\gamma|_v r^{w(\gamma)}\le\|f\|_r.
\]

If the support of \(f\) lies in \(w\ge p\), then

\[
\boxed{
\|f\circ\phi^n\|_r
\le
\|f\|_{r_0}
\left(\frac{r^{k^n}}{r_0}\right)^p
}
\]

for \(0<r<r_0<1\) and sufficiently large \(n\). This is the toric analogue of the T16/T16.5 exponential high-order-tail estimate.

The filtration

\[
F_{\ge p}K[\Gamma_0]
=
\operatorname{span}\{\chi^\gamma:w(\gamma)\ge p\}
\]

is finite-codimensional. Because \(K[\Gamma_0]\) is a finitely generated positively graded domain of Krull dimension \(\operatorname{rank}N\), its cumulative Hilbert function has polynomial growth of the required dimension. Hence the auxiliary-polynomial dimension argument survives.

At an actual deep orbit point \(\xi\in X\), choose a lattice basis only **locally** and put

\[
y_i=\frac{\chi^{m_i}}{\chi^{m_i}(\xi)}-1.
\]

Then

\[
\chi^\gamma
=
\chi^\gamma(\xi)
\prod_i(1+y_i)^{a_i}
\]

with \(a_i\in\mathbb Z\). Negative exponents are harmless on \(|y_i|_v<1\): the generalized binomial coefficients are integers and have \(v\)-adic norm at most one. Thus T16's translated-expansion, identity, and rigid-Hensel arguments remain valid at the torus point without forcing a global Laurent basis into an affine-positive form.

The global vanishing interface also survives, but **Adamczewski–Faverjon Theorem 6.4 is not applied literally to an arbitrary Laurent matrix**. T17 proves a relative toric zero theorem from the same Corvaja–Zannier \(S\)-unit theorem underlying the published proof. Every toric analytic series in \(\Gamma_0\) admits an ordinary ambient power-series lift because every \(\gamma\in\Gamma_0\) has an exponent representative in \(\mathbb N^m\) of total degree exactly \(w(\gamma)\). The exact Collatz orbit consists of \(\{2,3\}\)-units, tends to the ambient origin 2-adically, and satisfies the required height-versus-contraction estimate.

Under the exact **relative independence modulo \(L\)** hypothesis

\[
\mathbf1^T\mu=0,\quad
v^TM^{J_0+a+rn}\mu=0\ \forall n\ge0
\Longrightarrow
\mu\in L,
\]

and the hypothesis that \(\overline M\) has no root-of-unity eigenvalue, every nonzero algebraic-coefficient toric analytic function has only finitely many zeros on the exact stable tail. Corvaja–Zannier would otherwise trap an infinite zero subsequence in finitely many torus cosets; T15 dynamical Mordell–Lang would then produce an arithmetic-progression suborbit in a proper character coset, contradicting either relative independence or the no-root-of-unity condition.

This toric zero theorem replaces the precise role of Adamczewski–Faverjon Theorem 6.4. The relation ideals, localization, Hilbert-function argument, Nullstellensatz relation matrices, algebraic cocycle propagation, global degree/height estimates, local Liouville lower bounds, exact specialization algebra, and portability between completions are then unchanged in substance after replacing the affine polynomial ring by the positively graded semigroup algebra and using the generator presentation

\[
u_i=\chi^{\pi(e_i)},
\qquad
\phi^*u_i=\prod_j u_j^{M_{j,i}},
\]

whose total generator degree is exactly \(k\).

T17 therefore proves a **semigroup-admissible toric mixed-place exact lifting theorem**. It is not advertised as a fully arbitrary-place theorem for every torus isogeny. It applies to the stable-image systems having:

- the canonical Collatz boundary semigroup above;
- a complete regular tail for the scalar-preserving minimal system;
- relative independence modulo \(L\);
- no root-of-unity eigenvalue for \(\overline M\).

For that subclass, a homogeneous nonarchimedean value relation

\[
P(1,\mathbf G(\alpha))=0
\]

lifts to an algebraic functional relation

\[
Q(x,1,\mathbf G(x))=0
\]

with the exact specialization

\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

Appending \(1\) remains harmless.

Consequently, for every **primitive**, genuinely aperiodic stable-image system satisfying the toric lifting hypotheses, a hypothetical positive integer anchor transports exactly to

\[
\ell_J\mathbf G(q_J)+3N=0,
\]

lifts with that exact polynomial, and then gives in the ordinary real completion

\[
S^{(\infty)}(q)+3N=0.
\]

T14's positive-anchor subcriticality gives convergence, while the canonical scalar is positive. This is impossible. Therefore

\[
\boxed{
H\notin\mathbb Z_{>0}
}
\]

for this newly covered singular-incidence stable-image torus subclass.

By T2,

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for the newly closed recursive class, under the inherited finite-alphabet anchoring hypotheses.

T17 does **not** close every T15 singular-incidence system. Root-of-unity factors, failure of relative independence, and general invariant-subvariety/denominator trapping can remain. Nonprimitive real contraction remains a separate issue.

As in T16, positive rational noninteger values are excluded only when ordinary real subcriticality is independently known. Negative rational values remain unexcluded and are not Collatz counterexamples.

No scientific compute is justified.

---

## 2. Exact T16 theorem state inherited

T17 treats T16 as closed infrastructure.

For the primitive dominant affine class

\[
\det M\ne0,
\qquad
T=M^T\in\mathcal M,
\qquad
q\text{ \(T\)-independent},
\]

T16 proves a mixed-place exact lifting theorem.

Its global layer is algebraic/archimedean:

- Adamczewski–Faverjon admissibility for the same algebraic orbit;
- Theorem 6.4 vanishing information;
- relation ideals and localization;
- Hilbert-function estimates;
- Nullstellensatz relation matrices;
- algebraic cocycle propagation;
- global degree/height bounds.

Its local layer is nonarchimedean:

- the input value relation;
- algebraic rigid branches;
- translated Tate expansions;
- the auxiliary upper bound;
- local Liouville;
- exact specialization.

The output preserves the input polynomial exactly:

\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

T16's rigid infrastructure is retained:

1. Gauss coefficient estimates;
2. exact translated expansions;
3. injectivity of restriction on nested affinoids;
4. rigid Hensel/implicit-function branches;
5. nonarchimedean replacements for the local auxiliary estimates;
6. local-place Liouville from the product formula;
7. portability of an algebraic functional identity between completions;
8. appending the constant function \(1\).

T17 does not re-prove these in affine coordinates.

T16's exact rational-value boundary is also retained. Primitivity plus a hypothetical positive **integer** orbit gives the real contraction used in the sign contradiction. It does not prove ordinary real contraction for an abstract positive rational noninteger inverse value. Therefore positive rational exclusion still requires an independently known uniform real-subcriticality hypothesis.

---

## 3. Exact T15 stable-image torus

Let \(M\in M_m(\mathbb N)\) be the exact substitution-incidence matrix and let

\[
\mathbf1^TM=k\mathbf1^T.
\]

Let \(J_0\) be after rational-rank stabilization and define

\[
L=\ker_{\mathbb Z}(M^{J_0}).
\]

T15 proves that \(L\) is saturated and stable:

\[
\ker_{\mathbb Z}(M^{J_0+n})=L
\qquad(n\ge0).
\]

The stable image

\[
X=\operatorname{im}\tau^{J_0}
\]

is a torus with character lattice

\[
\boxed{
N=X^*(X)\cong\mathbb Z^m/L.
}
\]

The induced character pullback is

\[
\overline M:N\to N,
\qquad
[\mu]\mapsto[M\mu].
\]

It is injective with finite cokernel. Hence

\[
\phi=\tau_X:X\to X
\]

is a finite surjective torus isogeny and is étale in characteristic zero.

The exact Collatz tail is

\[
\boxed{
q_{J_0+n}=\phi^n(q_{J_0}).
}
\]

On the nonarchimedean unit-domain of \(X\), T15's scalar-preserving minimalization gives

\[
\mathbf G(x)=A_X(x)\mathbf G(\phi(x)),
\qquad
A_X(x)\in\operatorname{GL}_{r_X}(K(X)),
\]

with

\[
\boxed{G_1=S|_X.}
\]

By Steinitz exchange, after retaining \(S\), the remaining basis functions may be chosen from the restricted canonical state series. This analytic choice is used below.

---

## 4. The canonical toric boundary chart

Let

\[
\pi:\mathbb Z^m\to N
\]

be the quotient map.

### Theorem T17.1 — canonical regular-character semigroup

Define

\[
\boxed{
\Gamma_0=\pi(\mathbb N^m).
}
\]

Then:

1. \(\Gamma_0\) is finitely generated by \(\pi(e_1),\ldots,\pi(e_m)\);
2. the group generated by \(\Gamma_0\) is all of \(N\);
3. \(\overline M(\Gamma_0)\subseteq\Gamma_0\);
4. the cone
   \[
   C=\mathbb R_{\ge0}\Gamma_0\subset N_{\mathbb R}
   \]
   is full dimensional and strongly convex.

#### Proof

Finite generation and group generation are immediate from the quotient construction.

Because \(M\) has nonnegative entries,

\[
M(\mathbb N^m)\subseteq\mathbb N^m,
\]

so \(\overline M\Gamma_0\subseteq\Gamma_0\).

The strong convexity is supplied by the intrinsic weight proved in Section 6. That weight is strictly positive on every nonzero element of \(C\). Hence \(C\cap(-C)=\{0\}\). QED.

The exact affine toric chart is

\[
\boxed{
U_0=\operatorname{Spec}K[\Gamma_0].
}
\]

The semigroup need not be saturated. That is deliberate: \(\Gamma_0\) remembers the actual ambient positive monomials and therefore provides the ordinary power-series lift needed in Section 11.

If a normal chart is desired, let

\[
\Gamma=C\cap N.
\]

By Gordan's lemma \(\Gamma\) is a finitely generated saturated affine semigroup and \(K[\Gamma]\) is the normalization of \(K[\Gamma_0]\) inside \(K(N)\). The proof does not require replacing \(\Gamma_0\) by \(\Gamma\).

The normalization corresponds to the affine fan cone

\[
\sigma=C^\vee\subset N_{\mathbb R}^\vee.
\]

The full cone determines the closed torus orbit described next.

---

## 5. Exact attracting boundary stratum

The affine semigroup ring has the homogeneous maximal ideal

\[
\mathfrak m_o
=
(\chi^\gamma:\gamma\in\Gamma_0,\ \gamma\ne0).
\]

It defines a \(K\)-rational torus-fixed point

\[
\boxed{o\in U_0.}
\]

In the normalized fan chart this is the orbit associated with the full-dimensional cone \(\sigma\).

This is the exact boundary stratum approached by the Collatz stable tail.

### Theorem T17.2 — boundary attraction

For every nonzero \(\gamma\in\Gamma_0\),

\[
\chi^\gamma(q_{J_0+n})\longrightarrow0
\]

at the 2-adic place. Hence

\[
\boxed{
q_{J_0+n}\to o
}
\]

in \(U_0^{\rm an}\).

#### Proof

Write \(\gamma=\pi(a)\) with \(a\in\mathbb N^m\).

For the exact Collatz orbit,

\[
q_{j,s}
=
\frac{2^{B_j(s)}}{3^{k^j}},
\qquad
B_j(s)=v^TM^je_s.
\]

Because every Collatz valuation letter is a positive integer,

\[
v\ge\mathbf1
\]

coordinatewise. Therefore

\[
v^TM^ja
\ge
\mathbf1^TM^ja
=
k^j\mathbf1^Ta.
\]

At the 2-adic place,

\[
|\chi^\gamma(q_j)|_2
=
2^{-v^TM^ja}
\le
2^{-k^j\mathbf1^Ta}.
\]

Section 6 proves \(\mathbf1^Ta=w(\gamma)>0\) for nonzero \(\gamma\in\Gamma_0\). The right side tends to zero. QED.

This is not a statement that the orbit approaches a point of the torus. The point \(o\) lies on the toric boundary.

---

## 6. Intrinsic weight and exact support expansion

### Theorem T17.3 — the weight descends

There is a well-defined homomorphism

\[
\boxed{
w:N\to\mathbb Z,
\qquad
w(\pi(a))=\mathbf1^Ta.
}
\]

It satisfies:

\[
w(\gamma)>0
\quad
(\gamma\in\Gamma_0\setminus\{0\})
\]

and

\[
\boxed{
w(\overline M^n\gamma)=k^n w(\gamma)
}
\]

for every \(\gamma\in N\) and \(n\ge0\).

#### Proof

If \(\ell\in L\), then

\[
M^{J_0}\ell=0.
\]

Applying \(\mathbf1^T\) gives

\[
0
=
\mathbf1^TM^{J_0}\ell
=
k^{J_0}\mathbf1^T\ell.
\]

Hence \(\mathbf1^T\ell=0\), so \(w\) descends to \(N\).

If \(\gamma=\pi(a)\) with \(a\in\mathbb N^m\), then

\[
w(\gamma)=\mathbf1^Ta\ge0.
\]

If it is zero then \(a=0\), so \(\gamma=0\).

Finally,

\[
w(\overline M\pi(a))
=
w(\pi(Ma))
=
\mathbf1^TMa
=
k\mathbf1^Ta
=
kw(\pi(a)).
\]

Iteration gives the result. QED.

This theorem is the central T17 support-displacement result. It is exact, intrinsic to the quotient character lattice, and stronger than an asymptotic cone-norm estimate.

---

## 7. Finite-codimensional filtration

Define

\[
F_{\ge p}K[\Gamma_0]
=
\operatorname{span}_K
\{\chi^\gamma:w(\gamma)\ge p\}.
\]

Because \(w\) is additive, \(F_{\ge p}\) is a monomial ideal.

### Theorem T17.4 — finite codimension and Hilbert growth

For every \(p\),

\[
K[\Gamma_0]/F_{\ge p}
\]

is finite dimensional.

More precisely,

\[
\dim_K K[\Gamma_0]/F_{\ge p}
=
\#\{\gamma\in\Gamma_0:w(\gamma)<p\}
\]

and

\[
\#\{\gamma\in\Gamma_0:w(\gamma)<p\}
\le
\#\{a\in\mathbb N^m:|a|<p\}.
\]

Thus the required truncation space is finite.

Moreover \(K[\Gamma_0]\) is a finitely generated positively graded domain of Krull dimension

\[
d=\operatorname{rank}N.
\]

Hilbert–Serre therefore gives cumulative growth of order \(p^d\). This is the exact replacement for ordinary total-degree dimension counting in the auxiliary-polynomial construction.

---

## 8. The canonical functions live in the toric completion

For the canonical state series,

\[
F_t(x)
=
\sum_{\substack{n\ge0\\u_n=t}}
x^{c(n)},
\qquad
\mathbf1^Tc(n)=n.
\]

Restriction to \(X\) gives

\[
\boxed{
F_t|_X
=
\sum_{\substack{n\ge0\\u_n=t}}
\chi^{\pi(c(n))}.
}
\]

Every term has exact weight

\[
w(\pi(c(n)))=n.
\]

If

\[
\pi(c(n))=\pi(c(n')),
\]

then applying \(w\) gives \(n=n'\). Thus the quotient introduces no collision between different degrees.

Consequently every canonical state series, and hence

\[
S|_X=\sum_tF_t|_X,
\]

is analytic on every strict weighted boundary neighborhood below.

Because the T15 basis is chosen by Steinitz exchange with \(G_1=S|_X\) and the remaining basis elements from canonical state series, every \(G_i\) has the same analytic property.

---

## 9. Weighted toric Tate algebras

Fix a characteristic-zero nonarchimedean place \(v\). For \(0<r<1\), define

\[
\boxed{
\mathcal T_{\Gamma_0,r}
=
\left\{
f=\sum_{\gamma\in\Gamma_0}a_\gamma\chi^\gamma:
|a_\gamma|_v r^{w(\gamma)}\to0
\right\}.
}
\]

Give it the Gauss norm

\[
\boxed{
\|f\|_r
=
\max_\gamma |a_\gamma|_v r^{w(\gamma)}.
}
\]

Equivalently, this is the strict affinoid semigroup algebra on the weighted closed boundary domain determined by the finite generators \(\pi(e_i)\).

### Gauss coefficient estimate

For every coefficient,

\[
\boxed{
|a_\gamma|_v r^{w(\gamma)}
\le
\|f\|_r.
}
\]

Uniqueness follows from the linear independence of characters in the semigroup algebra.

### Restriction identity theorem

If \(0<r'<r<1\), restriction

\[
\mathcal T_{\Gamma_0,r}
\longrightarrow
\mathcal T_{\Gamma_0,r'}
\]

is injective because it preserves the unique character expansion.

Thus the T16 rigid identity theorem survives verbatim in weighted toric form.

### Exact high-weight tail estimate

Let

\[
f=\sum_{w(\gamma)\ge p}a_\gamma\chi^\gamma
\in\mathcal T_{\Gamma_0,r_0}.
\]

Since

\[
\phi^*\chi^\gamma=\chi^{\overline M\gamma},
\]

Theorem T17.3 gives

\[
w(\overline M^n\gamma)=k^nw(\gamma).
\]

Hence, for \(0<r<r_0<1\) and sufficiently large \(n\),

\[
\begin{aligned}
\|f\circ\phi^n\|_r
&\le
\|f\|_{r_0}
\max_{w(\gamma)\ge p}
r_0^{-w(\gamma)}
r^{k^nw(\gamma)}\\
&=
\boxed{
\|f\|_{r_0}
\left(\frac{r^{k^n}}{r_0}\right)^p.
}
\end{aligned}
\]

Equivalently,

\[
\|f\circ\phi^n\|_r
\le
\|f\|_{r_0}
\exp\!\left(
-p(k^n|\log r|-|\log r_0|)
\right).
\]

This is the exact toric replacement for the T16 affine estimate

\[
|\mu T^n|\gg E^n|\mu|.
\]

Here the expansion factor is exactly \(k^n\).

No dagger or overconvergent algebra is required.

---

## 10. Translation to an actual torus orbit point

The global semigroup coordinates are not used as smooth local coordinates at the deep orbit point.

Let

\[
\xi=q_J\in X
\]

be a sufficiently deep regular point. Choose any lattice basis

\[
m_1,\ldots,m_d
\]

of \(N\), only for this local step, and put

\[
y_i
=
\frac{\chi^{m_i}}{\chi^{m_i}(\xi)}-1.
\]

The torus is smooth, so \(y_1,\ldots,y_d\) are local rigid parameters at \(\xi\).

If

\[
\gamma=\sum_i a_i m_i,
\qquad
a_i\in\mathbb Z,
\]

then

\[
\boxed{
\chi^\gamma
=
\chi^\gamma(\xi)
\prod_i(1+y_i)^{a_i}.
}
\]

For \(a_i<0\),

\[
(1+y_i)^{a_i}
=
\sum_{n\ge0}\binom{a_i}{n}y_i^n
\]

converges on every strict disc \(|y_i|_v<1\). For every integer \(a_i\),

\[
\binom{a_i}{n}\in\mathbb Z,
\qquad
\left|\binom{a_i}{n}\right|_v\le1.
\]

Therefore negative Laurent exponents create no local coefficient explosion.

Combining the constant factor

\[
|\chi^{\overline M^n\gamma}(\xi)|_v
\]

with the high-weight estimate in Section 9 gives the same exponential translated-coefficient decay required in T16's replacement for Adamczewski–Faverjon Lemma 9.6.

The local algebraic relation-matrix branch is also unchanged. Since \(\xi\) lies in the smooth torus, the completed local ring is an ordinary \(d\)-variable Tate algebra in the \(y_i\), and T16's rigid Hensel/implicit-function lemma applies directly.

Thus:

- global negative exponents are avoided by \(\Gamma_0\);
- local negative lattice coordinates are harmless by convergent generalized binomial expansions;
- no artificial nonnegative basis for \(N\) is required.

---

## 11. Relative toric vanishing theorem

The stable-image proof cannot simply cite Adamczewski–Faverjon Theorem 6.4 in arbitrary Laurent coordinates. T17 replaces its zero-set role.

### 11.1 Relative independence modulo the stable kernel

Define the exact condition:

\[
\boxed{
\begin{gathered}
\mathbf1^T\mu=0,\\
v^TM^{J_0+a+rn}\mu=0
\quad\forall n\ge0
\end{gathered}
\Longrightarrow
\mu\in L
}
\tag{RI}
\]

for every \(\mu\in\mathbb Z^m\), \(a\ge0\), and \(r\ge1\).

This is the stable-image version of the T14 arithmetic-progression \(T\)-independence condition. Vectors in \(L\) are exactly the character relations already killed by passing to \(X\).

Also impose

\[
\boxed{
\overline M
\text{ has no root-of-unity eigenvalue.}
}
\tag{RE}
\]

### 11.2 Ambient analytic lift

Let

\[
g
=
\sum_{\gamma\in\Gamma_0}
a_\gamma\chi^\gamma
\]

be a nonzero toric analytic series with algebraic coefficients.

For every \(\gamma\), choose one representative

\[
a(\gamma)\in\mathbb N^m
\]

with

\[
\pi(a(\gamma))=\gamma.
\]

Because \(w\) descends,

\[
|a(\gamma)|=\mathbf1^Ta(\gamma)=w(\gamma)
\]

for every such representative.

Therefore

\[
\widetilde g(z)
=
\sum_\gamma
a_\gamma z^{a(\gamma)}
\]

is an ordinary algebraic-coefficient power series converging on a neighborhood of the ambient origin whenever \(g\) converges on the corresponding weighted toric neighborhood, and

\[
\widetilde g|_X=g.
\]

Since \(g\ne0\), \(\widetilde g\) does not vanish identically on \(X\).

### 11.3 Corvaja–Zannier hypotheses for the exact orbit

Each coordinate of \(q_j\) is

\[
\frac{2^{B_j(s)}}{3^{k^j}},
\]

so the orbit consists of \(S\)-units for the fixed finite set of places above \(2,3,\infty\).

The height satisfies

\[
\widehat h(q_j)=O(k^j).
\]

Because every valuation letter is at least one,

\[
-\log\max_s|q_{j,s}|_2
=
(\min_sB_j(s))\log2
\ge
k^j\log2.
\]

Thus the Corvaja–Zannier height-versus-contraction hypothesis holds uniformly, and it remains true on every subsequence.

### Theorem T17.5 — finite zero set on a relatively admissible stable tail

Assume (RI) and (RE).

If \(g\) is a nonzero algebraic-coefficient toric analytic function on a neighborhood of \(o\), then

\[
\boxed{
\{n\ge0:g(q_{J_0+n})=0\}
\text{ is finite.}
}
\]

#### Proof

Assume the zero set is infinite and apply Corvaja–Zannier Theorem 3 to the ambient lift \(\widetilde g\) and the corresponding infinite subsequence of \(S\)-unit points.

The theorem gives finitely many torus cosets on each of which \(\widetilde g\) vanishes and whose union contains the zero subsequence. One such coset has infinitely many orbit points.

Intersect that coset with \(X\). It cannot contain all of \(X\), because otherwise \(\widetilde g|_X=g\) would vanish identically. Hence the intersection contains an infinite orbit subset lying in a proper algebraic subset of \(X\).

By the T15 dynamical Mordell–Lang finite/AP dichotomy, a complete arithmetic-progression suborbit lies in a proper component. A proper torus coset component supplies a nonzero character

\[
\eta\in N
\]

and a constant \(c\) such that

\[
\chi^\eta(q_{J_0+a+rn})=c
\qquad(n\ge0).
\]

Compare consecutive members of that progression. With

\[
\nu=(\overline M^r-I)\eta,
\]

one obtains

\[
\chi^\nu(q_{J_0+a+rn})=1
\qquad(n\ge0).
\]

If \(\nu=0\), then \(\eta\ne0\) lies in the fixed space of \(\overline M^r\), so \(\overline M\) has a root-of-unity eigenvalue, contradicting (RE).

If \(\nu\ne0\), choose a lift \(\widetilde\nu\in\mathbb Z^m\). The exact Collatz character formula and unique factorization in \(2\) and \(3\) give

\[
\mathbf1^T\widetilde\nu=0
\]

and

\[
v^TM^{J_0+a+rn}\widetilde\nu=0
\qquad(n\ge0).
\]

By (RI), \(\widetilde\nu\in L\), hence \(\nu=0\) in \(N\), contradiction.

Therefore the zero set is finite. QED.

This theorem is stronger than the particular “negligible zero set” conclusion needed by the auxiliary-function proof.

---

## 12. Exact status of Adamczewski–Faverjon Theorem 6.4

The answer is deliberately split.

### Literal reuse on the intrinsic torus

**NO.**

An arbitrary basis of \(N\) may represent \(\overline M\) by an integral matrix with negative entries, and the attracting point is a toric boundary point rather than an affine origin. T17 does not pretend that this is automatically the published affine nonnegative-matrix setup.

### Reuse of the published vanishing input

**YES, through its source mechanism.**

Theorem T17.5 is obtained from the same Corvaja–Zannier \(S\)-unit hypersurface theorem used in the published multivariate Mahler vanishing argument, now applied to the canonical ambient lift of the toric analytic function.

Thus the zero-set information required later in the proof is recovered in a form adapted to the stable-image torus.

No nonarchimedean value relation is inserted into a complex vanishing theorem.

---

## 13. Which T16 lemmas survive unchanged

The T16 proof separates cleanly.

| T16 component | T17 status |
|---|---|
| relation ideals / localization over the function field | unchanged with \(K(x)\) replaced by \(K(X)\) |
| complements and dimension arguments | unchanged after replacing total degree by the positive \(w\)-grading |
| Hilbert-function estimates | supplied by the finitely generated positively graded semigroup algebra |
| Nullstellensatz relation matrices | unchanged on the affine toric chart / a finite generator presentation |
| algebraic cocycle propagation | unchanged |
| global degree growth | generator degree scales by \(k\) exactly |
| global height estimates | unchanged up to constants |
| Theorem 6.4 zero-set role | replaced by Theorem T17.5 |
| rigid algebraic branch | unchanged locally at a smooth torus point |
| ordinary Gauss estimate | replaced by weighted toric Gauss estimate |
| affine support displacement | replaced by \(w(\overline M^n\gamma)=k^nw(\gamma)\) |
| translated expansion | local torus binomial expansion, including negative integer exponents |
| identity theorem | injectivity of weighted restriction / ordinary local Tate restriction |
| relation-matrix coefficient recurrence | unchanged locally |
| local Liouville | unchanged |
| exact specialization algebra | unchanged |
| portability between completions | unchanged |
| appending \(1\) | unchanged |

### Laurent coefficient clearing

Every finite Laurent support in \(N\) can be shifted into \(\Gamma_0\).

Indeed, for each \(\delta_i\in N\), write

\[
\delta_i=a_i-b_i,
\qquad
a_i,b_i\in\Gamma_0.
\]

Then with

\[
\beta=\sum_i b_i\in\Gamma_0,
\]

one has

\[
\delta_i+\beta
=
a_i+\sum_{j\ne i}b_j
\in\Gamma_0.
\]

Thus a finite Laurent polynomial or denominator-cleared rational coefficient can be multiplied by one character monomial so that its support is regular on the toric boundary chart. The character is nonzero on every torus orbit point, so this operation does not create or destroy the relevant zero relation there.

---

## 14. Global degree/height bookkeeping in the semigroup presentation

Use the finite generators

\[
u_i=\chi^{\pi(e_i)}.
\]

They give a surjection from an ordinary polynomial ring to \(K[\Gamma_0]\); the kernel is the toric binomial ideal.

The isogeny acts by

\[
\phi^*u_i
=
\prod_j u_j^{M_{j,i}}.
\]

Because the \(i\)-th column sum of \(M\) is \(k\),

\[
\deg(\phi^*u_i)=k.
\]

Hence every polynomial representative of generator degree \(D\) pulls back to degree at most \(kD\), and after \(n\) iterates to at most \(k^nD\).

This is precisely the exponential degree control required in the global auxiliary estimates.

All coefficients and orbit points remain algebraic. The height estimates used in T16 are therefore unchanged up to constants after choosing this finite generator presentation.

No arbitrary Laurent matrix norm enters.

---

## 15. Toric mixed-place exact lifting theorem

### Theorem T17.6 — semigroup-admissible toric exact lifting

Let \(K\) be a number field and \(v\) a characteristic-zero nonarchimedean place.

Let \(X\) be the stable-image torus of a nonnegative \(k\)-uniform incidence matrix \(M\), with

\[
N=\mathbb Z^m/L,
\qquad
\Gamma_0=\pi(\mathbb N^m),
\qquad
\phi^*=\overline M.
\]

Let

\[
\mathbf f(x)=A(x)\mathbf f(\phi(x)),
\qquad
A(x)\in\operatorname{GL}_r(K(X)),
\]

where the \(f_i\) have algebraic coefficients and are analytic in a weighted toric neighborhood of the boundary point \(o\).

Let

\[
\alpha=q_J
\]

be a sufficiently deep algebraic point on the exact Collatz stable tail.

Assume:

1. **regular tail:** every point \(\phi^n(\alpha)\) avoids the zeros/poles needed for \(A\), \(A^{-1}\), reconstruction, and the algebraic relation-matrix denominators;
2. **relative independence:** condition (RI);
3. **no cyclotomic stable factor:** condition (RE);
4. **boundary analyticity:** the functions lie in strict weighted toric affinoids on a neighborhood of the attracting stratum;
5. **exact algebraic system:** the system and reconstruction are defined over a number field.

Then every homogeneous polynomial

\[
P(\mathbf X)\in\overline{\mathbb Q}[\mathbf X]
\]

satisfying

\[
P(\mathbf f_v(\alpha))=0
\]

has a homogeneous algebraic functional lift

\[
Q(x,\mathbf X)
\]

of the same degree such that

\[
\boxed{
Q(x,\mathbf f(x))=0
}
\]

and

\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

The statement remains valid after adjoining the constant function \(1\).

### Proof audit

The proof is the T16 mixed-place architecture with exactly four replacements:

1. the affine polynomial ring and total-degree filtration are replaced by \(K[\Gamma_0]\) and the \(w\)-filtration;
2. affine exponent displacement is replaced by Theorem T17.3;
3. the local affine translated expansion is replaced by Section 10;
4. the published affine zero-set theorem is replaced by Theorem T17.5.

All remaining steps are algebraic or local rigid steps already proved in T16.

The auxiliary-function upper bound uses Section 9 and Section 10 and has the same decisive form

\[
\exp(-c\,k^n p)
\]

after the usual parameter hierarchy.

The lower bound uses Theorem T17.5 to obtain infinitely many nonzero auxiliary values whenever required, and T16's local Liouville inequality plus the unchanged algebraic degree/height bounds.

The contradiction therefore closes with the same parameter choice.

Finally, the construction of the relation matrix and the normalized relation is algebraic. The specialization step is unchanged and gives the original \(P\) exactly, not merely some nonzero relation.

QED.

### Scope warning

The theorem is **not** claimed for an arbitrary torus isogeny with no positive invariant boundary semigroup or no \(S\)-unit/relative-admissibility input.

It is an intrinsic toric theorem for the semigroup-admissible stable-image situation above, which is exactly what the newly covered Collatz subclass supplies.

---

## 16. Exact specialization and appending \(1\)

For the Collatz anchor relation, retain

\[
G_1=S|_X.
\]

Forward transport gives at a deep regular point

\[
\ell_J\mathbf G(q_J)+3N=0.
\]

Adjoin

\[
\widetilde{\mathbf G}=(1,\mathbf G)^T
\]

and the block system

\[
\begin{pmatrix}
1&0\\
0&A_X(x)
\end{pmatrix}.
\]

Define

\[
P(X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
\]

Theorem T17.6 gives \(Q\) with

\[
\boxed{
Q(q_J,X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
}
\]

No toric coordinate change acts on the \(\mathbf X\)-variables. The input polynomial is therefore preserved literally.

Appending \(1\) introduces no new singularity, analytic condition, or boundary character.

---

## 17. Exact scalar reconstruction

T17 never assigns a sign to reduced coordinates.

The exact chain remains

\[
G_1=S|_X,
\]

and after any canonical-to-minimal reconstruction

\[
\mathbf F|_X=C_X\mathbf G.
\]

Forward transport from the original point to \(q_J\) gives a row \(\ell_J\) satisfying

\[
\boxed{
S(q)=\ell_J\mathbf G(q_J).
}
\]

The same algebraic equality holds under every embedding in which the relevant series converge.

Thus in the real completion,

\[
\ell_J\mathbf G^{(\infty)}(q_J)
=
S^{(\infty)}(q).
\]

Positivity is invoked only after this reconstruction.

---

## 18. Completion-sign obstruction for the new stable-image class

### Theorem T17.7 — positive-integer anchor exclusion

Assume the exact T15 stable-image system satisfies the hypotheses of Theorem T17.6.

Assume also that the substitution is primitive and the recursive language is genuinely aperiodic.

Then

\[
\boxed{
H\notin\mathbb Z_{>0}.
}
\]

#### Proof

Assume

\[
H=N\in\mathbb Z_{>0}.
\]

The exact 2-adic inverse identity gives

\[
S(q)+3N=0.
\]

Forward transport and exact scalar reconstruction give

\[
\ell_J\mathbf G(q_J)+3N=0
\]

at a sufficiently deep regular stable-image point.

Apply Theorem T17.6 after adjoining \(1\). This produces an algebraic functional identity whose exact specialization is

\[
3NX_0+\ell_J\mathbf X.
\]

By the portability theorem inherited from T16, embed the algebraic identity into the ordinary real completion.

T14's primitive positive-anchor argument gives uniform real subcriticality of the exact tail. Hence the canonical positive series converge there and

\[
S^{(\infty)}(q)>0.
\]

Evaluating the lifted identity and reconstructing the scalar gives

\[
S^{(\infty)}(q)+3N=0,
\]

impossible because both terms are positive.

QED.

This closes a genuinely singular-incidence recursive subclass that T16 did not cover.

---

## 19. Positive rational and negative rational boundary

T17 inherits T16's exact distinction.

### Positive integer

For a primitive genuinely aperiodic covered stable-image system,

\[
\boxed{
H\notin\mathbb Z_{>0}.
}
\]

The realized positive integer orbit itself supplies the real contraction required for the contradiction.

### Positive rational noninteger

Primitivity alone does not give the required real contraction for an abstract value

\[
H\in\mathbb Q_{>0}\setminus\mathbb Z.
\]

If, however, one independently knows uniform ordinary real subcriticality, for example

\[
\exists\varepsilon>0,\ J_1:
\qquad
\frac{B_j(s)}{k^j}
\le
\log_2 3-\varepsilon
\]

for every reachable state and all \(j\ge J_1\), then the same T17 lifting/sign proof gives

\[
\boxed{
H\notin\mathbb Q_{>0}.
}
\]

### Negative rationals

Negative rational values are not excluded. They have the sign compatible with

\[
H=-\frac13S^{(\infty)}(q)
\]

in a subcritical real completion and are not Collatz counterexamples.

---

## 20. Nonprimitive systems remain separate

The toric relation-lifting theorem is not inherently primitive.

If a nonprimitive stable-image system satisfies the semigroup, regularity, relative-independence, no-root-of-unity, and analytic hypotheses, the exact relation lift still applies.

What T17 does **not** supply is the missing ordinary real-contraction theorem across every reachable nonprimitive state.

Therefore:

\[
\boxed{
\text{toric lifting success}
\not\Longrightarrow
\text{positive-anchor exclusion}
}
\]

for a nonprimitive system unless ordinary real convergence/positivity is established independently.

This is the same split identified in T14/T16 and is not erased by toric lifting.

---

## 21. What remains open inside singular incidence

T17 does not close the complete T15 singular-incidence class.

Three exact mechanisms remain.

### 21.1 Root-of-unity factors

If \(\overline M\) has a root-of-unity eigenvalue, a power can fix a nonzero rational character direction. The orbit can then lie on a constant-character coset along an arithmetic progression.

This invalidates the relative vanishing theorem on \(X\) itself.

### 21.2 Relative-independence failure

A vector outside \(L\) may satisfy an arithmetic-progression character relation. Passing to the stable image removed the relations forced by singular incidence, but it need not remove every relation carried by the specific Collatz point.

### 21.3 General denominator / invariant-subvariety trapping

T15 proves that an infinite bad-locus hit creates an invariant arithmetic-progression orbit closure. Outside the relatively admissible class, T17 does not classify every such invariant subvariety or prove a scalar-preserving reduction to it.

Accordingly the complete stable-image class remains open.

---

## 22. Consequence back to T2

For every newly covered stable-image recursive family, T17 excludes a genuinely aperiodic positive integer anchor.

Under the exact T2 bounded-alphabet hypotheses, bounded canonical representatives would produce such an ordinary positive anchor.

Therefore

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for the new toric stable-image subclass.

This is a recursive-language obstruction, not an explicit Collatz counterexample.

---

## 23. Periodicity-Conjecture boundary after T17

| Recursive class | Status after T17 |
|---|---|
| Finite abelian translations | **Closed by T11.** |
| Finite nonabelian translations | **Closed as positive-anchor routes by T12.** |
| Balanced one-variable finite-kernel systems | **Closed as positive-anchor routes by T13.** |
| Primitive dominant multivariate \(T\in\mathcal M\), exact \(T\)-independent systems | **Closed as positive-anchor routes by T16.** |
| Stable-image torus systems satisfying regular-tail + (RI) + (RE), primitive for the sign step | **NEWLY CLOSED by T17 as positive-anchor routes.** |
| Stable-image torus systems with independently known real subcriticality | T17 also excludes positive rational inverse values under the same lifting hypotheses. |
| Nonprimitive dominant systems | **Relation lifting may apply; positive-anchor conclusion remains open without independent real contraction.** |
| Remaining singular-incidence systems | **OPEN**: cyclotomic factors, relative-dependence, or invariant bad-locus reductions remain. |
| General multivariate/unbalanced finite-state systems | **OPEN outside the covered dominant and toric subclasses.** |
| General morphic/substitutive recursive languages | **OPEN outside proved subclasses.** |
| Arbitrary automatic/morphic parity languages | **OPEN.** |
| Full Lagarias Periodicity Conjecture | **OPEN.** |

No claim is made that the general Periodicity Conjecture is solved.

---

## 24. Cobham, López–Stoll, and Brechler

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

**Applicable in T17: NO.**

### López–Stoll

The completion-transfer route audited in T3 remains non-load-bearing.

T17 uses an algebraic functional identity with exact specialization, not equality of raw real and 2-adic limits.

**Load-bearing in T17: NO.**

### Brechler

A fresh status check on 2026-10-03 still found Enzo Brechler's

> *Transcendence of multivariate Mahler functions and algebraic relations between their values*

as arXiv:2607.24877v1, submitted in July 2026. No peer-reviewed publication was located in the checked sources.

**Load-bearing in T17: NO.**

T17 does not need the preprint.

---

## 25. External theorem ledger

1. **Pietro Corvaja and Umberto Zannier**, “S-unit points on analytic hypersurfaces,” *Annales scientifiques de l'École Normale Supérieure* 38 (2005), 76–92, DOI: 10.1016/j.ansens.2004.09.003. T17 uses Theorem 3: an algebraic-coefficient analytic power series vanishing on an \(S\)-unit sequence tending to the origin under the stated height bound traps that sequence in finitely many torus cosets on which the function vanishes.
2. **Boris Adamczewski and Colin Faverjon**, “Mahler's method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), 455–533. T17 inherits the T16 proof architecture but does not literally apply Theorem 6.4 to an arbitrary Laurent stable-torus matrix.
3. **Bell–Ghioca–Tucker dynamical Mordell–Lang**, as already audited and used in T14/T15. T17 reuses the inherited finite/AP trapping result only after Corvaja–Zannier produces a proper algebraic torus-coset intersection.
4. **Enzo Brechler**, arXiv:2607.24877v1 (2026). Status checked; still non-load-bearing.

---

## 26. Compute and promotion decision

No theorem-derived scientific workload is established.

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

The new obstruction is theorem-derived and removes a recursive subclass. It does not generate an explicit candidate population.

---

## 27. Deliverable checklist

| Required item | T17 result |
|---|---|
| exact T16 theorem state inherited | Section 2 |
| exact T15 stable-image torus | Section 3 |
| exact toric boundary chart | \(U_0=\operatorname{Spec}K[\pi(\mathbb N^m)]\) |
| exact attracting boundary stratum | torus-fixed closed orbit \(o\) |
| exact regular-character semigroup | \(\Gamma_0=\pi(\mathbb N^m)\) |
| exact semigroup/affinoid ring | \(K[\Gamma_0]\), \(\mathcal T_{\Gamma_0,r}\) |
| saturated alternative | normalization \(K[C\cap N]\), not required |
| exact weight | \(w(\pi(a))=\mathbf1^Ta\) |
| filtration finite-codimensional | **YES** |
| Hilbert growth suitable for auxiliary dimension count | **YES**, positive graded affine semigroup algebra |
| pullback growth/support displacement | \(w(\overline M^n\gamma)=k^nw(\gamma)\) |
| exact nonarchimedean norm | weighted Gauss norm |
| coefficient estimate | **PROVED**, Section 9 |
| exponential high-weight tail estimate | **PROVED**, Section 9 |
| toric translated expansion | **PROVED**, Section 10 |
| negative Laurent local exponents | harmless on \(|y_i|_v<1\) by integer binomial expansion |
| rigid identity theorem | survives by injective restriction |
| rigid Hensel branch | survives at smooth torus point |
| local Liouville | inherited unchanged from T16 |
| every required toric local lemma proved | **YES for the stated semigroup-admissible theorem** |
| Adamczewski–Faverjon Theorem 6.4 used literally | **NO** |
| required zero-set information recovered | **YES**, Theorem T17.5 via Corvaja–Zannier + T15 DML |
| relation ideals / Nullstellensatz matrices | survive over \(K(X)\) / toric generator presentation |
| global degree/height estimates | survive; generator degree scales by \(k\) |
| exact specialization preserved | **YES** |
| appending \(1\) harmless | **YES** |
| toric mixed-place lifting theorem obtained | **YES**, Theorem T17.6 under explicit hypotheses |
| all T15 singular-incidence systems covered | **NO** |
| newly covered subclass | regular stable tail + (RI) + (RE), with canonical Collatz semigroup |
| scalar reconstruction exact | **YES** |
| primitive completion-sign contradiction applies | **YES** |
| positive integer anchors excluded | **YES for the newly covered subclass** |
| positive rational noninteger values excluded | only with independently known ordinary real subcriticality |
| negative rational exceptions survive | **YES** |
| new bounded-\(R_m\) periodicity class | **YES** |
| nonprimitive real-contraction gap closed | **NO** |
| Cobham applies | **NO** |
| López–Stoll load-bearing | **NO** |
| Brechler publication status changed | **NO publication located; still treated as preprint** |
| explicit anchored aperiodic word exists | **NO** |
| candidate or unbounded orbit found | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |

---

## 28. Exact next theorem-sized obligation

The intrinsic toric support-growth obstruction is no longer the main gap.

The next theorem-sized obligation is:

> **CDM4-T18 — stable-orbit-closure / cyclotomic-factor reduction and regular-tail completion.**
>
> Starting from the T15 stable-image torus, classify the exact algebraic orbit closure under powers of \(\phi\) when (RI) or (RE) fails. Prove, if possible, that after passing to an arithmetic-progression tail and to the minimal invariant torus/coset containing it, the scalar-preserving Mahler system descends to a new toric boundary chart satisfying the T17 relative-admissibility hypotheses. In parallel, determine whether every denominator bad locus either becomes finite on that minimal orbit closure or forces a further exact scalar-preserving reduction.
>
> The target is to remove the residual root-of-unity/character-coset/general-invariant-subvariety obstruction without choosing an artificial Laurent basis.
>
> The nonprimitive ordinary real-contraction problem remains independent and must not be silently folded into this algebraic reduction.

No scientific compute is authorized.

---

## 29. Permanent lesson

The T15 singular-image obstruction was not caused by Laurent monomials themselves.

The ambient positive monoid survives singular reduction in quotient form:

\[
\Gamma_0=\pi(\mathbb N^m).
\]

Uniform substitution supplies an exact grading that also survives:

\[
w(\pi(a))=\mathbf1^Ta.
\]

Because the incidence columns all sum to \(k\),

\[
w\circ\overline M=kw.
\]

That identity simultaneously identifies the correct toric boundary, proves finite-dimensional truncation, and supplies the exponential support displacement needed by the nonarchimedean auxiliary-function upper bound.

Laurent behavior appears only when one insists on a free lattice basis. It is not intrinsic to the analytic boundary chart.

The remaining singular-incidence difficulty is now arithmetic/algebraic: the exact orbit may live in a smaller periodic torus coset or meet invariant bad loci along arithmetic progressions. T17 closes the relatively admissible regular subclass and isolates orbit-closure reduction, not support growth, as the next obstruction.

C — new recursive-language obstruction found