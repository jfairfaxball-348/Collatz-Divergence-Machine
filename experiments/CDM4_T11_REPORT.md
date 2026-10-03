# CDM4-T11 — Rational-Coboundary Collision / Grouped-Weight Cancellation Audit

**Date:** 2026-10-03  
**Authoritative starting commit:** `defee5d1288e6dcd11334e8f95974005b671475c`  
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

The decisive fact is a degree-budget theorem for rational Mahler coboundaries.

Let (k\ge2), let (S,T\in\overline{\mathbb Q}[z]) have

[
S(0)=T(0)=1,
qquad
\deg S=\deg T=k-1,
]

and suppose

[
\frac{S(z)}{T(z)}
=
\frac{R(z)}{R(z^k)}
	ag{1}
]

for some (R\in\overline{\mathbb Q}(z)^\times).

If (S\ne T), then there exist two distinct nonzero fixed points
[
\alpha^{k-1}=\beta^{k-1}=1
]
such that
[
S(z)=Q_\beta(z),
qquad
T(z)=Q_\alpha(z),
	ag{2}
]
where
[
Q_\gamma(z)
=
\frac{z^k-\gamma}{z-\gamma}.
	ag{3}
]

Equivalently, every nontrivial degree-((k-1)) pairwise coboundary of this full-length digit type occurs only between two individually rational first-order Mahler products.

For the elementary-2 Walsh family, every coefficient of every (S_\chi) is (pm1). Equation (2) then forces
[
\alpha,\beta\in\{1,-1\}.
]
Distinctness requires (k) odd, and the only possible pair is exactly
[
S_1(z)=1+z+\cdots+z^{k-1}
]
and
[
S_{\rm alt}(z)=1-z+z^2-\cdots+z^{k-1}.
]

These are precisely the two rational components already classified and removed in T9/T10.

Therefore:

[
oxed{
\chi\ne\psi, \chi,\psi\in\mathcal I
\Longrightarrow
P_\chi/P_\psi\notin\mathbb Q(z)^\times.
}
	ag{4}
]

Every rational-multiple class in the genuine nonrational support is a singleton.

Hence, for every (chi\in\mathcal I),

[
A_{\{\chi\}}(W)
=
\widehat C_\chi
\ne0.
	ag{5}
]

So the grouped coefficients cannot all vanish; in fact none of the genuine singleton coefficients vanishes.

Combining (4)–(5) with the T10 completion-correct same-point lifting theorem gives:

> Every genuinely nonperiodic balanced reduced elementary-2-group translation/Walsh family has a transcendental exact inverse-Collatz value in the 2-adic completion. It therefore has no ordinary positive-integer anchor.

Thus the entire residual higher-rank elementary-2 Walsh class is excluded from positive-integer anchoring.

The same divisor proof actually gives a stronger structural corollary: for any full-length first-order digit polynomials with constant term (1), a pairwise rational coboundary can occur only between the fixed-point cocycles (Q_\gamma), whose normalized products are rational. Consequently the collision obstruction is not specific to signs (pm1); it extends to finite abelian translation characters over their cyclotomic splitting field once rational character components and regularity are treated exactly. This extension is recorded as a corollary, not as a claim about arbitrary nonabelian or generic finite-kernel Mahler systems.

No rational exceptional inverse value survives in the genuinely nonperiodic T11 class. No new compute is justified.

## 2. Authority, scope, and inherited T10 state

T11 began from the exact repository commit named above and retained all route kills and compute restrictions.

The root objective remains an explicit positive integer whose shortened-Collatz orbit is rigorously unbounded and never reaches (1).

Nontrivial finite cycles remain out of scope.

The exact T8–T10 setup is retained without re-proving the closed p-adic lifting bridge.

Let
[
E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle
]
be the reachable translation group and
[
K_C=
\{h\in E:C_{x+h}=C_x\text{ for every }x\in E\}.
]

The exact reduced quotient is
[
oxed{G=E/K_C.}
	ag{6}
]

The exact true (k)-kernel dimension is
[
oxed{m=|G|=|E/K_C|.}
	ag{7}
]

