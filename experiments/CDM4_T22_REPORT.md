# CDM4-T22 — MULTISCALE REDUCIBLE TORIC RELATION-LIFTING / HEIGHT-FILTRATION AUDIT

**Date:** 2026-10-04  
**Authoritative input commit:** 4866cb1192d6ba376b0bcd607b4da7e462df9275  
**Repository:** jfairfaxball-348/Collatz-Divergence-Machine

Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. Finite residue/carry/exponent-code search: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T22 does **not** prove universal unequal-growth reducible exact lifting.

It does, however, identify the obstruction exactly enough to rule out the principal proposed repairs inside the inherited T16–T18 architecture.

Let
\[
q_{a+Rn}
\]
be a T18-reduced dense arithmetic-progression tail, let
\[
N_Y=\mathbb Z^m/R_Y
\]
be the reduced character lattice, let
\[
\Gamma_Y=\pi_Y(\mathbb N^m),
\]
and let
\[
A_Y
\]
be the pullback induced by \(M^R\).

For a reduced character \(\gamma=\pi_Y(\mu)\), define the exact normalized exponent increments
\[
L_\gamma(n)
=
\mathbf1^TM^a(M^{Rn}-I)\mu,
\]
\[
V_\gamma(n)
=
v^TM^a(M^{Rn}-I)\mu.
\]

These are independent of the chosen lift \(\mu\). Indeed, if two lifts differ by a relation in \(R_Y\), both exponent increments vanish on that relation by the same multiplicative-independence argument used in T21.

After a finite period refinement, every nonzero such recurrence has an exact exponential-polynomial growth profile. For positive regular characters
\[
\gamma\in\Gamma_Y\setminus\{0\},
\]
the length and valuation increments have the same lexicographic profile
\[
\operatorname{prof}(\gamma)=(\rho(\gamma),e(\gamma)),
\]
ordered first by exponential radius and then by polynomial degree.

This profile is intrinsic to the **reduced character**, not to an ambient SCC label or a chosen representative. Quotient relations can cancel ambient leading terms for signed characters; the effective profile is therefore defined only after passing to the exact reduced exponent recurrences.

The positive semigroup admits a finite growth filtration
\[
\Gamma_{\le 1}
\subset
\Gamma_{\le 2}
\subset
\cdots
\subset
\Gamma_{\le r}
=
\Gamma_Y,
\]
where \(\Gamma_{\le i}\) consists of positive characters of profile at most the \(i\)-th surviving scale. For positive characters,
\[
\operatorname{prof}(\gamma+\eta)
=
\max\{\operatorname{prof}(\gamma),\operatorname{prof}(\eta)\},
\]
because leading positive contributions do not cancel. The filtration is \(A_Y\)-stable after the common period refinement.

The T21 scalar increment weight
\[
w_\Delta(\pi_Y(x))
=
\mathbf1^TM^a(M^R-I)x
\]
remains the correct additive support degree. It already gives finite-dimensional truncations and exponential pullback displacement. A second vector grading is not needed for the local Hilbert count.

The decisive new T22 comparison is global.

Choose any finite positive monomial generating set
\[
\gamma_1,\ldots,\gamma_s
\]
for the reduced toric boundary chart and write
\[
x_{n,i}
=
\theta^{\gamma_i}(q_{a+Rn}).
\]
Then, for all sufficiently large \(n\),
\[
x_{n,i}
=
\frac{2^{V_{\gamma_i}(n)}}{3^{L_{\gamma_i}(n)}},
\]
up to the fixed normalization already absorbed into \(\theta\), and
\[
h(x_{n,i})
=
\max\{
V_{\gamma_i}(n)\log 2,\,
L_{\gamma_i}(n)\log 3
\}.
\]

Hence
\[
\widehat h(x_n)
=
\sum_i h(x_{n,i})
=
\Theta(g_{\rm fast}(n)),
\]
where \(g_{\rm fast}\) is the fastest surviving positive growth scale, while
\[
-\log\max_i|x_{n,i}|_2
=
(\log 2)\min_iV_{\gamma_i}(n)
=
\Theta(g_{\rm slow}(n)).
\]

Corvaja–Zannier Theorem 3 requires precisely
\[
\boxed{
\widehat h(x_n)
=
O\!\left(
-\log\max_i|x_{n,i}|_2
\right).
}
\]

Therefore, in this reduced Collatz toric setting,
\[
\boxed{
\text{the inherited Corvaja–Zannier condition holds}
\iff
g_{\rm fast}(n)=O(g_{\rm slow}(n)).
}
\]

For exponential-polynomial profiles this is equivalent, after period refinement, to all positive toric generators having one comparable effective pair
\[
(\rho,e).
\]

Thus the T21 balanced-growth condition is not merely a convenient sufficient estimate. It is exactly the height-versus-boundary condition required by the Corvaja–Zannier theorem used in T17/T18.

If
\[
\rho_{\rm fast}>\rho_{\rm slow},
\]
then
\[
\frac{\widehat h(x_n)}
{-\log\max_i|x_{n,i}|_2}
\asymp
\left(
\frac{\rho_{\rm fast}}
{\rho_{\rm slow}}
\right)^n
n^{e_{\rm fast}-e_{\rm slow}}
\to\infty.
\]

If the radii agree but
\[
e_{\rm fast}>e_{\rm slow},
\]
the same ratio grows like
\[
n^{e_{\rm fast}-e_{\rm slow}}
\to\infty.
\]

A multigraded support filtration does not alter these point heights or local absolute values.

