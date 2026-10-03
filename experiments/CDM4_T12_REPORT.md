# CDM4-T12 — Finite nonabelian translation / higher-dimensional representation audit

**Date:** 2026-10-03  
**Authoritative input commit:** 36766ec3a719234872db2d2980a970424fd3ba78  
**Session type:** theorem / representation-theoretic / Mahler-module audit only  
**Scientific Collatz starts generated:** **0**  
**Scientific trajectories executed:** **0**  
**Substitution enumeration:** **NONE**  
**Finite residue / carry / exponent-code optimization:** **NONE**  
**CPU / GPU / cloud / distributed scientific work:** **NONE**  
**Explicit anchored aperiodic word found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## 1. Executive result

T12 closes the balanced finite-group translation branch as an aperiodic **positive-integer anchoring route**, including the genuinely nonabelian case.

The strongest requested statement

\[
\text{genuinely nonperiodic covered nonabelian translation family}
\Longrightarrow H\notin\mathbb Q
\]

is **not** proved in full. Higher-dimensional rational Mahler submodules and rational gauge equivalences remain incompletely classified.

Instead T12 obtains a different exact obstruction that is sufficient for the project objective.

The key steps are:

1. The exact reachable/output reduction is generally **not a quotient group**. If
   \[
   E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle
   \]
   is the finite digit-translation group and \(C:E\to\mathbb Z_{>0}\) is the exact Collatz block-constant profile, then
   \[
   K_C=\{h\in E:C(xh)=C(x)\ \forall x\in E\}
   \]
   is a subgroup and the true deterministic kernel state space is the transitive coset \(E\)-set
   \[
   X=E/K_C.
   \]
   Normality of \(K_C\) is neither assumed nor needed. The exact number of distinct \(k\)-kernel sequences is
   \[
   m=[E:K_C].
   \]

2. Over a splitting number field \(K\), the reduced permutation module is
   \[
   K[X]\cong \operatorname{Ind}_{K_C}^{E}\mathbf 1
   \cong
   \bigoplus_{\rho\in\operatorname{Irr}_K(E)}
   V_\rho^{\oplus m_\rho},
   \qquad
   m_\rho=\dim_K V_\rho^{K_C}.
   \]
   The irreducible Mahler block is, up to the explicit dual/inverse convention,
   \[
   M_\rho(z)=\sum_{r=0}^{k-1}z^r\rho(\varepsilon_r).
   \]

3. Every block is automatically regular on the complete 2-adic Mahler orbit. Because prolongability gives \(\varepsilon_0=e\),
   \[
   M_\rho(0)=I_{d_\rho}.
   \]
   At a place \(v\mid2\), every finite-group representation admits an \(E\)-stable integral lattice. Hence
   \[
   M_\rho(W^{k^j})\equiv I_{d_\rho}\pmod{\mathfrak m_v}
   \]
   for all \(j\ge0\), so
   \[
   \det M_\rho(W^{k^j})\in\mathcal O_v^\times.
   \]
   No finite singularity check is required.

4. The higher-dimensional analogue of scalar rational multiples is a rational semilinear module morphism. In standard column orientation \(A_\rho(z)=M_\rho(z)^T\), an invertible gauge between equal-rank blocks satisfies
   \[
   A_\rho(z)R(z^k)=R(z)A_\sigma(z).
   \]
   A rational invariant line satisfies the rectangular version with a \(1\times1\) target. Constant proper invariant subspaces are impossible inside a genuinely irreducible \(d_\rho>1\) block, but \(z\)-dependent rational submodules are not excluded by Schur's lemma or Burnside's theorem. Determinant coboundaries are necessary for invertible gauge equivalence but are not sufficient.

5. Crucially, the project does **not need** that unresolved full module classification to exclude a positive Collatz anchor. The reduced permutation Mahler system itself is regular, so Adamczewski–Bell–Smertnig Theorem 4.3 applies directly after adjoining the constant function \(1\).

   If a genuinely nonperiodic balanced translation word were realized by a positive integer \(N\), the inherited T3 height theorem forces
   \[
   \frac Bk<\log_2 3,
   \]
   hence
   \[
   0<W=\frac{2^B}{3^k}<1
   \]
   in the real absolute value.

   T5 gives the exact 2-adic identity
   \[
   H=-\frac{F_{K_C}(W)}{3^k}.
   \]
   If \(H=N>0\), then at the 2-adic regular point \(W\)
   \[
   F_{K_C}(W)+3^kN=0.
   \]
   Theorem 4.3 lifts this degree-one homogeneous value relation to a functional relation whose specialization at \(z=W\) is **exactly** the displayed linear form.

   The same algebraic formal identity may then be embedded into the complex numbers. Since \(0<W<1\), every state series converges absolutely there, and every coefficient of \(F_{K_C}\) is a positive exact Collatz block constant. Therefore
   \[
   F_{K_C}^{(\infty)}(W)>0,
   \]
   whereas the specialized lifted relation would require
   \[
   F_{K_C}^{(\infty)}(W)=-3^kN<0.
   \]
   Contradiction.