Because this T11 target is the elementary-2 translation family,
[
G\cong(\mathbb Z/2\mathbb Z)^d
]
for some (d), so (m=2^d).

For each quotient character
[
\chi:G\to\{\pm1\},
]
the exact digit polynomial is
[
S_\chi(z)
=
\sum_{r=0}^{k-1}\chi(\varepsilon_r)z^r.
	ag{8}
]

Prolongability gives
[
\varepsilon_0=0,
]
hence
[
S_\chi(0)=1.
	ag{9}
]

Every coefficient is (pm1), so
[
\deg S_\chi=k-1.
	ag{10}
]

The exact Fourier weight is
[
\widehat C_\chi
=
\sum_{a\in G}\chi(a)C_a,
	ag{11}
]
with
[
C_a
=
\sum_{j=0}^{k-1}
3^{k-1-j}2^{A_{a,j}}.
	ag{12}
]

The exact support is
[
\mathcal S_C
=
\{\chi\in\widehat G:\widehat C_\chi\ne0\}.
	ag{13}
]

Zero-weight components are removed exactly.

The rational components are also removed exactly:

- the trivial character
  [
  S_1(z)=1+z+\cdots+z^{k-1},
  qquad
  P_1(z)=\frac1{1-z};
  ]
- when (k) is odd and the unique alternating character exists,
  [
  S_{\rm alt}(z)
  =
  1-z+z^2-\cdots+z^{k-1},
  qquad
  P_{\rm alt}(z)=\frac1{1+z}.
  ]

Therefore the genuine nonrational support is
[
oxed{
\mathcal I
=
\mathcal S_C
\setminus
\bigl(
\{1\}
\cup
\{\chi_{\rm alt}\text{ if present}\}
\bigr).
}
	ag{14}
]

For every (chi\in\mathcal I),
[
P_\chi(z)
=
\frac{\widehat F_\chi(z)}{\widehat C_\chi},
qquad
P_\chi(0)=1,
]
and
[
P_\chi(z)=S_\chi(z)P_\chi(z^k).
	ag{15}
]

The exact Collatz point is
[
W=\frac{2^B}{3^k},
qquad
0<|W|_2=2^{-B}<1.
	ag{16}
]

T8 already proves
[
S_\chi(W^{k^j})
\equiv1\pmod{2^{Bk^j}}
]
for every (chi) and (j\ge0). Hence every relevant factor is nonzero along the complete Mahler orbit.

T10 proves that pairwise rational quotients are the exact obstruction to functional linear independence and, via Adamczewski–Bell–Smertnig at the regular point (W), to the value-linear-independence argument needed for the prescribed Fourier sum.

T11 therefore works only on the exact residual collision problem.

## 3. T10 logical chain rechecked

Let
[
P_i(z)=S_i(z)P_i(z^k),
qquad
P_j(z)=S_j(z)P_j(z^k),
]
with (P_i(0)=P_j(0)=1).

Put
[
Q(z)=\frac{P_i(z)}{P_j(z)}.
]

Then
[
Q(z)
=
\frac{S_i(z)}{S_j(z)}Q(z^k).
	ag{17}
]

If (Q\in\mathbb Q(z)^\times), equation (17) gives
[
\frac{S_i(z)}{S_j(z)}
=
\frac{Q(z)}{Q(z^k)},
]
so the cocycle quotient is a rational Mahler coboundary.

Conversely, if
[
\frac{S_i(z)}{S_j(z)}
=
\frac{R(z)}{R(z^k)}
	ag{18}
]
with (R\in\mathbb Q(z)^\times), then
[
\frac{Q(z)}{R(z)}
=
\frac{Q(z^k)}{R(z^k)}.
]
The left side is analytic at (0) with value determined by the normalizations. Iterating (z\mapsto z^{k^n}) and letting (n\to\infty) in the formal/analytic unit disc shows (Q/R) is constant. Normalizing at (0) makes that constant (1), so
[
Q=R.
]

