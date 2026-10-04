# CDM4-T24 — Principal-fast-ideal / I-adic auxiliary exact-lifting audit

**Date:** 2026-10-04  
**Authoritative input commit:** `3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb`  
**Session type:** theorem / exact semigroup algebra / mixed-place Mahler / literature audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue / carry / exponent-code optimization: **NONE**  
CPU / GPU / cloud / distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T24 does **not** prove exact mixed-place relation lifting for the T23 principal-high-ideal subclass.

It does, however, close the proposed **principal (I)-adic auxiliary repair** as a standalone way of fixing the T22 auxiliary/Liouville scale mismatch.

Let the exact T18-reduced positive character semigroup be
[
Gamma=Gamma_Ysubset N_Y,
]
let
[
A=A_Y
]
be the pullback on characters, and let
[
w=w_Delta
]
be the positive T21 increment grading. Let the distinct positive T22 profiles begin with the slowest class (g_1), and assume
[
I:=I_{>1}=(m),qquad m=	heta^delta.
]

The principal hypothesis is much more rigid than T23 needed for its zero theorem.

### T24 structural theorem 1 — principal high ideal forces exactly two positive profiles

Equality of monomial ideals gives the exact exponent-set identity
[
{gammainGamma:operatorname{prof}(gamma)>g_1}
=
delta+Gamma.
]

If a positive character (gamma) had profile strictly faster than (delta), then
[
gamma=delta+eta_1
]
and max-additivity of positive profiles would force
[
operatorname{prof}(eta_1)=operatorname{prof}(gamma).
]
Hence (eta_1) would again lie in (I), so
[
eta_1=delta+eta_2.
]
Iteration would give
[
gamma=jdelta+eta_j
qquadorall jge1.
]
But positivity of (w) gives
[
w(gamma)ge j,w(delta),
]
impossible for arbitrarily large (j).

Therefore
[
oxed{
	ext{every positive character outside the slow face has the same profile as }delta.
}
]

In particular the principal subclass is genuinely **two-profile**:
[
g_1<g_delta=g_{m fast}.
]
There is no hidden chain of intermediate faster profiles inside powers of one principal generator.

### T24 structural theorem 2 — exact pullback normal form and (I)-order

Because (I) is (A)-stable,
[
Adeltaindelta+Gamma.
]
Define
[
a
=
max{jge1:Adelta-jdeltainGamma}.
]
The maximum is finite because (w(delta)>0). Put
[
arepsilon=Adelta-adelta.
]
Maximality of (a) implies that (arepsilon) is either (0) or slow:
[
arepsiloninGamma_{le1}.
]

For the translated torus map
[
ho(h)=c,Psi_H(h),
]
character pullback therefore has the exact form
[
oxed{
ho^*m
=
u_delta,m^a	heta^arepsilon,
qquad
u_delta=	heta^delta(c)inoverline{mathbb Q}^{	imes}.
}
]

Since (AGamma_{le1}subseteqGamma_{le1}), induction gives
[
A^ndelta
=
a^ndelta+arepsilon_n,
]
where
[
arepsilon_n
=
sum_{j=0}^{n-1}
a^{,n-1-j}A^jarepsilon
inGamma_{le1}.
]
Hence
[
oxed{
operatorname{ord}_I(	heta^{A^ndelta})=a^n
}
]
and
[
oxed{
ho^{n*}m
=
u_n,m^{a^n}	heta^{arepsilon_n}
}
]
for an algebraic nonzero translation factor (u_n).

Consequently, for every analytic (f),
[
oxed{
operatorname{ord}_I(fcircho^n)
ge
a^noperatorname{ord}_I(f).
}
]

This is an exact semigroup/analytic divisibility statement. It is not yet a valuation estimate.

### T24 structural theorem 3 — the (I)-order scale need not equal the fast profile

Let
[
g_1(n)asymp n^{e_1}ho_1^n.
]

