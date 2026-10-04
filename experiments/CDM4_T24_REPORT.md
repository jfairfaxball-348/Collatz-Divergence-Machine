# CDM4-T24 — Principal-fast-ideal / \(I\)-adic auxiliary exact-lifting audit

**Date:** 2026-10-04  
**Authoritative input commit:** \`3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb\`  
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

It does close the proposed **raw principal \(I\)-adic auxiliary repair** as a standalone way of fixing the T22 auxiliary/Liouville scale mismatch.

Let the exact T18-reduced positive character semigroup be
\[
\Gamma=\Gamma_Y\subset N_Y,
\]
let \(A=A_Y\) be character pullback, and let \(w=w_\Delta\) be the positive T21 increment grading. Let \(g_1\) be the slowest positive T22 profile and assume
\[
I:=I_{>1}=(m),
\qquad
m=\theta^\delta.
\]

T24 proves four structural facts and one decisive method obstruction.

1. **Principalness forces a two-profile positive semigroup.** Every positive character above the slow face has the same profile as \(\delta\). Hence
   \[
   g_1<g_\delta=g_{\rm fast}.
   \]
2. **Pullback \(I\)-order is exact.** There is an intrinsic integer
   \[
   a=\max\{j\ge1:A\delta-j\delta\in\Gamma\}
   \]
   and a slow or zero remainder \(\varepsilon\) such that
   \[
   \rho^*m=u_\delta m^a\theta^\varepsilon,
   \qquad
   \operatorname{ord}_I(\rho^{n*}m)=a^n.
   \]
3. **\(I\)-order and T22 profile need not coincide.** In an equal-radius Jordan-extension case, the divisor value can have scale
   \[
   n^{e_1+1}a^n
   \]
   while the exact \(I\)-order is only \(a^n\).
4. **The Hilbert count survives \(I^P\).** For simultaneous \(w\)-degree \(D\) and \(I\)-order \(P\),
   \[
   \dim V(D,P)=H_\Gamma(D-Pw(\delta)).
   \]
   Thus a fixed positive \(P/D\) retains full Hilbert degree.
5. **The apparent fast local gain is Liouville-neutral.** Since
   \[
   I^P=(m^P),
   \]
   every forced \(I^P\)-factor is an actual common algebraic factor. Its fast \(2\)-adic decay is accompanied by global height on the same fast scale. Exact division removes both contributions, and the functional relation ideal is already \(m\)-saturated.

Therefore
\[
\boxed{
\text{principal }I^P\text{-divisibility alone cannot repair the T22 Liouville mismatch.}
}
\]

This is a theorem-level obstruction to the proposed T24 proof architecture. It is **not** a theorem that exact relation lifting is false for the principal subclass.

No new positive-integer anchor class is excluded.

## 2. Exact T23 state inherited

T24 treats as closed:

- T20 exact variable-length scalar transport;
- T21 algebraic ordinary-prefix liminf/limsup;
- the positive-integer strict gap below \(\log_2 3\);
- real convergence of the canonical scalar and state subseries under a hypothetical positive integer anchor;
- the positive reduced increment grading \(w_\Delta\);
- T22 intrinsic reduced profiles and growth filtration;
- exact fast global height and slow local ambient contraction;
- scalar-support fullness;
- T18 minimal orbit-closure reduction;
- failure of fixed reweighting, monomial re-embedding, and quotient deletion;
- exact lifting/sign contradiction for balanced growth;
- T23 exact character-support filtration;
- T23 slowest-face elimination;
- T23 dense-orbit analytic zero theorem when \(I_{>1}\) is principal;
- T23 moving analytic coefficient obstruction in the nonprincipal case;
- T23 failure of asynchronous scale matching to define one exact original-orbit point.

T24 does not reprove these.

## 3. Principal monomial geometry in the reduced semigroup

Write
\[
\mathcal H
=
\{\gamma\in\Gamma:\operatorname{prof}(\gamma)>g_1\}.
\]

Since the characters form a monomial basis of the semigroup algebra, equality
\[
I=(\theta^\delta)
\]
means exactly
\[
\boxed{
\mathcal H=\delta+\Gamma.
}
\]

This equality is inside the actual reduced affine semigroup. It does not require normality or passage to the saturation of \(\Gamma\).

### Theorem T24.1 — principal high ideal forces exactly two positive profiles

Suppose \(\gamma\in\mathcal H\) has profile strictly faster than \(\delta\). Principalness gives
\[
\gamma=\delta+\eta_1,
\qquad
\eta_1\in\Gamma.
\]
T22 positive max-additivity gives
\[
\operatorname{prof}(\gamma)
=
\max\{\operatorname{prof}(\delta),\operatorname{prof}(\eta_1)\}.
\]
Since \(\operatorname{prof}(\gamma)>\operatorname{prof}(\delta)\), necessarily
\[
\operatorname{prof}(\eta_1)=\operatorname{prof}(\gamma).
\]
Hence \(\eta_1\in\mathcal H\), so again
\[
\eta_1=\delta+\eta_2.
\]
Iterating,
\[
\gamma=j\delta+\eta_j
\qquad
\forall j\ge1.
\]

The T21 grading is positive on every nonzero positive character, so
\[
w(\gamma)
=
jw(\delta)+w(\eta_j)
\ge
jw(\delta).
\]
This is impossible for arbitrarily large \(j\).

Therefore no positive character has profile strictly faster than \(\delta\). Since \(\delta\in\mathcal H\), every positive character outside the slow face has profile exactly \(\operatorname{prof}(\delta)\).

Thus
\[
\boxed{
I_{>1}\text{ principal}
\Longrightarrow
\text{the positive profile filtration has exactly two classes}.
}
\]

In particular,
\[
\boxed{
g_\delta\asymp g_{\rm fast}.
}
\]

The proposed T24 case “one intermediate principal generator carrying several strictly faster positive profiles” cannot occur.

## 4. Exact pullback of the principal generator

T23 gives
\[
A\mathcal H\subseteq\mathcal H.
\]
Hence
\[
A\delta\in\delta+\Gamma.
\]

Define the intrinsic semigroup integer
\[
\boxed{
a
=
\max\{j\ge1:A\delta-j\delta\in\Gamma\}.
}
\]
The maximum is finite because \(w(\delta)>0\): if \(A\delta-j\delta\in\Gamma\), then
\[
w(A\delta)\ge jw(\delta).
\]

Set
\[
\varepsilon=A\delta-a\delta.
\]
If \(\varepsilon\) were high, principalness would give
\[
\varepsilon=\delta+\eta,
\]
contradicting maximality of \(a\). Therefore
\[
\boxed{
\varepsilon\in\Gamma_{\le1}\cup\{0\}.
}
\]

For the translated exact torus map
\[
\rho(h)=c\,\Psi_H(h),
\]
character pullback is
\[
\rho^*\theta^\gamma
=
\theta^\gamma(c)\theta^{A\gamma}.
\]
Consequently
\[
\boxed{
\rho^*m
=
u_\delta m^a\theta^\varepsilon,
\qquad
u_\delta=\theta^\delta(c)\in\overline{\mathbb Q}^{\times}.
}
\]

The affine translation contributes a nonzero algebraic coefficient and does not change semigroup divisibility.

## 5. Iterated \(I\)-adic order

Since the slow semigroup is \(A\)-stable,
\[
A\Gamma_{\le1}\subseteq\Gamma_{\le1}.
\]
Induction gives
\[
A^n\delta
=
a^n\delta+\varepsilon_n,
\]
where
\[
\boxed{
\varepsilon_n
=
\sum_{j=0}^{n-1}
a^{n-1-j}A^j\varepsilon
\in\Gamma_{\le1}.
}
\]

If
\[
A^n\delta-(a^n+1)\delta\in\Gamma,
\]
then
\[
\varepsilon_n=\delta+\eta
\]
would be high, contradicting \(\varepsilon_n\in\Gamma_{\le1}\). Therefore
\[
\boxed{
\operatorname{ord}_I(\theta^{A^n\delta})=a^n.
}
\]

Equivalently,
\[
\boxed{
\rho^{n*}m
=
u_n m^{a^n}\theta^{\varepsilon_n}
}
\]
for a nonzero algebraic translation factor \(u_n\).

For an analytic function \(f=m^P h\),
\[
f\circ\rho^n
=
(\rho^{n*}m)^P(h\circ\rho^n),
\]
so
\[
\boxed{
\operatorname{ord}_I(f\circ\rho^n)
\ge
Pa^n.
}
\]

Cancellation in the residual factor can increase \(I\)-order; it cannot remove the displayed common factor.

This answers the exact pullback-order question with
\[
a_n=a^n.
\]

## 6. \(I\)-order versus the fast valuation profile

Semigroup divisibility and evaluated \(2\)-adic size are distinct.

For the divisor itself,
\[
-\log|m(q_n)|_2
=
(\log2)V_\delta(n)
=
\Theta(g_{\rm fast}(n)).
\]

Let the slow profile be
\[
g_1(n)\asymp n^{e_1}\rho_1^n.
\]

From
\[
A^n\delta=a^n\delta+\varepsilon_n
\]
one obtains the following classification.

### Case 1: \(\varepsilon=0\)

Then
\[
A^n\delta=a^n\delta,
\]
so
\[
g_\delta(n)\asymp a^n.
\]
Unequal growth forces
\[
a>\rho_1.
\]

### Case 2: \(\varepsilon\ne0\) and \(a>\rho_1\)

The geometric factor \(a^{n-1-j}\) dominates the slow recurrence, so again
\[
g_\delta(n)\asymp a^n.
\]

### Case 3: \(\varepsilon\ne0\) and \(a=\rho_1\)

The convolution of equal exponential radii creates one extra polynomial power. On the leading slow component,
\[
\sum_{j<n}a^{n-1-j}j^{e_1}a^j
\asymp
n^{e_1+1}a^n.
\]
Hence
\[
\boxed{
g_\delta(n)\asymp n^{e_1+1}a^n.
}
\]

### Case 4: \(a<\rho_1\)

Then the slow remainder dominates and \(\delta\) would have the slow profile, contradicting \(\delta\in I_{>1}\). Thus this case is impossible.

Therefore
\[
\boxed{
I\text{-adic pullback order and T22 growth profile do not necessarily coincide.}
}
\]

Even in a principal two-profile system, the exact order \(a^n\) can miss a polynomial fast factor.

## 7. Combined \(w_\Delta/I\)-adic Hilbert dimension

For \(\gamma\in\Gamma\), define
\[
\nu_I(\gamma)
=
\max\{j\ge0:\gamma-j\delta\in\Gamma\}.
\]

Since \(I=(m)\),
\[
I^P
=
\operatorname{span}
\{\theta^\gamma:\nu_I(\gamma)\ge P\}.
\]

Let
\[
H_\Gamma(D)
=
\#\{\gamma\in\Gamma:w(\gamma)\le D\}.
\]
Define
\[
V(D,P)
=
\operatorname{span}
\{
\theta^\gamma:
w(\gamma)\le D,\ \nu_I(\gamma)\ge P
\}.
\]

Multiplication by \(m^P\) gives an exact monomial bijection
\[
\{\eta\in\Gamma:w(\eta)\le D-Pw(\delta)\}
\longleftrightarrow
\{\gamma\in\Gamma:w(\gamma)\le D,\ \nu_I(\gamma)\ge P\}.
\]
Therefore
\[
\boxed{
\dim V(D,P)
=
H_\Gamma(D-Pw(\delta)).
}
\]

If
\[
d=\operatorname{rank}_{\mathbb Z}\langle\Gamma\rangle,
\]
Hilbert-Serre theory gives, with the usual quasipolynomial refinement,
\[
H_\Gamma(D)
=
cD^d+O(D^{d-1}).
\]
Thus for
\[
P=\lambda D+O(1),
\qquad
0\le\lambda<\frac1{w(\delta)},
\]
one has
\[
\boxed{
\dim V(D,P)
=
c(1-\lambda w(\delta))^dD^d+O(D^{d-1}).
}
\]

Consequences:

- \(P\) consumes support budget linearly;
- \(P/D\) may be a fixed positive constant;
- the full Hilbert degree \(d\) survives;
- no extremal-ray assumption on \(\delta\) is required;
- semigroup saturation is not required;
- nonnormality does not alter this exact factor-extraction count.

Hence the raw auxiliary-space dimension is **not** the T24 obstruction.

## 8. Local upper bound on the exact orbit

If
\[
E\in I^P,
\]
then principalness gives the exact analytic factorization
\[
\boxed{
E=m^P E_0.
}
\]

Every finite exact orbit point lies in the torus, so
\[
m(q_n)\ne0.
\]
Hence
\[
|E(q_n)|_2
=
|m(q_n)|_2^P|E_0(q_n)|_2
\]
and
\[
\boxed{
-\log|E(q_n)|_2
=
P(\log2)V_\delta(n)
-\log|E_0(q_n)|_2.
}
\]

The first term is
\[
\Theta(Pg_{\rm fast}(n)).
\]

If the residual auxiliary construction gives \(w_\Delta\)-support order \(R\), the inherited T17/T18 toric Gauss estimate can additionally yield slow-scale decay for \(E_0\). Schematically,
\[
-\log|E(q_n)|_2
\ge
c_1P\,g_{\rm fast}(n)
+
c_2R\,g_{\rm slow}(n)
-
O(\text{coefficient/denominator size}).
\]

Thus T24 confirms that the desired **local** fast factor really exists.

The obstruction is not local analysis. It is the global arithmetic accounting for the same factor.

## 9. Global Liouville lower bound and the decisive route kill

T22 gives
\[
\widehat h(q_n)=\Theta(g_{\rm fast}(n)).
\]

Because \(m(q_n)\) is an algebraic \(S\)-unit monomial,
\[
\boxed{
h(m(q_n))
=
\Theta(g_{\rm fast}(n)).
}
\]
Therefore
\[
h(m(q_n)^P)
=
\Theta(Pg_{\rm fast}(n)).
\]

The T16 auxiliary contradiction applies Liouville/product-formula lower bounds to a nonzero **algebraic** auxiliary value. If \(I^P\)-divisibility is imposed coefficientwise, such a value has the exact form
\[
\beta_n=m(q_n)^P\gamma_n,
\]
with \(\gamma_n\) algebraic.

Locally,
\[
-\log|\beta_n|_2
=
P(-\log|m(q_n)|_2)
-\log|\gamma_n|_2.
\]

Globally,
\[
h(\beta_n)
\le
P\,h(m(q_n))
+
h(\gamma_n)
+
O(1).
\]

Thus the same \(P\)-dependent fast contribution appears in the product-formula cost.

There are only two normalizations:

1. keep \(\beta_n\) intact, in which case Liouville sees the height of \(m(q_n)^P\); or
2. divide first by the nonzero algebraic factor \(m(q_n)^P\) and apply Liouville directly to \(\gamma_n\).

These are the same arithmetic statement.

Therefore
\[
\boxed{
\text{the fast local contribution supplied solely by }m^P
\text{ is Liouville-neutral}.
}
\]

After exact factor cancellation, the inherited residual comparison returns:
\[
\text{local residual decay}
\sim
R\,g_{\rm slow}(n),
\]
against
\[
\text{global residual point-height cost}
\sim
D\,g_{\rm fast}(n),
\]
unless a genuinely new **relative/divisor-subtracted height theorem** changes the comparison.

This kills the requested Route-A mechanism in its raw form.

It does **not** prove that a different divisor-saturated exact-lifting theorem is impossible.

## 10. Coefficient-height audit

The bare monomial \(m^P\) has coefficient height \(0\) in the normalized monomial basis. Its support degree is
\[
Pw(\delta).
\]

Thus there is no initial coefficient-height explosion merely from writing the factor \(m^P\).

Under pullback,
\[
\rho^{n*}(m^P)
=
u_n^P m^{Pa^n}\theta^{P\varepsilon_n}.
\]
The translation factors \(u_n\) are algebraic and can accumulate height. More importantly, even if their height were negligible, the evaluated factor \(m(q_n)^P\) itself already has height
\[
\Theta(Pg_{\rm fast}(n)).
\]

Therefore the T24 route kill does not depend on proving an additional bad Siegel-coefficient estimate.

The residual Siegel/linear-algebra coefficient-height problem is the inherited T16/T17 problem with the available degree budget shifted from \(D\) to \(D-Pw(\delta)\).

## 11. Denominator and localization audit

T18 regularity gives a deep exact orbit on which every denominator used by the rebuilt minimal system, scalar reconstruction, and relation matrices is nonzero.

That is pointwise orbit regularity. It is not \(I\)-adic regularity.

A rational denominator \(d\) can have
\[
\operatorname{ord}_I(d)>0
\]
along the boundary divisor \(m=0\) while still satisfying
\[
d(q_n)\ne0
\]
for every finite torus orbit point, because \(m(q_n)\ne0\).

Inverting such a denominator introduces
\[
\operatorname{ord}_I(d^{-1})<0.
\]

Passing to a deeper regular tail does not remove the pole along the boundary divisor.

Therefore a future filtered relation-matrix proof would need either:

- localization only at \(I\)-adic units; or
- an explicitly \(I\)-integral / divisor-saturated relation module with all boundary pole orders tracked.

The inherited T18 regular-tail theorem alone does not supply that stronger statement.

This is a second exact obstruction to transporting \(I\)-order through the existing rational relation-matrix machinery, although it is not needed for the main factor-cancellation route kill.

## 12. Relation ideal status

Let
\[
\mathcal R
=
\{F(x,\mathbf X):F(x,\mathbf G(x))=0\}
\]
be the functional relation ideal in the algebraic toric coefficient ring used by the lifting architecture.

Evaluation into the algebra generated by the analytic functions lands in a domain, so \(\mathcal R\) is prime and hence radical.

Moreover \(m\ne0\) in that domain. Therefore
\[
m^PF\in\mathcal R
\Longrightarrow
F\in\mathcal R.
\]
Thus
\[
\boxed{
(\mathcal R:m^\infty)=\mathcal R.
}
\]

The functional relation ideal is automatically \(m\)-saturated.

Hence multiplication by a common principal boundary factor cannot create a new functional relation.

T23's principal zero theorem supplies the dense-orbit zero-set input needed in this subclass, but it does not change this saturation fact.

## 13. Nullstellensatz / relation-matrix status

The T16/T17 algebraic relation-ideal and Nullstellensatz construction remains formally available once the T23 principal zero theorem replaces the missing zero-set input.

However:

1. existing rational relation matrices are not proved \(I\)-integral;
2. localization may introduce negative \(I\)-order;
3. a forced common \(m^P\) factor gives no new relation after saturation;
4. its local smallness is Liouville-neutral.

T24 therefore does not obtain a useful \(I\)-adic relation-matrix propagation theorem.

## 14. Division by \(m\) and exact specialization

The zero theorem used division by \(m\). T24 audits whether actual functional-relation division is safe.

Suppose
\[
Q=m^P R
\]
as an **actual** relation in the toric analytic coefficient algebra.

Since \(m\) is a nonzerodivisor,
\[
Q(x,\mathbf G(x))=0
\Longrightarrow
R(x,\mathbf G(x))=0.
\]

At the exact algebraic tail point \(\alpha\),
\[
m(\alpha)\in\overline{\mathbb Q}^{\times}.
\]
If
\[
Q(\alpha,\mathbf X)=P_0(\mathbf X),
\]
then
\[
R(\alpha,\mathbf X)
=
m(\alpha)^{-P}P_0(\mathbf X).
\]
Define
\[
\widetilde R
=
m(\alpha)^P R.
\]
Then
\[
\boxed{
\widetilde R(\alpha,\mathbf X)
=
P_0(\mathbf X).
}
\]

Therefore division by a **genuine analytic principal factor** is safe for:

- analyticity, because actual \(I^P=(m^P)\)-divisibility supplies an analytic quotient;
- algebraicity of coefficients;
- regularity at the torus point \(\alpha\);
- exact specialization after algebraic scalar normalization;
- scalar reconstruction, because no coordinate quotient is taken.

It is not safe to divide a relation that exists only in an associated graded ring, completion, or uncontrolled localization.

This safety theorem reinforces the route kill: a genuine common factor can be removed without sacrificing the prescribed specialization.

## 15. Scalar reconstruction and scalar activity

T22 scalar-support fullness remains:
\[
\langle\operatorname{Supp}(S|_Y)\rangle_{\mathbb Z}
=
N_Y.
\]

T24 never quotients the \(\delta\)-direction and never removes it from the canonical scalar.

Using \(m^P\) as an auxiliary factor is therefore not a hidden scalar-destroying quotient.

Exact scalar reconstruction remains available in all previously lifted classes. No new unequal-growth exact lift is obtained.

## 16. Dense-orbit zero theorem reuse

T23's principal-high-ideal dense-orbit analytic zero theorem is sufficient for the zero-set role needed in the principal subclass.

T24 does not require a stronger quantitative zero theorem to prove the factor-cancellation obstruction.

A future positive lifting theorem would need genuinely new quantitative information **after** principal-factor saturation, i.e. on the quotient auxiliary object \(E/m^P\).

## 17. Literature audit

### 17.1 Adamczewski–Faverjon, Annals of Mathematics 204 (2026)

The published paper *Mahler's method in several variables and finite automata* remains the exact-specialization model used by T16. Its proof contains the relevant relation ideal, Hilbert dimension, auxiliary upper/lower bounds, and specialization mechanism.

No checked statement supplies a divisorial \(I\)-adic refinement in which one retains the local smallness of a known principal factor while subtracting its global height cost.

The September 2026 addendum does not provide such a theorem either.

### 17.2 Adamczewski–Faverjon 2026 Liouville-type preprint

The April 2026 preprint *A Liouville-Type Inequality for Values of Mahler M-Functions* gives quantitative lower bounds for polynomials in values of one-variable \(M_q\)-functions at a common algebraic point.

It is relevant as a current quantitative Mahler checkpoint but does not supply:

- a multivariate toric \(I\)-adic lifting theorem;
- a relative height modulo a boundary divisor;
- or a mechanism making multiplication by an algebraic \(S\)-unit factor arithmetically free.

It does not repair the T24 factor-cancellation obstruction.

### 17.3 Multiplicity / zero-estimate literature

Classical Mahler multiplicity and zero-order estimates, including Nishioka-type algebraic-independence estimates and Zorin's stable-ideal framework, control orders of vanishing or functional algebraic independence under their own hypotheses.

No audited result was found that simultaneously supplies the T24 requirements:

- the actual T18 reduced toric divisor \(m=0\);
- characteristic-zero mixed-place arithmetic;
- a divisor-subtracted global height inequality;
- exact functional relation lifting;
- and exact specialization
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X).
  \]

Terminological similarity to “multiplicity” is not enough.

### 17.4 Moving-target Subspace Theorems

Ru–Vojta and later moving-hypersurface results remain algebraic moving-target theorems with small-height hypotheses.

T24 does not change the T23 obstruction: the natural next-face coefficients are analytic slow-variable values and need not be algebraic, while algebraic truncation to next-scale precision has non-negligible height.

### 17.5 Corvaja–Zannier

Corvaja–Zannier remains load-bearing through the T23 slow-face theorem and the previously closed balanced classes.

No audited divisorial relative-height statement was found that converts the removable principal factor into residual exact-lifting gain.

### 17.6 Brechler

Enzo Brechler, arXiv:2607.24877, remained a preprint at the October 2026 audit.

Its checked interfaces provide relevant multivariate meromorphy/lifting infrastructure, but no verified theorem was found that overcomes the principal-factor height cancellation established here.

It remains non-load-bearing for T24.

## 18. Exact relation-lifting status

For the genuine active unequal-growth principal-high-ideal subclass, the desired implication
\[
P(1,\mathbf G(\alpha))=0
\Longrightarrow
Q(x,1,\mathbf G(x))=0
\]
with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
is still **NOT PROVED**.

T24 proves only that the proposed repair
\[
\text{“force }E\in I^P\text{ and count the resulting principal-factor decay as new Liouville gain”}
\]
cannot close the proof.

## 19. Pointwise completion portability and sign contradiction

No new exact lift is obtained, so no new unequal-growth class reaches real pointwise specialization.

The inherited implication remains ready:

if a future theorem produces an exact lift preserving
\[
Q(\alpha,\mathbf X)=P(\mathbf X),
\]
then T21 scalar convergence, finite scalar reconstruction, appending \(1\), ordinary-real pointwise evaluation, and positivity give
\[
S^{(\infty)}(q)+3N=0,
\]
contradicting \(N>0\).

T24 does not trigger that chain.

## 20. Positive integer and rational audit

Positive integer exclusion for a new T24 class: **NO**.

Positive rational noninteger exclusion for a new T24 class: **NO**.

As before, only intrinsic ordinary-real strict subcriticality would automatically extend a completed exact-lifting/sign argument to arbitrary
\[
H\in\mathbb Q_{>0}.
\]

Negative rational values remain unexcluded and are not Collatz counterexamples.

## 21. T2 bounded-\(R_m\) consequence

No new recursive anchor class is closed by T24.

Therefore no new implication
\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
\]
is promoted beyond the classes already closed through T21.

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
| T24 principal-high-ideal \(I\)-adic auxiliary route | **Route killed as standalone Liouville repair; exact lifting still open** |
| General nonprincipal multiscale filtered systems | Open at moving analytic coefficients and exact lifting |
| Remaining reducible/nonprimitive morphic systems | Open |
| Arbitrary automatic/morphic parity languages | Open |
| Full Periodicity Conjecture | Open |

The full Periodicity Conjecture is not solved.

## 23. Cobham / López–Stoll / source status

Cobham: **NOT APPLICABLE**. No second multiplicatively independent automatic presentation is proved for the relevant morphic language.

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

\`docs/COMPUTE_BUDGET.md\`: **UNCHANGED**.  
\`docs/METRIC_CATALOG.md\`: **UNCHANGED**.

## 26. Exact next theorem-sized obligation

The next session should **not** try another unsaturated power of the same principal ideal.

### CDM4-T25 — DIVISOR-SATURATED / RELATIVE-HEIGHT EXACT-LIFTING AUDIT

Primary target:

1. work in the \(m\)-saturated functional relation module, using
   \[
   (\mathcal R:m^\infty)=\mathcal R;
   \]
2. factor every forced \(m^P\) contribution before the Liouville comparison;
3. determine whether a **relative** local/global inequality exists for the residual auxiliary value in which the known divisor height is subtracted on both sides;
4. equivalently, seek a multiplicity/zero estimate giving anomalous smallness of
   \[
   E/m^P
   \]
   rather than smallness coming from \(m^P\) itself;
5. require all relation matrices and localizations to be \(I\)-integral or explicitly account for their boundary pole order;
6. preserve the original scalar-active direction and prove an actual functional relation in the unsaturated toric analytic algebra;
7. preserve exactly
   \[
   Q(\alpha,\mathbf X)=P(\mathbf X);
   \]
8. if such a residual relative-height theorem is proved, run T21 pointwise real specialization and the completion-sign contradiction immediately.

A valid positive theorem must create fast-scale Diophantine gain **after principal-factor cancellation**.

A valid negative theorem should prove that no such divisor-saturated relative-height gain can occur in the T18 reduced toric Mahler architecture.

Do not return to asynchronous iterates, moving algebraic truncations of analytic coefficients, fixed multigradings, or quotient deletion.

## 27. Permanent T24 lessons

### T24-L1 — principal high ideal means two profiles

The T23 principal hypothesis is stronger than “one generator for several upper strata.” In the positive semigroup it forbids strictly faster profiles above the generator.

### T24-L2 — pullback \(I\)-order has an exact scalar multiplier

There is an intrinsic integer
\[
a=\operatorname{ord}_I(\rho^*m)
\]
with
\[
\operatorname{ord}_I(\rho^{n*}m)=a^n.
\]

### T24-L3 — \(I\)-order and fast valuation can still differ

Equal-radius Jordan extension can give
\[
g_{\rm fast}(n)\asymp n^{e_1+1}a^n
\]
while the \(I\)-order is only \(a^n\).

### T24-L4 — the Hilbert count is not the obstruction

Imposing
\[
\operatorname{ord}_I\ge P
\]
simply shifts the scalar support budget by \(Pw(\delta)\) and preserves full Hilbert degree for fixed \(P/D\).

### T24-L5 — a principal fast factor is not free Diophantine smallness

The extra local decay of \(m(q_n)^P\) is accompanied by the global height of the same algebraic factor. Exact division cancels both.

### T24-L6 — relation ideals are automatically \(m\)-saturated

A common principal factor cannot manufacture a functional relation.

### T24-L7 — regular orbit points do not imply boundary-regular localization

A denominator may be nonzero at every torus orbit point and still have a pole along \(m=0\). Deep-tail regularity does not preserve \(I\)-adic order.

### T24-L8 — the next theorem must be relative after saturation

Any future success must produce fast-scale residual smallness after all known principal factors have been removed.

D — no qualifying theorem found