Thus
[
oxed{
P_i/P_j\in\mathbb Q(z)^\times
\Longleftrightarrow
S_i/S_j=R/R(z^k)
\Longleftrightarrow
e_i-e_j\in\Lambda.
}
	ag{19}
]

This rechecks the exact T10 chain.

### Regularity of rational multipliers at (W)

Whenever
[
P_i(z)=R_{ij}(z)P_j(z),
]
the quotient (P_i/P_j) is analytic and nonzero at (W), because both (P_i(W)) and (P_j(W)) are convergent 2-adic units by T8.

Therefore any rational presentation of (R_{ij}) has at most a removable singularity at (W). In reduced form it is regular and nonzero at (W), and
[
R_{ij}(W)=\frac{P_i(W)}{P_j(W)}.
	ag{20}
]

The T11 classification below is stronger: after rational components are removed, no nontrivial (R_{ij}) exists at all.

## 4. Divisor criterion and a degree norm

Let
[
\phi:\mathbb P^1\to\mathbb P^1,
qquad
\phi(z)=z^k.
]

Suppose
[
q(z)=\frac{S(z)}{T(z)}
=
\frac{R(z)}{R(z^k)}
	ag{21}
]
with
[
S(0)=T(0)=1,
qquad
\deg S=\deg T=k-1.
]

Let
[
D=\operatorname{div}(R).
]

Then
[
\operatorname{div}(q)
=
D-\phi^*D.
	ag{22}
]

At (0),
[
\operatorname{ord}_0(q)
=
(1-k)D(0).
]
Since (q(0)=1),
[
D(0)=0.
	ag{23}
]

At infinity,
[
\operatorname{ord}_\infty(q)
=
(1-k)D(\infty).
]
Because (S) and (T) have the same degree,
[
\operatorname{ord}_\infty(q)=0,
]
hence
[
D(\infty)=0.
	ag{24}
]

Thus every point in the support of (D) lies in
[
\overline{\mathbb Q}^{\times}.
]

Write
[
D=D^+-D^-,
qquad
\deg D^+=\deg D^-=d.
	ag{25}
]

If (R) is nonconstant, (d\ge1).

For an integral divisor (V=\sum_xv_x[x]), define
[
\|V\|_1=\sum_x|v_x|.
]

Because (phi(z)=z^k) is unramified on (overline{\mathbb Q}^{\times}), every nonzero finite point has exactly (k) distinct preimages and preimage sets of distinct points are disjoint. Therefore
[
\|\phi^*D\|_1
=
k\|D\|_1
=
2kd.
	ag{26}
]

The reverse triangle inequality gives
[
\|D-\phi^*D\|_1
\ge
\|\phi^*D\|_1-\|D\|_1
=
2(k-1)d.
	ag{27}
]

On the other hand, after cancelling any common factors of (S) and (T),
[
\deg^+\operatorname{div}(q)
\le k-1,
]
so
[
\|\operatorname{div}(q)\|_1
\le2(k-1).
	ag{28}
]

Combining (22), (27), and (28),
[
2(k-1)d\le2(k-1),
]
hence
[
oxed{d\le1.}
	ag{29}
]

If (S\ne T), then (q\ne1), (R) is nonconstant, and therefore
[
oxed{d=1.}
	ag{30}
]

This is the central T11 collapse: the degree-((k-1)) digit budget forces every nontrivial coboundary witness to have one zero and one pole.

## 5. Exact pairwise coboundary classification

From (d=1),
[
D=[\alpha]-[\beta]
	ag{31}
]
for distinct
[
\alpha,\beta\in\overline{\mathbb Q}^{\times}.
]

The pullback is
[
\phi^*D
=
\sum_{x^k=\alpha}[x]
-
\sum_{y^k=\beta}[y].
]

Hence
[
D-\phi^*D
=
[\alpha]-[\beta]
-
\sum_{x^k=\alpha}[x]
+
\sum_{y^k=\beta}[y].
	ag{32}
]

Before cancellation, the positive part has degree (k+1), consisting of ([\alpha]) and the (k) preimages of (eta). The negative part also has degree (k+1), consisting of ([\beta]) and the (k) preimages of (alpha).