If (arepsilon=0), then
[
g_delta(n)asymp a^n
]
and necessarily
[
a>ho_1.
]

If (arepsilon
e0), then the exact convolution above gives two possible unequal-growth cases.

If
[
a>ho_1,
]
then again
[
g_delta(n)asymp a^n.
]

If
[
a=ho_1,
]
then the accumulated slow remainder contributes one additional polynomial power:
[
oxed{
g_delta(n)asymp n^{e_1+1}a^n.
}
]

The case (a<ho_1) would force (delta) to have the slow profile and is impossible.

Thus pullback (I)-order has exact scale (a^n), whereas the actual divisor value may have the faster equal-radius Jordan-extension scale
[
n^{e_1+1}a^n.
]

So the (I)-adic filtration and the T22 profile filtration are **not the same filtration**.

### T24 structural theorem 4 — the Hilbert count survives (I^P)

For
[

u_I(gamma)
=
max{jge0:gamma-jdeltainGamma},
]
the principal monomial ideal has
[
I^P
=
operatorname{span}{	heta^gamma:
u_I(gamma)ge P}.
]

Let
[
H_Gamma(D)
=
#{gammainGamma:w(gamma)le D}.
]
Then multiplication by (m^P) gives an exact bijection
[
{etainGamma:w(eta)le D-Pw(delta)}
longleftrightarrow
{gammainGamma:w(gamma)le D, 
u_I(gamma)ge P}.
]
Therefore
[
oxed{
dim V(D,P)
=
H_Gamma(D-Pw(delta)).
}
]

If (d=operatorname{rank}langleGammaangle), Hilbert-Serre theory gives
[
H_Gamma(D)=cD^d+O(D^{d-1})
]
up to the usual quasipolynomial refinement. Hence for every fixed
[
0lelambda<rac1{w(delta)},
qquad
P=lambda D+O(1),
]
one retains
[
dim V(D,P)
=
c(1-lambda w(delta))^dD^d+O(D^{d-1}).
]

So there is **no Hilbert-dimension obstruction** to taking (P/D) to be a fixed positive constant. Nonnormality, saturation of (Gamma), and whether (delta) spans an extremal cone ray do not change this exact factor-extraction count.

### T24 obstruction theorem — principal (I)-adic smallness is Liouville-neutral

This is the decisive result.

Because
[
I^P=(m^P),
]
every auxiliary analytic function with
[
Ein I^P
]
has an exact factorization
[
oxed{
E=m^P E_0
}
]
inside the same algebraic-coefficient toric analytic algebra.

Every exact orbit point lies in the torus, so
[
m(q_n)
e0.
]
Therefore
[
E(q_n)=m(q_n)^P E_0(q_n).
]

The local gain is genuine:
[
-log|m(q_n)^P|_2
=
P(log2)V_delta(n)
=
Theta(Pg_{m fast}(n)).
]

But this gain is an explicit algebraic factor. Its global height is on the same scale:
[
h(m(q_n)^P)
=
P,h(m(q_n))
=
Theta(Pg_{m fast}(n)).
]

In the actual T16 auxiliary step the nonzero quantity to which Liouville is applied is algebraic. If its (I^P)-divisibility is imposed coefficientwise, factor extraction gives another algebraic auxiliary quantity after division by the nonzero algebraic number (m(q_n)^P). Applying the product formula / Liouville inequality after this exact division removes **both** the fast local term and its matching global-height term.

Equivalently, for a nonzero algebraic auxiliary value (eta_n=m(q_n)^Pgamma_n),
[
-log|eta_n|_2
=
P(-log|m(q_n)|_2)-log|gamma_n|_2,
]
while
[
h(eta_n)
le
P,h(m(q_n))+h(gamma_n)+O(1).
]
The (P)-dependent fast contribution is therefore not a new source of Diophantine contradiction. It is the height-visible cost of multiplying by a small algebraic number.

Thus:
[
oxed{
	ext{principal }I^P	ext{-divisibility alone cannot repair the T22 Liouville mismatch.}
}
]

