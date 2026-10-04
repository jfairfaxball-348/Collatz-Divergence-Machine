# CDM4-T27 — CANONICAL SPECIAL-FIBRE INJECTIVITY / DIVISOR-DEGENERATION CLASSIFICATION

**Date:** 2026-10-04  
**Authoritative input:** T26 branch "cdm4-t26-divisor-unramifiedness-relative-transcendence-audit", commit "dd12cb32b9998b24ab01954db72bfb5405eb06b1".  
**Authority verification:** the stated T26 commit was verified before research. T26 has not been merged into "main"; the histories are divergent with merge base "3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb". T27 therefore uses the exact T26 tip as authority.  
**Working branch:** "cdm4-t27-special-fibre-degeneration-audit".  
Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T27 does **not** prove that the canonical special-fibre map is always injective.

Instead it obtains two stronger-for-purpose results.

First, it gives an exact presentation-level classification of the only way injectivity can fail.

Let
\[
\mathcal O=F[m]_{(m)},
\qquad
F=K(\Gamma_{\rm slow}),
\qquad
\rho^*m=c\,m^a,
\quad a\ge2,
\]
and let
\[
\Phi:\rho^*\mathscr L_1\to\mathscr L_1
\]
be the canonical saturated degree-one transport.

Before quotienting, let \(\mathscr E=\mathcal O^{\mathcal S}\) be the canonical state-generator module and let
\[
\mathscr R\subseteq\mathscr E
\]
be the saturated degree-one functional-relation submodule, so
\[
\mathscr L_1=\mathscr E/\mathscr R.
\]

Write
\[
E_0=\mathscr E/m\mathscr E,
\qquad
R_0=(\mathscr R+m\mathscr E)/m\mathscr E.
\]

The raw canonical special-fibre matrix is the T26 first-fast cut
\[
\overline{\mathcal A}_{t,s}
=
\sum_{\substack{r:\sigma^R(s)_r=t\\
\kappa(p_{s,r})=0}}
\overline b_{s,r}\theta^{\eta(p_{s,r})}.
\]

T27 proves that
\[
\boxed{
\operatorname{coker}\overline\Phi
\cong
E_0/
\bigl(R_0+\operatorname{im}\overline{\mathcal A}\bigr).
}
\]

Hence
\[
\boxed{
\ker\overline\Phi\ne0
\iff
R_0+\operatorname{im}\overline{\mathcal A}\ne E_0.
}
\]

Equivalently, canonical divisor degeneration is exactly **new boundary-relation creation**:

> a nonzero source direction survives the saturated degree-one quotient, but after the first-fast cut its image lands in the special-fibre relation space.

This is the exact first-fast/special-fibre state degeneration requested by T27. It need not be a rational functional relation in the generic fibre.

Second, T27 proves that such degeneration is **not an obstruction to exact lifting**.

Let the elementary divisors of \(\Phi\) be
\[
m^{e_1},\ldots,m^{e_r},
\]
and put
\[
\mu_m=\max_i e_i.
\]

Because
\[
m^{\mu_m}\operatorname{coker}\Phi=0,
\]
one inverse transport costs at most \(\mu_m\) units of \(m\)-order in degree one. For state-polynomial degree at most \(D_X\), the inverse transport costs at most
\[
D_X\mu_m.
\]

After \(n\) semilinear iterates the total possible loss is at most
\[
\boxed{
D_X\mu_m
\frac{a^n-1}{a-1}.
}
\]

By contrast, an initial relative divisor multiplicity \(P\) pulled to depth \(n\) contributes
\[
Pa^n.
\]

Therefore the effective multiplicity after all inverse-transport losses is bounded below by
\[
\boxed{
a^n
\left(
P-\frac{D_X\mu_m}{a-1}
\right)
+
\frac{D_X\mu_m}{a-1}.
}
\]

The positive-slope part imposes only the fixed threshold
\[
\boxed{
P>\frac{D_X\mu_m}{a-1}.
}
\]

In the live genuinely aperiodic branch, T26 gives
\[
\kappa(n)\to\infty
\qquad\text{and}\qquad
d_{\rm rel}>0.
\]

T25 then supplies
\[
P_{\rm rel}\ge
(h(D_X)-1)(D_f+1).
\]

For fixed sufficiently large \(D_X\), \(P_{\rm rel}\) grows linearly without bound in \(D_f\), whereas the positive-slope tax
\[
D_X\mu_m/(a-1)
\]
is independent of \(D_f\). Thus the T25 parameter hierarchy can absorb every finite canonical elementary-divisor loss.

No non-unimodular gauge is used. No explicit factor \(m^P\) is inserted. No orbit-dependent slow truncation is introduced. The transported auxiliary remains in the original divisor-regular lattice once the initial relative multiplicity is chosen above the finite slope threshold.

Consequently T27 upgrades the T25/T26 lifting theorem to the full genuinely aperiodic principal-fast class:
\[
\boxed{
\text{genuine aperiodicity + canonical principal-fast structure}
\Longrightarrow
\text{exact relation lifting for every finite }\lambda_m.
}
\]