Because (alpha\ne\beta), the two (k)-preimage sets are disjoint.

The only possible positive/negative cancellations are:

1. ([\alpha]) cancels one point in (phi^{-1}(\alpha)), which happens exactly when
   [
   \alpha^k=\alpha;
   ]
2. ([\beta]) cancels one point in (phi^{-1}(\beta)), which happens exactly when
   [
   \beta^k=\beta.
   ]

No other cross-cancellation is possible.

But (28) requires the reduced positive degree to be at most (k-1). Starting from (k+1), both available cancellations are therefore mandatory. Hence
[
\alpha^k=\alpha,
qquad
\beta^k=\beta.
]

Since both are nonzero,
[
oxed{
\alpha^{k-1}=\beta^{k-1}=1.
}
	ag{33}
]

Thus both are fixed points of (z\mapsto z^k).

A rational function with divisor (31) and no zero/pole at infinity is, up to a scalar,
[
R(z)=\frac{z-\alpha}{z-\beta}.
	ag{34}
]

Using (33),
[
z^k-\gamma=(z-\gamma)Q_\gamma(z),
]
where
[
Q_\gamma(z)
=
\frac{z^k-\gamma}{z-\gamma}.
]

Substitution into the coboundary gives
[
\frac{R(z)}{R(z^k)}
=
\frac{Q_\beta(z)}{Q_\alpha(z)}.
	ag{35}
]

The polynomials (Q_\alpha) and (Q_\beta) are coprime: a common root (x) would satisfy
[
x^k=\alpha=\beta,
]
contrary to distinctness.

Both have degree (k-1), and
[
Q_\gamma(0)=1
]
for every nonzero fixed point (gamma).

Because (S/T) has the same reduced divisor as (Q_\beta/Q_\alpha), while (S,T) themselves also have degree (k-1) and constant term (1), there is no room for an additional common polynomial factor. Therefore
[
oxed{
S(z)=Q_\beta(z),
qquad
T(z)=Q_\alpha(z).
}
	ag{36}
]

This proves the general full-length pairwise coboundary classification.

## 6. Specialization to elementary-2 Walsh polynomials

For a fixed point (gamma^{k-1}=1),
[
Q_\gamma(z)
=
z^{k-1}
+\gamma z^{k-2}
+\gamma^2z^{k-3}
+\cdots
+\gamma^{k-1}.
	ag{37}
]

The constant term is
[
\gamma^{k-1}=1.
]

If (Q_\gamma) is an elementary-2 Walsh polynomial, all coefficients lie in
[
\{+1,-1\}.
]

In particular the coefficient of (z^{k-2}) is (gamma), so
[
\gamma\in\{+1,-1\}.
	ag{38}
]

For (k=2), the only nonzero fixed point is (1), so no distinct pair exists.

For (k>2), a distinct pair (alpha\ne\beta) therefore requires
[
\{\alpha,\beta\}=\{1,-1\}.
]

The point (-1) is fixed exactly when
[
(-1)^{k-1}=1,
]
that is, exactly when
[
k\text{ is odd}.
	ag{39}
]

For (gamma=1),
[
Q_1(z)=1+z+\cdots+z^{k-1}=S_1(z).
	ag{40}
]

For (k) odd and (gamma=-1),
[
Q_{-1}(z)
=
1-z+z^2-\cdots+z^{k-1}
=
S_{\rm alt}(z).
	ag{41}
]

Therefore the exact elementary-2 classification is:

[
oxed{
S_\chi/S_\psi
\text{ is a nontrivial rational Mahler coboundary}
}
]

if and only if (k) is odd and, up to order,
[
oxed{
\{S_\chi,S_\psi\}
=
\{S_1,S_{\rm alt}\}.
}
	ag{42}
]

T9 already classified both components as rational. They are removed before the genuine higher-rank analysis.

Thus, after exact rational-component removal,
[
oxed{
\chi\ne\psi\in\mathcal I
\Longrightarrow
P_\chi/P_\psi\notin\mathbb Q(z)^\times.
}
	ag{43}
]