T22 also proves that the canonical scalar prevents quotienting away the slow direction while preserving the exact Collatz specialization. The support of
\[
S|_Y
\]
contains the reduced prefix characters
\[
\pi_Y(c(n)).
\]
Since
\[
c(n+1)-c(n)=e_{u_n},
\]
and every reachable letter occurs in the prolongable fixed point, the group generated by the scalar support contains every
\[
\pi_Y(e_s).
\]
These generate \(N_Y\). Therefore
\[
\boxed{
\langle\operatorname{Supp}(S|_Y)\rangle_{\mathbb Z}
=
N_Y.
}
\]

Consequently there is no positive-dimensional torus quotient through which the canonical scalar factors and which deletes a surviving growth stratum. Passing to a smaller orbit closure is also unavailable: T18 has already selected a Zariski-dense orbit in \(H\), and Bell–Ghioca–Tucker makes every proper algebraic subvariety meet that orbit only finitely often.

Fixed weighted-projective embeddings, fixed monomial coordinate changes, Rees regradings, and fixed powers of coordinates also do not repair the mismatch. They multiply exponent vectors and heights by fixed constants but cannot turn a ratio
\[
g_{\rm fast}(n)/g_{\rm slow}(n)\to\infty
\]
into a bounded one.

The T16 auxiliary-function contradiction exhibits the same obstruction independently. In a genuine active multiscale system, the nonarchimedean high-support upper bound is controlled in the worst active direction by the slow contraction scale, while Liouville lower bounds inherit the fastest global algebraic height. No fixed auxiliary degree or fixed multigrading parameter can beat a scale ratio that diverges with the orbit index.

Therefore:

\[
\boxed{
\text{one scalar grading suffices for support geometry,}
}
\]

but

\[
\boxed{
\text{no fixed multigrading repairs the inherited global arithmetic step.}
}
\]

This is a theorem about the **current proof interface**, not a proof that exact lifting is mathematically false.

The unresolved class is now sharper:

\[
\boxed{
\text{GENUINELY ACTIVE UNEQUAL-GROWTH REDUCED TORIC SYSTEMS}
}
\]
for which
\[
g_{\rm fast}/g_{\rm slow}\to\infty.
\]

A new zero theorem or a genuinely stratified/asynchronous lifting theorem is required. The existing Corvaja–Zannier/T16/T17 mechanism cannot simply be reweighted.

No new positive-integer anchor exclusion beyond T21 is obtained in T22. No new T2 periodicity class is therefore promoted.

## 2. T21 state inherited without reopening

T22 treats the following as closed.

### 2.1 Exact variable-length scalar transport

For
\[
L_J(n)=\mathbf1^TM^Jc(n),
\]
\[
\sigma^J(u_{<n})=u_{<L_J(n)},
\]
\[
A_{L_J(n)}=v^TM^Jc(n),
\]
and
\[
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
\]

The false uniform endpoint \(nk^J\) is not restored.

### 2.2 Ordinary-prefix arithmetic

For every expanding nonerasing pure-morphic fixed point in T21 scope,
\[
\beta
=
\limsup_{n\to\infty}\frac{A_n}{n}
\in\overline{\mathbb Q}.
\]

The liminf and limsup are the minimum and maximum of the finite algebraic stationary-policy set constructed in T21, and
\[
\operatorname{Acc}(A_n/n)
=
[\liminf A_n/n,\limsup A_n/n].
\]

### 2.3 Positive-integer strict gap

Under a hypothetical genuinely aperiodic positive integer Collatz anchor,
\[
\beta\le\log_2 3.
\]
Since \(\beta\) is algebraic and \(\log_2 3\) is transcendental,
\[
\beta<\log_2 3.
\]

Hence the canonical scalar and every canonical state subseries converge absolutely in the real completion at every actual tail used below.

### 2.4 Positive reduced increment grading

On a sufficiently deep period-refined T18 tail,
\[
d^T
=
\mathbf1^TM^a(M^R-I)
\]
annihilates \(R_Y\), is positive on every reachable positive generator, and defines
\[
w_\Delta(\pi_Y(x))=d^Tx.
\]

There exist
\[
C>0,\qquad \kappa>1
\]
such that
\[
w_\Delta(A_Y^n\gamma)
\ge
C\kappa^nw_\Delta(\gamma).
\]

This already closes positive support, finite codimension, exponential support displacement, and nonarchimedean boundary attraction.

### 2.5 Balanced-growth exact lifting

If all surviving reduced positive generators have one comparable exponential-polynomial scale, T21 inherits the exact T17/T18 lift:
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

Appending \(1\) is harmless, pointwise real completion portability applies, and the positive completion-sign contradiction excludes positive integer anchors.

T22 does not reopen this class.

## 3. Reduced orbit notation

Fix the T18-reduced arithmetic-progression tail
\[
q_{a+Rn}
\]
inside a translated torus
\[
Y=tH
\]
on which the selected orbit is Zariski dense.

Let
\[
R_Y
\subset
\mathbb Z^m
\]
be the complete character-relation lattice and
\[
N_Y=\mathbb Z^m/R_Y.
\]

Let
\[
\pi_Y:\mathbb Z^m\to N_Y
\]
be the quotient map and
\[
\Gamma_Y=\pi_Y(\mathbb N^m).
\]

After translating by \(t=q_a\), write the normalized reduced characters as
\[
\theta^\gamma.
\]

The pullback has the affine-toric form
\[
\rho^*\theta^\gamma
=
u_\gamma\theta^{A_Y\gamma},
\qquad
u_\gamma\in\overline{\mathbb Q}^{\times},
\]
with \(A_Y\) induced by \(M^R\).

Translation constants affect coefficient heights by fixed algebraic multiplicative data and their iterates, but do not alter the exponential-polynomial growth class derived below.

## 4. Exact reduced exponent sequences and quotient cancellation