After exact factor removal, one is back to the residual auxiliary problem, whose local high-support decay is governed by the slow scale while the point height remains governed by the fast scale.

This remains true even in the favorable spectral-gap case
[
g_delta(n)asymp a^n
]
where pullback (I)-order itself matches the fast profile.

In the equal-radius Jordan-extension case
[
g_delta(n)asymp n^{e_1+1}a^n,
]
there is an additional warning: pullback (I)-order is only (a^n), so the proposed identification of (I)-adic order with the full fast profile already fails before the Liouville comparison.

This is a theorem-level obstruction to the specific Route-A architecture requested in T24. It is **not** a theorem that exact relation lifting is false for the principal subclass.

## 2. Exact T23 state inherited

T24 treats as closed:

- T20 exact variable-length scalar transport;
- T21 algebraic ordinary-prefix liminf/limsup;
- the strict positive-integer gap below (log_2 3);
- real convergence of the canonical scalar and state subseries under a hypothetical positive integer anchor;
- the positive reduced increment grading (w_Delta);
- T22 intrinsic reduced profiles and growth filtration;
- exact fast global height and slow local ambient contraction;
- scalar-support fullness;
- T18 minimal orbit-closure reduction;
- failure of fixed reweighting, monomial re-embedding, and quotient deletion;
- exact lifting/sign contradiction for balanced growth;
- T23 exact character-support filtration;
- T23 slowest-face elimination;
- T23 dense-orbit analytic zero theorem when (I_{>1}) is principal;
- T23 moving analytic coefficient obstruction in the nonprincipal case;
- T23 failure of asynchronous scale matching to define one exact original-orbit point.

T24 does not reprove any of these.

## 3. Principal monomial geometry in the reduced semigroup

Write
[
mathcal H
=
{gammainGamma:operatorname{prof}(gamma)>g_1}.
]

Since the characters form a monomial basis of the semigroup algebra, equality
[
I=(	heta^delta)
]
means exactly
[
mathcal H=delta+Gamma.
]

This statement is independent of normality of (K[Gamma]). It is an equality inside the actual reduced affine semigroup, not inside its saturation or cone.

The argument in Section 1 then proves that (operatorname{prof}(delta)) is both the minimal and maximal profile in (mathcal H). Thus the T24 principal subclass cannot have
[
g_1<g_2<g_3
]
among positive characters.

This resolves the nested-principal question:

[
oxed{
I_{>1}	ext{ principal }Longrightarrow r=2.
}
]

In particular, the proposed case “one intermediate principal generator carrying several strictly faster profiles” cannot occur in the positive reduced semigroup.

## 4. Exact pullback of the principal generator

The T23 filtration gives
[
Amathcal Hsubseteqmathcal H.
]
Hence (Adeltaindelta+Gamma).

The integer
[
a=max{j:Adelta-jdeltainGamma}
]
is intrinsic to the actual reduced semigroup.

No profile notation is used to define it.

Let
[
arepsilon=Adelta-adelta.
]
If (arepsilon) were high, principalness would give
[
arepsilon=delta+eta,
]
contradicting maximality. Hence (arepsilon) is slow or zero.

For the affine translated torus map,
[
ho^*	heta^gamma
=
	heta^gamma(c),	heta^{Agamma}.
]
Thus
[
ho^*m
=
	heta^delta(c),	heta^{Adelta}
=
u_delta m^a	heta^arepsilon.
]

The algebraic translation constant changes coefficient height but not semigroup divisibility.

## 5. Iterated (I)-adic order

Since (AGamma_{le1}subseteqGamma_{le1}),
[
A^ndelta
=
a^ndelta+arepsilon_n,
qquad
arepsilon_ninGamma_{le1}.
]

If
[
A^ndelta-(a^n+1)deltainGamma,
]
then
[
arepsilon_n=delta+eta
]
would be high, contradiction. Therefore
[
operatorname{ord}_I(	heta^{A^ndelta})=a^n.
]