This is not the invalid López–Stoll/T3 cross-completion inference. The two completion limits are not identified merely because they use the same rational partial sums. The bridge is an algebraic **functional identity** supplied by the completion-correct Mahler relation-lifting theorem, together with its exact specialization property.

Therefore no genuinely nonperiodic balanced finite-group translation family, abelian or nonabelian, can have an ordinary positive-integer inverse anchor.

Combining with T2 gives the new class theorem

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for the complete balanced finite-group translation class covered here.

A rational exceptional inverse value is not completely excluded in the nonabelian matrix case. In the subcritical case \(0<W<1\), any such rational value is forced to be **negative** in the ordinary real embedding. Since the inverse series always lies in \(\mathbb Z_2\), a surviving rational exception lies in

\[
\mathbb Q\cap\mathbb Z_2
\]

and is negative; T12 does not decide whether it is a negative ordinary integer. No value in \(\mathbb Z_{>0}\) survives.

No scientific compute follows.

---

## 2. T11 state inherited without reopening it

T12 uses the following T11/T10 facts as closed infrastructure.

- Adamczewski–Bell–Smertnig, JEMS 25 (2023), Theorems 4.2–4.3, work at arbitrary places of number fields.
- At a regular algebraic point \(\alpha\) with \(0<|\alpha|_v<1\), transcendence degree is preserved and homogeneous algebraic value relations lift to homogeneous functional relations.
- For one-dimensional first-order components, rational-function multiples are exactly pairwise rational Mahler coboundaries.
- The full-length divisor theorem classifies scalar pairwise coboundaries.
- After rational-character removal, every genuine finite-abelian character class is a singleton.
- The finite-abelian translation branch is therefore already closed by the stronger T11 conclusion \(H\notin\mathbb Q\).
- T5 injectivity of \(w\mapsto C_w\) closes the language/output bridge.
- T2 supplies the anchoring implication: bounded canonical representatives imply an ordinary positive anchor, and an aperiodic positive anchor would give an unbounded orbit.
- Cobham and López–Stoll remain non-load-bearing.

T12 does not redo any scalar Walsh collision, grouped-weight, or generic p-adic lifting search.

---

## 3. Exact finite nonabelian translation system

### 3.1 Translation convention

Let \(E\) be the finite subgroup generated by digit translations

\[
\varepsilon_0,\ldots,\varepsilon_{k-1},
\qquad
E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle.
\]

Use the right-translation substitution convention

\[
\sigma(g)_r=g\varepsilon_r.
\]

For a fixed point based at the identity,

\[
u_{kn+r}=u_n\varepsilon_r.
\]

Prolongability at \(u_0=e\) forces

\[
\varepsilon_0=e.
\]

Let \(C_g\in\mathbb Z_{>0}\) denote the exact Collatz affine block constant attached to state \(g\). Balance means that every state block has the same total valuation \(B\).

Define, for \(g\in E\),

\[
F_g(z)=\sum_{n\ge0}C_{u_ng}z^n.
\tag{1}
\]

Then

\[
F_g(z)
=
\sum_{r=0}^{k-1}z^rF_{\varepsilon_rg}(z^k).
\tag{2}
\]

The desired root series is \(F_e(z)\).

### 3.2 Reachability is the whole generated group

Every positive word in the digits \(\varepsilon_r\) occurs as a base-\(k\) digit word.

Conversely, because \(E\) is finite, every inverse of a generator is a positive power of that generator. Hence the semigroup generated by the digits is the whole group \(E\).

Therefore

\[
\{u_n:n\ge0\}=E.
\tag{3}
\]

This fact is load-bearing in the exact output reduction.

---

## 4. Exact reachable/output reduction: a coset \(E\)-set, not generally a quotient group

Define the right stabilizer of the complete output profile

\[
K_C
=
\{h\in E:C_{xh}=C_x\ \text{for every }x\in E\}.
\tag{4}
\]

This is a subgroup of \(E\).

### Theorem T12.1 — exact output equivalence

For \(g,h\in E\),

\[
F_g(z)=F_h(z)
\quad\Longleftrightarrow\quad
g^{-1}h\in K_C.
\tag{5}
\]

#### Proof

If \(g^{-1}h=t\in K_C\), then for every \(n\),

\[
C_{u_nh}=C_{u_ngt}=C_{u_ng},
\]

so the two coefficient sequences agree.

Conversely, suppose \(F_g=F_h\). Then

\[
C_{u_ng}=C_{u_nh}
\]

for every \(n\). By (3), \(u_ng\) ranges over all \(x\in E\), so

\[
C_x=C_{xg^{-1}h}
\]

for every \(x\). Thus \(g^{-1}h\in K_C\). QED.

Hence the exact reduced state space is

\[
\boxed{X=E/K_C}
\tag{6}
\]

as a set of right cosets.

Left multiplication by every digit preserves right cosets:

\[
gK_C\longmapsto \varepsilon_rgK_C.
\tag{7}
\]

Therefore \(X\) is a transitive \(E\)-set.