Let
\[
\gamma=\pi_Y(\mu)\in N_Y.
\]

Define
\[
L_\gamma(n)
=
\mathbf1^TM^a(M^{Rn}-I)\mu,
\]
and
\[
V_\gamma(n)
=
v^TM^a(M^{Rn}-I)\mu.
\]

Then
\[
\boxed{
\theta^\gamma(q_{a+Rn})
=
\frac{2^{V_\gamma(n)}}{3^{L_\gamma(n)}}.
}
\]

### Theorem T22.1 — reduced exponent well-definedness

The integer sequences
\[
L_\gamma(n),
\qquad
V_\gamma(n)
\]
depend only on \(\gamma\), not on the lift \(\mu\).

#### Proof

If
\[
\mu'=\mu+r,
\qquad
r\in R_Y,
\]
then the character \(q_{a+Rn}^r\) is constant on the selected progression.

Hence
\[
2^{v^TM^a(M^{Rn}-I)r}
3^{-\mathbf1^TM^a(M^{Rn}-I)r}
=1.
\]

Multiplicative independence of \(2\) and \(3\) gives separately
\[
v^TM^a(M^{Rn}-I)r=0,
\]
\[
\mathbf1^TM^a(M^{Rn}-I)r=0.
\]

Therefore both exponent increments are unchanged. QED.

This is the correct way to handle quotient cancellation. Ambient SCC labels are not intrinsic after T18 reduction.

If two ambient generators become the same reduced character, their normalized length and valuation exponent sequences are exactly the same, not merely asymptotically comparable.

For a signed reduced character, leading ambient contributions can cancel. Its effective profile must therefore be read from the exact sequences \(L_\gamma,V_\gamma\), not from an arbitrary representative.

## 5. Complete growth-profile hierarchy

The sequences \(L_\gamma(n)\) and \(V_\gamma(n)\) are linear-recurrence sequences obtained from powers of the finite nonnegative matrix \(M^R\).

After refining \(R\) by one common imprimitive period, every nonzero positive-generator sequence has an asymptotic of the form
\[
n^e\rho^n
(c+O(n^{-1}))
+
o(n^e\rho^n),
\]
with
\[
\rho>1,
\qquad
e\in\mathbb Z_{\ge0},
\qquad
c>0
\]
algebraic before multiplication by logarithms.

For
\[
\gamma\in\Gamma_Y\setminus\{0\},
\]
define
\[
\boxed{
\operatorname{prof}(\gamma)
=
(\rho(\gamma),e(\gamma)).
}
\]

Order profiles lexicographically:
\[
(\rho,e)<(\rho',e')
\]
if either
\[
\rho<\rho'
\]
or
\[
\rho=\rho'
\quad\text{and}\quad
e<e'.
\]

For positive characters, \(L_\gamma\) and \(V_\gamma\) have the same profile. Indeed a nonnegative ambient lift \(x\) gives
\[
v_{\min}\mathbf1^TM^{a+Rn}x
\le
v^TM^{a+Rn}x
\le
v_{\max}\mathbf1^TM^{a+Rn}x,
\]
and subtracting the fixed \(n=0\) constants does not change the leading profile.

### Positive addition law

If
\[
\gamma,\eta\in\Gamma_Y,
\]
then
\[
L_{\gamma+\eta}=L_\gamma+L_\eta,
\qquad
V_{\gamma+\eta}=V_\gamma+V_\eta.
\]

All leading coefficients are nonnegative and positive on the effective top class. Therefore
\[
\boxed{
\operatorname{prof}(\gamma+\eta)
=
\max\{
\operatorname{prof}(\gamma),
\operatorname{prof}(\eta)
\}.
}
\]

No cancellation occurs inside the positive semigroup.

For signed characters in \(N_Y\), this max rule is false in general. T22 never assigns a signed character the profile of an arbitrary positive-minus-positive presentation; it uses its actual reduced recurrence.

## 6. The finite growth filtration

Let the distinct positive profiles be
\[
g_1<g_2<\cdots<g_r.
\]

Define
\[
\Gamma_{\le i}
=
\{
\gamma\in\Gamma_Y:
\operatorname{prof}(\gamma)\le g_i
\}
\cup\{0\}.
\]

Then:

1. each \(\Gamma_{\le i}\) is a subsemigroup;
2. the chain is finite;
3. each \(\Gamma_{\le i}\) is generated by those reduced ambient positive generators whose effective profile is at most \(g_i\);
4. after the common period refinement,
   \[
   A_Y\Gamma_{\le i}
   \subseteq
   \Gamma_{\le i}.
   \]

The fourth point follows because applying \(A_Y\) shifts the same exact matrix-power recurrence by one fixed progression step and does not create a larger exponential-polynomial class.

Thus
\[
\boxed{
0\subset
\Gamma_{\le1}
\subset\cdots\subset
\Gamma_{\le r}
=
\Gamma_Y
}
\]
is the complete positive growth filtration.

### High-growth ideals

Let
\[
I_{>i}
=
\operatorname{span}
\{
\theta^\gamma:
\operatorname{prof}(\gamma)>g_i
\}
\subset
K[\Gamma_Y].
\]

Because the profile of a positive sum is the maximum profile,
\[
I_{>i}
\]
is a monomial ideal.

This gives a legitimate nested growth-stratum filtration of the semigroup ring.

It is useful bookkeeping, but by itself it is not a finite-codimensional filtration.

## 7. The scalar support grading remains the finite-dimensional filtration

Pair the growth strata with the T21 weight
\[
w_\Delta.
\]

For each \(i\) and \(p>0\), consider
\[
\{
\gamma\in\Gamma_{\le i}:
w_\Delta(\gamma)<p
\}.
\]