Pairwise collisions are universally impossible among genuine nonrational components.

## 7. Exact rational multiplier in the unique nontrivial pre-removal collision

When (k) is odd,
[
P_1(z)=\frac1{1-z},
qquad
P_{\rm alt}(z)=\frac1{1+z}.
]

Therefore
[
\boxed{
\frac{P_{\rm alt}(z)}{P_1(z)}
=
\frac{1-z}{1+z}.
}
	ag{44}
]

This is normalized by
[
R_{\rm alt,1}(0)=1.
]

Indeed,
[
\frac{S_{\rm alt}(z)}{S_1(z)}
=
\frac{R_{\rm alt,1}(z)}
{R_{\rm alt,1}(z^k)}.
	ag{45}
]

The reverse multiplier is
[
R_{1,{\rm alt}}(z)
=
\frac{1+z}{1-z}.
]

At the Collatz point (W),
[
|W|_2<1,
]
so (W\ne\pm1). Both multipliers are regular and nonzero at (W).

This is the only nonidentity multiplier in the complete reduced elementary-2 character family before rational components are absorbed.

## 8. Rational-multiple class structure

Before removing rational components:

- the trivial character is rational;
- when (k) is odd and the alternating character exists, it is rational and is rational-function related to the trivial component by (44);
- no other distinct pair is rational-function related.

After removing all rational components, every surviving class is exactly
[
oxed{C_\chi=\{\chi\},\qquad \chi\in\mathcal I.}
	ag{46}
]

Therefore:

- no genuine class has size two;
- no genuine class has size three or more;
- no genuine class can be an entire nontrivial character coset;
- no genuine class can be a nontrivial subgroup of (widehat G);
- character multiplication produces no additional collision symmetry among genuine components.

The only pre-removal two-element rational class can occur for odd (k), namely the trivial/alternating pair. It is removed as rational and is not part of the higher-rank transcendental sum.

## 9. Exact grouped Collatz weights

T10 defines, for a rational-multiple class (C),
[
A_C(W)
=
\sum_{i\in C}
\widehat C_iR_i(W).
	ag{47}
]

For every genuine T11 class (C_\chi=\{\chi\}), choose (chi) itself as representative. Then
[
R_\chi(z)=1.
]

Hence
[
oxed{
A_{C_\chi}(W)
=
\widehat C_\chi.
}
	ag{48}
]

But (chi\in\mathcal I\subseteq\mathcal S_C), so by exact support
[
\boxed{
\widehat C_\chi\ne0.
}
	ag{49}
]

Therefore
[
oxed{
A_{C_\chi}(W)\ne0
\quad
\text{for every genuine nonrational class}.
}
	ag{50}
]

This is stronger than proving that at least one grouped coefficient is nonzero.

No parity estimate, finite congruence separation, sign heuristic, norm estimate, or numerical evaluation is needed. The exact class theorem collapses every genuine group to one supported Fourier coefficient.

Thus simultaneous grouped-weight cancellation is impossible whenever
[
\mathcal I\ne\varnothing.
]

## 10. Nonperiodicity forces a genuine component

Suppose the exact coefficient sequence
[
n\longmapsto C_{u_n}
]
had no genuine nonrational Fourier support.

Then its Fourier decomposition would involve only the rational character components:

- the constant component;
- and, when (k) is odd, possibly the alternating component.

Its generating function would therefore be a rational combination of
[
\frac1{1-z}
]
and possibly
[
\frac1{1+z},
]
so its coefficient sequence would be periodic with period dividing (2).

Consequently every genuinely nonperiodic reduced family has
[
\boxed{\mathcal I\ne\varnothing.}
	ag{51}
]

Combining (50) and (51), every genuinely nonperiodic reduced elementary-2 Walsh family has at least one — in fact every — genuine grouped coefficient nonzero.

## 11. Same-point arithmetic conclusion

T10 proves that representatives from distinct rational-multiple classes, together with (1), have linearly independent values over
[
\overline{\mathbb Q}
]
at the exact regular 2-adic point (W).