Nothing in the proof requires \(K_C\triangleleft E\). Unless normality is separately proved, \(E/K_C\) is **not** called a quotient group.

### Exact true \(k\)-kernel dimension

The exact number of distinct reachable/output kernel sequences is

\[
\boxed{m=|X|=[E:K_C].}
\tag{8}
\]

This is the nonabelian analogue of the T8 quotient reduction.

There is a second, different dimension: the dimension of the constant-linear span of the kernel sequences. T12 records it in Section 6. It must not be confused with the kernel cardinality \(m\).

---

## 5. Reduced permutation Mahler matrix

Index the reduced vector by \(X\):

\[
\mathbf F_X(z)=(F_x(z))_{x\in X}.
\]

Equation (2) becomes

\[
\mathbf F_X(z)=M_X(z)\mathbf F_X(z^k),
\tag{9}
\]

where each digit acts by a permutation of \(X\).

With the column convention in which the standard permutation representation satisfies

\[
P_X(a)e_x=e_{ax},
\]

the component recurrence (2) is represented by \(P_X(\varepsilon_r^{-1})\). Thus

\[
M_X(z)=
\sum_{r=0}^{k-1}z^rP_X(\varepsilon_r^{-1}).
\tag{10}
\]

If instead one uses the dual row convention, the inverses disappear. This is the precise contragredient convention hidden by the schematic formula

\[
\sum_r z^r\rho_{\rm reg}(\varepsilon_r).
\]

Because \(\varepsilon_0=e\),

\[
M_X(0)=I_m.
\tag{11}
\]

Consequently

\[
\det M_X(z)\not\equiv0,
\qquad
\operatorname{rank}_{K(z)}M_X(z)=m.
\tag{12}
\]

---

## 6. Exact irreducible representation decomposition

Let \(K\) be a characteristic-zero splitting number field for \(E\); one may take a cyclotomic splitting field containing the values of all irreducible characters of \(E\).

The permutation module is

\[
K[X]\cong\operatorname{Ind}_{K_C}^{E}\mathbf1.
\tag{13}
\]

By Frobenius reciprocity,

\[
K[X]
\cong
\bigoplus_{\rho\in\operatorname{Irr}_K(E)}
V_\rho^{\oplus m_\rho},
\qquad
m_\rho
=
\dim_K V_\rho^{K_C}.
\tag{14}
\]

Writing \(d_\rho=\dim_KV_\rho\),

\[
\sum_\rho d_\rho m_\rho=m.
\tag{15}
\]

Under this decomposition the reduced matrix is similar over \(K\) to

\[
\bigoplus_\rho
\left(
A_\rho(z)^{\oplus m_\rho}
\right),
\tag{16}
\]

where, in the column convention of (10),

\[
A_\rho(z)
=
\sum_{r=0}^{k-1}z^r\rho(\varepsilon_r^{-1}).
\tag{17}
\]

Relabeling \(\rho\) by the contragredient gives the equivalent requested form

\[
\boxed{
M_\rho(z)=
\sum_{r=0}^{k-1}z^r\rho(\varepsilon_r).
}
\tag{18}
\]

For every irreducible constituent:

- **coefficient field:** \(K\);
- **block dimension:** \(d_\rho\);
- **multiplicity:** \(m_\rho=\dim V_\rho^{K_C}\);
- **rank:** \(d_\rho\) over \(K(z)\);
- **determinant:**
  \[
  \delta_\rho(z)=\det M_\rho(z),
  \qquad
  \delta_\rho(0)=1;
  \tag{19}
  \]
- **degree bound:**
  \[
  \deg\delta_\rho\le d_\rho(k-1);
  \tag{20}
  \]
- **full determinant:**
  \[
  \det M_X(z)
  =
  \prod_\rho
  \delta_\rho(z)^{m_\rho},
  \tag{21}
  \]
  up to the inverse/contragredient relabeling.

Equation (20), rather than the scalar degree \(k-1\), is why T11's divisor budget cannot simply be copied to matrix determinants.

---

## 7. Exact Collatz output support and Peter–Weyl inversion

It is useful to retain the full group index temporarily.

Define the matrix Fourier transform

\[
\widehat{\mathbf F}_\rho(z)
=
\sum_{g\in E}F_g(z)\rho(g^{-1}).
\tag{22}
\]

From (2),

\[
\boxed{
\widehat{\mathbf F}_\rho(z)
=
\widehat{\mathbf F}_\rho(z^k)M_\rho(z).
}
\tag{23}
\]

The initial matrix is

\[
\widehat C_\rho
=
\widehat{\mathbf F}_\rho(0)
=
\sum_{g\in E}C_g\rho(g^{-1}).
\tag{24}
\]

Because \(C_g\) is right \(K_C\)-invariant, \(\widehat C_\rho\) has image in the \(K_C\)-fixed subspace in the corresponding convention. In particular,

\[
\widehat C_\rho=0
\]

whenever \(m_\rho=0\).

Fourier inversion gives the exact prescribed Collatz coordinate