For an analytic function
[
f=m^Ph,
]
[
fcircho^n
=
(ho^{n*}m)^P(hcircho^n),
]
so
[
operatorname{ord}_I(fcircho^n)
ge
Pa^n.
]

This is the exact requested lower bound, with
[
a_n=a^n.
]

Cancellation among terms can increase the order of the quotient factor; it cannot reduce the displayed common factor.

## 6. (I)-order versus valuation after evaluation

These are different quantities.

Semigroup divisibility:
[
operatorname{ord}_I(ho^{n*}m)=a^n.
]

Actual orbit valuation:
[
-log|m(q_n)|_2
=
(log2)V_delta(n)
=
Theta(g_{m fast}(n)).
]

The affine pullback identity makes the difference visible:
[
m(q_n)
=
u_n,m(q_0)^{a^n}	heta^{arepsilon_n}(q_0).
]

In the equal-radius Jordan-extension case, the slow remainder (arepsilon_n) carries the extra polynomial factor in the valuation even though it has zero (I)-order after the maximal (m^{a^n}) is removed.

Therefore:
[
oxed{
I	ext{-adic order is a divisibility invariant, not the same object as }2	ext{-adic orbit size.}
}
]

## 7. Combined (w_Delta/I)-adic Hilbert dimension

Define
[
V(D,P)
=
operatorname{span}
{
	heta^gamma:
w(gamma)le D, operatorname{ord}_I(	heta^gamma)ge P
}.
]

Then
[
V(D,P)=m^P V(D-Pw(delta),0)
]
exactly.

Hence:
[
oxed{
dim V(D,P)=H_Gamma(D-Pw(delta)).
}
]

Consequences:

- (P) consumes ordinary support budget linearly;
- (P/D) can be held at any fixed value below (1/w(delta));
- the full Krull/Hilbert degree (d) survives;
- no extremal-ray assumption is needed;
- semigroup saturation is not needed;
- nonnormality does not alter the exact monomial bijection.

Thus Route A does **not** fail at the raw Hilbert count.

## 8. Local upper bound on the exact orbit

If
[
E=m^PE_0,
]
then exactly
[
|E(q_n)|_2
=
|m(q_n)|_2^P|E_0(q_n)|_2.
]

Therefore the strongest factor-separated form is
[
-log|E(q_n)|_2
=
P(log2)V_delta(n)
-log|E_0(q_n)|_2.
]

If the residual auxiliary construction gives ordinary support order (R), the inherited toric Gauss estimate can contribute a further term on the slow scale:
[
-log|E_0(q_n)|_2
gtrsim
cR,g_{m slow}(n)
-
O(	ext{coefficient/denominator size}).
]

So the formal desired estimate
[
-log|E(q_n)|_2
ge
c_1P,g_{m fast}(n)
+
c_2R,g_{m slow}(n)
-
O(cdots)
]
is available at the level of local size.

The problem is not obtaining the fast local factor. The problem is that it is exactly (m(q_n)^P).

## 9. Liouville comparison and the route kill

T22 gives
[
widehat h(q_n)=Theta(g_{m fast}(n)).
]

Since (m(q_n)) is an algebraic (S)-unit monomial,
[
h(m(q_n))=Theta(g_{m fast}(n)).
]

For an algebraic auxiliary value
[
eta_n=m(q_n)^Pgamma_n,
]
the product formula sees the same factor globally.

A proof that keeps (eta_n) intact obtains a lower bound whose exponent necessarily includes the height of (m(q_n)^P).

A proof that divides first obtains a Liouville lower bound directly for (gamma_n).

These are the same arithmetic statement in two normalizations.

Therefore the fast (P)-term cannot be counted on the local side while omitted from the global lower-bound side.

After cancellation the residual comparison is again:
[
	ext{local residual decay}
sim
R,g_{m slow}(n),
]
versus
[
	ext{residual global point height}
sim
D,g_{m fast}(n),
]
unless a genuinely new relative-height theorem subtracts the fast divisor contribution from the global term as well.