In particular, every input homogeneous value relation lifts with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
**literally preserved**.

The inherited T21 completion-sign contradiction therefore applies even when
\[
\lambda_m>0.
\]

Hence:
\[
\boxed{
\text{no genuinely aperiodic principal-fast system has a positive-integer anchor.}
}
\]

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
throughout the entire principal-fast class, with no \(\lambda_m=0\) hypothesis.

Automatic special-fibre injectivity itself remains unresolved, but it is no longer needed to close the principal-fast positive-anchor route.

## 2. T26 state retained exactly

T27 treats as closed:

- the T18 orbit-closure reduction and scalar-preserving rational minimalization;
- the T20 exact variable-length prefix transport;
- the T21 positive-integer strict real prefix gap and real scalar convergence;
- the T21 positive expanding grading;
- the T22 scalar-support-full reduced semigroup;
- the T23 principal-high dense-orbit analytic zero theorem;
- the T24 direct-product splitting
  \[
  \Gamma_Y\cong\mathbb N\delta\oplus\Gamma_{\rm slow};
  \]
- the exact divisor pullback
  \[
  \rho^*m=c\,m^a;
  \]
- T25 canonical finite jets, divisor DVR, saturation, relative Hermite–Padé multiplicity, and exact lifting when \(\lambda_m=0\);
- T26
  \[
  \kappa(n)\to\infty
  \]
  in every live principal-fast system;
- T26
  \[
  d_{\rm rel}=0\Longrightarrow\text{eventual periodicity};
  \]
- therefore genuine aperiodicity implies
  \[
  d_{\rm rel}>0;
  \]
- T26
  \[
  \lambda_m
  =
  \operatorname{length}_{\mathcal O}\operatorname{coker}\Phi;
  \]
- T26
  \[
  \lambda_m=0
  \iff
  \overline\Phi
  \text{ is an isomorphism}.
  \]

No bounded-\(\kappa\), generic nonrationality, bare \(I^P\), fixed-reweighting, orbit-regularity, or non-unimodular gauge route is reopened.

## 3. Exact special-fibre presentation

### 3.1 Canonical state-generator module

Let \(\mathcal S\) be the finite canonical reachable state set after the T18 orbit-closure restriction and chosen iterate.

Let
\[
\mathscr E
=
\bigoplus_{s\in\mathcal S}\mathcal O e_s.
\]

Evaluation on the canonical state functions gives an \(\mathcal O\)-linear map
\[
\operatorname{ev}_1:\mathscr E\to\operatorname{Frac}(\mathcal A_Y).
\]

Let
\[
\mathscr R=\ker(\operatorname{ev}_1).
\]

This is exactly the degree-one contraction of the original functional relation ideal.

T25 proves \(m\)-saturation:
\[
mx\in\mathscr R
\Longrightarrow
x\in\mathscr R.
\]

Therefore
\[
\mathscr L_1=\mathscr E/\mathscr R
\]
is free over the DVR \(\mathcal O\).

Since the quotient is free, reduction modulo \(m\) is exact:
\[
0
\to
R_0
\to
E_0
\to
V_0
\to0,
\]
where
\[
E_0=\mathscr E/m\mathscr E,
\quad
R_0=(\mathscr R+m\mathscr E)/m\mathscr E,
\quad
V_0=\mathscr L_1/m\mathscr L_1.
\]

### 3.2 Raw transport and the quotient

The exact canonical polynomial matrix gives a semilinear map
\[
\mathcal A:\rho^*\mathscr E\to\mathscr E.
\]

Functional relations are respected by transport, so
\[
\mathcal A(\rho^*\mathscr R)\subseteq\mathscr R.
\]

Hence \(\mathcal A\) induces
\[
\Phi:\rho^*\mathscr L_1\to\mathscr L_1.
\]

Reducing modulo \(m\) gives the commutative diagram
\[
\begin{array}{ccc}
F\otimes_{\sigma,F}E_0 & \xrightarrow{\overline{\mathcal A}} & E_0\\
\downarrow && \downarrow\\
F\otimes_{\sigma,F}V_0 & \xrightarrow{\overline\Phi} & V_0.
\end{array}
\]

The slow-field twist is part of the source. No ordinary \(F\)-linear self-map is substituted for it.

## 4. Theorem T27.1 — exact first-fast boundary-defect classification

Define the **first-fast boundary defect**
\[
\boxed{
\mathcal D_{\rm ff}
:=
E_0/
\left(
R_0+\operatorname{im}\overline{\mathcal A}
\right).
}
\]

Then
\[
\boxed{
\mathcal D_{\rm ff}
\cong
\operatorname{coker}\overline\Phi.
}
\]

### Proof

The target special fibre is
\[
V_0=E_0/R_0.
\]

The image of the induced map is
\[
\frac{
R_0+\operatorname{im}\overline{\mathcal A}
}{
R_0
}.
\]

