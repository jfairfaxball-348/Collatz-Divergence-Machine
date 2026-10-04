# CDM4-T25 — RELATIVE SLOW-BASE MULTIPLICITY / DIVISOR-REGULAR MAHLER LIFTING AUDIT

**Date:** 2026-10-04  
**Authoritative input:** T24 branch tip \`300bf8ad4d205026a13374eb73eb86015d503b75\`.  
**Authority note:** the stated T24 tip was verified before research. It was not contained in the then-current \`main\` history, so T25 was based exactly on the T24 tip, as required.  
Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T25 finds a genuine relative principal-divisor multiplicity mechanism and an exact divisor-regular transport criterion. It closes a new conditional principal-fast subclass, but it does not close every principal-fast case.

The T24 direct-product theorem gives
\[
\Gamma_Y\cong \mathbb N\delta\oplus\Gamma_{\rm slow},
\qquad
m=\theta^\delta.
\]

Write every reduced letter generator uniquely as
\[
\pi_Y(e_s)=\kappa_s\delta+\eta_s,
\qquad
\kappa_s\in\mathbb N,\quad
\eta_s\in\Gamma_{\rm slow}.
\]
For a fixed-point prefix with Parikh vector \(c(n)\), define
\[
\kappa(n):=\kappa(\pi_Y(c(n)))
=\sum_{i<n}\kappa_{u_i}.
\]
The sequence \(\kappa(n)\) is nondecreasing.

### T25-A — canonical finite-jet theorem

If
\[
\kappa(n)\to\infty,
\]
then every fixed \(m\)-adic coefficient of every canonical state series is a finite slow polynomial:
\[
[m^j]F_t\in K[\Gamma_{\rm slow}]
\qquad(j\ge0).
\]
Equivalently,
\[
\boxed{F_t\in K[\Gamma_{\rm slow}][[m]]}
\]
for the canonical state functions, after incorporating the fixed algebraic torus-translation constants into the coefficients.

This does **not** contradict T24. The unrestricted analytic quotient
\[
\mathcal A_Y/(m^P)
\cong
\bigoplus_{j=0}^{P-1}m^j\mathcal A_{\rm slow}
\]
is still infinite dimensional. T25 proves that the recursively generated canonical jets occupy a much smaller algebraic slow subspace.

If \(\kappa(n)\) is bounded, monotonicity makes it eventually constant and the canonical state functions are finite polynomials in \(m\) with slow analytic coefficients:
\[
F_t\in\mathcal A_{\rm slow}[m].
\]
That branch is structurally reduced but not closed by T25.

### T25-B — exact divisor-local ring

Put
\[
B:=K[\Gamma_{\rm slow}],
\qquad
F:=K(\Gamma_{\rm slow})=\operatorname{Frac}(B),
\qquad
R:=B[m].
\]
For the divisor prime \(I=(m)\),
\[
\boxed{
\mathcal O:=R_{(m)}
\cong F[m]_{(m)}
}
\]
is a discrete valuation ring with uniformizer \(m\), residue field \(F\), fraction field
\[
L:=F(m),
\]
and completion
\[
\widehat{\mathcal O}\cong F[[m]].
\]

Writing the T24 pullback as
\[
\rho^*m=c\,m^a,
\qquad
c=u_\delta\theta^\eta\in F^\times,
\]
and writing
\[
\sigma:=\rho^*|_F,
\]
the completed divisor dynamics is
\[
\boxed{
\rho^*\!\left(\sum_{j\ge0}b_jm^j\right)
=
\sum_{j\ge0}\sigma(b_j)c^jm^{aj}.
}
\]

Thus the correct relative object is a **semilinear Mahler problem over the difference field \((F,\sigma)\)**, not an ordinary one-variable Mahler problem over a fixed constant field.

### T25-C — saturation and the divisor ramification invariant

Let
\[
J\subset L[\mathbf X]
\]
be the original functional relation ideal of a scalar-preserving reduced state basis \(\mathbf G\).

For fixed state-polynomial degree \(D_X\), let
\[
V_{D_X}:=\mathcal O[\mathbf X]_{\le D_X},
\qquad
M_{D_X}:=J\cap V_{D_X}.
\]

Then \(M_{D_X}\) is \(m\)-saturated in \(V_{D_X}\). Therefore
\[
V_{D_X}/M_{D_X}
\]
is torsion-free, hence free, over the DVR \(\mathcal O\).

This supplies the missing **divisor-regular finite-degree relation lattice**.

On the saturated degree-one quotient, represent forward semilinear transport by
\[
B_1\in M_r(\mathcal O),
\qquad
\det B_1\ne0,
\]
and define
\[
\boxed{
\lambda_m:=\operatorname{ord}_m(\det B_1)\ge0.
}
\]

For every divisor-regular basis change
\[
U\in GL_r(\mathcal O),
\]
the transformed semilinear matrix is
\[
B_1'=U B_1\,\rho^*(U^{-1}),
\]
and
\[
\operatorname{ord}_m\det B_1'=\lambda_m.
\]

Hence
\[
\boxed{
\lambda_m=0
\iff
B_1\in GL_r(\mathcal O).
}
\]

If \(\lambda_m>0\), every inverse transport matrix has negative \(m\)-order somewhere. No \(GL_r(\mathcal O)\) basis of the same saturated lattice removes that divisor pole.

This turns T24's denominator warning into an exact invariant.

### T25-D — relative Hermite–Padé multiplicity

Assume
\[
\kappa(n)\to\infty.
\]
For fixed \(D_X\), define the relative Hilbert function
\[
h(D_X)
:=
\dim_L\left(
L[\mathbf X]_{\le D_X}/J_{\le D_X}
\right).
\]
Choose \(L\)-independent analytic representatives
\[
g_1,\ldots,g_h,
\qquad h=h(D_X).
\]

For a fast coefficient degree \(D_f\), consider
\[
E=\sum_{i=1}^h A_i(m)g_i,
\qquad
A_i(m)\in F[m],
\quad
\deg_m A_i\le D_f.
\]

There are
\[
N_F=(D_f+1)h
\]
unknown coefficients over \(F\). Because the canonical finite \(m\)-jets are rational over the slow field, requiring each successive \(m\)-coefficient of \(E\) to vanish imposes one \(F\)-linear condition.

A nonzero solution therefore exists with
\[
\operatorname{ord}_m(E)\ge N_F-1.
\]

Remove every common explicit factor \(m^r\) from the coefficient vector. Since \(r\le D_f\), the remaining **cancellation multiplicity** satisfies
\[
\boxed{
P_{\rm rel}
\ge
(h(D_X)-1)(D_f+1).
}
\]

This multiplicity is not T24's neutral operation \(E=m^P E_0\). It remains after all common explicit \(m\)-factors have been divided out.

### T25-E — algebraic slow coefficients and scale separation

For any fixed target multiplicity, the required canonical jets are finite slow polynomials. Solving the finite \(F\)-linear system by maximal minors and clearing a common slow denominator therefore yields coefficients in the slow polynomial ring \(B\), with finite slow degree and algebraic coefficient height.

If \(D_s\) denotes the resulting slow degree and \(h_{\rm coeff}\) its logarithmic algebraic coefficient height, the exact orbit evaluation has the schematic local upper estimate
\[
-\log|\mathcal E_n|_2
\ge
c_0P_{\rm rel}g_{\rm fast}(n)
-
C_0D_sg_{\rm slow}(n)
-
O(1).
\]

The corresponding Liouville bound has the form
\[
-\log|\mathcal E_n|_2
\le
C_1(D_X)D_f\,g_{\rm fast}(n)
+
C_2D_sg_{\rm slow}(n)
+
O(h_{\rm coeff}+1).
\]

All auxiliary degrees are fixed before \(n\to\infty\), while
\[
g_{\rm slow}(n)=o(g_{\rm fast}(n)).
\]
Hence the newly introduced slow coefficient cost is asymptotically lower order.

### T25-F — positive relative transcendence branch

Put
\[
d_{\rm rel}
:=
\operatorname{trdeg}_{L}
L(G_1,\ldots,G_r).
\]

If
\[
d_{\rm rel}>0,
\]
Hilbert–Serre gives
\[
h(D_X)=\Theta(D_X^{d_{\rm rel}}).
\]
Thus \(h(D_X)\) can supply the independently enlargable multiplicity ratio needed in the T16/T17 auxiliary hierarchy.

When, in addition,
\[
\lambda_m=0,
\]
relation transport is divisor-regular in both directions. The T16/T17 mixed-place proof can then be rebuilt over the saturated divisor-local lattice. The construction stays in the original functional relation ideal and preserves the original specialization polynomial exactly:
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

Therefore T25 closes the subclass
\[
\boxed{
\kappa(n)\to\infty,\qquad
d_{\rm rel}>0,\qquad
\lambda_m=0.
}
\]

For a hypothetical genuinely aperiodic positive integer anchor in this subclass, append the constant function \(1\), use the T21 strict real prefix gap and scalar convergence, transport the exact algebraic functional identity between completions, and reconstruct the canonical positive scalar. The inherited sign argument gives
\[
S^{(\infty)}(q)+3N=0
\]
with
\[
S^{(\infty)}(q)>0,\qquad N>0,
\]
a contradiction.

Hence
\[
\boxed{
\text{no genuinely aperiodic positive-integer anchor exists in the T25 closed subclass.}
}
\]

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
throughout this newly closed subclass.

### T25-G — relative algebraicity obstruction

If
\[
d_{\rm rel}=0,
\]
then the state field is a finite algebraic extension of \(L=F(m)\).

At the analytic place over \(m=0\), after a fixed integral normalization of algebraic generators, a field-norm/valuation argument gives a linear multiplicity ceiling:
\[
\boxed{
\operatorname{ord}_m(E)
\le
C(D_f+D_X+1)
}
\]
for nonzero bounded-degree divisor-regular auxiliaries.

Thus the relative-algebraic branch has no independently enlargable Hermite–Padé multiplicity amplifier.

T25 does **not** prove that every conceivable arithmetic argument fails in this branch; it proves that the new relative multiplicity mechanism cannot become arbitrarily stronger than the fast algebraic complexity there.

### Residual principal-fast cases

After T25, the unresolved principal-fast cases are:

1. \(\kappa(n)\) bounded — finite \(m\)-degree with slow analytic coefficients;
2. \(\kappa(n)\to\infty\), \(d_{\rm rel}=0\) — finite-extension valuation ceiling;
3. \(\kappa(n)\to\infty\), \(d_{\rm rel}>0\), \(\lambda_m>0\) — multiplicity exists but inverse relation transport has an unavoidable divisor pole.

The next theorem should decide whether the canonical Collatz system forces
\[
d_{\rm rel}>0
\]
in every genuinely aperiodic unbounded-fast-count case and whether its saturated divisor lattice is automatically unramified:
\[
\lambda_m=0.
\]

No scientific compute follows.

## 2. Inherited T24 state

T25 treats as closed:

- the T20 exact variable-length endpoint/scalar transport;
- T21 ordinary-prefix algebraicity and strict positive-integer gap;
- T21 positive expanding increment grading;
- T22 reduced growth profiles and the fast/slow height-contraction mismatch;
- T22 scalar-support fullness;
- T23 slowest-face elimination;
- T23 principal-high-ideal dense-orbit analytic zero theorem;
- T24 principal two-profile direct-product theorem;
- T24 exact pullback order
  \[
  \operatorname{ord}_{(m)}(\rho^{n*}m)=a^n;
  \]
- T24 proof that unrestricted exact \((m)^P\)-vanishing is not a finite-codimensional algebraic condition;
- T24 failure of finite slow truncation;
- T24 explicit-factor neutrality;
- T24 warning that orbit regularity is weaker than divisor regularity.

No part of this list is reproved.

## 3. Literature audit

### 3.1 Zorin — stable-ideal multiplicity

Evgeniy Zorin, “Zero Order Estimates for Analytic Functions,” *International Journal of Number Theory* 9 (2013), 333–392, DOI 10.1142/S1793042112501370, develops a general multiplicity framework in which stable ideals are central and includes generalized Mahler functional equations.

The load-bearing distinction is that the multiplicity is still an order at a one-parameter germ:
\[
\operatorname{ord}_{z=0}P(f_1(z),\ldots,f_n(z)).
\]

The source is highly relevant conceptually, but it does not directly state a theorem with:

- coefficient ring equal to a positive-dimensional slow toric analytic algebra;
- divisor order along \(m=0\) with nontrivial slow coefficient dynamics;
- arithmetic height control for the slow coefficient functions;
- divisor-regular relation matrices for the Collatz system;
- exact mixed-place specialization
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X).
  \]

T25 therefore uses the stable-ideal viewpoint as guidance, not as a black-box solution.

### 3.2 Nishioka — classical zero order

Kumiko Nishioka, “On an estimate for the orders of zeros of Mahler type functions,” *Acta Arithmetica* 56 (1990), 249–256, DOI 10.4064/aa-56-3-249-256, gives a one-variable zero-order estimate at \(z=0\).

It is not a relative divisor theorem over a moving slow coefficient field and does not supply the T25 specialization/height package.

### 3.3 Adamczewski–Faverjon

The 2026 *Annals of Mathematics* paper remains the exact published source for the finite-dimensional relation-lifting architecture and prescribed specialization in the ordinary multivariate setting.

T25 changes the auxiliary coefficient ring and the local divisor filtration. It does not claim that the published theorem itself already contains this relative result.

### 3.4 Brechler 2026

Enzo Brechler, arXiv:2607.24877v1 (2026), proves broad multivariate Mahler meromorphy, including \(p\)-adic unit balls, and strengthens lifting/descent results in its framework.

As of the T25 audit it remains a preprint and is non-load-bearing. The inspected result does not provide the exact divisor-relative multiplicity theorem proved here.

### 3.5 Difference-field interpretation

The local formula
\[
b\mapsto\sigma(b),
\qquad
m\mapsto c\,m^a
\]
shows that the right algebraic abstraction is a semilinear module over a difference field.

Existing difference-algebra language is useful for interpretation, but T25 found no peer-reviewed theorem that simultaneously supplies the required divisor lattice, number-field height estimates, mixed-place Liouville comparison, and exact prescribed specialization for this Collatz setting.

## 4. The canonical fast-count dichotomy

By T24 every positive reduced character has a unique decomposition
\[
\gamma=k\delta+\eta.
\]
Define
\[
\kappa(\gamma)=k.
\]
This is an additive semigroup homomorphism.

For prefix Parikh vectors,
\[
\pi_Y(c(n+1))-\pi_Y(c(n))=\pi_Y(e_{u_n}),
\]
hence
\[
\kappa(n+1)-\kappa(n)=\kappa_{u_n}\ge0.
\]

Therefore only two cases exist.

### Case U — unbounded fast count

If some fast-contributing letter occurs infinitely often, then
\[
\kappa(n)\to\infty.
\]

For fixed \(j\), monotonicity implies
\[
\#\{n:\kappa(n)=j\}<\infty.
\]

The canonical state series has the form
\[
F_t|_Y
=
\sum_{n:u_n=t}
a_n\,m^{\kappa(n)}\theta^{\eta(n)},
\]
with algebraic nonzero translation coefficients \(a_n\).

Therefore
\[
[m^j]F_t
=
\sum_{\substack{n:u_n=t\\\kappa(n)=j}}
a_n\theta^{\eta(n)}
\in B.
\]

This proves the canonical finite-jet theorem.

### Case B — bounded fast count

If \(\kappa(n)\) is bounded, it is eventually constant.

Only finitely many powers of \(m\) occur in each canonical state series:
\[
F_t=\sum_{j=0}^{J_t}m^jF_{t,j}^{\rm slow}.
\]

The coefficients
\[
F_{t,j}^{\rm slow}\in\mathcal A_{\rm slow}
\]
need not be rational or algebraic slow functions.

The canonical functional equation gives a finite coupled slow analytic system for these coefficients. T25 does not prove a specialization-preserving descent of the original anchor relation through that coefficient system.

## 5. Divisor-local dynamics

The direct product gives
\[
K[\Gamma_Y]\cong B[m].
\]

Localizing at \((m)\) inverts every nonzero slow polynomial:
\[
\mathcal O
=
B[m]_{(m)}
\cong
F[m]_{(m)}.
\]

The T24 pullback
\[
\rho^*m=u_\delta m^a\theta^\eta
\]
has
\[
c:=u_\delta\theta^\eta\in F^\times.
\]

Since the slow semigroup is invariant, \(\rho^*\) induces an injective field endomorphism
\[
\sigma:F\to F.
\]

If
\[
q(m)\in F[m]
\]
has nonzero constant term, then
\[
\rho^*q
\]
also has nonzero constant term. Hence
\[
\rho^*:\mathcal O\to\mathcal O
\]
is well-defined.

The valuation satisfies
\[
\operatorname{ord}_m(\rho^*f)
=
a\,\operatorname{ord}_m(f)
\]
for every nonzero \(f\in L\).

## 6. Saturated finite-degree relation modules

Let
\[
\operatorname{ev}:L[\mathbf X]\to\operatorname{Frac}(\mathcal A_Y),
\qquad
X_i\mapsto G_i.
\]
Let
\[
J=\ker(\operatorname{ev}).
\]

Fix \(D_X\). If
\[
mQ\in J\cap V_{D_X}
\]
with
\[
Q\in V_{D_X},
\]
then
\[
m\,Q(\mathbf G)=0.
\]
The analytic target is a domain and \(m\ne0\), so
\[
Q(\mathbf G)=0.
\]
Therefore
\[
Q\in J\cap V_{D_X}.
\]

Thus \(M_{D_X}\) is \(m\)-saturated.

If an element of
\[
V_{D_X}/M_{D_X}
\]
is killed by a nonzero power of \(m\), repeated saturation kills no new element. Since \(\mathcal O\) is a DVR, the quotient is torsion-free.

It is finitely generated, hence free.

This is the exact finite-degree divisor lattice needed for relative linear algebra.

## 7. The divisor ramification invariant

On the saturated degree-one quotient, forward functional transport is semilinear:
\[
v\mapsto B_1\,\rho^*(v).
\]

After tensoring with \(L\), it is the inherited invertible rational functional system, so
\[
\det B_1\ne0.
\]

If
\[
U\in GL_r(\mathcal O),
\]
then
\[
B_1'=U B_1\rho^*(U^{-1}).
\]

Because
\[
\det U,\ \rho^*(\det U)
\]
are units of \(\mathcal O\),
\[
\operatorname{ord}_m\det B_1'
=
\operatorname{ord}_m\det B_1.
\]

This proves basis invariance of \(\lambda_m\).

Over a DVR, a square matrix is invertible over the ring exactly when its determinant is a unit. Hence
\[
\lambda_m=0
\iff
B_1\in GL_r(\mathcal O).
\]

The positive-\(\lambda_m\) branch is therefore a genuine structural obstruction, not a bad choice of divisor-regular basis.

## 8. Relative Hermite–Padé construction

Fix \(D_X\) and let
\[
h=h(D_X).
\]

Choose representatives \(g_i\) whose classes form an \(L\)-basis of the quotient by functional relations.

Take
\[
A_i(m)=\sum_{j=0}^{D_f}a_{ij}m^j,
\qquad
a_{ij}\in F.
\]

The coefficients
\[
a_{ij}
\]
are the unknowns.

In Case U, every coefficient of every relevant finite \(m\)-jet is in \(F\). Therefore
\[
[m^k]\left(\sum_iA_i(m)g_i\right)=0
\]
is one \(F\)-linear equation.

Imposing the first
\[
N_F-1=(D_f+1)h-1
\]
coefficient equations on \(N_F\) unknowns leaves a nonzero solution.

The resulting auxiliary cannot vanish identically because the \(g_i\) are \(L\)-independent.

If all \(A_i\) have a common factor \(m^r\), divide it out. Since
\[
r\le D_f,
\]
the remaining order is at least
\[
(D_f+1)h-1-D_f
=
(h-1)(D_f+1).
\]

This proves the relative cancellation bound.

## 9. Clearing denominators and arithmetic height

For a finite target order, only finitely many canonical jets occur. Their coefficients lie in \(B\).

The relative linear system therefore has entries in \(F\). Choose a common slow denominator and solve using maximal minors.

The resulting coefficient functions can be taken in \(B\) after one common divisor-regular clearing factor.

This factor has
\[
\operatorname{ord}_m=0,
\]
so it does not reduce the \(m\)-multiplicity.

Its evaluation contributes on the slow orbit scale only.

The decisive point is qualitative and exact:

> no orbit-dependent slow truncation is used.

All slow degrees and algebraic heights are fixed once the auxiliary parameters are fixed.

Therefore, when the auxiliary is later evaluated along the orbit and \(n\to\infty\),
\[
D_sg_{\rm slow}(n)
=
o(g_{\rm fast}(n))
\]
for every fixed \(D_s\).

This is exactly what failed in T23/T24 for analytic truncations whose degree had to grow with orbit time.

## 10. Relative transcendence versus relative algebraicity

### Positive relative transcendence

If
\[
d_{\rm rel}>0,
\]
the quotient Hilbert function over \(L\) grows polynomially:
\[
h(D_X)=\Theta(D_X^{d_{\rm rel}}).
\]

The multiplicity ratio
\[
\frac{P_{\rm rel}}{D_f}
\]
can therefore be enlarged through \(D_X\), exactly the role played by the ordinary point-order Hilbert factor in T16/T17.

When \(\lambda_m=0\), two-sided divisor-regular transport is available, so the relative construction can be inserted into the existing mixed-place proof without introducing negative divisor order.

### Relative algebraicity

If
\[
d_{\rm rel}=0,
\]
the generated state field is a finite algebraic extension of \(L\).

Choose fixed algebraic generators integral at the selected place above \(m=0\). Every bounded-degree auxiliary lies in a finite-dimensional \(L\)-space generated by bounded monomials in those generators.

Taking its norm to \(L\), the \(m\)-degree of the norm is bounded linearly by the coefficient and state degrees. The valuation of the norm is the weighted sum of valuations above \(m=0\).

Therefore the selected analytic valuation satisfies
\[
\operatorname{ord}_m(E)
\le
C(D_f+D_X+1).
\]

No Hilbert factor tending to infinity survives.

## 11. Exact relation lifting in the divisor-unramified branch

Assume
\[
\kappa(n)\to\infty,
\qquad
d_{\rm rel}>0,
\qquad
\lambda_m=0.
\]

The T16/T17 proof components are then available as follows:

- finite-dimensional auxiliary space: relative quotient over \(L\);
- large multiplicity: Section 8;
- canonical jet algebraicity: Section 4;
- divisor-regular relation lattice: Section 6;
- two-sided divisor-regular transport: \(\lambda_m=0\);
- dense-orbit analytic zero theorem: T23 principal-high theorem;
- local rigid analytic tools: T16/T17;
- number-field Liouville lower bound: T16;
- global algebraic degree/height bookkeeping: T17/T18, with fixed slow coefficient cost lower order on the orbit;
- exact normalization/specialization: unchanged algebraic Section 9.4 mechanism from T16.

Thus an input homogeneous value relation
\[
P(\mathbf G(\alpha))=0
\]
lifts to an original algebraic functional relation
\[
Q(x,\mathbf G(x))=0
\]
with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

No relation merely modulo \(m^P\), in an associated graded ring, or only in the completed ring is promoted.

## 12. Completion-sign consequence

For a hypothetical positive integer anchor \(N\), append \(1\) and use the exact transported relation
\[
P(X_0,\mathbf X)
=
3NX_0+\ell\mathbf X.
\]

T21 already proves the strict real prefix gap for the full expanding reducible morphic class under a hypothetical positive integer anchor. Hence all required canonical scalar/state tails converge absolutely in the real completion.

The lifted relation is algebraic and portable between completions.

The scalar-preserving reconstruction row from T18 therefore yields
\[
S^{(\infty)}(q)+3N=0.
\]

Every term of the real canonical scalar is positive, so
\[
S^{(\infty)}(q)>0,
\]
contradicting \(N>0\).

Therefore the T25 closed subclass contains no genuinely aperiodic positive-integer anchor.

No statement here excludes negative rational anchors.

A positive rational noninteger is excluded only in subclasses where the required strict real subcriticality is independently available.

## 13. Status of Zorin's stable-ideal route

Zorin's framework is relevant because T25 genuinely has:

- a stable divisor prime;
- semilinear functional dynamics;
- multiplicity questions;
- a need to control invariant relation modules.

But direct application fails as a black box.

Treating \(m\) as the one variable and the slow analytic functions as constants would require enlarging the coefficient field to include those analytic functions. That erases the arithmetic height control needed at the exact Collatz orbit.

Restricting instead to the rational slow field \(F\) preserves arithmetic meaning, but the dynamics acts nontrivially through
\[
\sigma:F\to F.
\]

T25's canonical finite-jet theorem is what makes finite relative Hermite–Padé algebra possible over \(F\). The proof is specific to the Collatz canonical support and is not supplied automatically by the abstract stable-ideal theorem.

## 14. Exact status table

| Item | T25 status |
|---|---|
| T24 two-profile direct product | closed |
| exact \(m\)-pullback and order | closed |
| unrestricted analytic \(m^P\) quotient finite dimensional | false / closed obstruction |
| canonical fixed \(m\)-jets algebraic over slow base when \(\kappa\to\infty\) | **PROVED** |
| divisor-local ring is a DVR | **PROVED** |
| finite-degree relation module \(m\)-saturated | **PROVED** |
| divisor ramification invariant \(\lambda_m\) | **PROVED** |
| divisor-regular inverse transport iff \(\lambda_m=0\) | **PROVED** |
| relative Hermite–Padé cancellation multiplicity | **PROVED** |
| relative algebraic finite-extension multiplicity ceiling | **PROVED** |
| exact mixed-place lift for \(\kappa\to\infty,d_{\rm rel}>0,\lambda_m=0\) | **PROVED in T25 architecture** |
| positive-integer anchor exclusion in that subclass | **PROVED** |
| \(\lambda_m=0\) automatically for every canonical principal-fast system | **OPEN** |
| \(d_{\rm rel}>0\) automatically under genuine aperiodicity | **OPEN** |
| bounded-\(\kappa\) coefficient system yields exact original-state lift | **OPEN** |
| explicit Collatz counterexample | **NONE** |

## 15. Compute and search decision

No theorem-derived scientific workload is created by T25.

- new scientific starts: **NOT AUTHORIZED**;
- candidate trajectories: **NOT AUTHORIZED**;
- substitution enumeration: **NOT AUTHORIZED**;
- finite-code search: **NOT AUTHORIZED**;
- new generator/distribution: **NOT AUTHORIZED**;
- CPU campaign: **NOT AUTHORIZED**;
- GPU work: **NOT AUTHORIZED**;
- cloud/distributed/volunteer work: **NOT AUTHORIZED**;
- \`docs/COMPUTE_BUDGET.md\`: **UNCHANGED**;
- \`docs/METRIC_CATALOG.md\`: **UNCHANGED**.

## 16. Permanent T25 lessons

### T25-L1 — canonical jets are smaller than the ambient analytic quotient

T24's infinite-dimensional quotient is real, but it does not determine the complexity of the recursively generated canonical jets.

The fast-count process \(\kappa(n)\) must be audited first.

### T25-L2 — the correct local object is a DVR over the slow rational field

The divisor problem becomes one-dimensional only **relative** to the slow field:
\[
\mathcal O=K(\Gamma_{\rm slow})[m]_{(m)}.
\]

### T25-L3 — saturation and invertibility are different obligations

Saturation removes divisor torsion from finite-degree relation modules.

It does not force the semilinear transport determinant to be a unit.

### T25-L4 — relative cancellation is not explicit-factor multiplication

Hermite–Padé cancellation over \(F\) creates \(m\)-order that survives after common \(m\)-factors are removed.

This is the first principal-divisor multiplicity mechanism not killed by T24 neutrality.

### T25-L5 — positive relative transcendence is the multiplicity resource

When \(d_{\rm rel}>0\), the relative Hilbert function grows and yields an independently enlargable multiplicity factor.

When \(d_{\rm rel}=0\), finite-extension valuation theory imposes only linear multiplicity growth.

### T25-L6 — the next obstruction is module-theoretic, not analytic-zero-theoretic

The principal analytic zero theorem is already closed by T23.

The live questions are now:

- does the canonical saturated difference module have \(\lambda_m=0\)?
- does genuine aperiodicity force \(d_{\rm rel}>0\)?
- can bounded \(\kappa\) be reduced to the already closed slow system without weakening exact specialization?

## 17. Exact next theorem-sized obligation

**CDM4-T26 — CANONICAL DIVISOR-UNRAMIFIEDNESS / RELATIVE-TRANSCENDENCE COMPLETION AUDIT.**

Treat as closed:

- all T20–T24 infrastructure;
- T25 canonical fast-count dichotomy;
- T25 canonical finite-jet theorem for \(\kappa(n)\to\infty\);
- the divisor DVR \(\mathcal O=K(\Gamma_{\rm slow})[m]_{(m)}\);
- finite-degree \(m\)-saturation;
- the invariant \(\lambda_m\);
- relative Hermite–Padé multiplicity;
- the relative-algebraic valuation ceiling;
- exact lifting and positive-anchor exclusion for
  \[
  \kappa(n)\to\infty,\quad d_{\rm rel}>0,\quad\lambda_m=0.
  \]

Primary targets:

1. determine whether the canonical saturated degree-one difference module always satisfies
   \[
   \lambda_m=0;
   \]
   if not, classify exactly what recursive/morphic structure forces
   \[
   \lambda_m>0;
   \]
2. determine whether genuine aperiodicity in the unbounded-\(\kappa\) principal-fast class forces
   \[
   d_{\rm rel}>0;
   \]
   if \(d_{\rm rel}=0\) is possible, convert the finite-extension valuation ceiling into the strongest exact anchoring obstruction available;
3. close or sharply classify the bounded-\(\kappa\) branch by analyzing the finite \(m\)-coefficient system over the slow analytic base while preserving the original specialization polynomial exactly.

Audit first:

- invariant lattices and elementary divisors for semilinear difference modules over a DVR;
- Newton polygon / slope methods for the local Mahler difference module;
- algebraic-function-field consequences of \(d_{\rm rel}=0\);
- whether scalar-support fullness plus genuine aperiodicity forces positive relative transcendence;
- specialization-preserving coefficient extraction in the bounded-\(\kappa\) branch.

Do not re-run Zorin/Nishioka as if they directly supplied the relative theorem. Their exact one-parameter order hypotheses are already audited.

No scientific computation is authorized.

## 18. Source ledger

1. **Evgeniy Zorin**, “Zero Order Estimates for Analytic Functions,” *International Journal of Number Theory* 9 (2013), 333–392, DOI 10.1142/S1793042112501370. Peer reviewed. Used for stable-ideal/multiplicity context; not a direct relative-divisor lifting theorem.
2. **Kumiko Nishioka**, “On an estimate for the orders of zeros of Mahler type functions,” *Acta Arithmetica* 56 (1990), 249–256, DOI 10.4064/aa-56-3-249-256. Peer reviewed. One-variable order-at-zero result; not the required relative theorem.
3. **Boris Adamczewski and Colin Faverjon**, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), together with the published addendum. Inherited lifting architecture and exact-specialization mechanism.
4. **Enzo Brechler**, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877v1 (2026). Preprint; non-load-bearing.
5. The T16–T24 reports and their source ledgers remain authoritative for the inherited Corvaja–Zannier, Laurent, Bell–Ghioca–Tucker, rigid-local, scalar-transport, and multiscale results.

## 19. End classification

\[
\boxed{\textbf{C — NEW RELATIVE DIVISOR-LIFTING SUBCLASS AND MULTIPLICITY OBSTRUCTIONS FOUND.}}
\]

T25 closes a genuine new principal-fast positive-anchor subclass and isolates the three residual branches by exact invariants.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No scientific compute is authorized.