No such theorem is supplied by the existing T16–T23 machinery.

## 10. Coefficient-height audit

The bare monomial (m^P) has coefficient height (0) in the normalized monomial basis, and its support degree is
[
Pw(delta).
]

So there is no initial coefficient-height explosion merely from writing (m^P).

Under affine pullback,
[
ho^{n*}(m^P)
=
u_n^P m^{Pa^n}	heta^{Parepsilon_n}.
]

The translation multipliers (u_n) are algebraic. Their heights can accumulate on the orbit scale. More importantly, even if all (u_n) were height-zero units, the evaluated monomial (m(q_n)^P) itself has height
[
Theta(Pg_{m fast}(n)).
]

Thus the route kill does not depend on proving a separate bad coefficient-height estimate: the global height cost is already present in the exact algebraic factor whose local smallness Route A hoped to exploit.

Siegel/linear-algebra coefficient heights for the residual auxiliary polynomial remain those of the inherited T16/T17 construction after replacing (D) by (D-Pw(delta)).

## 11. Denominator and localization audit

T18 regularity means every denominator used in the rebuilt minimal system and relation matrices is nonzero on a sufficiently deep exact orbit.

That is not the same as (I)-adic regularity.

A rational denominator can have positive divisor order along
[
m=0
]
while never vanishing at a torus point, because
[
m(q_n)
e0
]
for every finite (n).

Therefore ordinary localization can introduce
[
operatorname{ord}_I<0.
]

Passing deeper in the orbit does not remove a pole along the boundary divisor. It only avoids zeros at the selected algebraic points.

To preserve (I)-order functorially one would need to localize only at (I)-adic units or construct an explicitly (I)-saturated relation module / lattice.

No such preservation theorem is contained in T18.

This is a second obstruction to transporting an (I^P)-condition through the existing relation-matrix machinery, but it is not needed for the main T24 route kill.

## 12. Relation ideal and (m)-saturation

Let
[
mathcal R
=
{F(x,mathbf X):F(x,mathbf G(x))=0}
]
be the functional relation ideal in the algebraic toric coefficient ring used by the lifting argument.

The target analytic/function ring is a domain, and (m
e0). Therefore
[
m^PFinmathcal R
Longrightarrow
Finmathcal R.
]

Hence
[
oxed{
(mathcal R:m^infty)=mathcal R.
}
]

The relation ideal is automatically (m)-saturated.

Thus multiplication by a principal boundary factor cannot create a new functional relation. Any actual relation carrying a common (m^P) factor descends to a relation after exact division.

Primality/radicality remains as in the inherited T16–T18 algebraic setup: (mathcal R) is a kernel into a domain, hence prime. The T23 principal zero theorem supplies the dense-orbit zero input needed in this subclass, but it does not change the saturation observation.

## 13. Nullstellensatz and relation-matrix status

The T16/T17 Nullstellensatz/relation-matrix construction remains algebraically available once the principal zero theorem replaces the global zero-set input.

However:

1. the existing rational matrices are not proved (I)-integral;
2. localization may introduce negative (I)-order;
3. forcing a common (m^P) factor in the auxiliary polynomial gives no new relation after saturation;
4. the factor's local smallness is Liouville-neutral.

Therefore T24 does not rebuild the complete relation-matrix proof with a useful (I)-adic gain.

## 14. Exact specialization and division by (m)

Suppose an actual functional relation has
[
Q=m^PR
]
with coefficients in the toric analytic algebra.

Because (m(q_n)
e0), exact division preserves the identity:
[
Q(x,mathbf G(x))=0
Longrightarrow
R(x,mathbf G(x))=0.
]

If
[
Q(alpha,mathbf X)=P_0(mathbf X),
]
then
[
R(alpha,mathbf X)
=
m(alpha)^{-P}P_0(mathbf X).
]