Taking the target quotient gives
\[
\operatorname{coker}\overline\Phi
\cong
\frac{E_0/R_0}{
(R_0+\operatorname{im}\overline{\mathcal A})/R_0
}
\cong
\frac{E_0}{
R_0+\operatorname{im}\overline{\mathcal A}
}.
\]
QED.

Since source and target both have dimension
\[
r=\operatorname{rank}_{\mathcal O}\mathscr L_1,
\]
one also has
\[
\dim_F\ker\overline\Phi
=
\dim_F\mathcal D_{\rm ff}.
\]

Thus:
\[
\boxed{
\overline\Phi\text{ injective}
\iff
R_0+\operatorname{im}\overline{\mathcal A}=E_0.
}
\]

And:
\[
\boxed{
\ker\overline\Phi\ne0
\iff
\text{the first-fast boundary columns fail to generate the target state module modulo }R_0.
}
\]

This is an exact quotient statement, not a determinant statement about the raw matrix.

## 5. The first-fast cut is the complete depth-one combinatorial input

For the selected iterate,
\[
\mathcal A_{t,s}
=
\sum_{\substack{0\le r<|\sigma^R(s)|\\
\sigma^R(s)_r=t}}
b_{s,r}
m^{\kappa(p_{s,r})}
\theta^{\eta(p_{s,r})}.
\]

Modulo \(m\),
\[
\overline{\mathcal A}_{t,s}
=
\sum_{\substack{r:\sigma^R(s)_r=t\\
\kappa(p_{s,r})=0}}
\overline b_{s,r}
\theta^{\eta(p_{s,r})}.
\]

If \(j_s\) is the first position of \(\sigma^R(s)\) occupied by a letter with positive fast degree, then the surviving positions are exactly every position \(r<j_s\), position \(r=j_s\) itself, or the whole block if no fast letter occurs.

Therefore \(\mathcal D_{\rm ff}\) depends on exactly two pieces of data:

1. the weighted first-fast entrance columns;
2. the reduced saturated functional-relation space \(R_0\).

Reachability alone controls neither.

## 6. Exact structure of the kernel

A class
\[
[v]\in
F\otimes_{\sigma,F}V_0
\]
lies in \(\ker\overline\Phi\) exactly when it has a representative
\[
v\in F\otimes_{\sigma,F}E_0
\]
such that
\[
\boxed{
\overline{\mathcal A}v\in R_0,
}
\]
while
\[
v\notin F\otimes_{\sigma,F}R_0.
\]

Thus every nonzero kernel vector is a **new boundary relation**:

- it is not a functional relation before transport;
- its first-fast-truncated image is a relation after reduction to \(m=0\).

This distinguishes canonical special-fibre degeneration from T18 rational-functional redundancy.

In particular:
\[
\boxed{
\ker\overline\Phi\ne0
\not\Rightarrow
\text{a new rational functional relation in the generic fibre}.
}
\]

The kernel can exist purely as a boundary degeneration.

## 7. Why recurrence and graph connectivity do not force injectivity

Define the first-fast entrance graph with vertex set \(\mathcal S\).

For each source state \(s\), draw a directed weighted edge
\[
s\to t
\]
for every surviving position in the first-fast cut whose target letter is \(t\), carrying its slow monomial weight.

### 7.1 Reachability is weaker than boundary reachability

A state can occur infinitely often in the full fixed point while occurring only after the first fast entrance inside every relevant substituted block.

Such a state is fully recurrent in the original language but can be invisible in the first-fast boundary graph.

Therefore:
\[
\boxed{
\text{full recurrence}
\not\Rightarrow
\text{boundary recurrence}.
}
\]

### 7.2 Strong connectivity is weaker than full rank

Even when the first-fast graph is strongly connected, full rank depends on the weighted column span over
\[
F=K(\Gamma_{\rm slow})
\]
modulo \(R_0\).

Graph support alone does not exclude weighted linear dependence.

Thus:
\[
\boxed{
\text{strongly connected first-fast graph}
\not\Rightarrow
\overline\Phi\text{ injective}.
}
\]

### 7.3 SCC disappearance is only a conditional rank witness

If an SCC contributes no boundary image at all, this forces a defect only when its target directions are not already killed by \(R_0\).

Therefore SCC decomposition is useful diagnostic structure but is not the invariant.

The invariant is
\[
\mathcal D_{\rm ff}.
\]

## 8. Scalar-support fullness does not imply state-module fullness

T22 proves
\[
\left\langle
\operatorname{Supp}(S|_Y)
\right\rangle_{\mathbb Z}
=
N_Y.
\]

This is a theorem about the character lattice generated by scalar support.

T27 needs generation of the state-function module after the first-fast boundary cut.

These are different categories of generation.

A scalar series can use every character direction while the boundary transport of the finite state module loses a state direction.

Hence:
\[
\boxed{
\text{scalar-support fullness}
\not\Rightarrow
R_0+\operatorname{im}\overline{\mathcal A}=E_0.
}
\]

No strengthening from character-lattice fullness to state-module fullness is proved.

## 9. Fitting presentation directly from the raw canonical system