Because \(w_\Delta\) is a positive integral degree on a finitely generated pointed semigroup, this set is finite.

Let
\[
d_i
=
\operatorname{rank}_{\mathbb Z}
\langle\Gamma_{\le i}\rangle.
\]

Hilbert–Serre theory gives polynomial/quasipolynomial cumulative growth of degree \(d_i\):
\[
\#\{
\gamma\in\Gamma_{\le i}:
w_\Delta(\gamma)<p
\}
=
O(p^{d_i}),
\]
and, on every full-dimensional stratum cone,
\[
\Theta(p^{d_i}).
\]

The bivariate bookkeeping rule is
\[
(\text{growth class},w_\Delta)(\gamma+\eta)
=
(
\max\{\text{class}(\gamma),\text{class}(\eta)\},
w_\Delta(\gamma)+w_\Delta(\eta)
).
\]

Hence a Rees-style or lexicographic filtration can be built formally.

But the original positive scalar degree already supplies the finite-dimensional auxiliary spaces. Multigrading is **not** needed to repair the Hilbert count.

## 8. Classwise support displacement

T21 proves the universal lower bound
\[
w_\Delta(A_Y^n\gamma)
\ge
C\kappa^nw_\Delta(\gamma).
\]

T22 refines the statement classwise.

After common period refinement, for every positive generator \(g\) of exact profile
\[
(\rho_i,e_i),
\]
there is a positive algebraic leading coefficient \(c_g\) such that
\[
\boxed{
w_\Delta(A_Y^n g)
=
c_g n^{e_i}\rho_i^n
(1+O(n^{-1}))
+
o(n^{e_i}\rho_i^n).
}
\]

For a fixed positive character
\[
\gamma=\sum_j a_jg_j,
\qquad
a_j\ge0,
\]
the leading class is the largest class occurring with \(a_j>0\), and the leading coefficient is the corresponding positive linear combination of the \(c_{g_j}\).

Thus each associated growth stratum has an exact positive leading functional.

Equal-radius Jordan/Frobenius chains are retained through the exponent \(e_i\).

Imprimitive modulation has already been absorbed into the period refinement.

Affine torus translation changes the multiplicative coefficient \(u_\gamma\), not this exponent support law.

This answers the classwise pullback-growth question. The obstruction is not a failure to understand support displacement.

## 9. Exact global height asymptotics

Choose a finite positive monomial generating set
\[
\gamma_1,\ldots,\gamma_s
\]
for the toric semigroup chart.

Set
\[
x_{n,i}
=
\theta^{\gamma_i}(q_{a+Rn}).
\]

For large \(n\),
\[
L_{\gamma_i}(n)>0,
\qquad
V_{\gamma_i}(n)>0,
\]
and
\[
x_{n,i}
=
\frac{2^{V_{\gamma_i}(n)}}{3^{L_{\gamma_i}(n)}}.
\]

Because the numerator and denominator are coprime,
\[
\boxed{
h(x_{n,i})
=
\max\{
V_{\gamma_i}(n)\log2,\,
L_{\gamma_i}(n)\log3
\}.
}
\]

Consequently
\[
h(x_{n,i})
=
C_i
n^{e_i}\rho_i^n
(1+o(1))
\]
for some
\[
C_i>0.
\]

Let
\[
(\rho_{\max},e_{\max})
=
\max_i\operatorname{prof}(\gamma_i).
\]

Then
\[
\boxed{
\widehat h(x_n)
=
\sum_i h(x_{n,i})
=
C_H
n^{e_{\max}}\rho_{\max}^n
(1+o(1)),
}
\]
with
\[
C_H>0.
\]

Thus the **fastest effective reduced positive class** controls global coordinate height.

An ambient fast SCC which disappears in the quotient does not contribute. Conversely, an ambient cancellation cannot be ignored unless it is present in the exact reduced exponent sequence.

This is the sharp height statement needed by T22.

## 10. Exact local 2-adic contraction

For every positive reduced character
\[
\gamma\in\Gamma_Y\setminus\{0\},
\]
\[
\boxed{
-\log
|\theta^\gamma(q_{a+Rn})|_2
=
(\log2)V_\gamma(n).
}
\]

If
\[
\operatorname{prof}(\gamma)
=
(\rho_\gamma,e_\gamma),
\]
then
\[
\boxed{
-\log
|\theta^\gamma(q_{a+Rn})|_2
=
C_\gamma
n^{e_\gamma}\rho_\gamma^n
(1+o(1)),
}
\]
with
\[
C_\gamma>0.
\]

For the chosen finite positive coordinate set,
\[
-\log\max_i|x_{n,i}|_2
=
(\log2)\min_iV_{\gamma_i}(n).
\]

Therefore the least rapidly contracting positive generator controls the ordinary polydisc distance to the toric boundary.

This is exactly where the slow scale enters.

## 11. Corvaja–Zannier interface: exact criterion

Corvaja and Zannier, **S-unit points on analytic hypersurfaces**, Ann. Sci. Éc. Norm. Supér. 38 (2005), Theorem 3, require for the zero sequence
\[
x_n=(x_{n,1},\ldots,x_{n,s})
\]
of \(S\)-unit points tending to the origin that
\[
\boxed{
\widehat h(x_n)
=
O\!\left(
-\log\max_i|x_{n,i}|_\nu
\right).
}
\]

Their preceding discussion explicitly identifies the corresponding height-versus-local-size condition as crucial.

In the present Collatz toric orbit all coordinates are exact \(\{2,3\}\)-units, so the \(S\)-unit hypothesis is automatic. The only disputed hypothesis is the displayed scale comparison.