\[
\boxed{
F_e(z)
=
\frac1{|E|}
\sum_{\rho\in\operatorname{Irr}_K(E)}
d_\rho
\operatorname{Tr}
\left(
\widehat{\mathbf F}_\rho(z)
\right).
}
\tag{25}
\]

Thus the matrix/vector weight of a block is not an arbitrary scalar: it is the exact trace functional applied to the block solution initialized by \(\widehat C_\rho\).

### Theorem T12.2 — exact zero-output criterion

An irreducible block contributes identically zero to the prescribed scalar coordinate if and only if

\[
\widehat C_\rho=0.
\tag{26}
\]

#### Proof

The coefficient of \(z^n\) in (22) is

\[
\widehat C_\rho\,\rho(u_n).
\tag{27}
\]

Therefore the \(\rho\)-contribution to the coefficient of \(F_e\) is proportional to

\[
\operatorname{Tr}\bigl(\widehat C_\rho\rho(u_n)\bigr).
\tag{28}
\]

If \(\widehat C_\rho=0\), the contribution is zero.

Conversely, if (28) vanishes for every \(n\), then by reachability it vanishes for every \(g\in E\). The matrices \(\rho(g)\) span \(\operatorname{End}(V_\rho)\) over a splitting field by irreducibility/Burnside, and the trace pairing on \(\operatorname{End}(V_\rho)\) is nondegenerate. Hence \(\widehat C_\rho=0\). QED.

The exact supported set is therefore

\[
\boxed{
\mathcal S_C
=
\{\rho\in\operatorname{Irr}_K(E):
\widehat C_\rho\ne0\}.
}
\tag{29}
\]

Every zero-output block is removed by (26).

### Constant-linear representation dimension

The exact \(k\)-kernel cardinality remains \(m=[E:K_C]\).

The cyclic constant-linear submodule generated by the output profile has dimension

\[
\boxed{
D_{\rm lin}
=
\sum_{\rho\in\mathcal S_C}
d_\rho\,\operatorname{rank}(\widehat C_\rho)
\le m.
}
\tag{30}
\]

This is the minimal constant-linear representation size of the translation orbit of the exact output profile. It is not the same object as the number \(m\) of distinct kernel sequences.

---

## 8. Complete Mahler-orbit regularity

The regularity problem is completely soluble for finite-group translations.

Let \(v\) be any place of \(K\) above \(2\), with valuation ring \(\mathcal O_v\) and maximal ideal \(\mathfrak m_v\).

### Lemma T12.3 — integral finite-group lattice

Every finite-dimensional representation \(V_\rho\) of the finite group \(E\) admits an \(E\)-stable \(\mathcal O_v\)-lattice.

Indeed, start with any full lattice \(L_0\) and put

\[
L=\sum_{g\in E}\rho(g)L_0.
\tag{31}
\]

The sum is finite, full, and \(E\)-stable. Because each \(g\) has an inverse in \(E\), every \(\rho(g)\) acts as an \(\mathcal O_v\)-linear automorphism of \(L\).

Choose a basis of \(L\). Then

\[
\rho(g)\in\operatorname{GL}_{d_\rho}(\mathcal O_v)
\]

for every \(g\in E\).

### Theorem T12.4 — all-depth block regularity

At the exact Collatz point

\[
W=\frac{2^B}{3^k},
\qquad
0<|W|_v<1,
\tag{32}
\]

one has, for every \(j\ge0\),

\[
M_\rho(W^{k^j})
=
I+
\sum_{r=1}^{k-1}
W^{rk^j}\rho(\varepsilon_r)
\equiv I
\pmod{\mathfrak m_v}.
\tag{33}
\]

Therefore

\[
\boxed{
\det M_\rho(W^{k^j})\in\mathcal O_v^\times
}
\tag{34}
\]

for every irreducible \(\rho\) and every \(j\ge0\).

Thus every supported irreducible block, and the full reduced permutation system, is regular at the complete Mahler orbit.

No exceptional singular subclass remains inside this finite-group translation setup.

---

## 9. Rational invariant subspaces

For \(d_\rho>1\), a constant common invariant line would be invariant under all coefficient matrices

\[
\rho(\varepsilon_r).
\]

Because the digits generate \(E\), it would be an \(E\)-invariant line. Irreducibility therefore gives:

\[
\boxed{
d_\rho>1
\Longrightarrow
\text{no nonzero proper constant common invariant subspace.}
}
\tag{35}
\]

The same statement excludes a constant one-dimensional quotient and a common eigendirection of every \(\rho(\varepsilon_r)\).

If a supported direction factors through a genuine one-dimensional character of \(E\), it is not a new T12 case; it belongs to the T11 scalar infrastructure.

However, (35) does **not** exclude a \(z\)-dependent rational Mahler submodule.

A rational invariant line in standard column orientation is a nonzero vector

\[
v(z)\in K(z)^{d_\rho}
\]

and scalar \(a(z)\in K(z)^\times\) satisfying

\[
A_\rho(z)v(z^k)=a(z)v(z).
\tag{36}
\]

Such an object need not specialize to a common eigenline of the constant matrices.