Choose a finite free presentation of the saturated degree-one relation module
\[
\mathcal O^q
\xrightarrow{P}
\mathscr E
\to
\mathscr L_1
\to0.
\]

Use the canonical raw transport matrix
\[
\mathcal A:\rho^*\mathscr E\to\mathscr E.
\]

Because transport respects relations, the cokernel of the induced quotient map has presentation
\[
\boxed{
\mathcal O^q\oplus\rho^*\mathscr E
\xrightarrow{[\,P\ \mathcal A\,]}
\mathscr E
\to
\operatorname{coker}\Phi
\to0.
}
\]

Therefore
\[
\operatorname{Fitt}_0(\operatorname{coker}\Phi)
\]
is generated by the maximal minors of the combined relation/transport presentation matrix
\[
[\,P\ \mathcal A\,].
\]

Reducing modulo \(m\), \(\overline\Phi\) has full rank exactly when
\[
[\,\overline P\ \overline{\mathcal A}\,]
\]
has full target row rank.

This is the conceptual Fitting-ideal computation requested by T27.

It also explains why the raw determinant of \(\mathcal A\) is not the invariant when functional relations are present.

## 10. Theorem T27.2 — elementary divisors are a hierarchy of fast-depth defects

Let
\[
C=\operatorname{coker}\Phi
\cong
\bigoplus_{i=1}^r\mathcal O/(m^{e_i}).
\]

For \(q\ge1\), define
\[
d_q
=
\dim_F
\left(
m^{q-1}C/m^qC
\right).
\]

Then
\[
\boxed{
d_q
=
\#\{i:e_i\ge q\}.
}
\]

Consequently
\[
\boxed{
\lambda_m
=
\sum_i e_i
=
\sum_{q\ge1}d_q.
}
\]

In particular
\[
\boxed{
d_1
=
\#\{i:e_i>0\}
=
\dim_F\ker\overline\Phi
=
\dim_F\mathcal D_{\rm ff}.
}
\]

### Fast-depth interpretation

Modulo \(m^q\), a raw canonical term survives exactly when
\[
\kappa(p_{s,r})<q.
\]

Thus the depth-\(q\) canonical truncation retains positions before the cumulative fast count reaches \(q\).

The first-fast graph is precisely the \(q=1\) layer.

Therefore:

- the first-fast boundary graph determines the **number** of positive elementary divisors after relation quotienting;
- it does not determine their sizes;
- the full elementary-divisor spectrum is encoded by the successive finite fast-depth cuts together with the corresponding relation jets.

This is the sharp answer to the requested combinatorial-invariant question.

No substitution enumeration is needed.

## 11. A special-fibre kernel does not propagate to infinitely many relations

Suppose
\[
0\ne\overline x\in\ker\overline\Phi.
\]

Choose a lift
\[
x\in\rho^*\mathscr L_1.
\]

Then
\[
\Phi(x)\in m\mathscr L_1.
\]

This says
\[
\Phi(x)=my
\]
for some \(y\in\mathscr L_1\).

It does **not** say
\[
\Phi(x)=0.
\]

Since the rational transport is invertible, \(x\) represents a genuine generic-fibre direction.

Iterating the reduced zero therefore does not manufacture infinitely many independent generic functional relations. The first application has already forgotten positive \(m\)-order.

Likewise, \(m\)-saturation of the relation module cannot divide the displayed equation by \(m\): saturation applies when an element itself evaluates to zero, not when its transported image is merely divisible by \(m\).

Hence:
\[
\boxed{
\text{special-fibre kernel}
\not\Rightarrow
\text{generic functional relation}.
}
\]

This closes the proposed kernel-propagation shortcut.

## 12. Positive elementary divisors and inverse transport

Let
\[
\mu_m=\max_i e_i.
\]

Then
\[
m^{\mu_m}C=0.
\]

Equivalently,
\[
m^{\mu_m}\mathscr L_1
\subseteq
\operatorname{im}\Phi.
\]

After tensoring with the fraction field, \(\Phi\) is invertible. Therefore:
\[
\boxed{
\Phi^{-1}(\mathscr L_1)
\subseteq
m^{-\mu_m}\rho^*\mathscr L_1.
}
\]

This is the sharp one-step pole bound supplied by the largest elementary divisor.

The weaker but sometimes convenient bound is
\[
\mu_m\le\lambda_m.
\]

## 13. Degree-\(D\) inverse-transport bound

Let \(\mathscr L_{\le D}\) denote the saturated finite-degree polynomial state lattice.

The degree-one inverse substitution has pole order at most \(\mu_m\).

A state monomial of degree \(j\le D\) is a product of at most \(D\) degree-one coordinates. Substituting the inverse degree-one system therefore introduces at worst
\[
D\mu_m
\]
units of \(m\)-pole order.

Passing to the quotient by saturated polynomial relations cannot worsen a common denominator bound.

Hence:
\[
\boxed{
\Phi_{\le D}^{-1}(\mathscr L_{\le D})
\subseteq
m^{-D\mu_m}\rho^*\mathscr L_{\le D}.
}
\]

