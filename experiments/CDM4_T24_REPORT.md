# CDM4-T24 — PRINCIPAL-FAST-IDEAL / I-ADIC AUXILIARY EXACT-LIFTING AUDIT

Date: 2026-10-04

Authoritative input commit: \`3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb\`

Session type: theorem / toric semigroup / auxiliary-function / literature audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue / carry / exponent-code optimization: **NONE**  
CPU / GPU / cloud / distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T24 does **not** prove exact unequal-growth relation lifting for the T23 principal-high-ideal subclass.

It does prove a new structural theorem that makes the principal case substantially more rigid than T23 recorded, and it identifies a theorem-level obstruction to the proposed \(I\)-adic auxiliary repair.

Let
\[
\Gamma=\Gamma_Y,\qquad
I=I_{>1}=(m),\qquad
m=\theta^\delta,
\]
where \(w=w_\Delta\) is the positive T21 grading and the positive T22 profiles satisfy
\[
g_1<\cdots<g_r.
\]

The main new facts are:

1. **Principal high ideal forces exactly two positive profiles.**
   \[
   \boxed{r=2.}
   \]
   The generator \(\delta\) has the unique fast profile \(g_2=g_{\rm fast}\). There cannot be an intermediate or still faster positive profile hidden in powers of \(m\).

2. **The positive semigroup splits exactly.** If
   \[
   \Gamma_{\rm slow}
   =
   \{0\}\cup\{\gamma\in\Gamma:\operatorname{prof}(\gamma)=g_1\},
   \]
   then every \(\gamma\in\Gamma\) has a unique expression
   \[
   \boxed{\gamma=k\delta+\eta,\qquad k\in\mathbb N,\ \eta\in\Gamma_{\rm slow}.}
   \]
   Hence
   \[
   \boxed{
   \Gamma\cong\mathbb N\delta\oplus\Gamma_{\rm slow},
   \qquad
   K[\Gamma]\cong K[m]\otimes_KK[\Gamma_{\rm slow}].
   }
   \]

3. **The pullback order is exactly computable.** Writing
   \[
   A=A_Y,
   \qquad
   A\delta=a\delta+\eta,
   \qquad
   \eta\in\Gamma_{\rm slow},
   \]
   the integer
   \[
   \boxed{
   a=\max\{j\ge0:A\delta-j\delta\in\Gamma\}
   }
   \]
   exists and satisfies \(a\ge1\). Moreover
   \[
   \rho^*m=u_\delta\,m^a\theta^\eta
   \]
   and
   \[
   \boxed{
   \operatorname{ord}_I(\rho^{n*}m)=a^n.
   }
   \]
   More generally,
   \[
   \boxed{
   \operatorname{ord}_I(\rho^{n*}f)
   \ge a^n\operatorname{ord}_I(f).
   }
   \]

4. **\(I\)-adic order and growth profile do not coincide in general.** If the slow profile is
   \[
   g_1(n)\asymp n^{e_1}\rho_1^n,
   \]
   then \(a\ge\rho_1\). If \(a>\rho_1\), then
   \[
   g_\delta(n)\asymp a^n
   \]
   and the pullback \(I\)-order has the correct fast scale. But if
   \[
   a=\rho_1
   \]
   and the slow coupling \(\eta\neq0\), then
   \[
   \boxed{
   g_\delta(n)\asymp n^{e_1+1}a^n,
   \qquad
   \operatorname{ord}_I(\rho^{n*}m)=a^n.
   }
   \]
   Thus the \(I\)-adic order misses the polynomial Jordan/Frobenius factor.

5. **Direct orbit evaluation of \(m^P\) is genuinely fast.** Since principal geometry forces \(g_\delta=g_{\rm fast}\),
   \[
   -\log|m(q_n)|_2
   =
   (\log2)V_\delta(n)
   =
   \Theta(g_{\rm fast}(n)).
   \]
   Hence an analytic function
   \[
   E=m^PE_0
   \]
   with bounded \(E_0\) on the chosen strict toric affinoid satisfies
   \[
   -\log|E(q_n)|_2
   \ge
   cP\,g_{\rm fast}(n)-O(1).
   \]

The decisive negative result is that this fast factor is **not produced by the same finite-codimensional Hilbert mechanism** that gives the T16/T17 auxiliary multiplicity.

Because the principal ideal has positive-dimensional slow base,
\[
\mathcal A/I^P
\]
is infinite dimensional over the coefficient field. In the exact splitting,
\[
\mathcal A
\sim
\left\{
\sum_{k\ge0}m^kh_k:
h_k\in\mathcal A_{\rm slow}
\right\},
\]
and
\[
E\in I^P
\iff
h_0=\cdots=h_{P-1}=0
\]
as **entire slow analytic functions**.

Thus exact divisorial multiplicity \(P\) imposes \(P\) relative functional identities over the slow analytic algebra, not finitely many scalar Taylor conditions.

There are then only two generic ways to proceed:

- impose only finitely many slow Taylor/weight conditions; the uncontrolled slow tail evaluates on \(g_{\rm slow}\), so the T22 fast/slow Liouville mismatch returns;
- force exact divisibility by explicitly multiplying the auxiliary by \(m^P\); then \(P\) consumes ordinary support degree linearly, the same \(m^P\) factor can be divided from the auxiliary value, and no new Mahler multiplicity amplification is created.

Therefore the proposed replacement
\[
\text{ordinary high order}
\longrightarrow
I^P
\]
does not by itself repair the T16/T17 auxiliary contradiction.

The missing theorem is now sharper:

\[
\boxed{
\text{a relative multiplicity / exact-lifting theorem over the slow analytic base}
}
\]

capable of producing high \(m\)-adic order by cancellation while keeping the coefficients algebraic/rational of controlled degree and height.

No such theorem was found in the audited Mahler literature.

Accordingly, T24 is a genuine Route B result: **principal geometry is strong enough to classify the fast divisor exactly, but not strong enough by itself to restore exact mixed-place relation lifting.**

No new positive-integer anchor class is excluded.

---

## 2. Exact T23 state inherited

T24 treats the following as closed and does not reprove it:

- T20 exact variable-length scalar transport;
- T21 algebraic ordinary-prefix liminf/limsup;
- the positive-integer strict gap
  \[
  \limsup A_n/n<\log_2 3;
  \]
- T21 real convergence of the canonical scalar and state subseries under a hypothetical positive integer anchor;
- the positive reduced increment grading \(w_\Delta\);
- T22 intrinsic reduced profiles \((\rho,e)\);
- the finite \(A_Y\)-stable growth filtration;
- exact global height
  \[
  \widehat h(q_n)=\Theta(g_{\rm fast}(n));
  \]
- exact local slow contraction;
- T22 scalar-support fullness;
- minimality of the T18 orbit-closure reduction;
- failure of fixed reweighting, monomial re-embedding, quotienting, asynchronous scale matching, and ordinary analytic truncation to repair the genuine scale gap;
- T23 exact character-support filtration
  \[
  \rho^*(I_{>i})\subseteq I_{>i};
  \]
- T23 slowest-face elimination;
- T23 dense-orbit analytic zero theorem when
  \[
  I_{>1}=(\theta^\delta).
  \]

The exact live issue is only the auxiliary/Liouville relation-lifting step with prescribed specialization.

---

## 3. Principal-high semigroup theorem

Let
\[
I=I_{>1}=(m),
\qquad
m=\theta^\delta.
\]

Let
\[
\Gamma_{\rm slow}
=
\{0\}
\cup
\{\gamma\in\Gamma:\operatorname{prof}(\gamma)=g_1\}.
\]

Because positive profiles are max-additive,
\[
\Gamma_{\rm slow}
\]
is a subsemigroup.

### Theorem T24.1 — principal high ideal implies a two-profile direct product

Under the T23 principal-high-ideal hypothesis:

\[
\boxed{
r=2,
\qquad
\operatorname{prof}(\delta)=g_2=g_{\rm fast}.
}
\]

Every \(\gamma\in\Gamma\) admits a unique decomposition
\[
\boxed{
\gamma=k\delta+\eta,
\qquad
k\in\mathbb N,
\quad
\eta\in\Gamma_{\rm slow}.
}
\]

Consequently
\[
\boxed{
\Gamma\cong\mathbb N\delta\oplus\Gamma_{\rm slow}
}
\]
and
\[
\boxed{
K[\Gamma]\cong K[m]\otimes_KK[\Gamma_{\rm slow}].
}
\]

#### Proof

Since \(m\in I\), \(\delta\) is high.

Let \(\gamma\) be any high character. Because \(I=(m)\), monomial divisibility gives
\[
\gamma=\delta+\eta
\]
for some \(\eta\in\Gamma\).

By max-additivity,
\[
\operatorname{prof}(\gamma)
=
\max\{\operatorname{prof}(\delta),\operatorname{prof}(\eta)\}.
\]

Therefore every high profile is at least \(\operatorname{prof}(\delta)\), so
\[
\operatorname{prof}(\delta)=g_2.
\]

Suppose some high \(\gamma\) had profile strictly larger than \(g_2\). Then
\[
\operatorname{prof}(\eta)=\operatorname{prof}(\gamma)>g_2,
\]
so \(\eta\) is high and hence divisible by \(\delta\) again. Iterating would give
\[
\gamma=k\delta+\eta_k
\]
with \(\eta_k\in\Gamma\) for every \(k\).

But the positive grading is additive:
\[
w(\gamma)
=
kw(\delta)+w(\eta_k)
\ge
kw(\delta),
\]
which is impossible for
\[
k>w(\gamma)/w(\delta).
\]

Hence every high character has profile exactly \(g_2\), proving \(r=2\).

Repeated division by \(m\) must terminate for the same \(w\)-reason, yielding
\[
\gamma=k\delta+\eta,
\qquad
\eta\in\Gamma_{\rm slow}.
\]

For uniqueness, suppose
\[
k\delta+\eta
=
\ell\delta+\eta',
\qquad
k>\ell,
\]
with \(\eta,\eta'\) slow. Then
\[
(k-\ell)\delta+\eta=\eta'.
\]
The left side has fast profile \(g_2\), while the right side has slow profile \(g_1\), contradiction.

Thus the decomposition is unique. QED.

### Consequences

The principal-high subclass is not a hidden many-scale class.

It is exactly one fast monomial direction over a slow positive semigroup.

In particular:

- there is no intermediate principal generator;
- there are no nested faster positive profiles;
- \(m\) is necessarily scalar-active because T22 scalar-support fullness forbids deleting any positive lattice direction;
- genuine unequal growth implies
  \[
  \operatorname{rank}\Gamma_{\rm slow}\ge1
  \]
  and therefore
  \[
  \operatorname{rank}\Gamma\ge2.
  \]

The last point matters for the auxiliary obstruction below: the divisor \(m=0\) has a positive-dimensional slow base.

---

## 4. Exact pullback of the principal generator

Write
\[
A=A_Y.
\]

T23 gives
\[
\rho^*m
=
u_\delta\theta^{A\delta},
\qquad
u_\delta\in\overline{\mathbb Q}^{\times}.
\]

Because \(A\delta\) has the same fast profile as \(\delta\), Theorem T24.1 gives a unique decomposition
\[
\boxed{
A\delta=a\delta+\eta,
\qquad
a\ge1,
\quad
\eta\in\Gamma_{\rm slow}.
}
\]

Therefore
\[
\boxed{
\rho^*m
=
u_\delta m^a\theta^\eta.
}
\]

The exact largest exponent is
\[
\boxed{
a
=
\max\{j\ge0:A\delta-j\delta\in\Gamma\}.
}
\]

No profile notation is used to define \(a\); this is exact semigroup divisibility.

---

## 5. Iterated \(I\)-adic order

Define
\[
\operatorname{ord}_I(f)
=
\max\{P:f\in I^P\}.
\]

For monomials,
\[
\operatorname{ord}_I(\theta^\gamma)
\]
is exactly the \(k\) in the unique decomposition
\[
\gamma=k\delta+\eta.
\]

Because \(A\Gamma_{\rm slow}\subseteq\Gamma_{\rm slow}\), induction gives
\[
A^n\delta
=
a^n\delta+\eta_n,
\]
where
\[
\boxed{
\eta_n
=
\sum_{j=0}^{n-1}
a^{\,n-1-j}A^j\eta
\in\Gamma_{\rm slow}.
}
\]

Hence
\[
\boxed{
\operatorname{ord}_I(\rho^{n*}m)=a^n.
}
\]

More explicitly,
\[
\boxed{
\rho^{n*}m
=
U_n\,m^{a^n}\theta^{\eta_n},
\qquad
U_n\in\overline{\mathbb Q}^{\times}.
}
\]

For every analytic
\[
f=m^Ph,
\]
one obtains
\[
\boxed{
\operatorname{ord}_I(\rho^{n*}f)
\ge
Pa^n.
}
\]

Thus pullback amplifies \(I\)-order exponentially whenever \(a>1\).

The amplification exponent is constant at one step and exactly multiplicative under iteration:
\[
a_n=a^n.
\]

---

## 6. \(I\)-adic order versus the fast growth profile

Let
\[
g_1(n)\asymp n^{e_1}\rho_1^n
\]
be the slow profile.

Applying the additive grading \(w\) to
\[
A^n\delta=a^n\delta+\eta_n
\]
gives
\[
w(A^n\delta)
=
a^nw(\delta)+w(\eta_n).
\]

If \(\eta\neq0\), then every nonzero \(A^j\eta\) remains slow and has scale
\[
j^{e_1}\rho_1^j.
\]

Therefore:

### Case 1 — \(a>\rho_1\)

The convolution
\[
\sum_{j=0}^{n-1}a^{n-1-j}w(A^j\eta)
\]
is \(O(a^n)\), and
\[
\boxed{
g_\delta(n)\asymp a^n.
}
\]

Here
\[
\operatorname{ord}_I(\rho^{n*}m)
\asymp
g_\delta(n).
\]

### Case 2 — \(a=\rho_1\) and \(\eta\neq0\)

Then
\[
w(\eta_n)
\asymp
a^{n-1}\sum_{j<n}j^{e_1}
\asymp
n^{e_1+1}a^n.
\]

Hence
\[
\boxed{
g_\delta(n)
\asymp
n^{e_1+1}a^n,
}
\]
whereas
\[
\boxed{
\operatorname{ord}_I(\rho^{n*}m)=a^n.
}
\]

Thus the \(I\)-adic filtration misses exactly the extra polynomial factor generated by equal-radius triangular coupling.

### Case 3 — \(a<\rho_1\)

Then the slow forcing term dominates and \(\delta\) would have the slow profile \(g_1\), contradicting the principal-high hypothesis.

Therefore
\[
\boxed{a\ge\rho_1.}
\]

### Interpretation

The \(I\)-adic and profile filtrations are **not identical**.

The profile measures full exponent growth after lower-stratum forcing.

The \(I\)-adic order measures only repeated copies of the fast generator.

This distinction is intrinsic and persists even in the principal case.

---

## 7. Nested-principal audit

T24.1 closes the requested \(r>2\) audit.

If
\[
I_{>1}=(m),
\]
then
\[
\boxed{r=2.}
\]

A single principal generator cannot contain several distinct higher positive profiles through its powers or multiplication by slower monomials.

Indeed every power \(m^k\) has the same positive profile as \(m\), and multiplication by a slow monomial preserves that fast profile by max-additivity.

Therefore:

- “principal generator at an intermediate profile” is impossible;
- “multiple faster profiles contained in powers of one generator” is impossible;
- the profile controlling
  \[
  |m(q_n)|_2
  \]
  is exactly
  \[
  g_{\rm fast}=g_2.
  \]

This is stronger than the T23 formulation.

---

## 8. Exact orbit evaluation of \(I^P\)

For the exact reduced orbit,
\[
m(q_n)
=
\theta^\delta(q_n)
=
\frac{2^{V_\delta(n)}}{3^{L_\delta(n)}}.
\]

Therefore
\[
\boxed{
-\log|m(q_n)|_2
=
(\log2)V_\delta(n)
=
\Theta(g_{\rm fast}(n)).
}
\]

If
\[
E=m^PE_0
\]
with \(E_0\) analytic and bounded on a fixed strict toric affinoid containing the tail, then
\[
|E_0(q_n)|_2\le C
\]
and
\[
\boxed{
-\log|E(q_n)|_2
\ge
cP\,g_{\rm fast}(n)-O(1).
}
\]

Thus the intended local fast factor is real.

Affine translation constants do not alter the exponent identity: they appear only as algebraic unit coefficients in pullback, while the exact normalized orbit value above already includes the true translated torus point.

The failure of Route A therefore does **not** come from the local estimate for a genuine \(I^P\) factor.

---

## 9. Combined \(w_\Delta\)/\(I\)-adic Hilbert dimension

Let
\[
s=w(\delta)>0
\]
and define
\[
H_\Gamma(D)
=
\#\{\gamma\in\Gamma:w(\gamma)\le D\}.
\]

By Theorem T24.1,
\[
\gamma=k\delta+\eta
\]
uniquely, hence
\[
\boxed{
H_\Gamma(D)
=
\sum_{0\le k\le D/s}
H_{\rm slow}(D-ks).
}
\]

Multiplication by \(m^P\) is injective and gives an exact bijection
\[
\{\gamma:w(\gamma)\le D-Ps\}
\longleftrightarrow
\{\gamma\in I^P:w(\gamma)\le D\}.
\]

Therefore
\[
\boxed{
\dim_K(I^P\cap R_{\le D})
=
H_\Gamma(D-Ps)
}
\]
for \(D\ge Ps\), and \(0\) otherwise.

Equivalently,
\[
\boxed{
\dim_K(R_{\le D}/(I^P\cap R_{\le D}))
=
H_\Gamma(D)-H_\Gamma(D-Ps).
}
\]

If
\[
d=\operatorname{rank}\Gamma,
\]
then Hilbert–Serre gives
\[
H_\Gamma(D)
=
cD^d+O(D^{d-1})
\]
up to the usual quasipolynomial refinement.

Hence for fixed or \(o(D)\) order \(P\),
\[
H_\Gamma(D)-H_\Gamma(D-Ps)
=
\Theta(PD^{d-1}),
\]
while for
\[
P=\lambda D,
\qquad
0<\lambda<1/s,
\]
one still has
\[
\dim(I^P\cap R_{\le D})
=
\Theta(D^d).
\]

So **explicitly extracting \(m^P\) does not destroy the polynomial Hilbert degree.**

This fact by itself does not solve the auxiliary problem.

Extremality of the ray spanned by \(\delta\), semigroup saturation, and normality do not affect these exact equalities. They use only the direct semigroup decomposition and additivity of \(w\).

---

## 10. Why exact \(I^P\)-vanishing is not a finite-codimensional auxiliary condition

The preceding finite polynomial count can be misleading if it is identified with the analytic auxiliary condition.

The analytic algebra has a unique \(m\)-adic expansion of the form
\[
\boxed{
E
=
\sum_{k\ge0}m^kE_k,
\qquad
E_k\in\mathcal A_{\rm slow}.
}
\]

Then
\[
\boxed{
E\in I^P
\iff
E_0=\cdots=E_{P-1}=0
\quad\text{in }\mathcal A_{\rm slow}.
}
\]

Because the system is genuinely unequal-growth, \(\Gamma_{\rm slow}\) contains a nonzero positive character. Hence
\[
\mathcal A_{\rm slow}
\]
is infinite dimensional over the algebraic coefficient field.

Consequently
\[
\boxed{
\mathcal A/I^P
\cong
\bigoplus_{k=0}^{P-1}m^k\mathcal A_{\rm slow}
}
\]
is infinite dimensional.

This is the first exact T24 obstruction.

The T16/T17 auxiliary construction obtains large vanishing order at the attracting boundary because the positive-weight/maximal-ideal truncation has **finite codimension**.

By contrast, principal divisorial order leaves all slow analytic directions free.

Thus a dimension argument using only finitely many algebraic polynomial coefficients cannot, from principal geometry alone, force
\[
E\bmod I^P=0
\]
as an analytic identity.

It would have to prove \(P\) complete functional identities in the slow analytic coefficient algebra.

That is a **relative multiplicity problem**, not an ordinary Hilbert truncation.

---

## 11. Finite slow truncation does not repair the problem

One may weaken exact divisibility and impose only that
\[
E\bmod I^P
\]
has no slow support below some finite ordinary weight \(L\).

Then
\[
E
\in
I^P+F_{\ge L}.
\]

On the exact orbit the two pieces give, schematically,
\[
|E(q_n)|_2
\le
\max\{
\exp(-cP\,g_{\rm fast}(n)),
\exp(-c'L\,g_{\rm slow}(n))
\}.
\]

Therefore the guaranteed exponent is
\[
\min\{
cP\,g_{\rm fast}(n),
c'L\,g_{\rm slow}(n)
\}.
\]

For fixed auxiliary parameters,
\[
g_{\rm fast}(n)/g_{\rm slow}(n)\to\infty,
\]
so eventually the slow remainder dominates:
\[
\boxed{
-\log|E(q_n)|_2
=
O(L\,g_{\rm slow}(n))
}
\]
at the level of a uniform guaranteed bound.

To make the slow truncation invisible one would need
\[
L_n g_{\rm slow}(n)
\gtrsim
P g_{\rm fast}(n),
\]
hence
\[
L_n
\gtrsim
P\,\frac{g_{\rm fast}(n)}{g_{\rm slow}(n)}.
\]

This returns exactly the orbit-dependent truncation degree already killed in T23.

Its algebraic coefficient height is then on the fast scale itself.

Thus finite slow truncation is not a Route A repair.

---

## 12. Explicit multiplication by \(m^P\) is multiplicity-neutral

The other generic method is to start with an ordinary auxiliary \(E_0\) and define
\[
E=m^PE_0.
\]

This gives exact \(I^P\)-divisibility immediately.

But it does not create the Mahler multiplicity amplification used in T16/T17.

First, with
\[
s=w(\delta),
\]
the support degree rises by exactly
\[
Ps.
\]

Thus for a fixed ordinary degree budget \(D\),
\[
\boxed{
P\le D/s.
}
\]

There is no analogue of the T16 parameter gain
\[
p\asymp \delta_1^{1/N}\delta_2
\]
coming from many auxiliary coefficients canceling many low Taylor terms.

Second, at every torus orbit point
\[
m(q_n)\neq0.
\]

Therefore
\[
E(q_n)=0
\iff
E_0(q_n)=0.
\]

For nonzero auxiliary values,
\[
\frac{E(q_n)}{m(q_n)^P}
=
E_0(q_n).
\]

So the explicit fast factor can be divided from the numerical auxiliary value exactly.

The residual auxiliary still has only the inherited slow-order gain.

Third, the algebraic point height of the explicit factor is itself fast:
\[
\boxed{
h(m(q_n)^P)
=
P\,h(m(q_n))
=
\Theta(P\,g_{\rm fast}(n)).
}
\]

Hence any global height estimate which tracks the explicit factor also acquires the same \(P\,g_{\rm fast}\) contribution.

The fast local factor is real, but it is not a free multiplicity parameter.

### T24 auxiliary-neutrality conclusion

\[
\boxed{
\text{explicit }m^P\text{ multiplication does not repair the fast/slow contradiction.}
}
\]

After removing the common factor, one is back at the T22 comparison.

---

## 13. Relation to the Adamczewski–Faverjon auxiliary mechanism

The Adamczewski–Faverjon construction does something stronger than explicit multiplication by a fixed boundary monomial.

For coefficient degrees \(\delta_1,\delta_2\), finite-dimensional linear algebra produces an auxiliary analytic function with ordinary boundary order
\[
p
\asymp
\delta_1^{1/N}\delta_2.
\]

The extra factor
\[
\delta_1^{1/N}
\]
is what eventually outruns the Liouville constant.

The exact T24 principal-divisor analogue would require:

1. an auxiliary function of algebraic coefficient degree roughly \(D\);
2. an exact divisorial order
   \[
   \operatorname{ord}_I(E)=P
   \]
   with \(P/D\) carrying an independently enlargable auxiliary parameter;
3. no uncontrolled slow analytic remainder;
4. algebraic/rational coefficient functions of controlled height.

Principal ideal geometry supplies none of these cancellations automatically.

It supplies only the explicit factorization once the high order has already been achieved.

This is the theorem-sized obstruction.

---

## 14. Coefficient-height audit

### 14.1 The generator itself

The monomial
\[
m^P
\]
has coefficient \(1\), so its algebraic **coefficient** height in the semigroup basis is zero.

Its ordinary weight is
\[
Pw(\delta).
\]

### 14.2 Orbit evaluation

At the algebraic orbit point,
\[
h(m(q_n)^P)
=
\Theta(Pg_{\rm fast}(n)).
\]

Thus evaluation height is fast even though the monomial coefficient height is trivial.

### 14.3 Pullback translation constants

Writing
\[
\rho^{n*}m
=
U_n m^{a^n}\theta^{\eta_n},
\]
the algebraic constants \(U_n\) arise from the fixed affine torus translation data.

The inherited T18 height bookkeeping gives
\[
\log H(U_n)
=
O(g_{\rm fast}(n)).
\]

For \(m^P\),
\[
\log H(U_n^P)
=
O(Pg_{\rm fast}(n)).
\]

There is no super-fast denominator explosion beyond the already existing global fast scale, but there is also no hidden height saving.

### 14.4 Siegel / linear-algebra coefficients

The ordinary T16/T17 auxiliary coefficient heights remain orbit-independent for fixed auxiliary parameters.

T24 finds no new coefficient-height explosion at the stage of merely multiplying by \(m^P\).

The obstruction is more basic: exact high \(I\)-order by cancellation is a relative analytic identity problem, while explicit multiplication consumes degree linearly and gives no new multiplicity ratio.

---

## 15. Denominator and localization audit

The \(I\)-adic order extends to the rational function field as the \(m\)-adic order.

If a denominator \(d\) satisfies
\[
\operatorname{ord}_I(d)>0,
\]
then localization introduces negative \(I\)-order.

Hence:

\[
\boxed{
\text{ordinary regularity on the orbit does not imply }I\text{-adic regularity along }m=0.
}
\]

A denominator can be nonzero at every torus orbit point and still vanish on the boundary divisor.

Passing to a deeper regular tail cannot change this structural order.

Therefore the inherited rational-functional minimalization and Nullstellensatz relation matrices preserve \(I\)-order only if their denominators lie outside the prime divisor:
\[
\operatorname{ord}_I(d)=0.
\]

T23 already warned that rational minimalization need not preserve the support filtration.

T24 sharpens this to the principal case:

\[
\boxed{
\text{an }I\text{-saturated / divisor-regular relation module would be required.}
}
\]

No theorem in T16–T23 proves that such a relation basis or relation matrix exists.

This is independent of the infinite-codimension obstruction above.

---

## 16. Relation ideal status

The original functional relation ideal remains a prime ideal.

It is the kernel of evaluation into the analytic function domain, so it is automatically prime and radical.

The T23 principal zero theorem remains available to convert suitable infinite orbit-zero statements into genuine functional identities.

However,
\[
\mathcal A/I^P
\]
is nonreduced for \(P>1\).

A relation modulo \(I^P\), in an associated graded ring, or in an \(I\)-adic completion is therefore not automatically a relation in the original functional relation ideal.

T24 does not identify any valid Nullstellensatz shortcut from the thickened divisor back to the original relation ideal with prescribed specialization.

Hence:

- original relation ideal: **prime/radical — closed**;
- \(I\)-adic thickening: **nonreduced**;
- \(I\)-saturated relation matrices: **not proved**;
- lift from a completed/graded relation to an original functional identity: **not proved**.

---

## 17. Exact specialization audit

The required conclusion remains
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

No T24 construction reaches this statement for a new unequal-growth class.

A relation obtained only:

- modulo \(I^P\);
- in the associated graded ring;
- after completion;
- after quotienting the fast coordinate;
- or after an uncontrolled localization

is insufficient.

Therefore
\[
\boxed{
\text{exact relation lifting remains OPEN in the T23 principal-high subclass.}
}
\]

---

## 18. Division by \(m\)

The T23 zero theorem divides analytic functions by \(m\) safely because
\[
I=(m)
\]
inside the toric analytic algebra and
\[
m(q_n)\neq0.
\]

For exact relation lifting the situation is more constrained.

If an actual functional relation has all coefficients divisible by \(m^P\), division by \(m^P\):

- preserves algebraicity of coefficients;
- preserves an analytic relation if the quotient coefficients remain in the analytic algebra;
- preserves the orbit zero set.

But it changes specialization from
\[
P(\mathbf X)
\]
to
\[
P(\mathbf X)/m(\alpha)^P.
\]

Since
\[
m(\alpha)\in\overline{\mathbb Q}^{\times},
\]
one may renormalize by the constant \(m(\alpha)^P\) if the divided relation genuinely exists.

Thus scalar normalization is not the main obstruction.

The actual danger is localization: a rational relation may contain negative \(m\)-order, and division may leave the chosen analytic algebra.

Therefore:

\[
\boxed{
\text{division by }m\text{ is safe for T23 zero sets but not a substitute for an }I\text{-regular lifting theorem.}
}
\]

---

## 19. Scalar reconstruction and scalar activity

T22 scalar-support fullness remains unchanged:
\[
\langle\operatorname{Supp}(S|_Y)\rangle_{\mathbb Z}=N_Y.
\]

The fast generator direction is therefore not dispensable.

The T24 analysis never quotients away \(\delta\) or \(m\).

Using \(m^P\) as a formal auxiliary factor would leave the canonical scalar direction present.

If an exact lift were obtained, the T18 scalar-preserving reconstruction row would still be available.

Current status:

- scalar-active principal direction: **YES**;
- quotienting it away: **FORBIDDEN**;
- exact scalar reconstruction infrastructure: **CLOSED**;
- new T24 relation to reconstruct: **NONE**.

---

## 20. Appending \(1\)

Appending the constant function \(1\) remains structurally harmless exactly as in T16–T23.

The augmented functional system preserves the same toric dynamics and regularity data.

But appending \(1\) does not repair the missing \(I\)-adic exact lift.

Status:
\[
\boxed{\text{AVAILABLE, but no new relation reaches this stage.}}
\]

---

## 21. Dense-orbit zero theorem reuse

T23's principal-high-ideal zero theorem is used only as closed infrastructure.

T24 does not require a stronger zero-separation estimate to prove Theorem T24.1 or the \(I\)-adic obstruction.

A successful future Route A would need more than the T23 zero theorem: it would need a **relative multiplicity theorem** producing high \(m\)-adic order with algebraic coefficient control.

No attempt is made to reprove T23 slow-face elimination or the principal zero theorem.

---

## 22. Literature audit

### 22.1 Adamczewski–Faverjon 2026

Boris Adamczewski and Colin Faverjon, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), together with its addendum, remains the exact published source for multivariate lifting with prescribed specialization in the ordinary complex admissible setting.

The auxiliary proof obtains a high **point-order** condition through finite-dimensional Hilbert counting. In the published proof the auxiliary order parameter satisfies schematically
\[
p\asymp\delta_1^{1/N}\delta_2.
\]

Nothing in the inspected theorem/proof supplies a relative principal-divisor multiplicity theorem over an infinite-dimensional slow analytic coefficient algebra.

Thus Adamczewski–Faverjon remains structurally relevant but does not close T24.

### 22.2 Nishioka multiplicity estimates

Kumiko Nishioka, “On an estimate for the orders of zeros of Mahler type functions,” *Acta Arithmetica* 56 (1990), gives classical zero-order estimates for Mahler-type functions.

The order is an ordinary one-variable order at a point.

It is not an exact \(I\)-adic multiplicity theorem along a positive-dimensional toric divisor, and it does not preserve the T24 specialization polynomial.

Not load-bearing.

### 22.3 Zorin stable-ideal multiplicity framework

Evgeniy Zorin, “Zero Order Estimates for Analytic Functions,” arXiv:1103.1174, develops general multiplicity estimates by studying stable ideals and includes generalized Mahler functional equations.

This is conceptually closer to the new T24 obligation because it treats multiplicity through stable ideals.

However, the audited statements control order along an analytic germ/point and do not directly provide the required theorem:

- coefficient ring equal to the slow toric analytic algebra;
- \(m\)-adic order along a divisor;
- algebraic coefficient/height control at the exact Collatz orbit;
- exact mixed-place relation lifting;
- exact prescribed specialization
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X).
  \]

It is therefore a possible source of techniques for the next theorem, not a T24 solution.

### 22.4 Formal schemes / adic completions

General formal \(I\)-adic completion theory records the thickened divisor
\[
\operatorname{Spf}\widehat{\mathcal A}_I
\]
and its quotients by \(I^P\).

It does not turn
\[
\mathcal A/I^P
\]
into a finite-dimensional coefficient space, nor does it supply arithmetic height or exact-specialization estimates.

Formal completion is bookkeeping, not the missing transcendence theorem.

### 22.5 Height estimates for sections vanishing along a divisor

For an algebraic principal divisor, imposing explicit vanishing by a power of its defining section shifts the available degree linearly.

That is exactly the finite polynomial identity
\[
\dim(I^P\cap R_{\le D})
=
H_\Gamma(D-Ps)
\]
proved above.

This confirms rather than removes the obstruction: explicit divisorial vanishing consumes support degree linearly and does not create the extra auxiliary multiplicity factor.

### 22.6 Moving-target / relative Subspace theorems

T23's moving-target audit remains unchanged.

The coefficient functions arising on the slow base are analytic values and need not be algebraic moving targets.

Ordinary algebraic truncation at the precision required to suppress the slow remainder costs height on the fast scale.

No new applicable theorem was found.

### 22.7 Brechler 2026

Enzo Brechler, arXiv:2607.24877v1, remains a preprint as of this audit.

Its p-adic meromorphy and strengthened multivariate lifting results are useful background, but the inspected current description contains no principal-divisor / \(I\)-adic multiplicity theorem controlling a positive-dimensional slow base.

It is therefore **non-load-bearing** for T24.

---

## 23. Local upper bound versus global Liouville lower bound

### Exact fast factor

For an exact factor
\[
m^P,
\]
the local upper side genuinely gains
\[
P\,g_{\rm fast}(n).
\]

### Exact-divisibility problem

The missing step is not evaluation but construction.

To gain the fast factor by cancellation, one must prove
\[
E\in I^P
\]
as an exact analytic identity, i.e. kill \(P\) full slow analytic coefficient functions.

No finite-codimensional Hilbert argument supplied by T16/T17 does this.

### Explicit-factor problem

If one instead writes
\[
E=m^PE_0
\]
by construction, \(P\) is bounded linearly by the support degree and the factor is algebraically removable from every nonzero orbit value.

The residual comparison remains
\[
\text{slow local multiplicity}
\quad\text{versus}\quad
\text{fast global height}.
\]

Therefore the T22 mismatch survives.

---

## 24. Exact relation-lifting status

For the T23 principal-high-ideal subclass:

\[
\boxed{
P(1,\mathbf G(\alpha))=0
\Longrightarrow
Q(x,1,\mathbf G(x))=0
}
\]

with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]

is **NOT PROVED**.

T24 proves that the proposed bare \(I^P\) replacement is insufficient.

A successful future theorem must add a new relative multiplicity mechanism.

---

## 25. Pointwise completion portability

T19/T21 pointwise completion portability remains closed.

If a future exact lift is obtained:

1. choose the deep regular algebraic tail point;
2. use T21 scalar convergence;
3. use the finite reconstruction matrices;
4. evaluate the algebraic functional identity in the ordinary real completion.

No open real polydisc is required merely for pointwise evaluation.

T24 produces no new lift, so this step is not newly invoked.

---

## 26. Completion-sign applicability

The completion-sign contradiction remains available conditionally on exact lifting.

For a hypothetical positive integer anchor
\[
H=N>0,
\]
T21 gives
\[
\limsup A_n/n<\log_2 3
\]
and hence real scalar convergence.

But because T24 does not establish exact relation lifting for the principal-high subclass, the chain cannot presently reach
\[
S^{(\infty)}(q)+3N=0.
\]

Status:
\[
\boxed{\text{NOT APPLICABLE TO A NEW T24 CLASS.}}
\]

---

## 27. Positive integer, positive rational, and negative rational status

### Positive integers

No new principal-high unequal-growth positive-integer anchor class is excluded.

### Positive rational nonintegers

No new exclusion.

As before, only subclasses with independently established intrinsic real subcriticality can automatically extend the sign contradiction from positive integers to arbitrary positive rationals.

### Negative rationals

Remain unexcluded and are not Collatz counterexamples.

---

## 28. T2 bounded-\(R_m\) consequence

T24 closes no new recursive anchor class.

Therefore it adds no new implication of the form
\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}.
\]

All previously closed T2 consequences remain unchanged.

---

## 29. Periodicity-Conjecture boundary after T24

| Recursive class | Status after T24 |
|---|---|
| Finite abelian translations | Closed by T11 |
| Finite nonabelian translations | Positive-anchor route closed by T12 |
| Balanced one-variable finite-kernel systems | Closed by T13 |
| Primitive dominant multivariate systems | Closed by T16 |
| T17 stable-image systems | Closed in its stated relatively admissible class; subsumed by T18 reduction |
| T18 orbit-closure-reduced systems | Exact lifting closed in the inherited balanced/uniform setting |
| T19 nonprimitive uniform systems | Positive-anchor route closed |
| T20 primitive variable-length systems | Positive-anchor route closed |
| T21 balanced-growth reducible systems | Positive-anchor route closed |
| T22 genuine active unequal-growth systems | Exact lifting open |
| T23 principal-high-ideal zero-theorem subclass | Dense-orbit analytic zero theorem proved |
| **T24 principal-high-ideal structural subclass** | **Exactly two profiles; semigroup splits as fast principal direction over slow base; bare \(I^P\) auxiliary repair obstructed; exact lifting still open** |
| General nonprincipal multiscale filtered systems | Open at moving analytic coefficients and exact lifting |
| Remaining reducible/nonprimitive morphic systems | Open |
| Arbitrary automatic/morphic parity languages | Open |
| Full Periodicity Conjecture | Open |

The full Periodicity Conjecture is not solved.

---

## 30. Cobham, López–Stoll, Adamczewski–Faverjon, Brechler

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

**Applicable:** NO.

### López–Stoll

Remains non-load-bearing.

T24 neither uses direct cross-completion transfer nor imports a parity-density claim.

**Load-bearing:** NO.

### Adamczewski–Faverjon

Published and structurally central for the inherited exact-specialization architecture.

No applicable principal-divisor / relative \(I\)-adic multiplicity theorem was found.

**T24 load-bearing:** only as inherited architecture and as the benchmark auxiliary mechanism.

### Brechler

Still a 2026 preprint.

No applicable divisor-relative multiplicity theorem found.

**T24 load-bearing:** NO.

---

## 31. Explicit anchored word, candidate, orbit, and counterexample audit

Explicit anchored aperiodic recursive word found: **NO**.

Explicit positive integer candidate found: **NO**.

Unbounded Collatz orbit found: **NO**.

Counterexample claimed: **NO**.

No finite symbolic calculation is promoted to a class theorem.

---

## 32. Compute decision

No theorem-derived scientific workload is justified.

No new starts.

No candidate trajectories.

No substitution enumeration.

No finite residue/carry/exponent-code search.

No generator or distribution.

No CPU campaign.

No GPU work.

No cloud, cluster, distributed, or volunteer computation.

No tiny symbolic check was required; the T24 results follow by exact semigroup and Hilbert arguments.

\`docs/COMPUTE_BUDGET.md\`: **UNCHANGED**.

\`docs/METRIC_CATALOG.md\`: **UNCHANGED**.

---

## 33. Permanent T24 lessons

### T24-L1 — principal high ideal means exactly one fast positive profile

The T23 principal hypothesis is much stronger than “one monomial generates the high ideal.”

It forces
\[
\Gamma
\cong
\mathbb N\delta\oplus\Gamma_{\rm slow}
\]
and removes every intermediate higher positive profile.

### T24-L2 — pullback \(I\)-order is exact but may miss a polynomial profile factor

\[
\operatorname{ord}_I(\rho^{n*}m)=a^n
\]
exactly.

Equal-radius lower-stratum forcing can nevertheless give
\[
g_\delta(n)\asymp n^{e_1+1}a^n.
\]

Do not identify semigroup divisibility order with evaluated profile size.

### T24-L3 — divisorial order is relative, not finite-codimensional

For a genuine unequal-growth principal divisor,
\[
\mathcal A/I^P
\]
still contains the complete slow analytic algebra.

Exact \(I^P\)-vanishing is therefore a system of slow functional identities.

It is not the same finite-dimensional condition as high order at a toric fixed point.

### T24-L4 — explicit \(m^P\) multiplication is not Mahler multiplicity amplification

It consumes ordinary support degree linearly and is removable from every nonzero torus orbit value.

The fast factor is genuine but not a free auxiliary parameter.

### T24-L5 — regular orbit denominators need not be divisor-regular

A denominator may avoid every orbit point and still have positive \(m\)-order.

Any future relative theorem needs \(I\)-saturated localization or a divisor-regular relation module.

### T24-L6 — the next theorem is relative

The principal case no longer asks for a generic multiscale zero theorem.

It asks for a relative multiplicity/exact-lifting theorem over the slow analytic base, with algebraic coefficient and height control and exact specialization.

---

## 34. Exact next theorem-sized obligation

**CDM4-T25 — RELATIVE SLOW-BASE MULTIPLICITY / DIVISOR-REGULAR MAHLER LIFTING AUDIT.**

The next session should not repeat the bare \(I^P\) construction.

Work in the exact T24 splitting
\[
\Gamma
=
\mathbb N\delta\oplus\Gamma_{\rm slow},
\qquad
m=\theta^\delta,
\]
with
\[
\rho^*m=u\,m^a s,
\qquad
s\in K[\Gamma_{\rm slow}],
\qquad
\rho^*\Gamma_{\rm slow}\subseteq\Gamma_{\rm slow}.
\]

Primary obligation:

> Determine whether the canonical state functions admit a relative \(m\)-adic multiplicity theorem over the slow analytic coefficient algebra strong enough to construct auxiliary functions with
> \[
> \operatorname{ord}_m(E)
> \gg
> \text{algebraic coefficient degree}
> \]
> while keeping every coefficient algebraic/rational with controlled global height and while preserving
> \[
> Q(\alpha,\mathbf X)=P(\mathbf X).
> \]

The audit must distinguish:

1. coefficients in the full slow analytic field;
2. coefficients in the algebraic/rational slow function field;
3. finite slow truncations;
4. divisor-regular localization at the prime \((m)\);
5. relation matrices over the local ring \(R_{(m)}\);
6. exact lift from an \(m\)-adic or formal relation to the original functional relation ideal.

A valid positive theorem must simultaneously solve relative multiplicity, denominator regularity, Liouville height control, and exact specialization.

A valid negative theorem should prove a quantitative upper bound on attainable \(m\)-adic multiplicity with algebraic coefficient degree/height, or exhibit a canonical-system obstruction showing that the required relative coefficient identities cannot be algebraic.

Zorin's stable-ideal multiplicity framework is the most relevant literature lead identified by T24, but it must be audited against the exact slow-base, completion, height, and specialization requirements before use.

No scientific computation is authorized.

---

## 35. Source ledger

1. **Boris Adamczewski and Colin Faverjon**, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), and the published addendum. Used only for the inherited lifting architecture and the finite-dimensional auxiliary-order benchmark.
2. **Kumiko Nishioka**, “On an estimate for the orders of zeros of Mahler type functions,” *Acta Arithmetica* 56 (1990), 249–256. Audited as a point-order multiplicity source; not directly applicable to a positive-dimensional principal divisor.
3. **Evgeniy Zorin**, “Zero Order Estimates for Analytic Functions,” arXiv:1103.1174. Audited as a stable-ideal multiplicity framework; potentially relevant to T25, not load-bearing in T24.
4. **Enzo Brechler**, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877v1 (2026). Preprint; p-adic meromorphy/lifting background only; no applicable principal-divisor multiplicity theorem found.
5. The T16–T23 reports and their inherited Corvaja–Zannier, Bell–Ghioca–Tucker, Laurent, and Mahler-method source ledgers remain authoritative and are not duplicated here.

---

## 36. End classification

C — new recursive-language obstruction found