Schur's lemma and Burnside's theorem therefore close only the constant-subspace question, not the rational semilinear one.

---

## 10. Correct higher-dimensional relation object

Write the standard column system as

\[
\mathbf y_\rho(z)=A_\rho(z)\mathbf y_\rho(z^k),
\qquad
A_\rho(z)=M_\rho(z)^T
\tag{37}
\]

after the explicit transpose/dual convention.

### Rational module morphisms

A rational morphism from the \(\sigma\)-block to the \(\rho\)-block is a matrix

\[
R(z)\in\operatorname{Mat}_{d_\rho\times d_\sigma}(K(z))
\]

satisfying

\[
\boxed{
A_\rho(z)R(z^k)=R(z)A_\sigma(z).
}
\tag{38}
\]

The space of such \(R\) is the precise rational Mahler-module Hom-space.

When \(d_\rho=d_\sigma\) and \(R\in\operatorname{GL}_{d_\rho}(K(z))\), (38) is rational gauge equivalence. Invertible gauge equivalence is an equivalence relation on equal-rank Mahler modules.

Rectangular morphisms are not an equivalence relation and must not be treated as one.

### Determinant necessary condition

For an invertible gauge,

\[
\det A_\rho(z)\det R(z^k)
=
\det R(z)\det A_\sigma(z),
\]

so

\[
\boxed{
\frac{\det A_\rho(z)}{\det A_\sigma(z)}
=
\frac{\det R(z)}{\det R(z^k)}.
}
\tag{39}
\]

Thus determinant coboundary is necessary.

It is not sufficient. The determinant forgets the noncommutative matrix cocycle and cannot certify a block isomorphism or coordinate relation.

Moreover, the degree bound is now \(d_\rho(k-1)\), so the scalar T11 \(L^1\)-degree argument no longer collapses (39) to a single zero and pole.

### Coordinate relations

The exact user-facing question is narrower than module isomorphism:

\[
\text{when can the selected scalar outputs from two blocks be linearly related over }\overline{\mathbb Q}(z)?
\]

T12 does not prove that every such coordinate relation must arise from an invertible gauge. For noncyclic initial vectors, a relation can live in a proper supported cyclic submodule.

The exact unresolved object is therefore the rational syzygy module of the supported cyclic block solutions, with the Hom-spaces (38) providing the natural module-theoretic structure.

This is the surviving higher-dimensional classification problem.

---

## 11. Why the unresolved module problem is not load-bearing for positive anchoring

T12 now uses the full regular reduced system rather than attempting to prove every supported block independent.

Let

\[
\widetilde{\mathbf F}(z)
=
\begin{pmatrix}
1\\
\mathbf F_X(z)
\end{pmatrix}.
\]

It satisfies

\[
\widetilde{\mathbf F}(z)
=
\begin{pmatrix}
1&0\\
0&M_X(z)
\end{pmatrix}
\widetilde{\mathbf F}(z^k).
\tag{40}
\]

By Section 8, \(W\) is a regular point at every place above \(2\).

The exact inverse value is

\[
\boxed{
H=-\frac{F_{K_C}(W)}{3^k}\in\mathbb Z_2.
}
\tag{41}
\]

Here \(K_C\) denotes the base coset containing \(e\).

---

## 12. Subcriticality is forced by a hypothetical aperiodic positive anchor

Let \(A_m\) be the accumulated accelerated valuation sum.

Because every length-\(k\) substituted state block has the same total valuation \(B\), the substitution-level prefixes satisfy

\[
\frac{A_{k^j}}{k^j}=\frac Bk
\tag{42}
\]

for every positive substitution level.

If a positive odd integer \(N\) realized a genuinely aperiodic valuation word, T3's proved distinct-orbit height bound gives

\[
\limsup_{m\to\infty}\frac{A_m}{m}
\le
\lambda,
\qquad
\lambda=\log_2 3.
\tag{43}
\]

Combining (42) and (43),

\[
\frac Bk\le\log_2 3.
\tag{44}
\]

Equality is impossible: it would imply

\[
2^B=3^k.
\]

Hence every hypothetical aperiodic positive anchor in the balanced class necessarily has

\[
\boxed{
\frac Bk<\log_2 3
}
\tag{45}
\]

and therefore

\[
\boxed{
0<W=\frac{2^B}{3^k}<1
}
\tag{46}
\]

in the ordinary real absolute value.

The branch \(W>1\) was already killed by T3's height theorem for positive aperiodic anchors. There is no equality branch.

---

## 13. Theorem T12.5 — regular lifting / real-sign anchoring obstruction

### Statement

Let a balanced finite-group translation construction satisfy the exact setup above, including \(\varepsilon_0=e\). If its valuation output is not eventually periodic, then its 2-adic inverse value

\[
H=-F_{K_C}(W)/3^k
\]

cannot be an ordinary positive integer.

More strongly, in the subcritical case \(0<W<1\), if \(H\in\mathbb Q\), then its ordinary rational value is negative.

### Proof

Assume first that \(H=N\in\mathbb Z_{>0}\).

