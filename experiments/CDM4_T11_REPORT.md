# CDM4-T11 — Rational-Coboundary Collision / Grouped-Weight Cancellation Audit

**Date:** 2026-10-03  
**Authoritative starting commit:** \`defee5d1288e6dcd11334e8f95974005b671475c\`  
**Session type:** theorem / exact symbolic audit only  
**Scientific Collatz starts generated:** **0**  
**Candidate trajectories extended:** **0**  
**Substitution enumeration:** **NONE**  
**Finite residue/carry/exponent-code search:** **NONE**  
**CPU/GPU/cloud/distributed scientific work:** **NONE**  
**Explicit anchored aperiodic word found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## 1. Executive result

T11 closes the rational-coboundary collision problem left by T10 for the exact reduced elementary-2-group Walsh family.

The decisive new fact is a degree-budget theorem for rational Mahler coboundaries. Let \(k\ge2\), let \(S,T\in\overline{\mathbb Q}[z]\) satisfy
\[
S(0)=T(0)=1,
\qquad
\deg S=\deg T=k-1,
\]
and suppose
\[
\frac{S(z)}{T(z)}
=
\frac{R(z)}{R(z^k)}
\tag{1}
\]
for some \(R\in\overline{\mathbb Q}(z)^\times\).

If \(S\ne T\), then there are distinct nonzero fixed points
\[
\alpha^{k-1}=\beta^{k-1}=1
\]
such that
\[
S(z)=Q_\beta(z),
\qquad
T(z)=Q_\alpha(z),
\qquad
Q_\gamma(z)=\frac{z^k-\gamma}{z-\gamma}.
\tag{2}
\]

Thus every nontrivial degree-\((k-1)\) pairwise coboundary of this full-length digit type occurs only between two individually rational first-order Mahler products.

For the elementary-2 Walsh family, every coefficient of every \(S_\chi\) is \(\pm1\). Equation (2) then forces
\[
\alpha,\beta\in\{1,-1\}.
\]
Distinctness requires \(k\) odd, and the only possible pair is exactly the trivial and alternating Walsh polynomials
\[
S_1(z)=1+z+\cdots+z^{k-1},
\qquad
S_{\rm alt}(z)=1-z+z^2-\cdots+z^{k-1}.
\]
These are precisely the rational components already classified and removed in T9/T10.

Therefore
\[
\boxed{
\chi\ne\psi,\quad \chi,\psi\in\mathcal I
\Longrightarrow
P_\chi/P_\psi\notin\mathbb Q(z)^\times.
}
\tag{3}
\]

Every rational-multiple class in the genuine nonrational support is a singleton. Hence
\[
A_{\{\chi\}}(W)=\widehat C_\chi\ne0
\tag{4}
\]
for every \(\chi\in\mathcal I\), by exact support.

Combining (3)–(4) with T10's completion-correct same-point lifting theorem gives:

> Every genuinely nonperiodic balanced reduced elementary-2-group translation/Walsh family has a 2-adically transcendental exact inverse-Collatz value. It therefore has no rational, ordinary-integer, or positive-integer anchor.

The same divisor proof gives a stronger structural corollary for finite abelian translation kernels: any distinct pairwise coboundary between full-length character digit polynomials can occur only between individually rational character products. After rational characters are removed, all genuine classes are singletons over the cyclotomic coefficient field as well.

No rational exceptional inverse value survives in the genuinely nonperiodic T11 class. No new scientific compute is justified.

## 2. Authority, scope, and inherited T10 state

T11 began from the exact authoritative commit named above and retained all route kills and compute restrictions.

The root objective remains an explicit positive integer whose shortened-Collatz orbit is rigorously unbounded and never reaches \(1\). Nontrivial finite cycles remain out of scope.

Let
\[
E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle
\]
be the reachable translation group and
\[
K_C=\{h\in E:C_{x+h}=C_x\text{ for every }x\in E\}.
\]
The exact reduced quotient is
\[
\boxed{G=E/K_C,}
\tag{5}
\]
and the exact true \(k\)-kernel dimension is
\[
\boxed{m=|G|.}
\tag{6}
\]

For the T11 elementary-2 target,
\[
G\cong(\mathbb Z/2\mathbb Z)^d,
\]
so \(m=2^d\).

For each quotient character
\[
\chi:G\to\{\pm1\},
\]
the exact digit polynomial is
\[
S_\chi(z)=\sum_{r=0}^{k-1}\chi(\varepsilon_r)z^r.
\tag{7}
\]
Prolongability gives \(\varepsilon_0=0\), so
\[
S_\chi(0)=1.
\tag{8}
\]
Every coefficient is \(\pm1\), so
\[
\deg S_\chi=k-1.
\tag{9}
\]

The exact Fourier weight is
\[
\widehat C_\chi=\sum_{a\in G}\chi(a)C_a,
\tag{10}
\]
where
\[
C_a=\sum_{j=0}^{k-1}3^{k-1-j}2^{A_{a,j}}.
\tag{11}
\]
The exact support is
\[
\mathcal S_C=\{\chi\in\widehat G:\widehat C_\chi\ne0\}.
\tag{12}
\]
Zero-weight components are removed exactly.

The rational components are also removed exactly:

- the trivial character,
  \[
  S_1(z)=1+z+\cdots+z^{k-1},
  \qquad
  P_1(z)=\frac1{1-z};
  \]
- when \(k\) is odd and the unique alternating character exists,
  \[
  S_{\rm alt}(z)=1-z+z^2-\cdots+z^{k-1},
  \qquad
  P_{\rm alt}(z)=\frac1{1+z}.
  \]

Thus the genuine nonrational support is
\[
\boxed{
\mathcal I=
\mathcal S_C\setminus
\bigl(\{1\}\cup\{\chi_{\rm alt}\text{ if present}\}\bigr).
}
\tag{13}
\]

For every \(\chi\in\mathcal I\),
\[
P_\chi(z)=\frac{\widehat F_\chi(z)}{\widehat C_\chi},
\qquad
P_\chi(0)=1,
\qquad
P_\chi(z)=S_\chi(z)P_\chi(z^k).
\tag{14}
\]

The exact Collatz point remains
\[
W=\frac{2^B}{3^k},
\qquad
0<|W|_2=2^{-B}<1.
\tag{15}
\]

T8 already proves
\[
S_\chi(W^{k^j})\equiv1\pmod{2^{Bk^j}}
\tag{16}
\]
for every elementary-2 character and every \(j\ge0\). Hence the complete diagonal system is regular at \(W\).

T10 proves that pairwise rational quotients are the exact obstruction to functional linear independence and, via Adamczewski–Bell–Smertnig at the regular point \(W\), to the value-linear-independence argument required for the prescribed Fourier sum.

T11 therefore works only on the exact residual collision problem.

## 3. T10 logical chain rechecked

Let
\[
P_i(z)=S_i(z)P_i(z^k),
\qquad
P_j(z)=S_j(z)P_j(z^k),
\]
with \(P_i(0)=P_j(0)=1\), and put
\[
Q(z)=\frac{P_i(z)}{P_j(z)}.
\]
Then
\[
Q(z)=\frac{S_i(z)}{S_j(z)}Q(z^k).
\tag{17}
\]

If \(Q\in\mathbb Q(z)^\times\), then
\[
\frac{S_i(z)}{S_j(z)}
=
\frac{Q(z)}{Q(z^k)},
\]
so the cocycle quotient is a rational Mahler coboundary.

Conversely, if
\[
\frac{S_i(z)}{S_j(z)}
=
\frac{R(z)}{R(z^k)}
\tag{18}
\]
with \(R\in\mathbb Q(z)^\times\), then
\[
\frac{Q(z)}{R(z)}
=
\frac{Q(z^k)}{R(z^k)}.
\]
The quotient on either side is analytic at \(0\). Iterating \(z\mapsto z^{k^n}\) and using \(z^{k^n}\to0\) in the formal/analytic unit disc shows that \(Q/R\) is constant. The normalization at \(0\) fixes that constant.

Therefore
\[
\boxed{
P_i/P_j\in\mathbb Q(z)^\times
\Longleftrightarrow
S_i/S_j=R/R(z^k)
\Longleftrightarrow
e_i-e_j\in\Lambda.
}
\tag{19}
\]

If
\[
P_i(z)=R_{ij}(z)P_j(z),
\]
then \(R_{ij}(W)=P_i(W)/P_j(W)\) is finite and nonzero because T8 makes both values 2-adic units after normalization. Thus a reduced rational multiplier is regular and nonzero at \(W\).

T11 will show that no such nonidentity multiplier survives among genuine components.

## 4. Exact divisor criterion and degree norm

Let
\[
\phi:\mathbb P^1\to\mathbb P^1,
\qquad
\phi(z)=z^k.
\]

Suppose
\[
q(z)=\frac{S(z)}{T(z)}
=
\frac{R(z)}{R(z^k)}
\tag{20}
\]
with
\[
S(0)=T(0)=1,
\qquad
\deg S=\deg T=k-1.
\]

Let
\[
D=\operatorname{div}(R).
\]
Then
\[
\operatorname{div}(q)=D-\phi^*D.
\tag{21}
\]

At \(0\),
\[
\operatorname{ord}_0(q)=(1-k)D(0).
\]
Since \(q(0)=1\),
\[
D(0)=0.
\tag{22}
\]

At infinity,
\[
\operatorname{ord}_\infty(q)=(1-k)D(\infty).
\]
Since \(S\) and \(T\) have equal degree,
\[
D(\infty)=0.
\tag{23}
\]

Thus the support of \(D\) lies in \(\overline{\mathbb Q}^{\times}\).

Write
\[
D=D^+-D^-,
\qquad
\deg D^+=\deg D^-=d.
\tag{24}
\]

For an integral divisor \(V=\sum_xv_x[x]\), define
\[
\|V\|_1=\sum_x|v_x|.
\]
Because \(\phi(z)=z^k\) is unramified on \(\overline{\mathbb Q}^{\times}\), each nonzero finite point has exactly \(k\) distinct preimages and preimage sets of distinct points are disjoint. Therefore
\[
\|\phi^*D\|_1=k\|D\|_1=2kd.
\tag{25}
\]

The reverse triangle inequality gives
\[
\|D-\phi^*D\|_1
\ge
\|\phi^*D\|_1-\|D\|_1
=
2(k-1)d.
\tag{26}
\]

After cancellation of common factors in \(S/T\),
\[
\deg^+\operatorname{div}(q)\le k-1,
\]
so
\[
\|\operatorname{div}(q)\|_1\le2(k-1).
\tag{27}
\]

Combining (21), (26), and (27),
\[
d\le1.
\tag{28}
\]

If \(S\ne T\), then \(q\ne1\), \(R\) is nonconstant, and therefore
\[
\boxed{d=1.}
\tag{29}
\]

This is the central T11 collapse: the degree-\((k-1)\) digit budget forces every nontrivial coboundary witness to have exactly one zero and one pole.

## 5. Exact pairwise coboundary classification

From \(d=1\),
\[
D=[\alpha]-[\beta]
\tag{30}
\]
for distinct
\[
\alpha,\beta\in\overline{\mathbb Q}^{\times}.
\]

Then
\[
D-\phi^*D
=
[\alpha]-[\beta]
-\sum_{x^k=\alpha}[x]
+\sum_{y^k=\beta}[y].
\tag{31}
\]

Before cancellation, the positive part has degree \(k+1\): the point \(\alpha\) plus the \(k\) preimages of \(\beta\). The negative part also has degree \(k+1\): the point \(\beta\) plus the \(k\) preimages of \(\alpha\).

Because \(\alpha\ne\beta\), the two \(k\)-preimage sets are disjoint.

The only possible positive/negative cancellations are:

1. \([\alpha]\) against a point in \(\phi^{-1}(\alpha)\), which occurs exactly when \(\alpha^k=\alpha\);
2. \([\beta]\) against a point in \(\phi^{-1}(\beta)\), which occurs exactly when \(\beta^k=\beta\).

No other cross-cancellation is possible.

Equation (27) requires the reduced positive degree to be at most \(k-1\). Starting from \(k+1\), both available cancellations are therefore mandatory. Hence
\[
\alpha^k=\alpha,
\qquad
\beta^k=\beta.
\]
Since \(\alpha,\beta\ne0\),
\[
\boxed{
\alpha^{k-1}=\beta^{k-1}=1.
}
\tag{32}
\]

A rational function with divisor (30) is, up to a scalar,
\[
R(z)=\frac{z-\alpha}{z-\beta}.
\tag{33}
\]

For a nonzero fixed point \(\gamma\), define
\[
Q_\gamma(z)=\frac{z^k-\gamma}{z-\gamma}.
\tag{34}
\]
Using \(\gamma^k=\gamma\),
\[
\frac{R(z)}{R(z^k)}
=
\frac{Q_\beta(z)}{Q_\alpha(z)}.
\tag{35}
\]

The polynomials \(Q_\alpha,Q_\beta\) are coprime: a common root \(x\) would satisfy \(x^k=\alpha=\beta\). Both have degree \(k-1\) and constant term \(1\).

Since \(S/T\) has the same reduced ratio and \(S,T\) themselves have degree \(k-1\) and constant term \(1\), there is no room for an extra common factor. Therefore
\[
\boxed{
S(z)=Q_\beta(z),
\qquad
T(z)=Q_\alpha(z).
}
\tag{36}
\]

This proves the general full-length pairwise coboundary classification.

## 6. Specialization to elementary-2 Walsh polynomials

For \(\gamma^{k-1}=1\),
\[
Q_\gamma(z)
=
z^{k-1}+\gamma z^{k-2}+\gamma^2z^{k-3}
+\cdots+\gamma^{k-1}.
\tag{37}
\]

If \(Q_\gamma\) is an elementary-2 Walsh polynomial, all coefficients lie in \(\{+1,-1\}\). In particular the coefficient of \(z^{k-2}\) is \(\gamma\), so
\[
\gamma\in\{+1,-1\}.
\tag{38}
\]

A distinct pair therefore requires
\[
\{\alpha,\beta\}=\{1,-1\}.
\]
The point \(-1\) is fixed exactly when
\[
(-1)^{k-1}=1,
\]
that is, exactly when \(k\) is odd.

For \(\gamma=1\),
\[
Q_1(z)=1+z+\cdots+z^{k-1}=S_1(z).
\tag{39}
\]

For odd \(k\) and \(\gamma=-1\),
\[
Q_{-1}(z)=1-z+z^2-\cdots+z^{k-1}=S_{\rm alt}(z).
\tag{40}
\]

Therefore
\[
\boxed{
S_\chi/S_\psi
\text{ is a nontrivial rational Mahler coboundary}
}
\]
if and only if \(k\) is odd and, up to order,
\[
\boxed{
\{S_\chi,S_\psi\}=\{S_1,S_{\rm alt}\}.
}
\tag{41}
\]

T9 already classified both as rational. Hence after exact rational-component removal,
\[
\boxed{
\chi\ne\psi\in\mathcal I
\Longrightarrow
P_\chi/P_\psi\notin\mathbb Q(z)^\times.
}
\tag{42}
\]

Pairwise collisions are universally impossible among genuine nonrational elementary-2 components.

## 7. Exact rational multiplier in the unique pre-removal collision

When \(k\) is odd,
\[
P_1(z)=\frac1{1-z},
\qquad
P_{\rm alt}(z)=\frac1{1+z}.
\]
Thus
\[
\boxed{
\frac{P_{\rm alt}(z)}{P_1(z)}
=
\frac{1-z}{1+z}.
}
\tag{43}
\]

The normalized multiplier
\[
R_{{\rm alt},1}(z)=\frac{1-z}{1+z}
\]
satisfies \(R_{{\rm alt},1}(0)=1\) and
\[
\frac{S_{\rm alt}(z)}{S_1(z)}
=
\frac{R_{{\rm alt},1}(z)}
{R_{{\rm alt},1}(z^k)}.
\tag{44}
\]

The reverse multiplier is its reciprocal. Since \(|W|_2<1\), \(W\ne\pm1\), so both are regular and nonzero at \(W\).

This is the only nonidentity multiplier in the complete elementary-2 character family before rational components are absorbed.

## 8. Rational-multiple class structure

Before removing rational components:

- the trivial component is rational;
- for odd \(k\), the alternating component may exist and is rational-function related to the trivial component by (43);
- no other distinct pair is rational-function related.

After removing rational components, every surviving class is exactly
\[
\boxed{
C_\chi=\{\chi\},
\qquad
\chi\in\mathcal I.
}
\tag{45}
\]

Consequently no genuine class can have size two, size three or larger, a nontrivial character coset, or a nontrivial subgroup structure. Character multiplication creates no additional collision symmetry among genuine components.

The only pre-removal two-element collision class is the odd-\(k\) trivial/alternating rational pair.

## 9. Exact grouped Collatz weights

T10 defines
\[
A_C(W)=\sum_{i\in C}\widehat C_iR_i(W).
\tag{46}
\]

For a genuine T11 class \(C_\chi=\{\chi\}\), choose \(\chi\) as its own representative. Then
\[
R_\chi(z)=1,
\]
and therefore
\[
\boxed{
A_{C_\chi}(W)=\widehat C_\chi.
}
\tag{47}
\]

Because \(\chi\in\mathcal I\subseteq\mathcal S_C\),
\[
\boxed{
\widehat C_\chi\ne0.
}
\tag{48}
\]

Thus
\[
\boxed{
A_{C_\chi}(W)\ne0
\quad
\text{for every genuine nonrational class}.
}
\tag{49}
\]

This is stronger than merely proving that at least one grouped coefficient is nonzero. No congruence heuristic, numerical separation, sign argument, or finite factor search is used.

## 10. Nonperiodicity forces a genuine component

Suppose the exact coefficient sequence
\[
n\longmapsto C_{u_n}
\]
had no genuine nonrational Fourier support. Then its Fourier decomposition would involve only the rational character components: the constant component and, when present, the alternating component.

Its generating function would therefore be a rational combination of
\[
\frac1{1-z}
\]
and possibly
\[
\frac1{1+z}.
\]
The coefficient sequence would be periodic with period dividing \(2\).

T5 also proved that the exact Collatz block map
\[
w\longmapsto C_w
\]
is injective for positive valuation blocks: \(a_1=v_2(C_w-3^{k-1})\), after which the tail is recovered recursively. Hence periodicity of the block-constant sequence forces periodicity of the corresponding sequence of valuation blocks, and therefore eventual periodicity of the valuation word generated by those blocks.

Consequently every genuinely nonperiodic reduced family has
\[
\boxed{\mathcal I\ne\varnothing.}
\tag{50}
\]

Combining (49) and (50), every genuinely nonperiodic reduced elementary-2 Walsh family has nonzero genuine grouped weight.

## 11. Same-point arithmetic conclusion and 2-adic integrality

T10 proves that representatives of distinct rational-multiple classes, together with \(1\), have linearly independent values over \(\overline{\mathbb Q}\) at the exact regular 2-adic point \(W\).

By T11 all genuine classes are singletons. Hence
\[
1,\ \{P_\chi(W):\chi\in\mathcal I\}
\]
are linearly independent over \(\overline{\mathbb Q}\).

The exact Fourier value is
\[
F_0(W)
=
\frac1{|G|}
\left[
\text{rational components}
+
\sum_{\chi\in\mathcal I}
\widehat C_\chi P_\chi(W)
\right].
\tag{51}
\]

For a genuinely nonperiodic family, \(\mathcal I\ne\varnothing\), and every coefficient \(\widehat C_\chi\) in (51) is nonzero. Therefore
\[
\boxed{
F_0(W)\notin\overline{\mathbb Q}.
}
\tag{52}
\]

Under the T8/T10 normalization,
\[
H=-\frac{F_0(W)}{3^k}.
\tag{53}
\]
The inverse series is a convergent 2-adic integer, so
\[
H\in\mathbb Z_2\subset\mathbb Q_2.
\tag{54}
\]

T11 proves that this 2-adic integer is transcendental over \(\mathbb Q\) in the chosen 2-adic completion. In particular,
\[
\boxed{
H\notin\overline{\mathbb Q},
\qquad
H\notin\mathbb Q,
\qquad
H\notin\mathbb Z,
\qquad
H\notin\mathbb Z_{>0}.
}
\tag{55}
\]

This distinction is essential: 2-adic transcendence does **not** imply \(H\notin\mathbb Z_2\). Here \(H\) is a 2-adic integer; T11 excludes algebraicity, rationality, and ordinary positive integrality.

Therefore no positive-integer anchor exists in the genuinely nonperiodic T11 family.

## 12. Positive exceptional branch

T10 left open the possibility that every grouped nonrational coefficient might vanish, reducing the exact inverse value to the rational part.

T11 eliminates that possibility for every genuinely nonperiodic covered family:
\[
\mathcal I\ne\varnothing,
\qquad
A_{C_\chi}(W)=\widehat C_\chi\ne0.
\]

Therefore no **rational exceptional inverse value** survives to an ordinary-integrality/positivity test.

The ambient inverse value remains in \(\mathbb Z_2\), as it should. What does not survive is a rational value in
\[
\mathbb Q,\quad\mathbb Z,\quad\text{or}\quad\mathbb Z_{>0}.
\]

Rational-component-only systems may of course remain rational, but their relevant coefficient sequence is periodic; they are not a genuinely nonperiodic residual family and are not divergence candidates.

## 13. Stronger finite-abelian corollary

Sections 4–5 did not use the coefficient restriction \(\pm1\). They used only
\[
S(0)=T(0)=1,
\qquad
\deg S=\deg T=k-1.
\]

For a finite abelian translation kernel, every character value is a root of unity, so every full-length character digit polynomial has exactly these two properties.

If a nontrivial pairwise coboundary occurs, Sections 4–5 force
\[
S=Q_\beta,
\qquad
T=Q_\alpha
\]
with \(\alpha,\beta\) fixed by \(z\mapsto z^k\).

But
\[
Q_\gamma(z)
=
\frac{1-z^k/\gamma}{1-z/\gamma},
\]
so the normalized first-order product is
\[
P_\gamma(z)=\frac1{1-z/\gamma},
\tag{56}
\]
which is rational.

Thus, in any finite abelian translation family with full-length character digit polynomials:

> Two distinct normalized first-order character products can be rational-function multiples only if both products are individually rational.

After rational characters are removed, every genuine character class is a singleton.

The coefficient field is cyclotomic rather than \(\mathbb Q\), but this creates no obstruction to T10: Adamczewski–Bell–Smertnig is formulated over arbitrary number fields and places. At a place above \(2\), character coefficients are algebraic units and
\[
S_\chi(W^{k^j})=1+O_v(W^{k^j}),
\]
so every character factor remains nonzero along the complete Mahler orbit.

Accordingly, subject to the exact T7 finite-abelian translation setup and exact support/rational-component preprocessing, the T11 obstruction extends from elementary \(2\)-groups to balanced finite abelian translation kernels.

This does **not** solve arbitrary nonabelian translation systems or generic finite \(k\)-kernel Mahler systems.

## 14. Consequence back to T2

T2 proves that, in the finite-alphabet recursive valuation setting, bounded canonical representatives \(R_m\) are equivalent to ordinary anchoring.

T11 proves that a genuinely nonperiodic family in the covered reduced Walsh class has no ordinary anchor.

Therefore
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\tag{57}
\]
for the complete genuinely higher-rank elementary-2 translation/Walsh class covered by T8–T11.

With Section 13, the same implication extends to the corresponding balanced finite-abelian translation class after exact rational-component preprocessing.

By T2, an aperiodic positive anchor would have forced an unbounded Collatz orbit. T11 proves that no such anchor exists in these classes.

This is an obstruction theorem, not a Collatz counterexample.

## 15. Restricted Periodicity-Conjecture boundary after T11

T5 identified the residual automatic anchoring question as a restricted form of the 3x+1 Periodicity Conjecture.

T6 removed a first-order balanced complementary subclass. T7 isolated finite abelian translation kernels as an exactly Fourier-diagonal higher-rank class. T8–T10 reduced the elementary-2 version to pairwise rational coboundaries plus grouped weights. T11 now closes that residual branch and, by the same divisor theorem, closes the corresponding finite-abelian translation branch after rational-character preprocessing.

The restricted boundary no longer contains any genuinely nonperiodic balanced reduced elementary-2 or finite-abelian translation family covered by this setup.

What remains is structurally different:

- nonabelian translation systems, whose representation decomposition may contain higher-dimensional irreducible blocks;
- generic balanced finite \(k\)-kernel Mahler systems not arising from abelian translations;
- the more general multivariate/unbalanced automatic inverse systems from T5;
- recursive languages outside the balanced one-variable Mahler framework.

The general Periodicity Conjecture is not solved.

## 16. Periodic-point and backward-tree audit

For a coboundary
\[
q=R/R\circ\phi
\]
and a finite periodic cycle
\[
x_0\mapsto x_1\mapsto\cdots\mapsto x_{\ell-1}\mapsto x_0
\]
away from \(0,\infty\),
\[
\operatorname{ord}_{x_j}(q)
=
D(x_j)-D(x_{j+1}).
\]
Summing gives
\[
\sum_{j=0}^{\ell-1}\operatorname{ord}_{x_j}(q)=0.
\tag{58}
\]

At a fixed point this forces
\[
\operatorname{ord}_x(q)=0.
\]

The degree-norm proof is stronger than checking cycles one by one. It first shows that \(D\) has positive degree at most one. Once
\[
D=[\alpha]-[\beta],
\]
the finite digit degree budget forces both endpoints themselves to be fixed. Every other backward branch would contribute more divisor mass than a ratio of degree-\((k-1)\) digit polynomials can support.

The points \(0\) and \(\infty\) are excluded from \(D\) by (22)–(23). In the elementary-2 specialization, \(1\) and \(-1\) emerge as the only fixed points compatible with \(\pm1\) Walsh coefficients.

This supplies the exact divisor/orbit criterion requested by T11 without finite factor enumeration.

## 17. Character multiplication and class geometry

T11 does not assume rational-multiple classes inherit a group structure.

The classification proves something stronger: after rational-component removal there are no nontrivial genuine classes to organize.

Before removal, the only possible elementary-2 nonidentity relation is the odd-\(k\) trivial/alternating pair. That fact follows from the divisor degree bound and the coefficient restriction, not from a presumed subgroup or coset law.

## 18. Cobham and López–Stoll

### Cobham

No second automatic representation in a multiplicatively independent base is proved for the same relevant sequence.

**Applicable:** **NO.**

### López–Stoll

T11 does not use the unresolved cross-completion inference audited in T3.

**Load-bearing:** **NO.**

## 19. Compute and promotion decision

T11 establishes no theorem-derived scientific workload.

- new scientific starts: **NOT JUSTIFIED**;
- candidate trajectories: **NOT JUSTIFIED**;
- substitution enumeration: **NOT JUSTIFIED**;
- finite residue/carry/exponent-code search: **NOT JUSTIFIED**;
- generator or sampling-distribution work: **NOT JUSTIFIED**;
- CPU campaign: **NOT JUSTIFIED**;
- GPU work: **NOT JUSTIFIED**;
- cloud/distributed/volunteer work: **NOT JUSTIFIED**;
- \`docs/COMPUTE_BUDGET.md\`: **UNCHANGED**;
- \`docs/METRIC_CATALOG.md\`: **UNCHANGED**.

The theorem removes a symbolic class; it creates no candidate population to extend.

## 20. Deliverable checklist

- exact T10 theorem state inherited: **YES**;
- exact reduced quotient: \(G=E/K_C\);
- exact true kernel dimension: \(m=|G|\);
- exact genuine Fourier support: equation (13);
- exact rational components removed: **YES**;
- every pairwise rational-function-multiple class: **classified exactly**;
- every pairwise coboundary: **classified exactly**;
- exact divisor/orbit criterion: **Sections 4–6 and 16**;
- exact nontrivial rational multiplier before rational removal:
  \[
  R_{{\rm alt},1}(z)=\frac{1-z}{1+z}
  \]
  for odd \(k\);
- pairwise collisions universally impossible among genuine elementary-2 components: **YES**;
- collision families if rational components are retained: **only trivial/alternating for elementary-2 Walsh**;
- every genuine grouped coefficient:
  \[
  A_{\{\chi\}}(W)=\widehat C_\chi;
  \]
- can an individual genuine grouped coefficient vanish?: **NO, by exact support**;
- can all genuine grouped coefficients vanish simultaneously?: **NO**;
- same-point rational cancellation completely excluded in the genuine class: **YES**;
- entire higher-rank elementary-2-group Walsh class ruled out from aperiodic positive anchoring: **YES**;
- broader finite-abelian translation corollary: **YES, after exact rational-character preprocessing**;
- genuinely new recursive-language obstruction obtained: **YES**;
- bounded \(R_m\) implies periodicity for a new class: **YES**;
- restricted Periodicity-Conjecture boundary further reduced: **YES**;
- genuinely nonperiodic rational exceptional inverse value survives: **NO**;
- ambient inverse value remains in \(\mathbb Z_2\): **YES**;
- ordinary rational/integer/positive-integer exceptional value survives: **NO**;
- Cobham applies: **NO**;
- López–Stoll load-bearing: **NO**;
- explicit anchored aperiodic word exists: **NO**;
- candidate or unbounded orbit found: **NO**;
- counterexample claimed: **NO**;
- future compute justified: **NO**.

## 21. Exact next theorem-sized obligation

The elementary-2 Walsh collision problem is closed, and the same degree argument also removes genuine pairwise collisions in the finite-abelian translation setting.

The next theorem-sized obstruction should therefore move beyond one-dimensional character factors:

> **CDM4-T12 — finite nonabelian translation / higher-dimensional representation audit.**
>
> For a balanced \(k\)-uniform translation system driven by a finite group whose regular representation contains irreducible blocks of dimension greater than one, derive the exact matrix Mahler blocks over a number field, preserve the Collatz output vector and exact representation-theoretic weights, and determine whether the Adamczewski–Bell–Smertnig lifting theorem plus a functional module-relation classification excludes algebraic cancellation at
> \[
> W=2^B/3^k.
> \]
> Equivalently, classify the rational-function linear relations among the relevant irreducible matrix-block outputs and decide whether the prescribed Collatz coordinate can lie in the rational-function span of rational blocks.

If the broad statement fails, T12 should isolate the exact higher-dimensional obstruction and the smallest structurally natural subclass that remains open.

No new scientific compute is authorized.

## 22. Permanent lesson

The T10 residual finite cancellation problem looked Collatz-specific because the Fourier weights are Collatz block constants.

T11 shows that, in the reduced Walsh family, the decisive rigidity occurs one level earlier.

The digit polynomials have the exact maximal length permitted by one base-\(k\) digit:
\[
\deg S_i=k-1.
\]
A nontrivial coboundary
\[
S_i/S_j=R/R(z^k)
\]
pulls the divisor of \(R\) back through a degree-\(k\) map. The total divisor variation expands by a factor \(k\). The available digit degree can absorb that expansion only when \(R\) has exactly one zero and one pole, and then only when both lie at fixed points of \(z\mapsto z^k\). Those fixed-point cocycles are precisely individually rational Mahler products.

So genuine nonrational components cannot collide pairwise.

Once that is known, T10's same-point lifting theorem makes the Collatz grouped-weight problem disappear: every genuine class is a singleton and exact Fourier support already supplies the required nonzero coefficient.

The higher-rank elementary-2 Walsh branch, and more generally the covered finite-abelian translation branch, is therefore closed as an aperiodic positive-anchoring route.

C — new recursive-language obstruction found