Since (m(alpha)inoverline{mathbb Q}^{	imes}), algebraic rescaling gives
[
widetilde R=m(alpha)^PR
]
and
[
oxed{
widetilde R(alpha,mathbf X)=P_0(mathbf X).
}
]

Therefore division by an **actual** principal monomial factor is safe for:

- analyticity, because (I^P=(m^P)) means the quotient is already in the analytic algebra;
- algebraicity of coefficients;
- regularity at the algebraic torus point (alpha);
- exact specialization after algebraic scalar normalization;
- the scalar reconstruction row, because no coordinate quotient is taken.

It is not safe to divide a relation that exists only in an associated graded ring, completion, or localization without proving actual divisibility.

This safety result reinforces the route kill: a genuine common (m^P) factor can be removed without losing the exact specialization target.

## 15. Scalar activity and reconstruction

T22 scalar-support fullness remains untouched:
[
langleoperatorname{Supp}(S|_Y)angle_{mathbb Z}=N_Y.
]

T24 never quotients the (delta)-direction and never removes it from the canonical scalar.

Using (m^P) as an auxiliary factor is therefore not a hidden coordinate quotient.

Exact scalar reconstruction remains available in every class where exact lifting is already known. No new unequal-growth exact lift is obtained in T24.

## 16. Dense-orbit zero theorem reuse

T23's principal-high-ideal zero theorem is sufficient for the zero-set role required by the principal subclass.

No stronger quantitative zero theorem was needed to prove the T24 route kill.

A future successful lifting theorem would need new quantitative information only after principal-factor saturation, i.e. on the residual auxiliary object (E_0).

## 17. Literature audit

### 17.1 Adamczewski–Faverjon 2026 Annals theorem

The published multivariate lifting theorem remains the correct exact-specialization model. Its proof uses relation ideals, Hilbert dimension, auxiliary upper/lower bounds and exact algebraic specialization.

No checked statement provides a divisorial (I)-adic refinement in which the height contribution of a known principal factor is subtracted while retaining an additional local gain.

### 17.2 Adamczewski–Faverjon 2026 Liouville-type inequality preprint

The April 2026 preprint **A Liouville-Type Inequality for Values of Mahler M-Functions** gives quantitative lower bounds for polynomials in values of one-variable (M_q)-functions at a common algebraic point.

It is relevant as a modern quantitative Mahler checkpoint, but it does not provide:

- a multivariate toric (I)-adic lifting theorem;
- a relative height modulo a boundary divisor;
- or a mechanism making multiplication by an algebraic (S)-unit factor arithmetically free.

It therefore does not repair the T24 factor-cancellation obstruction.

### 17.3 Multiplicity / zero-estimate literature