No Smith basis is used as a new lattice. The elementary divisors are used only to bound the inverse of the original canonical map.

## 14. Theorem T27.3 — geometric divisor-loss bound

Let
\[
\Phi^{[n]}:
\rho^{n*}\mathscr L_{\le D}
\to
\mathscr L_{\le D}
\]
be the \(n\)-fold semilinear transport.

Because
\[
\operatorname{ord}_m(\rho^{j*}f)
=
a^j\operatorname{ord}_m(f),
\]
the \(j\)-th pulled-back inverse pole has order at most
\[
D\mu_m a^j.
\]

Summing over \(j=0,\ldots,n-1\) gives
\[
\boxed{
(\Phi^{[n]})^{-1}
(\mathscr L_{\le D})
\subseteq
m^{-D\mu_m(1+a+\cdots+a^{n-1})}
\rho^{n*}\mathscr L_{\le D}.
}
\]

Since
\[
1+a+\cdots+a^{n-1}
=
\frac{a^n-1}{a-1},
\]
the total loss is
\[
\boxed{
D\mu_m\frac{a^n-1}{a-1}.
}
\]

This is the exact finite-slope tax relevant to the relative lifting proof.

## 15. Effective multiplicity after positive-slope transport

Suppose an auxiliary error has initial exact divisor order at least
\[
P.
\]

Pullback to depth \(n\) multiplies that order by
\[
a^n.
\]

After allowing the complete worst-case inverse-transport loss of Theorem T27.3, the remaining order is at least
\[
Pa^n
-
D\mu_m\frac{a^n-1}{a-1}.
\]

Therefore:
\[
\boxed{
\operatorname{ord}_m(E_n)
\ge
a^n
\left(
P-\frac{D\mu_m}{a-1}
\right)
+
\frac{D\mu_m}{a-1}.
}
\]

If
\[
\boxed{
P>\frac{D\mu_m}{a-1},
}
\]
the effective divisor multiplicity still grows on the full fast scale \(a^n\).

This is exactly what a non-unimodular slope normalization was previously trying to achieve indirectly.

Here it is obtained on the original canonical lattice by paying the actual finite elementary-divisor loss.

## 16. The T25 relative multiplicity dominates every finite slope tax

For fixed state-polynomial degree \(D_X\), T25 gives
\[
P_{\rm rel}
\ge
(h(D_X)-1)(D_f+1).
\]

In the genuinely aperiodic branch, T26 gives
\[
d_{\rm rel}>0,
\]
so
\[
h(D_X)\to\infty.
\]

Choose \(D_X\) exactly as in the T25 parameter hierarchy so that the relative Hilbert multiplier is large enough for the local-upper/global-Liouville comparison.

For this fixed \(D_X\), the positive-slope tax
\[
\frac{D_X\mu_m}{a-1}
\]
is a fixed constant independent of \(D_f\).

Now increase \(D_f\).

Then
\[
P_{\rm rel}
=
\Omega(D_f)
\]
with coefficient
\[
h(D_X)-1,
\]
while the slope tax does not change.

Therefore:
\[
\boxed{
P_{\rm eff}
:=
P_{\rm rel}
-
\frac{D_X\mu_m}{a-1}
}
\]
can be made as large as required by the unchanged T25/T16/T17 local upper-bound argument.

No new scale mismatch appears.

## 17. Why this does not revive the T24 explicit-\(m^P\) failure

The multiplicity used here is still the T25 **relative cancellation multiplicity**.

No factor
\[
m^P
\]
is inserted by hand.

The distinction is essential:

- T24 explicit multiplication consumes support degree linearly and is removable from every nonzero orbit value;
- T25 relative Hermite–Padé cancellation creates high \(m\)-order from many independent slow-rational coefficient choices;
- T27 merely spends a finite portion of that genuine cancellation order to cross the positive-slope transport.

Thus:
\[
\boxed{
\text{T27 slope compensation is not explicit-factor multiplication.}
}
\]

## 18. Why exact specialization survives

T27 does not replace the canonical lattice, make a non-unimodular gauge change, quotient out a positive-slope state direction, pass only to the associated graded, work only modulo \(m^P\), multiply the final relation by an uncontrolled \(m\)-power, or use an orbit-dependent slow truncation.

Instead, \(P_{\rm rel}\) is chosen large enough that every inverse-transport step occurring in the T25 lifting proof stays divisor-regular despite the finite pole allowance.

Thus the algebraic normalization step inherited from T16 Section 9.4 is unchanged.

Therefore:
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
survives literally.

This satisfies the exact-specialization rule.

## 19. Theorem T27.4 — positive-slope principal-fast exact lifting

Assume the T18-reduced principal-fast system is genuinely aperiodic.

No hypothesis on \(\lambda_m\) is required.

Then every homogeneous algebraic value relation
\[
P(\mathbf G(\alpha))=0
\]
in the chosen nonarchimedean completion admits an original algebraic functional relation
\[
Q(x,\mathbf G(x))=0
\]
with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

### Proof

T26 supplies automatically
\[
\kappa(n)\to\infty,
\qquad
d_{\rm rel}>0.
\]