By T11 all genuine classes are singletons. Therefore
[
1,\{P_\chi(W):\chi\in\mathcal I\}
]
are linearly independent over (overline{\mathbb Q}).

The exact Fourier value is
[
F_0(W)
=
\frac1{|G|}
\left[
\text{rational components}
+
\sum_{\chi\in\mathcal I}
\widehat C_\chi P_\chi(W)
\right].
	ag{52}
]

If the family is genuinely nonperiodic, (mathcal I\ne\varnothing), and every coefficient
[
\widehat C_\chi
]
in (52) is nonzero.

Thus
[
oxed{
F_0(W)\notin\overline{\mathbb Q}.
}
	ag{53}
]

In particular
[
F_0(W)\notin\mathbb Q.
]

The exact inverse-Collatz value is a nonzero rational multiple of (F_0(W)); under the T8/T10 normalization,
[
H=-\frac{F_0(W)}{3^k}.
	ag{54}
]

Hence
[
oxed{
H\notin\overline{\mathbb Q},
\qquad
H\notin\mathbb Q,
\qquad
H\notin\mathbb Z_2,
\qquad
H\notin\mathbb Z,
\qquad
H\notin\mathbb Z_{>0}.
}
	ag{55}
]

The first statement is 2-adic transcendence; the remaining exclusions follow immediately.

Therefore there is no positive-integer anchor in the genuinely nonperiodic T11 family.

## 12. The positive exceptional branch is empty for the genuine T11 class

T10 left open the possibility that every grouped nonrational coefficient might vanish, reducing the exact inverse value to the rational part.

T11 eliminates that possibility.

For a genuinely nonperiodic reduced elementary-2 Walsh family:
[
\mathcal I\ne\varnothing
]
and every genuine class is a singleton with
[
A_{C_\chi}(W)=\widehat C_\chi\ne0.
]

So there is no exceptional rational higher-rank value to pass to tests of

[
\mathbb Q_2,
qquad
\mathbb Q,
qquad
\mathbb Z_2,
qquad
\mathbb Z,
qquad
\mathbb Z_{>0}.
]

Rational-component-only systems can of course remain rational, but their relevant coefficient sequence is periodic and they are not a genuinely nonperiodic residual family. T11 does not reinterpret those periodic systems as divergence candidates.

## 13. Stronger finite-abelian corollary

The divisor theorem in Sections 4–5 did not use the sign restriction (pm1). It used only:

[
S(0)=T(0)=1,
qquad
\deg S=\deg T=k-1.
]

For a finite abelian translation kernel, every character value is a root of unity, so its digit polynomial still has those two properties.

If a nontrivial pairwise coboundary occurs, Sections 4–5 force
[
S=Q_\beta,
qquad
T=Q_\alpha,
]
with (alpha,eta) fixed by (z\mapsto z^k).

But
[
Q_\gamma(z)
=
\frac{1-z^k/\gamma}{1-z/\gamma},
]
so the normalized first-order product is
[
P_\gamma(z)
=
\frac1{1-z/\gamma},
	ag{56}
]
which is rational.

Thus:

> In any finite abelian translation family with full-length character digit polynomials, two distinct normalized first-order character products can be rational-function multiples only if both products are individually rational.

After rational characters are removed, every genuine character class is again a singleton.

The relevant coefficient field is then cyclotomic rather than (mathbb Q). This causes no conceptual obstruction to the T10 lifting theorem, which is formulated at arbitrary places of number fields. Character coefficients are algebraic units, and at a place above (2),
[
S_\chi(W^{k^j})
=
1+O_v(W^{k^j}),
]
so the same constant-term argument gives nonvanishing along the complete Mahler orbit.

Accordingly, subject to the exact T7 finite-abelian translation setup and exact support/rational-component preprocessing, the T11 obstruction extends from elementary (2)-groups to finite abelian translation kernels.

This corollary does **not** solve arbitrary nonabelian translation systems or generic finite (k)-kernel Mahler systems.

## 14. Consequence back to T2

T2 proves that, for the finite-alphabet recursive valuation setting, bounded canonical representatives (R_m) are equivalent to ordinary anchoring.