By Section 12, \(0<W<1\).

In the 2-adic completion, (41) gives

\[
F_{K_C}(W)+3^kN=0.
\tag{47}
\]

For the augmented vector (40), define the homogeneous linear polynomial

\[
P(X_0,X_x:x\in X)
=
X_{K_C}+3^kN X_0.
\tag{48}
\]

Then

\[
P(\widetilde{\mathbf F}(W))=0.
\]

Adamczewski–Bell–Smertnig Theorem 4.3 applies because:

- all functions have algebraic coefficients;
- the common Mahler base is \(k\);
- \(W\) is algebraic;
- \(0<|W|_v<1\);
- the full augmented system is regular at every Mahler iterate.

Therefore there is a polynomial

\[
Q(z,\mathbf X)
\]

homogeneous of degree one in \(\mathbf X\) such that

\[
Q(z,\widetilde{\mathbf F}(z))=0
\tag{49}
\]

as a formal functional identity and

\[
\boxed{
Q(W,\mathbf X)=P(\mathbf X).
}
\tag{50}
\]

The finitely many algebraic coefficients of \(Q\) lie in a number field. Embed that number field into \(\mathbb C\). Equation (49), being an algebraic formal identity, remains an identity after this embedding.

Every \(F_x(z)\) has coefficients in the finite positive set \(\{C_g:g\in E\}\). Thus each \(F_x\) converges absolutely for \(|z|<1\).

Using (46), evaluate (49) at the ordinary real number \(z=W\). By the exact specialization (50),

\[
F_{K_C}^{(\infty)}(W)+3^kN=0.
\tag{51}
\]

But

\[
F_{K_C}^{(\infty)}(W)
=
\sum_{n\ge0}C_{u_n}W^n
>0,
\tag{52}
\]

and \(3^kN>0\). Equation (51) is impossible.

Therefore \(H\notin\mathbb Z_{>0}\).

The same proof applies to any rational \(h=H\) when \(0<W<1\): the lifted relation is

\[
F_{K_C}(W)+3^kh=0,
\]

while (52) forces

\[
h=-F_{K_C}^{(\infty)}(W)/3^k<0.
\]

QED.

---

## 14. Why T12.5 is not an illicit cross-completion transfer

T3 rejected the inference

\[
\text{same rational approximants converge in }\mathbb Q_2\text{ and }\mathbb R
\Longrightarrow
\text{the two limits have the same rationality/value}.
\]

T12.5 does not make that inference.

The logic is instead:

1. a p-adic algebraic value relation is assumed;
2. a theorem valid at the p-adic place produces an algebraic functional identity;
3. Theorem 4.3 guarantees that the functional identity specializes at \(W\) to the **same polynomial relation**;
4. a formal algebraic identity is valid under every embedding of its coefficient number field;
5. only then is the identity evaluated in the real completion, where the series converges.

The completion bridge is therefore the lifted functional identity, not equality of unrelated completion limits.

This distinction is load-bearing.

---

## 15. Rational exceptional branch

T12 does not prove that every genuinely nonperiodic nonabelian translation value is transcendental.

A rational exception can survive the unresolved higher-dimensional module relation problem.

What T12 proves exactly is:

- always,
  \[
  H\in\mathbb Z_2;
  \]
- if \(0<W<1\) and \(H\in\mathbb Q\), then
  \[
  H<0
  \]
  in the ordinary real embedding;
- therefore no rational exception lies in
  \[
  \mathbb Z_{>0};
  \]
- a surviving rational exception lies in
  \[
  \mathbb Q\cap\mathbb Z_2
  \]
  and has negative ordinary sign;
- T12 does **not** decide whether such an exception can lie in
  \[
  \mathbb Z_{<0}.
  \]

Thus a rational 2-adic value is not called a Collatz counterexample, and the positive branch is closed without claiming \(H\notin\mathbb Q\).

---

## 16. Consequence back to T2

T2 proves, for the bounded finite valuation alphabets under study, that bounded canonical representatives \(R_m\) yield an ordinary positive anchor.

Suppose a balanced finite-group translation output is genuinely nonperiodic and \(R_m\) is bounded.

Then T2 produces a positive odd integer realizing that word.

Theorem T12.5 excludes such an anchor.

Therefore

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\tag{53}
\]

for the complete balanced finite-group translation class covered by T12.

This strictly extends the project-level anchoring obstruction from finite abelian translations to finite nonabelian translations.

It is an anchoring obstruction, not an explicit divergent orbit.

---

## 17. Functional linear/module independence status

T12 separates two statements that must not be conflated.

### Proved

- exact coset output reduction;
- exact irreducible decomposition and multiplicities;
- exact Fourier/Peter–Weyl root-coordinate formula;
- exact zero-output criterion;
- full all-depth \(v\)-adic regularity of every block;
- no constant proper invariant subspace in a \(d_\rho>1\) irreducible block;
- exact rational Mahler-module morphism equation (38);
- determinant coboundary as a necessary condition for invertible gauge equivalence;
- positive-integer anchoring obstruction without assuming blockwise independence.