Hence the T25 canonical finite-jet and relative Hermite–Padé construction applies.

The only T25 hypothesis not automatic was
\[
\lambda_m=0,
\]
used to ensure that inverse relation transport introduced no negative \(m\)-order.

For arbitrary finite \(\lambda_m\), let
\[
\mu_m=\max e_i.
\]

Theorems T27.3 and the parameter argument of Section 16 show that every inverse-transport pole in finite auxiliary degree is absorbed by choosing the T25 relative multiplicity above the finite threshold
\[
D_X\mu_m/(a-1).
\]

After this replacement, every other part of the T25 proof is unchanged:

- finite canonical jets over the slow rational field;
- relative Hilbert dimension;
- slow denominator clearing;
- slow-scale height cost;
- T23 dense-orbit zero theorem;
- T16/T17 rigid-local estimates;
- Liouville lower bound;
- algebraic relation-matrix construction;
- exact normalization.

Therefore the same contradiction produces a functional lift with the original prescribed specialization.

QED.

## 20. Completion-sign consequence

Assume a genuinely aperiodic principal-fast system has a positive integer anchor
\[
N\in\mathbb Z_{>0}.
\]

Append \(1\) and use the exact anchor relation
\[
P(X_0,\mathbf X)
=
3NX_0+\ell\mathbf X.
\]

Theorem T27.4 lifts it with
\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]
exactly.

T21 supplies the positive-integer strict ordinary-prefix gap, hence real convergence of the canonical scalar/state tails.

The algebraic functional identity is portable to the real completion.

Scalar-preserving reconstruction gives
\[
S^{(\infty)}(q)+3N=0.
\]

But
\[
S^{(\infty)}(q)>0
\]
and
\[
N>0.
\]

Contradiction.

Therefore:
\[
\boxed{
\text{no genuinely aperiodic principal-fast system has a positive-integer anchor.}
}
\]

This conclusion includes every hypothetical canonical \(\lambda_m>0\) system.

## 21. Consequence for bounded \(R_m\)

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}
\]
produces an ordinary positive-integer anchor.

T27 now excludes such an anchor for every genuinely aperiodic principal-fast system, with no divisor-unramified hypothesis.

Hence:
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
throughout the complete principal-fast class.

This strictly extends the T26 statement, which still assumed
\[
\lambda_m=0.
\]

## 22. Status of automatic special-fibre injectivity

T27 does **not** prove
\[
\lambda_m=0
\]
automatically.

The strongest exact statement is:
\[
\boxed{
\lambda_m=0
\iff
\mathcal D_{\rm ff}=0.
}
\]

No inherited recurrence, reachability, scalar-support, or regular-singular theorem forces
\[
\mathcal D_{\rm ff}=0.
\]

No valid canonical principal-fast example with
\[
\lambda_m>0
\]
was constructed.

Thus the existential status is:
\[
\boxed{
\text{canonical positive elementary divisors: not ruled out, but no example is known in this programme.}
}
\]

They are no longer an exact-lifting obstruction.

## 23. Scalar-carrying quotients

T27 does not prove that every quotient carrying the canonical scalar is divisor-unramified.

Scalar preservation supplies a distinguished nonzero functional direction, but étaleness is a statement about the complete induced transport.

The exact conclusion is:
\[
\boxed{
\text{scalar-carrying}
\not\Rightarrow
\text{divisor-unramified by any theorem currently available here.}
}
\]

No quotienting of the scalar or of a positive-slope direction is used in Theorem T27.4.

## 24. Regular-singular / Newton-polygon audit

Colin Faverjon and Marina Poulet, “Regular singular Mahler equations and Newton polygons,” *Journal of the Mathematical Society of Japan* 78(3) (2026), 799–831, DOI 10.2969/jmsj/94739473, is published.

Its regular-singular criteria, Frobenius method, Newton polygons, and Puiseux-coefficient extension are relevant to rationally gauge-normalized Mahler equations.

They do not identify the T25 canonical saturated divisor lattice with a regular-singular/étale lattice.

For a rational gauge
\[
U\in GL_r(L)
\]
with
\[
q=\operatorname{ord}_m\det U,
\]
T26 already proves
\[
\operatorname{ord}_m\det B'
=
\lambda_m-(a-1)q.
\]

Therefore a gauge that changes slope data can change the exact special fibre.

T27 does not use such a gauge.

Its positive-slope theorem pays the elementary-divisor loss on the original lattice.

Thus Faverjon–Poulet remains contextual rather than load-bearing.

## 25. Brechler 2026 status

Enzo Brechler, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877v1, remains a preprint in the T27 audit.

Its multivariate meromorphy and lifting/descent results remain relevant background.

T27 does not use it load-bearingly.

## 26. Answers to the T27 core questions

1. **Can the first-fast-cut matrix lose a genuine state direction?**  
   This is not ruled out. It occurs precisely when \(\mathcal D_{\rm ff}\ne0\). No concrete canonical example is produced.