T11 proves that a genuinely nonperiodic family in the covered reduced Walsh class has no ordinary anchor.

Therefore:
[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
	ag{57}
]
for the complete genuinely higher-rank elementary-2 translation/Walsh class covered by T8–T11.

With the finite-abelian corollary of Section 13, the same implication extends to the corresponding balanced finite-abelian translation class after exact rational-component preprocessing.

By T2, an aperiodic positive anchor would have forced an unbounded Collatz orbit. T11 shows that no such anchor exists in these classes.

This is an obstruction theorem, not a Collatz counterexample.

## 15. Restricted Periodicity-Conjecture boundary after T11

T5 identified the residual automatic anchoring question as a restricted form of the 3x+1 Periodicity Conjecture.

T6 removed a first-order balanced complementary subclass.

T7 isolated finite abelian translation kernels as an exactly Fourier-diagonal higher-rank class.

T8–T10 reduced the elementary-2 version to pairwise rational coboundaries plus grouped weights.

T11 now closes that residual branch completely.

The restricted boundary no longer contains any genuinely nonperiodic balanced reduced elementary-2 translation/Walsh family.

The T11 divisor theorem also removes the pairwise-collision obstruction for the broader finite-abelian translation family after rational character components are removed.

What remains is structurally different:

- nonabelian translation systems, whose Fourier/representation decomposition contains higher-dimensional irreducible blocks;
- generic balanced finite (k)-kernel Mahler systems not arising from abelian translations;
- the more general multivariate/unbalanced automatic inverse systems from T5;
- other recursive languages outside the balanced one-variable Mahler framework.

The general Periodicity Conjecture is not solved.

## 16. Periodic-point and backward-tree audit

The divisor proof automatically incorporates the periodic/preperiodic constraints requested for T11.

For a coboundary
[
q=R/R\circ\phi
]
and a finite periodic cycle
[
x_0\mapsto x_1\mapsto\cdots\mapsto x_{\ell-1}\mapsto x_0
]
away from (0,\infty),
[
\operatorname{ord}_{x_j}(q)
=
D(x_j)-D(x_{j+1}).
]
Summing gives
[
\sum_{j=0}^{\ell-1}
\operatorname{ord}_{x_j}(q)=0.
	ag{58}
]

At fixed points this forces
[
\operatorname{ord}_x(q)=0.
]

The degree-norm argument is stronger than checking these cycles one by one. It shows that the entire divisor (D) can have positive degree at most one. Once
[
D=[\alpha]-[\beta],
]
the finite digit degree budget forces both endpoints themselves to be fixed. Every other backward branch is cut off by the exact cancellation encoded in
[
Q_\gamma(z)=\frac{z^k-\gamma}{z-\gamma}.
]

Thus roots whose (k)-ary backward trees are not terminated by a fixed-point cancellation cannot occur in a degree-((k-1)) pairwise Walsh coboundary.

The special points (0) and (infty) are excluded from (D) by (23)–(24). The points (1) and (-1) emerge as the only fixed points compatible with (pm1) Walsh coefficients.

This supplies the requested exact divisor/orbit criterion without finite factor enumeration.

## 17. Character multiplication and class geometry

T11 does not assume equivalence classes inherit a group structure.

The classification proves something stronger: after rational-component removal there are no nontrivial equivalence classes to organize.

Before removal, the only possible elementary-2 nonidentity relation is the odd-(k) trivial/alternating pair.

That pair happens to consist of the identity character and the unique alternating character, but no group-coset principle was used to derive it. It follows from the divisor degree bound and the coefficient restriction.

Thus no unsupported subgroup/coset structure is imported into the collision relation.

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
- `docs/COMPUTE_BUDGET.md`: **UNCHANGED**;
- `docs/METRIC_CATALOG.md`: **UNCHANGED**.

The theorem is exact and removes a symbolic class; there is no candidate population to extend.

## 20. Deliverable checklist

- exact T10 theorem state inherited: **YES**;
- exact reduced quotient:
  [
  G=E/K_C;
  ]
- exact true kernel dimension:
  [
  m=|G|;
  ]