Using Sections 9 and 10 gives:

### Theorem T22.2 — Corvaja–Zannier balance criterion

For a finite positive monomial presentation of the reduced boundary chart,
\[
\widehat h(x_n)
=
O\!\left(
-\log\max_i|x_{n,i}|_2
\right)
\]
if and only if
\[
\max_i g_i(n)
=
O(\min_i g_i(n)),
\]
where
\[
g_i(n)
=
n^{e_i}\rho_i^n.
\]

After period refinement this is equivalent to
\[
\boxed{
(\rho_i,e_i)
=
(\rho_*,e_*)
\quad
\text{for every positive generator }i.
}
\]

#### Unequal radii

If
\[
\rho_{\max}>\rho_{\min},
\]
then
\[
\frac{\widehat h(x_n)}
{-\log\max_i|x_{n,i}|_2}
\gg
\left(
\frac{\rho_{\max}}
{\rho_{\min}}
\right)^n
n^{-O(1)}
\to\infty.
\]

#### Equal radius, unequal polynomial degree

If
\[
\rho_{\max}=\rho_{\min}=\rho
\]
but
\[
e_{\max}>e_{\min},
\]
then
\[
\frac{\widehat h(x_n)}
{-\log\max_i|x_{n,i}|_2}
\gg
n^{e_{\max}-e_{\min}}
\to\infty.
\]

Thus the complete exponential-polynomial hierarchy matters, not just the spectral radius.

## 12. Adamczewski–Faverjon admissibility gives the same boundary

The now-published Adamczewski–Faverjon paper **Mahler's method in several variables and finite automata**, Annals of Mathematics 204 (2026), retains an explicit common-scale admissibility condition.

Their Definition 5.1 requires numbers
\[
\rho>1,\qquad c>0
\]
such that:

- coefficients of \(T^k\) are \(O(\rho^k)\);
- every coordinate of \(T^k\alpha\) satisfies a common contraction estimate
  \[
  \log|\alpha_i^{(k)}|
  \le
  -c\rho^k
  \]
  for all sufficiently large \(k\);
- the required analytic nonvanishing property holds.

Their Theorem 5.9 characterizes admissibility using their matrix class and independence condition.

The phrase “without any restriction on the matrices” in the 2026 abstract does not mean that an arbitrary algebraic orbit with genuinely unequal coordinate contraction scales is automatically admissible. The pair \((T,\alpha)\) still has a common-scale condition.

The same paper's proof of its vanishing theorem invokes Corvaja–Zannier and verifies the same height-versus-contraction comparison.

Therefore the 2026 publication does not silently close the T22 multiscale branch.

## 13. Why a fixed vector weight does not repair the global point arithmetic

A vector weight or Newton-polyhedron filtration can distinguish the strata
\[
g_1,\ldots,g_r
\]
inside the formal support.

It cannot change
\[
h(x_{n,i})
\]
or
\[
|x_{n,i}|_2
\]
for the actual algebraic orbit point.

The Corvaja–Zannier condition is a statement about the point sequence itself, not about how the power series support is indexed.

Hence reassigning monomials a vector degree does not alter the ratio
\[
\frac{\widehat h(x_n)}
{-\log\max_i|x_{n,i}|_2}.
\]

This is the precise reason a formal multigrading does not close the inherited zero theorem.

## 14. Why fixed weighted-projective or monomial embeddings do not repair it

Raising a coordinate to a fixed positive power multiplies both its logarithmic height and its local valuation by that fixed power. It leaves its exponential-polynomial class unchanged.

More generally, a fixed regular monomial change on a positive toric chart replaces exponent vectors by fixed nonnegative integer combinations. On the positive cone,
\[
\operatorname{prof}(\gamma+\eta)
=
\max\{
\operatorname{prof}(\gamma),
\operatorname{prof}(\eta)
\}.
\]

Therefore fixed monomial coordinate changes cannot transform two genuinely distinct classes into one common class while still generating the same semigroup algebra.

A fixed weighted-projective embedding is likewise a fixed algebraic height change. It can alter constants but not replace
\[
\rho_{\rm fast}^n
\]
by
\[
\rho_{\rm slow}^n
\]
or remove a factor \(n^{e_{\rm fast}-e_{\rm slow}}\).

Thus:
\[
\boxed{
\text{fixed weighted/projective re-embedding does not cure active scale separation.}
}
\]

## 15. The canonical scalar forbids quotienting away an active growth stratum

A possible repair proposed at T21 was to quotient a slow direction.

T22 shows why this is not available if the exact canonical scalar must be preserved.

On the reduced torus,
\[
S|_Y
=
\sum_{n\ge0}
a_n\theta^{\pi_Y(c(n))}
\]
with nonzero algebraic translated coefficients \(a_n\).

For the prefix Parikh vectors,
\[
c(n+1)-c(n)=e_{u_n}.
\]

Every letter reachable from \(a_0\) appears in some \(\sigma^k(a_0)\), and since the morphism is prolongable, every such finite word is a prefix of the fixed point at a sufficiently deep level. Hence every reachable letter occurs in \(u\).

Therefore for every reachable state \(s\), some consecutive scalar-support exponents satisfy
\[
\pi_Y(c(n+1))-\pi_Y(c(n))
=
\pi_Y(e_s).
\]

The images
\[
\pi_Y(e_s)
\]
generate \(N_Y\).

### Theorem T22.3 — scalar-support fullness

\[
\boxed{
\left\langle
\operatorname{Supp}(S|_Y)
\right\rangle_{\mathbb Z}
=
N_Y.
}
\]