### Not proved

T12 does not classify all solutions of

\[
A_\rho(z)R(z^k)=R(z)A_\sigma(z)
\]

for irreducible blocks.

It does not prove that inequivalent finite-group irreducibles always yield nonisomorphic rational Mahler modules.

It does not prove that every rational-function linear relation between selected block coordinates comes from an invertible block gauge.

It does not prove functional linear independence of all genuine nonabelian block outputs.

It therefore does not use Adamczewski–Bell–Smertnig to claim universal algebraic or linear independence of all nonabelian block values.

The stronger theorem

\[
H\notin\mathbb Q
\]

remains open for the general nonabelian matrix class.

The positive-anchor result is stronger for the project objective than this unresolved arithmetic classification is necessary to be.

---

## 18. Determinant audit and why T11 does not automatically generalize

For equal-rank gauge-equivalent blocks, (39) makes the determinant ratio a scalar Mahler coboundary.

But

\[
\deg\det M_\rho\le d_\rho(k-1).
\]

The T11 scalar theorem exploited the exact one-digit budget \(k-1\). For \(d_\rho>1\), a determinant can spend \(d_\rho\) times that divisor budget.

Consequently:

- determinant coboundary does not imply matrix gauge equivalence;
- determinant non-coboundary excludes an invertible equal-rank gauge but says nothing by itself about rectangular submodules or special-coordinate relations;
- determinant coboundary does not imply rationality of the block;
- determinant independence does not imply coordinate independence.

No matrix theorem is claimed from determinant data alone.

---

## 19. Restricted Periodicity-Conjecture boundary after T12

The boundary is now:

### Closed by T11

Balanced finite **abelian** translation systems after exact rational-character preprocessing. T11 proves the stronger conclusion \(H\notin\mathbb Q\) for every genuinely nonperiodic covered family.

### Closed as a positive-anchoring route by T12

Balanced finite **nonabelian** translation systems with the exact finite-group translation structure above.

T12 does not universally prove \(H\notin\mathbb Q\), but it proves that no genuinely nonperiodic member can have \(H\in\mathbb Z_{>0}\), and therefore proves bounded \(R_m\Rightarrow\) eventual periodicity for this class.

### Still open

1. Generic balanced finite-\(k\)-kernel Mahler systems that are not finite-group translation systems. In particular, the digit-zero transition need not be an invertible group action, so the automatic all-depth regularity theorem need not hold.

2. Higher-dimensional rational Mahler-module classification as a pure arithmetic question, even inside the nonabelian translation class, if the goal is the stronger statement \(H\notin\mathbb Q\).

3. The multivariate/unbalanced automatic inverse systems from T5.

4. General morphic, substitutive, or automatic valuation languages outside the balanced one-variable regular Mahler framework.

5. Recursive languages with no finite-kernel Mahler presentation.

The general 3x+1 Periodicity Conjecture is not solved.

---

## 20. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same sequence.

The powers of \(2\) and \(3\) in the Collatz arithmetic do not create that hypothesis.

**Applicable in T12:** **NO.**

### López–Stoll

The unresolved real/2-adic completion issue identified in T3 remains non-load-bearing.

T12's real-sign argument uses Adamczewski–Bell–Smertnig relation lifting and is logically distinct from the rejected López–Stoll shortcut.

**Load-bearing in T12:** **NO.**

---

## 21. Compute and promotion decision

T12 establishes no theorem-derived scientific workload.

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

## 22. Deliverable checklist

| Required item | T12 result |
|---|---|
| exact T11 theorem state inherited | Section 2 |
| exact finite group / reachable subgroup | \(E=\langle\varepsilon_r\rangle\) |
| exact output-identification reduction | \(X=E/K_C\) as a right-coset \(E\)-set; no normality assumed |
| exact true \(k\)-kernel dimension | \(m=[E:K_C]\) |
| exact constant-linear dimension | \(D_{\rm lin}=\sum_\rho d_\rho\operatorname{rank}\widehat C_\rho\) |
| exact irreducible decomposition | \(\operatorname{Ind}_{K_C}^E1=\bigoplus_\rho V_\rho^{\oplus m_\rho}\) |
| coefficient / splitting fields | finite splitting number field \(K\), place \(v\mid2\) |
| supported irreducible blocks | exactly \(\widehat C_\rho\ne0\) |
| zero-output blocks removed | exactly \(\widehat C_\rho=0\) |
| exact matrix Mahler equations | Sections 5–7 |
| determinant / rank | \(\delta_\rho(0)=1\), rank \(d_\rho\), full determinant (21) |
| complete orbit regularity | **PROVED for every block and every depth** |
| exact Collatz output coordinate | Peter–Weyl trace formula (25) |
| rational invariant line/common eigendirection | impossible as a constant subspace for \(d_\rho>1\); rational \(z\)-dependent submodule remains possible |
| proved rational gauge/intertwining relation | exact defining equation (38); no nontrivial universal classification claimed |
| excluded gauge/intertwining relation | determinant non-coboundary excludes invertible equal-rank gauge; constant irreducible reductions excluded |
| exact functional independence theorem | no universal higher-dimensional independence theorem obtained |
| exact use of ABS | Theorem 4.3 lifts the hypothetical positive-anchor value relation to a functional identity with exact specialization |
| same-point algebraic/rational cancellation | not universally excluded as a value phenomenon; **positive rational anchoring is excluded** |
| all finite nonabelian translation families ruled out | **YES as genuinely nonperiodic positive-integer anchoring routes in the covered balanced setup** |
| exact exceptional subclass | possible rational/module exceptions may remain, but only outside the positive-anchor conclusion |
| rational exceptional inverse value | may survive in \(\mathbb Q\cap\mathbb Z_2\); if \(0<W<1\), it must be negative |
| exceptional value in \(\mathbb Z_2\) | **YES**, all inverse values are in \(\mathbb Z_2\) |
| exceptional value in \(\mathbb Z\) | unresolved; a negative integer is not excluded |
| exceptional value in \(\mathbb Z_{>0}\) | **NO** |
| bounded \(R_m\) implies periodicity for a new class | **YES: balanced finite-group translations, including nonabelian** |
| restricted Periodicity-Conjecture boundary reduced | **YES**, Section 19 |
| Cobham applies | **NO** |
| López–Stoll load-bearing | **NO** |
| explicit anchored aperiodic word | **NONE** |
| candidate / unbounded orbit found | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |
| exact next theorem-sized obligation | Section 23 |