2. **Must a kernel vector come from a rational functional relation?**  
   No. A kernel vector can be a genuine generic-fibre direction whose image becomes divisible by \(m\).

3. **Does reachability/prolongability force enough first-fast prefixes?**  
   No theorem proves this. Reachability concerns the full word; first-fast visibility is stricter.

4. **Does scalar-support fullness imply special-fibre state-module fullness?**  
   No. Character-lattice generation and state-module generation are different.

5. **Is there a universally unitriangular first-fast filtration?**  
   Not proved. The exact invariant is \(\mathcal D_{\rm ff}\), not entrance time alone.

6. **Does the slow-boundary subsystem inherit enough recurrence for injectivity?**  
   Not automatically. Full recurrence can be lost by the first-fast cut.

7. **Does a kernel iterate to infinitely many independent relations?**  
   No. Reduction has forgotten positive \(m\)-order; a kernel vector need not be a generic relation.

8. **Does a kernel lift to an original functional relation after saturation?**  
   No in general from saturation alone. \(\Phi(x)=my\) is not a zero relation.

9. **Can Fitting ideals be computed from the raw first-fast matrix and syzygies?**  
   Yes. Use the combined presentation \([\,P\ \mathcal A\,]\).

10. **Is there a determinant identity forcing the Fitting ideal to be a unit?**  
    None found.

11. **Are elementary divisors combinatorial?**  
    Their depth-one count is \(\#\{e_i>0\}=\dim_F\mathcal D_{\rm ff}\). Their full sizes require the hierarchy of fast-depth cuts and relation jets.

12. **Does \(e_i>0\) force an already-closed proper quotient?**  
    No. Positive elementary divisors may be pure boundary degeneration. They are nevertheless harmless for exact lifting after Theorem T27.4.

## 27. Exact status table

| Item | T27 status |
|---|---|
| \(\lambda_m=0\) automatic | **OPEN / NOT PROVED** |
| exact \(\ker\overline\Phi\) mechanism | **CLASSIFIED** by first-fast boundary-relation creation |
| first-fast raw matrix automatically full rank after quotient | **NOT PROVED / NOT NECESSARY** |
| canonical positive elementary divisors | **NOT RULED OUT; NO EXAMPLE FOUND** |
| number of positive elementary divisors | **PROVED** equal to \(\dim_F\mathcal D_{\rm ff}\) |
| full elementary-divisor spectrum | **PROVED** encoded by successive fast-depth cokernel layers |
| scalar-carrying quotient automatically unramified | **NO THEOREM / NOT USED** |
| finite positive-slope inverse loss | **PROVED** |
| relative multiplicity dominates finite slope loss | **PROVED** |
| exact lifting for \(\lambda_m>0\) | **PROVED** |
| exact specialization \(Q(\alpha,\mathbf X)=P(\mathbf X)\) | **PRESERVED LITERALLY** |
| completion-sign contradiction | **APPLIES TO FULL GENUINELY APERIODIC PRINCIPAL-FAST CLASS** |
| new positive-integer anchor class excluded | **YES — the residual \(\lambda_m>0\) class** |
| bounded \(R_m\Rightarrow\) eventual periodicity | **EXTENDED TO FULL PRINCIPAL-FAST CLASS** |
| positive rational noninteger | conditional on independent real subcriticality in the relative-transcendental branch |
| negative rational | unexcluded |
| explicit anchored aperiodic word | **NONE** |
| explicit positive integer candidate | **NONE** |
| unbounded Collatz orbit | **NONE** |
| certified counterexample | **NONE** |
| new scientific compute justified | **NO** |

## 28. Positive rational and negative rational values

### Positive integers

Excluded throughout the genuinely aperiodic principal-fast class by Theorem T27.4 plus the inherited T21 sign argument.

### Positive rational nonintegers

T27 removes the divisor-ramification obstruction to exact lifting, but it does not manufacture T21's positive-integer-derived strict real prefix gap for an arbitrary abstract positive rational anchor.

Therefore a positive rational noninteger is excluded when the required ordinary real subcriticality is independently known.

### Negative rationals

Remain unexcluded.

They are not Collatz counterexamples.

## 29. Exact-specialization audit

The new positive-slope argument changes only the lower bound on retained divisor order.

It does not change the relation variables or the canonical lattice.

No non-unimodular \(U\) is introduced.

No \(m^P\) factor is inserted into the final relation.

No quotient deletes a state direction.

No completion-only relation is promoted.

The T16/T25 algebraic normalization therefore remains literally:
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

## 30. Compute and search decision

T27 creates no theorem-derived scientific workload.

- new scientific starts: **NOT AUTHORIZED**;
- candidate trajectories: **NOT AUTHORIZED**;
- substitution enumeration: **NOT AUTHORIZED**;
- finite-code search/ranking: **NOT AUTHORIZED**;
- new generator/distribution: **NOT AUTHORIZED**;
- CPU campaign: **NOT AUTHORIZED**;
- GPU work: **NOT AUTHORIZED**;
- cloud/distributed/volunteer work: **NOT AUTHORIZED**;
- "docs/COMPUTE_BUDGET.md": **UNCHANGED**;
- "docs/METRIC_CATALOG.md": **UNCHANGED**.

The residual principal-fast positive-anchor route is closed theoremically; there is no scientific compute consequence.

## 31. Permanent T27 lessons

### T27-L1 — first-fast degeneration is relation creation at the boundary

The correct defect is
\[
\mathcal D_{\rm ff}
=
E_0/(R_0+\operatorname{im}\overline{\mathcal A}).
\]

Raw graph connectivity is not the invariant.

### T27-L2 — first-fast data sees only the first elementary-divisor layer

\[
\dim_F\mathcal D_{\rm ff}
=
\#\{i:e_i>0\}.
\]

The sizes \(e_i\) require deeper fast-count truncations.

### T27-L3 — a boundary kernel need not be a generic relation

\[
\Phi(x)\in m\mathscr L_1
\]
does not imply
\[
\Phi(x)=0.
\]

Saturation does not remove this distinction.

### T27-L4 — positive slopes impose a finite geometric tax, not a fatal obstruction

For degree \(D\),
\[
\text{loss}_n
\le
D\mu_m\frac{a^n-1}{a-1}.
\]

A genuine relative multiplicity \(P\) survives whenever
\[
P>D\mu_m/(a-1).
\]

### T27-L5 — relative transcendence supplies enough multiplicity to pay every finite canonical slope

Because \(d_{\rm rel}>0\) is automatic under genuine aperiodicity and the T25 relative order grows with \(D_f\), every finite elementary-divisor loss can be absorbed.

### T27-L6 — canonical unramifiedness is no longer the principal-fast bottleneck

T27 does not solve the standalone lattice question
\[
\lambda_m=0?
\]

But exact relation lifting and the positive-anchor contradiction no longer require it.

The principal-fast route is exact-lifting closed.

## 32. Periodicity-Conjecture boundary after T27

The T24–T27 principal-fast chain now gives:
\[
\boxed{
\text{genuinely aperiodic principal-fast}
\Longrightarrow
\text{no positive-integer anchor}.
}
\]

Under T2 finite-alphabet anchoring:
\[
\boxed{
\text{principal-fast}
\quad+\quad
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}.
}
\]