Consequently, if the canonical scalar factors through a torus quotient with character lattice
\[
N'\subseteq N_Y,
\]
then every support character lies in \(N'\), hence
\[
N'=N_Y
\]
up to a finite-index isogeny.

No positive-dimensional character direction can be deleted.

Thus:
\[
\boxed{
\text{there is no nontrivial torus quotient that removes a slow active direction while preserving }S.
}
\]

This is stronger than saying that signed reduced coordinates are hard to interpret. It is an exact support-generation statement.

## 16. Why a smaller orbit closure is not available

T18 has already selected a progression whose orbit is Zariski dense in the irreducible torus \(H\).

Bell–Ghioca–Tucker implies that every proper algebraic subvariety of \(H\) meets this dense étale orbit only finitely many times.

Therefore no sufficiently deep infinite suborbit lies in a fixed proper algebraic subvariety that could serve as a smaller exact orbit closure.

A further T18-style orbit-closure reduction cannot remove the multiscale direction.

This leaves a genuinely new analytic/arithmetic problem rather than unfinished Laurent/BGT reduction.

## 17. Dense-orbit zero theorem status

The algebraic part survives unchanged:

- the selected reduced orbit is Zariski dense;
- the translated torus self-map is étale;
- every proper algebraic bad locus has only finitely many hits;
- complete regular tails therefore still exist.

What fails is the analytic-to-algebraic trapping step.

T18 obtains it by applying Corvaja–Zannier to an analytic function vanishing on infinitely many \(S\)-unit orbit points. When the height condition fails, the theorem cannot be invoked.

Zariski density alone does not imply that a nonzero algebraic-coefficient rigid analytic function has only finitely many zeros along the orbit.

Therefore:
\[
\boxed{
\text{Laurent/BGT reuse: UNCHANGED,}
}
\]
but
\[
\boxed{
\text{the T18 analytic dense-orbit zero theorem: NOT PROVED in genuine active multiscale geometry.}
}
\]

## 18. Auxiliary-function upper bound versus Liouville lower bound

The same scale mismatch appears in the T16/T17 auxiliary contradiction.

### Local upper side

A high-support analytic tail gains decay from pullback. T21 guarantees at least
\[
w_\Delta(A_Y^n\gamma)
\ge
C\kappa^n w_\Delta(\gamma).
\]

The classwise refinement shows that a support term in class \(i\) gains
\[
n^{e_i}\rho_i^n
\]
in its exponent.

In a general auxiliary expression involving every active growth stratum, the slowest active class is the worst local decay scale.

### Global lower side

Nonzero algebraic auxiliary values are bounded below by Liouville:
\[
-\log|\beta_n|_2
\le
C\log H(\beta_n).
\]

The height of coefficients and orbit evaluations inherits the fastest active point-height scale
\[
g_{\rm fast}(n).
\]

Thus the generic inherited comparison has the form
\[
\text{upper decay}
\sim
\exp(-cP\,g_{\rm slow}(n)),
\]
against a lower bound of the form
\[
\text{Liouville}
\gtrsim
\exp(-C D\,g_{\rm fast}(n)),
\]
where \(P,D\) are fixed auxiliary parameters chosen before \(n\to\infty\).

If
\[
g_{\rm fast}(n)/g_{\rm slow}(n)\to\infty,
\]
then no fixed choice of \(P/D\) can make the upper exponent dominate the lower exponent for all sufficiently large \(n\).

A vector degree can assign different \(P_i\), but each \(P_i\) is still fixed during the orbit limit. It cannot compensate an \(n\)-dependent divergent scale ratio.

Therefore the inherited T16/T17 quantitative contradiction also stops at the same boundary.

## 19. Rees algebra and associated-graded audit

The growth filtration does define useful algebraic objects.

Let
\[
I_{>i}
\]
be the high-growth monomial ideals from Section 6. One can form a finite Rees-type bookkeeping algebra recording the finite chain
\[
I_{>1}\supseteq I_{>2}\supseteq\cdots.
\]

Likewise one can take the associated graded by growth stratum and retain the \(w_\Delta\)-degree inside each stratum.

This has three valid uses:

1. it records exactly which terms live on which asymptotic scale;
2. it preserves multiplicative compatibility because positive profiles combine by maximum;
3. paired with \(w_\Delta\), every finite truncation remains finite dimensional.

It does **not** by itself preserve the full exact functional relation under degeneration from the filtered ring to the associated graded ring.

In particular, passing to the associated graded can discard lower growth terms that are required for the specialization identity
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

T22 therefore does not replace the exact system by its associated graded system.

## 20. Asynchronous Mahler iteration: relevant but not yet a theorem here

The 2026 Adamczewski–Faverjon paper also treats several independent Mahler transformations. In its purity theorem for multiplicatively independent spectral radii, different systems can be synchronized with different iterate counts so that their effective scales become comparable.

This does not directly solve T22.

The present reducible canonical system is one coupled transformation
\[
A_Y
\]
with a common orbit time \(n\). Its growth strata are generally linked by the triangular Frobenius dynamics and by the canonical scalar support.

An asynchronous iteration
\[
n\mapsto k_i(n)
\]
chosen separately for each stratum would evaluate different pieces of the canonical system at different orbit points. That destroys the original value relation unless a new exact stratified transport theorem is proved.

Therefore asynchronous Mahler theory is a plausible ingredient for the next theorem, but it cannot be imported as a completed exact lift.

## 21. Exact specialization status

For the T21 balanced-growth class:
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
remains proved.

For genuine active unequal growth, T22 does not prove a lift, so it does not manufacture a weaker substitute.

No statement of the form “some functional relation exists” is promoted.

The original specialization polynomial remains mandatory.

## 22. Appending \(1\)

Appending the constant function \(1\) remains algebraically harmless exactly as in T16–T21.

The obstruction is not homogenization.

It is the missing global multiscale zero/lower-bound theorem.

## 23. Scalar convergence remains closed and separate

Under a hypothetical positive integer anchor, T21 already gives
\[
\limsup A_n/n<\log_2 3.
\]

T20 therefore gives absolute real convergence of the canonical scalar and state subseries at every actual tail.

T22 does not revisit this proof.

Thus for the genuine unequal-growth class:
\[
\boxed{
\text{scalar convergence: PROVED under a positive integer anchor,}
}
\]
while
\[
\boxed{
\text{exact relation lifting: OPEN.}
}
\]

## 24. Pointwise completion portability

Pointwise completion portability is not the live obstruction.

Whenever an exact algebraic lift with
\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]
is available, the T19/T21 checklist still applies:

1. choose a deep tail regular for rational coefficients;
2. invoke T21 real scalar/state convergence;
3. verify finite reconstruction matrices are defined;
4. evaluate the exact algebraic identity at the same algebraic point in the real completion.

No real polydisc is needed merely for this pointwise evaluation.

For the active unequal-growth class, this step is waiting on exact lifting and nothing else.

## 25. Completion-sign contradiction status

The sign contradiction remains immediately available for every class for which exact lifting is established.

T22 establishes no new genuinely unequal-growth lifting class.

Therefore no new positive-integer exclusion is promoted.

For the T21 balanced class the inherited contradiction remains:
\[
S^{(\infty)}(q)+3N=0
\]
against
\[
S^{(\infty)}(q)>0,\qquad N>0.
\]

T22 does not infer positivity from signed reduced coordinates.

## 26. Positive rational audit

The T21 strict gap under discussion is derived from a **realized positive integer Collatz anchor**.

Therefore it does not automatically exclude an abstract
\[
H\in\mathbb Q_{>0}.
\]

If an already-lifted system has independently proved intrinsic subcriticality
\[
\limsup A_n/n<\log_2 3,
\]
the inherited sign argument excludes positive rational values as before.

For the genuine multiscale open class, no new positive-rational theorem is obtained.

Negative rational values remain unexcluded and are not Collatz counterexamples.

## 27. T2 bounded-\(R_m\) consequence

No new exact lifting class is closed in T22.

Therefore there is no new T2 promotion beyond T21.

The inherited theorem remains:
\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
\]
for every recursive class already closed through T21.

For genuinely active unequal-growth reducible variable-length systems, this implication is still unproved by the current route.

## 28. Periodicity-Conjecture boundary after T22

| Recursive class | Status after T22 |
|---|---|
| Finite abelian translations | Closed by T11 |
| Finite nonabelian translations | Closed by T12 |
| Balanced one-variable finite-kernel systems | Closed by T13 |
| Primitive dominant multivariate systems | Closed by T16 |
| T17 stable-image systems | Closed; subsumed by T18 after exact reduction |
| T18 orbit-closure-reduced uniform stable-image systems | Exact lifting closed |
| T19 nonprimitive uniform systems | Positive-integer anchor route closed |
| T20 primitive variable-length systems | Positive-integer anchor route closed |
| T21 expanding reducible ordinary-prefix limsup | Algebraic endpoint theorem closed |
| T21 post-T18 reducible positive grading | Closed |
| T21 balanced-growth reducible variable-length systems | Positive-integer anchor route closed |
| T22 genuinely active unequal-growth reducible systems | **OPEN: exact C-Z/admissibility scale condition fails; multigrading alone does not repair it** |
| General morphic presentations with erasing/bounded letters outside T21 normalization | Open |
| Arbitrary automatic/morphic parity languages | Open |
| Full Periodicity Conjecture | Open |

The full Periodicity Conjecture is not solved.

## 29. Cobham, López–Stoll, Brechler, and publication checkpoint

**Cobham:** not applicable to the T22 proof. The language remains morphic/substitutive; no second independent automatic base is supplied.

**López–Stoll:** not load-bearing. No density shortcut or direct completion transfer is used.

**Adamczewski–Faverjon:** rechecked in T22. **Mahler's method in several variables and finite automata** is now published in Annals of Mathematics, Volume 204, Issue 2 (2026), online 2026-09-13, together with its addendum. Its admissibility definition retains a common exponential contraction scale and therefore does not remove the T22 active-multiscale obstruction.

**Brechler:** rechecked on 2026-10-04. arXiv:2607.24877 is still found as version 1 / preprint in the current search. No journal publication was located. Its abstract states stronger multivariate lifting/descent results and \(p\)-adic meromorphy, but T22 found no stated theorem in the accessible record that removes the exact common-scale/admissibility issue for this reduced unequal-growth toric orbit. It is therefore not used as a load-bearing closure theorem.

## 30. Explicit word, candidate, unbounded-orbit, and counterexample audit

Explicit genuinely aperiodic positive-integer anchored word: **NONE**.

Positive Collatz starting integer produced: **NONE**.

Candidate trajectory executed: **NONE**.

Unbounded orbit proved: **NONE**.

Counterexample claimed: **NONE**.

Nontrivial finite cycle investigated: **NONE**.

The root objective remains open.

## 31. Compute decision

No scientific computation is justified by T22.

No new starts.

No substitution enumeration.

No finite residue optimization.

No carry optimization.

No exponent-code search.

No generator or sampling distribution.

No CPU campaign.

No GPU work.

No cloud, cluster, distributed, or volunteer computation.

Only exact theorem reasoning and literature/interface verification were used.

docs/COMPUTE_BUDGET.md: **UNCHANGED**.

docs/METRIC_CATALOG.md: **UNCHANGED**.

## 32. Permanent T22 lessons