Classical Mahler multiplicity estimates (Nishioka and later generalized zero-order estimates, including Zorin's stable-ideal framework) control orders of vanishing or algebraic independence in Mahler functional systems.

The audited statements do not supply the required mixed-place theorem for the actual principal toric divisor (m=0) with:

- algebraic coefficients in the T18 reduced toric algebra;
- exact relation lifting;
- global height subtraction of the known divisor factor;
- and prescribed specialization (Q(alpha,mathbf X)=P(mathbf X)).

Terminological similarity to “multiplicity” is therefore insufficient.

### 17.4 Moving-target Subspace Theorems

Ru–Vojta and later moving-hypersurface theorems remain algebraic-target results with small-height hypotheses.

T24 does not change T23's conclusion that slow analytic coefficient values are not automatically algebraic moving targets and that ordinary truncation to next-scale precision incurs non-negligible height.

### 17.5 Corvaja–Zannier

Corvaja–Zannier remains load-bearing only through the T23 slow-face theorem and inherited balanced cases.

No divisorial-height refinement of their theorem was found that converts a removable principal factor into a residual exact-lifting gain.

### 17.6 Brechler

Enzo Brechler's arXiv:2607.24877 remained a preprint in the October 2026 audit.

Its abstract and checked T15/T16 interfaces provide multivariate meromorphy and strengthened lifting/descent statements, but no verified (I)-adic divisor-multiplicity theorem was found that overcomes the principal-factor height cancellation above.

It remains non-load-bearing for T24.

## 18. Exact relation-lifting status

For the genuine active unequal-growth principal-high-ideal subclass:
[
oxed{
P(1,mathbf G(alpha))=0
Longrightarrow
Q(x,1,mathbf G(x))=0
}
]
with
[
Q(alpha,mathbf X)=P(mathbf X)
]
is still **NOT PROVED**.

T24 specifically proves that the proposed repair
[
	ext{“force }Ein I^P	ext{ and count its fast local decay as new Liouville gain”}
]
is invalid as a standalone architecture.

The fast term is a removable principal algebraic factor whose global height is on the same scale.

## 19. Pointwise completion portability and sign contradiction

Because no new exact lift is obtained, no new principal unequal-growth class reaches pointwise real specialization.

The inherited implication remains ready:

if a future theorem produces an exact lift with
[
Q(alpha,mathbf X)=P(mathbf X),
]
then T21 scalar convergence, finite scalar reconstruction, appending (1), pointwise real evaluation and positivity yield
[
S^{(infty)}(q)+3N=0,
]
contradicting (N>0).

T24 does not trigger that chain.

## 20. Positive integer / rational status

Positive integer exclusion for a new T24 class: **NO**.

Positive rational noninteger exclusion for a new T24 class: **NO**.

As before, intrinsic real subcriticality would be required to extend a completed lifting/sign argument automatically to arbitrary
[
Hinmathbb Q_{>0}.
]

Negative rational values remain unexcluded and are not Collatz counterexamples.

## 21. T2 bounded-(R_m) consequence

No new recursive anchor class is closed.

Therefore T24 does not promote any new implication
[
R_m	ext{ bounded}Longrightarrow	ext{eventual periodicity}
]
beyond the classes already closed through T21.

## 22. Periodicity-Conjecture boundary after T24

| Recursive class | Status after T24 |
|---|---|
| Finite abelian translations | Closed by T11 |
| Finite nonabelian translations | Positive-anchor route closed by T12 |
| Balanced one-variable finite-kernel systems | Closed by T13 |
| Primitive dominant multivariate systems | Closed by T16 |
| T17 stable-image systems | Closed in the stated relatively admissible class; subsumed by T18 |
| T18 orbit-closure-reduced systems | Exact lifting closed in the inherited balanced/uniform setting |
| T19 nonprimitive uniform systems | Positive-anchor route closed |
| T20 primitive variable-length systems | Positive-anchor route closed |
| T21 balanced-growth reducible systems | Positive-anchor route closed |
| T22 genuine active unequal-growth systems | Exact lifting open |
| T23 principal-high-ideal subclass | Dense-orbit analytic zero theorem proved |
| T24 principal-high-ideal (I)-adic auxiliary route | **Route killed as standalone Liouville repair; exact lifting still open** |
| General nonprincipal multiscale filtered systems | Open at moving analytic coefficients and exact lifting |
| Remaining reducible/nonprimitive morphic systems | Open |
| Arbitrary automatic/morphic parity languages | Open |
| Full Periodicity Conjecture | Open |

The full Periodicity Conjecture is not solved.

## 23. Cobham / López–Stoll / other source status

Cobham: **NOT APPLICABLE**. No second multiplicatively independent automatic presentation is proved for the relevant morphic word.

López–Stoll: **NON-LOAD-BEARING**. No direct cross-completion transfer is used.

Adamczewski–Faverjon: **LOAD-BEARING AS ARCHITECTURAL MODEL / PRIOR CLOSED THEOREMS**, but no audited divisorial relative-height theorem closes T24.

Brechler: **PREPRINT / NON-LOAD-BEARING** for T24.

Corvaja–Zannier: **LOAD-BEARING INHERITED ZERO-THEOREM INPUT**, not a T24 exact-lifting theorem.

## 24. Explicit word / candidate / counterexample status

Explicit anchored aperiodic word: **NONE**.

Candidate Collatz start: **NONE**.

Rigorously unbounded orbit: **NONE**.

Collatz counterexample: **NONE**.

Route-B analytic counterexample to the principal zero theorem: **NONE**.

T24 proves a proof-architecture obstruction, not a counterexample to relation lifting itself.

## 25. Compute decision

No theorem-derived scientific workload is justified.

No new starts.  
No candidate trajectories.  
No substitution enumeration.  
No finite residue/carry/exponent-code search.  
No generator or distribution.  
No CPU campaign.  
No GPU work.  
No cloud, cluster, distributed or volunteer computation.

`docs/COMPUTE_BUDGET.md`: **UNCHANGED**.  
`docs/METRIC_CATALOG.md`: **UNCHANGED**.

## 26. Exact next theorem-sized obligation

The next session should **not** try another unsaturated power of the same principal ideal.

The exact live problem is the residual quotient after removing every known principal divisor contribution.

### CDM4-T25 — DIVISOR-SATURATED / RELATIVE-HEIGHT EXACT-LIFTING AUDIT

Primary target:

1. work in the (m)-saturated functional relation module, using
   [
   (mathcal R:m^infty)=mathcal R;
   ]
2. factor every forced (m^P) contribution before the Liouville comparison;
3. determine whether a **relative** local/global inequality exists for the residual auxiliary value in which the known divisor height is subtracted on both sides;
4. equivalently, seek a multiplicity/zero estimate that gives anomalous smallness of the quotient
   [
   E/m^P
   ]
   rather than smallness coming from (m^P) itself;
5. require all relation matrices and localizations to be (I)-integral or explicitly account for their boundary pole order;
6. preserve the original scalar-active direction and prove an actual functional relation in the unsaturated toric analytic algebra;
7. preserve exactly
   [
   Q(alpha,mathbf X)=P(mathbf X);
   ]
8. if such a residual relative-height theorem is proved, run T21 pointwise real specialization and the completion-sign contradiction immediately.

A valid positive theorem must create fast-scale Diophantine gain **after principal-factor cancellation**.

A valid negative theorem should prove that no such divisor-saturated relative-height gain can occur in the T18 reduced toric Mahler architecture.

Do not return to asynchronous iterates, moving algebraic truncations of analytic coefficients, fixed multigradings, or quotient deletion.

## 27. Permanent T24 lessons

### T24-L1 — principal high ideal means two profiles

The T23 principal hypothesis is stronger than “one generator for several upper strata.” In the positive semigroup it forbids strictly faster profiles above the generator.

### T24-L2 — pullback (I)-order has an exact scalar multiplier

There is an intrinsic integer
[
a=operatorname{ord}_I(ho^*m)
]
with
[
operatorname{ord}_I(ho^{n*}m)=a^n.
]

### T24-L3 — (I)-order and fast valuation can still differ

Equal-radius Jordan extension can give
[
g_{m fast}(n)asymp n^{e_1+1}a^n
]
while the (I)-order is only (a^n).

### T24-L4 — the Hilbert count is not the obstruction

Imposing
[
operatorname{ord}_Ige P
]
simply shifts the scalar support budget by (Pw(delta)) and preserves full Hilbert degree for fixed (P/D).

### T24-L5 — a principal fast factor is not free Diophantine smallness

The extra local decay of (m(q_n)^P) is accompanied by the global height of the same algebraic factor. Exact division cancels both.

### T24-L6 — relation ideals are automatically (m)-saturated

A common principal factor cannot manufacture a functional relation.

### T24-L7 — regular orbit points do not imply boundary-regular localization

A denominator may be nonzero at every torus orbit point and still have a pole along (m=0). Deep-tail regularity does not preserve (I)-adic order.

### T24-L8 — the next theorem must be relative after saturation

Any future success must produce fast-scale residual smallness after all known principal factors have been removed.

D — no qualifying theorem found