- exact genuine Fourier support:
  [
  \mathcal I=
  \mathcal S_C\setminus\{\text{trivial, possible alternating rational component}\};
  ]
- exact rational components removed: **YES**;
- every pairwise rational-function-multiple class: **classified exactly**;
- every pairwise coboundary: **classified exactly**;
- exact divisor/orbit criterion: **Sections 4–6**;
- exact nontrivial rational multiplier:
  [
  R_{\rm alt,1}(z)=\frac{1-z}{1+z}
  ]
  for odd (k), before rational-component removal;
- pairwise collisions universally impossible among genuine components: **YES**;
- exact collision families if rational components are retained: **only trivial/alternating for elementary-2 Walsh**;
- every grouped coefficient:
  [
  A_{\{\chi\}}(W)=\widehat C_\chi;
  ]
- can an individual genuine grouped coefficient vanish?: **NO, by exact support**;
- can all genuine grouped coefficients vanish simultaneously?: **NO**;
- same-point rational cancellation completely excluded in the genuine class: **YES**;
- entire higher-rank elementary-2-group Walsh class ruled out from aperiodic positive anchoring: **YES**;
- broader finite-abelian translation corollary: **YES, after exact rational-component preprocessing**;
- genuinely new recursive-language obstruction obtained: **YES**;
- bounded (R_m) implies periodicity for a new class: **YES**;
- restricted Periodicity-Conjecture boundary further reduced: **YES**;
- genuinely nonperiodic rational exceptional inverse value survives: **NO**;
- rational-only periodic branch: **still rational/periodic, not a divergence candidate**;
- Cobham applies: **NO**;
- López–Stoll load-bearing: **NO**;
- explicit anchored aperiodic word exists: **NO**;
- candidate or unbounded orbit found: **NO**;
- counterexample claimed: **NO**;
- future compute justified: **NO**.

## 21. Exact next theorem-sized obligation

The elementary-2 Walsh collision problem is closed, and the same degree argument also removes genuine pairwise collisions in the finite-abelian translation setting.

The next theorem-sized obstruction should therefore move beyond one-dimensional character factors.

A natural T12 target is:

> **Finite nonabelian translation / higher-dimensional representation audit.**
>
> Let a balanced (k)-uniform translation system be driven by a finite group whose regular representation decomposes into irreducible blocks of dimension greater than one. Derive the exact matrix Mahler blocks over a number field, preserve the Collatz output vector and exact Fourier/representation weights, and determine whether the Adamczewski–Bell–Smertnig lifting theorem plus a functional module-relation classification excludes algebraic cancellation at (W=2^B/3^k).
>
> Equivalently, classify the rational-function linear relations among the relevant irreducible matrix-block outputs and decide whether the prescribed Collatz coordinate can lie in the rational-function span of the rational blocks.
>
> If this fails, isolate the exact higher-dimensional obstruction rather than returning to substitution enumeration or generic p-adic literature search.

No new scientific compute is authorized for that obligation.

## 22. Permanent lesson

The T10 residual finite cancellation problem looked Collatz-specific because the Fourier weights are Collatz block constants.

T11 shows that, in the reduced Walsh family, the real rigidity occurs one level earlier.

The digit polynomials have the exact maximal length permitted by one base-(k) digit:
[
\deg S_i=k-1.
]

A nontrivial coboundary
[
S_i/S_j=R/R(z^k)
]
tries to pull the divisor of (R) back through a degree-(k) map. The total divisor variation therefore expands by a factor (k). The available digit degree can absorb that expansion only when (R) has exactly one zero and one pole, and then only when both lie at fixed points of (z\mapsto z^k). Those fixed-point cocycles are precisely the individually rational Mahler products.

So genuine nonrational components cannot collide pairwise.

Once that is known, T10's same-point lifting theorem makes the Collatz grouped-weight problem disappear: every genuine class is a singleton and exact Fourier support already supplies the required nonzero coefficient.

The higher-rank elementary-2 Walsh branch is therefore closed as an anchoring route.

C — new recursive-language obstruction found