### T22-L1 — growth class belongs to the reduced character, not the ambient label

Define it from the exact reduced exponent recurrences
\[
L_\gamma(n),V_\gamma(n).
\]

Relations can cancel ambient leading terms for signed characters. Equal reduced characters have exactly equal normalized exponent recurrences.

### T22-L2 — the positive growth filtration is max-additive, while the T21 support degree remains additive

For positive characters,
\[
\operatorname{prof}(\gamma+\eta)
=
\max(\operatorname{prof}\gamma,\operatorname{prof}\eta),
\]
whereas
\[
w_\Delta(\gamma+\eta)
=
w_\Delta(\gamma)+w_\Delta(\eta).
\]

Use the first for growth strata and the second for finite-dimensional truncations.

### T22-L3 — Corvaja–Zannier balance is exactly the fast/slow comparison

The relevant theorem requires
\[
\widehat h(x_n)
=
O(-\log\max_i|x_{n,i}|_2).
\]

For the reduced positive Collatz torus this is equivalent to comparable effective exponential-polynomial coordinate scales.

Do not cite “\(S\)-unit” or “dense orbit” as sufficient.

### T22-L4 — multigrading repairs bookkeeping, not point height

A vector filtration can record strata and preserve Hilbert control. It cannot alter the actual algebraic height or the slowest local contraction of the orbit points.

### T22-L5 — the canonical scalar is character-full

The prefix-support differences recover every reduced letter generator:
\[
\pi_Y(c(n+1))-\pi_Y(c(n))
=
\pi_Y(e_{u_n}).
\]

Hence
\[
\langle\operatorname{Supp}(S|_Y)\rangle=N_Y.
\]

Do not quotient a surviving torus direction away while claiming to preserve the exact canonical scalar.

### T22-L6 — T18 orbit reduction is already minimal for this purpose

The selected orbit is Zariski dense and étale. Proper algebraic subvarieties contain only finitely many orbit points.

The remaining problem is analytic/diophantine, not another Laurent/BGT reduction.

### T22-L7 — fixed reweightings cannot erase an exponential-polynomial scale gap

Fixed powers, fixed weighted-projective coordinates, fixed monomial embeddings, and fixed auxiliary degree parameters change constants only. They cannot bound a ratio
\[
g_{\rm fast}(n)/g_{\rm slow}(n)\to\infty.
\]

## 33. Exact next theorem-sized obligation

**CDM4-T23 — STRATIFIED / ASYNCHRONOUS MULTISCALE ANALYTIC ZERO THEOREM AND EXACT-LIFTING AUDIT.**

Treat as closed:

- T20 exact variable-length scalar transport;
- T21 algebraic ordinary-prefix limsup and positive-integer strict gap;
- T21 positive increment grading;
- T22 intrinsic reduced growth profiles and finite growth filtration;
- T22 exact global height and local contraction asymptotics;
- T22 equivalence between the inherited Corvaja–Zannier condition and balanced effective growth;
- T22 scalar-support fullness;
- T22 failure of fixed multigrading/re-embedding to repair a genuine active scale gap.

The next theorem must do one of two things.

### Route A — prove a new multiscale zero/lifting theorem

Exploit the finite growth filtration
\[
\Gamma_{\le1}\subset\cdots\subset\Gamma_{\le r}
\]
to prove that a nonzero algebraic-coefficient toric analytic function cannot vanish infinitely often on the exact dense reducible orbit even when
\[
\widehat h(x_n)/
(-\log\max_i|x_{n,i}|_2)
\to\infty.
\]

A plausible mechanism is induction over growth strata, Newton-face dominance, or an asynchronous Mahler argument on associated graded pieces.

It must return to the exact filtered system and preserve
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

### Route B — exhibit a genuine obstruction

Construct or prove the existence of an algebraic-coefficient analytic function, compatible with the reduced toric setting, whose zero set contains an infinite genuinely multiscale dense-orbit subsequence without vanishing identically on the torus.

Such a theorem would show that the T17/T18 zero theorem itself is false in the desired generality and would force a different relation-lifting architecture.

Do not replace either route with finite experiments.

## 34. Deliverable audit

This report states:

- exact T21 theorem state inherited;
- exact unequal-growth lifting obstruction attacked;
- class actually covered;
- reduced semigroup and character lattice;
- complete growth-class filtration;
- quotient cancellation treatment;
- exact effective growth profile definition;
- imprimitive phase treatment;
- equal-radius polynomial-factor treatment;
- affine translation status;
- exact global height asymptotics;
- exact local contraction asymptotics;
- scalar grading sufficiency for support;
- multigrading status;
- classwise support displacement;
- Hilbert/truncation growth;
- exact Corvaja–Zannier criterion;
- Adamczewski–Faverjon admissibility cross-check;
- weighted-projective and monomial re-embedding audit;
- smaller-orbit-closure audit;
- canonical-scalar quotient obstruction;
- Laurent/BGT reuse status;
- dense-orbit zero theorem status;
- auxiliary upper/lower-bound obstruction;
- exact relation-lifting status;
- exact-specialization status;
- appending-\(1\) status;
- scalar-convergence status;
- pointwise completion-portability status;
- completion-sign applicability;
- positive-integer exclusion status;
- positive-rational noninteger status;
- negative-rational status;
- T2 bounded-\(R_m\) consequence;
- exact Periodicity-Conjecture boundary;
- Cobham status;
- López–Stoll status;
- Adamczewski–Faverjon publication status;
- Brechler publication status;
- explicit anchored aperiodic word status;
- candidate/unbounded-orbit/counterexample status;
- future compute status;
- exact next theorem-sized obligation.

D — no qualifying theorem found