No \(\lambda_m\), \(d_{\rm rel}\), or bounded-\(\kappa\) branch remains inside the principal-fast class.

The general nonprincipal multiscale filtered class remains outside this theorem.

## 33. Exact next theorem-sized obligation

The principal-fast divisor obstruction is no longer a live positive-anchor obstruction.

The next theorem-sized obligation should therefore return to the broader T23 boundary rather than continue optimizing the principal-fast lattice.

**CDM4-T28 — NONPRINCIPAL MULTISCALE FILTRATION / ITERATED-STRATUM RELATIVE-LIFTING AUDIT.**

Primary target:

> Extend the T25/T27 relative-multiplicity plus finite-slope-tax mechanism from one principal fast divisor to a finite nonprincipal growth filtration, or prove an exact obstruction showing why successive strata cannot be handled by saturated relative lattices and multiplicity budgets.

The correct objects are the T22/T23 high-growth ideals and their finite Rees/associated-graded filtration, but the proof must remain on the original canonical system and preserve
\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]
exactly.

Do not return to bare associated-graded lifting, fixed reweighting, asynchronous iterate counts, or moving analytic truncations.

No scientific compute is authorized.

## 34. Source ledger

1. **Colin Faverjon and Marina Poulet**, “Regular singular Mahler equations and Newton polygons,” *Journal of the Mathematical Society of Japan* 78(3) (2026), 799–831, DOI 10.2969/jmsj/94739473. Published. Audited for regular-singular/Newton-polygon context; not load-bearing for the canonical lattice or T27 slope-tax theorem.
2. **Enzo Brechler**, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877v1 (2026). Preprint as of the T27 audit; non-load-bearing.
3. **Boris Adamczewski and Colin Faverjon**, “Mahler’s method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), with its published addendum. Inherited global lifting architecture and exact-specialization normalization.
4. T16–T26 reports and their source ledgers remain authoritative for the rigid-local, toric, orbit-closure, scalar-transport, principal-divisor, relative-multiplicity, and completion-sign infrastructure.

## 35. End classification

\[
\boxed{
\textbf{C — CANONICAL DIVISOR DEGENERATION CLASSIFIED AND POSITIVE-SLOPE EXACT LIFTING PROVED.}
\]

Automatic canonical special-fibre injectivity remains unresolved as a standalone module question.

However, T27 proves that every finite positive elementary-divisor loss is dominated by the already-available relative Hermite–Padé multiplicity in the genuinely aperiodic principal-fast class.

Therefore the complete genuinely aperiodic principal-fast class is now exact-lifting closed, the original specialization polynomial is preserved literally, and the inherited completion-sign argument excludes positive-integer anchors throughout that class.

No explicit anchored aperiodic word, positive-integer candidate, unbounded orbit, or Collatz counterexample was found.

No scientific compute is authorized.