---

## 23. Exact next theorem-sized obligation

The finite-group translation branch no longer blocks the project-level anchoring question.

The next obligation should move to the structurally broader class in which the digit matrices are not simultaneously a finite group action:

> **CDM4-T13 — generic balanced finite-kernel regularity / completion-sign audit.**
>
> Let
> \[
> \mathbf F(z)=M(z)\mathbf F(z^k)
> \]
> be the exact reachable/output-reduced balanced finite-\(k\)-kernel Collatz Mahler system, without assuming that the digit transition matrices are permutations arising from a group.
>
> Classify exactly when the Collatz point
> \[
> W=2^B/3^k
> \]
> is regular for the complete Mahler orbit. In every regular case, apply the T12 relation-lifting/sign argument directly to the prescribed positive Collatz coordinate and determine whether it excludes every aperiodic positive integer anchor.
>
> If regularity fails, classify the singular finite-kernel subclasses and determine whether a regular subsystem, desingularization, or exact scalar quotient preserves the prescribed Collatz coordinate.

This target is narrower and more project-relevant than completing the pure nonabelian rational-gauge classification, because T12 shows that gauge classification is not required to kill positive anchoring once regularity is available.

No scientific computation is authorized.

---

## 24. Source ledger

1. Boris Adamczewski, Jason Bell, Daniel Smertnig, “A height gap theorem for coefficients of Mahler functions,” Journal of the European Mathematical Society 25 (2023), 2525–2571, DOI 10.4171/JEMS/1244. Section 4, especially Theorems 4.2 and 4.3, is the load-bearing arbitrary-place Mahler specialization source.
2. Standard finite-group representation theory: Maschke semisimplicity in characteristic zero, Frobenius reciprocity, character/Fourier inversion, Schur's lemma, and Burnside's theorem are used only in their standard finite-dimensional forms.
3. T3's internally proved distinct-positive-orbit height bound supplies the necessary inequality \(\limsup A_m/m\le\log_2 3\) for an aperiodic positive anchor.
4. T5 supplies the exact balanced identity \(H=-F_e(W)/3^k\) and the fact that the same formal series has a negative real inverse value when \(0<W<1\).
5. T10/T11 supply the already-audited interpretation and hypotheses of Adamczewski–Bell–Smertnig and the closed scalar/abelian branches.

## 25. Permanent lesson

The first genuinely nonabelian issue is real: higher-dimensional Mahler modules admit rational semilinear phenomena that cannot be read off from irreducible finite-group representations or determinants alone.

But that issue is not the same as the positive-anchor question.

Finite-group translation systems have a stronger structural feature:

\[
M(0)=I
\]

and all coefficient matrices preserve a \(2\)-adic lattice. That makes the complete Collatz Mahler orbit regular automatically.

Once regularity is available, an ordinary positive anchor would create a linear algebraic relation at the 2-adic value. T10's exact relation-lifting theorem forces that relation to come from a functional identity with the same specialization. In the only mean regime compatible with an aperiodic positive orbit, that identity can be evaluated at the real point \(0<W<1\), where positivity of the exact Collatz block constants forces the opposite sign.

Thus the missing bridge is not always “prove every block value independent.” For the project objective, **regularity plus exact relation lifting plus a completion-specific sign invariant can be enough**.

This is also why the generic T6 one-point automatic counterexample does not invalidate T12: a nonrational Mahler function taking a prescribed rational value cannot do so at a regular point covered by Theorem 4.3 together with \(1\) without inducing a functional linear relation. Regularity is the load-bearing extra hypothesis.

C — new recursive-language obstruction found
