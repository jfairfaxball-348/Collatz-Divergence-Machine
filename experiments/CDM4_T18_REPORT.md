# CDM4-T18 — Stable-orbit-closure / cyclotomic-factor reduction and regular-tail completion

**Date:** 2026-10-03  
**Authoritative input commit:** 6bbf847ff94c9726a6fa181fe6f2145c16d35138  
**Session type:** theorem / exact algebra / literature audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue/carry/exponent-code optimization: **NONE**  
CPU/GPU/cloud/distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T18 proves a new orbit-closure reduction theorem for the T15 stable-image torus and closes the remaining **primitive stable-image singular-incidence class** as a positive-integer anchoring route.

The new structural point is that the exact stable Collatz orbit lies in a finitely generated multiplicative subgroup of the ambient torus: every coordinate is a product of powers of 2 and 3. Laurent's torus Mordell-Lang theorem therefore implies that the Zariski closure of any arithmetic-progression suborbit is a **finite union of torus cosets**. No more general invariant variety survives as the minimal irreducible arithmetic-progression orbit closure.

Starting with any arithmetic-progression witness produced by:

- failure of T17 relative independence (RI);
- failure of T17 no-cyclotomic-factor condition (RE);
- or infinite trapping in a denominator / singular bad locus;

one may pass to a further arithmetic progression whose Zariski closure is a single irreducible coset

\[
Y=tH
\]

of a connected subtorus \(H\subseteq X\). For the resulting iterate

\[
\Psi=\phi^R,
\]

the selected orbit is Zariski dense in \(Y\), \(\Psi(Y)=Y\), and after translating \(Y\) by \(t^{-1}\) the induced self-map of \(H\) is an algebraic translation followed by an isogeny. It is therefore finite, dominant, and étale.

This density has an important consequence. Bell-Ghioca-Tucker Corollary 1.4 applies directly on the reduced irreducible coset: **every proper algebraic subvariety meets the reduced orbit only finitely often**. This replaces the indirect T17 use of (RI)+(RE) to obtain the same finite-hit property.

Consequently:

1. the complete multiplicative relation lattice of the reduced coset is saturated;
2. T17's canonical positive semigroup descends to the quotient;
3. T17's exact weight descends and still scales by \(k^R\);
4. the exact reduced orbit converges 2-adically to the torus-fixed boundary point of the reduced toric chart;
5. scalar-preserving rational-linear minimalization can be rebuilt over \(K(Y)\) from the canonical restricted system, so old denominators that vanish identically on \(Y\) are discarded rather than inverted;
6. every denominator introduced by the new minimalization or relation matrices has only finitely many reduced-orbit hits;
7. Corvaja-Zannier plus Bell-Ghioca-Tucker gives the toric zero theorem on the dense reduced coset **without assuming (RI) or (RE)**;
8. the T17 auxiliary-function / relation-ideal proof extends to the translated torus map because translation changes only algebraic character coefficients, not exponent support, weight growth, degree growth, local smoothness, or exact specialization.

Thus the T17 exact mixed-place lifting theorem survives on the reduced orbit closure with

\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]

literally.

For every genuinely aperiodic **primitive** stable-image system, a hypothetical positive integer anchor therefore again yields the real completion contradiction

\[
S^{(\infty)}(q)+3N=0,
\qquad
S^{(\infty)}(q)>0.
\]

Hence

\[
\boxed{H\notin\mathbb Z_{>0}}
\]

for the complete primitive T15 stable-image torus class, including the residual (RI)-failure, cyclotomic, and denominator-trapping cases left open by T17.

The algebraic singular-incidence obstruction is therefore closed inside the T15 stable-image setting.

The independent T14 nonprimitive ordinary-real-contraction gap remains open. Positive rational noninteger values are excluded only when ordinary real subcriticality is independently available. Negative rational values remain unexcluded and are not Collatz counterexamples.

This is a new recursive-language obstruction, not an explicit unbounded Collatz orbit.

---

## 2. Inherited T17 state

T18 treats the following as closed infrastructure and does not reprove it.

Let

\[
L=\ker_{\mathbb Z}(M^{J_0}),
\qquad
N=X^*(X)=\mathbb Z^m/L,
\qquad
\pi:\mathbb Z^m\to N.
\]

The stable-image torus is \(X\), and \(\phi:X\to X\) is the induced finite étale isogeny with character pullback

\[
\phi^*=\overline M.
\]

The canonical boundary semigroup is

\[
\Gamma_0=\pi(\mathbb N^m).
\]

The exact T17 weight is

\[
w(\pi(a))=\mathbf1^Ta,
\]

which is well defined because \(L\subseteq\ker\mathbf1^T\), and

\[
w(\overline M^n\gamma)=k^n w(\gamma).
\]

The toric chart

\[
U_0=\operatorname{Spec}K[\Gamma_0]
\]

has a torus-fixed closed boundary point \(o\), and the exact stable Collatz tail tends to \(o\) 2-adically.

T17 also supplies:

- the weighted toric Tate algebra;
- finite-codimensional weight filtration;
- exact Gauss/support decay;
- local torus translation and negative-binomial convergence;
- rigid identity and Hensel lemmas;
- relation-ideal, Nullstellensatz, Liouville, height, and specialization machinery;
- exact scalar preservation \(G_1=S|_X\);
- toric exact mixed-place lifting under regular tail + (RI) + (RE);
- exact completion-sign exclusion of positive integer anchors in the primitive covered class.

T18 changes only the residual orbit-closure interface.

---

## 3. Exact arithmetic-progression input

Write the stable Collatz point as

\[
\alpha=q_{J_0}\in X.
\]

For integers \(a\ge0\) and \(r\ge1\), define the exact progression

\[
\mathcal O_{a,r}
=
\left\{
\phi^{a+rn}(\alpha):n\ge0
\right\}.
\]

T18 starts from an **actual** progression supplied by one of the following mechanisms.

### 3.1 Failure of (RI)

A witness is a character class \(\mu\in N\), \(\mu\ne0\), represented by an ambient integer vector, with

\[
\mathbf1^T\mu=0,
\qquad
v^TM^{J_0+a+rn}\mu=0
\quad
\forall n\ge0.
\]

Then

\[
\chi^\mu(\phi^{a+rn}\alpha)=1
\]

for every \(n\), so \(\mathcal O_{a,r}\) lies in a proper character coset.

### 3.2 Failure of (RE)

Let \(m_{\overline M}(z)\) be the minimal polynomial of \(\overline M\) on \(N_\mathbb Q\).

Define the exact set of cyclotomic orders

\[
\mathcal D_{\rm cyc}
=
\{d\ge1:\Phi_d(z)\mid m_{\overline M}(z)\}.
\]

If this set is nonempty, put

\[
D_{\rm cyc}
=
\operatorname{lcm}\mathcal D_{\rm cyc}.
\]

The exact periodic-character lattice is

\[
\boxed{
\Lambda_{\rm per}
=
N\cap\ker(\overline M^{D_{\rm cyc}}-I).
}
\]

This is saturated because it is the kernel of an endomorphism of a free abelian group.

The integer \(D_{\rm cyc}\) is the smallest positive exponent killing every finite-order eigenvalue on the actual periodic character space. Generalized Jordan directions are not incorrectly declared periodic.

For every \(\mu\in\Lambda_{\rm per}\) and every residue \(a\bmod D_{\rm cyc}\),

\[
\chi^\mu(\phi^{a+D_{\rm cyc}n}\alpha)
\]

is constant in \(n\). Hence each such progression is trapped in the corresponding character coset. T18 therefore quotients only relations actually satisfied by the orbit; it does not quotient a cyclotomic generalized eigenspace merely because it appears in a matrix factorization.

### 3.3 Infinite bad-locus trapping

Let \(Z\subseteq X\) be any algebraic zero/pole locus from:

- a Mahler matrix;
- its inverse;
- a reconstruction matrix;
- a basis-change denominator;
- a relation-matrix denominator;
- or scalar transport.

T15 dynamical Mordell-Lang gives: if the stable orbit hits \(Z\) infinitely often, then some exact \(\mathcal O_{a,r}\) is contained in \(Z\).

T18 then reduces this actual trapped progression.

---

## 4. Laurent reduction: no general invariant variety survives

All stable Collatz points have coordinates of the form

\[
\frac{2^A}{3^B}.
\]

Therefore the whole stable orbit lies in the finitely generated subgroup

\[
\Gamma_S
=
\left\langle
(2,1,\ldots,1),\ldots,(1,\ldots,2),
(3,1,\ldots,1),\ldots,(1,\ldots,3)
\right\rangle
\subseteq(\overline{\mathbb Q}^{\times})^m.
\]

The same is true after restriction to \(X\).

Let

\[
Y_0=\overline{\mathcal O_{a,r}}^{\,\rm Zar}.
\]

Laurent's torus Mordell-Lang theorem says that for a subvariety \(V\) of a split torus and a finitely generated subgroup \(\Gamma\), \(V\cap\Gamma\) is a finite union of cosets of subgroups of \(\Gamma\).

Applying it to \(V=Y_0\) and \(\Gamma=\Gamma_S\), then taking Zariski closures, gives:

\[
\boxed{
Y_0
\text{ is a finite union of translates of algebraic subtori.}
}
\]

This is stronger than an invariance statement. The coset conclusion comes from the finitely generated multiplicative group containing the exact Collatz orbit.

Thus the T17 residual possibility of a genuinely more general invariant orbit closure does **not** occur in the exact T15 Collatz setting.

---

## 5. Irreducible dense component and exact iterate

The finite union \(Y_0\) may be reducible, so an arbitrary component choice is not enough.

Among all further arithmetic-progression suborbits of the original \(\mathcal O_{a,r}\), choose one whose Zariski closure has **minimal dimension**. Rename this progression \(\mathcal O_{a,r}\) and its closure \(Y_0\), and write

\[
d=\dim Y_0.
\]

By Section 4, \(Y_0\) is a finite union of torus cosets.

Choose an irreducible component \(C\) containing infinitely many points of this progression. The map

\[
\psi=\phi^r
\]

is étale on \(X\). Bell-Ghioca-Tucker Theorem 1.3 therefore says that the hitting set of \(C\) by the \(\psi\)-orbit is a finite union of full arithmetic progressions plus finitely many points.

Hence there exist integers \(b\ge0\) and \(s\ge1\) such that

\[
\beta=\phi^{a+rb}(\alpha),
\qquad
\Psi=\phi^{rs},
\]

and

\[
\{\Psi^n(\beta):n\ge0\}\subseteq C.
\]

Let \(Y\) be the Zariski closure of this further suborbit. By minimality of \(d\),

\[
\dim Y\ge d.
\]

But \(Y\subseteq C\subseteq Y_0\), so

\[
\dim Y\le\dim C\le d.
\]

Therefore all dimensions are equal to \(d\). Since \(C\) is irreducible and \(Y\subseteq C\) is closed with the same dimension,

\[
Y=C.
\]

Thus the selected further progression is Zariski dense in one irreducible component. Laurent now gives that this component is a single torus coset:

\[
\boxed{Y=tH}.
\]

Choose \(s\) minimally among positive progression periods realizing this dense component, and choose \(t\) to be one of the actual reduced Collatz orbit points in \(Y\). Then \(t\) is itself an algebraic \(S\)-unit point. Put

\[
R=rs.
\]

The shifted tail is dense in \(Y\), and applying \(\Psi\) removes only its first point. Hence \(\Psi(Y)\) contains a Zariski-dense subset of \(Y\). Since \(\Psi\) is finite and therefore closed,

\[
\boxed{
\Psi(Y)=Y.
}
\]

Also,

\[
\boxed{
\{\Psi^n(\beta):n\ge0\}
\text{ is Zariski dense in }Y.
}
\]

Because \(\Psi\) is finite on \(X\), its restriction to \(Y\) is finite and dominant.

---

## 6. Exact relation lattice and saturation

For the irreducible coset \(Y=tH\), define

\[
R_Y
=
\{
\mu\in N:
\chi^\mu|_Y\text{ is constant}
\}.
\]

Equivalently,

\[
R_Y=H^\perp.
\]

Therefore

\[
\boxed{
R_Y\text{ is saturated in }N.
}
\]

The constants

\[
c_\mu=\chi^\mu(t),
\qquad \mu\in R_Y,
\]

form a multiplicative homomorphism \(R_Y\to\overline{\mathbb Q}^{\times}\).

This \(R_Y\) is the **complete** multiplicative relation lattice of the chosen progression: if a character is constant on the dense reduced orbit, it is constant on \(Y\), hence lies in \(R_Y\).

No iterative guess-and-saturate procedure is required after the actual orbit closure has been identified.

The reduced character lattice is

\[
\boxed{
N_Y=N/R_Y.
}
\]

Because \(\Psi(Y)=Y\),

\[
\overline M^R(R_Y)\subseteq R_Y,
\]

so \(\overline M^R\) induces

\[
A_Y:N_Y\to N_Y.
\]

---

## 7. The reduced map is an isogeny up to translation

Translate \(Y=tH\) to \(H\) by

\[
h=t^{-1}x.
\]

Since

\[
\Psi(tH)=tH,
\]

one has

\[
\Psi(H)=H
\]

on the linear subgroup part, and

\[
c=t^{-1}\Psi(t)\in H.
\]

The translated self-map is

\[
\boxed{
\rho(h)=c\,\Psi_H(h),
}
\]

where

\[
\Psi_H:H\to H
\]

is a torus isogeny.

Thus:

- \(\rho\) is finite;
- \(\rho\) is dominant;
- \(\rho\) is étale in characteristic zero;
- on characters,
  \[
  \rho^*\chi^\gamma
  =
  \chi^\gamma(c)\chi^{A_Y\gamma}.
  \]

The constant multiplier is algebraic and nonzero.

The function-field pullback

\[
\boxed{
\rho^*:K(H)\to K(H)
}
\]

is injective because \(\rho\) is dominant.

This is the exact condition needed for rational-linear minimalization.

---

## 8. Exact cyclotomic-factor audit after reduction

The original periodic lattice \(\Lambda_{\rm per}\) from Section 3 is contained in \(R_Y\) whenever the chosen progression step is a multiple of \(D_{\rm cyc}\), because those characters are actually constant on that progression.

However, the induced linear map \(A_Y\) can still have a root-of-unity eigenvalue. T18 does **not** claim otherwise.

If \(\bar\mu\in N_Y\setminus\{0\}\) satisfies

\[
A_Y^e\bar\mu=\bar\mu,
\]

choose a lift \(\mu\in N\). Then

\[
\overline M^{Re}\mu-\mu\in R_Y.
\]

For the translated map,

\[
(\rho^e)^*\chi^{\bar\mu}
=
\eta_\mu\chi^{\bar\mu}
\]

for an algebraic constant \(\eta_\mu\).

If \(\eta_\mu\) were a root of unity, a further arithmetic subsequence would have constant \(\chi^{\bar\mu}\), placing infinitely many dense-orbit points in a proper character coset. Bell-Ghioca-Tucker Corollary 1.4 forbids this.

Therefore every surviving nonzero cyclotomic direction satisfies

\[
\boxed{
\eta_\mu\text{ is non-torsion}.
}
\]

So the exact surviving exception is:

> a root-of-unity eigenvalue may remain only as an affine cyclotomic direction with non-torsion translational drift.

This is why (RE) need not be restored after quotienting, but it is also why (RE) is no longer the correct reduced hypothesis.

---

## 9. T17 weight descends exactly

Let

\[
L_Y
=
\ker\bigl(\mathbb Z^m\to N_Y\bigr).
\]

Then \(L\subseteq L_Y\), and \(L_Y/L\cong R_Y\).

Take \(\mu\in L_Y\). Along the selected progression the corresponding ambient character is constant:

\[
q_{J_0+a'+Rn}^{\mu}
=
\frac{
2^{v^TM^{J_0+a'+Rn}\mu}
}{
3^{k^{J_0+a'+Rn}\mathbf1^T\mu}
}
=
\text{constant}.
\]

Unique factorization in the rational numbers forces

\[
\boxed{
\mathbf1^T\mu=0.
}
\]

Hence

\[
L_Y\subseteq\ker\mathbf1^T.
\]

Therefore the reduced weight

\[
\boxed{
w_Y(\pi_Y(a))=\mathbf1^Ta
}
\]

is well defined on

\[
N_Y=\mathbb Z^m/L_Y.
\]

For the reduced positive semigroup

\[
\boxed{
\Gamma_Y=\pi_Y(\mathbb N^m)
}
\]

one has

\[
w_Y(\gamma)\ge0,
\qquad
w_Y(\gamma)=0\iff\gamma=0.
\]

Moreover,

\[
\boxed{
w_Y(A_Y\gamma)=k^R w_Y(\gamma),
}
\]

and hence

\[
\boxed{
w_Y(A_Y^n\gamma)=k^{Rn}w_Y(\gamma).
}
\]

This is the exact reduced support-displacement identity.

---

## 10. Reduced toric boundary and exact attracting stratum

Define

\[
\boxed{
U_Y=\operatorname{Spec}K[\Gamma_Y].
}
\]

Because \(w_Y\) is positive on every nonzero element of \(\Gamma_Y\), the only units of the positive semigroup are weight-zero constants, and \(U_Y\) has a torus-fixed closed boundary point

\[
\boxed{o_Y}.
\]

Use normalized characters on the translated torus:

\[
\theta^\gamma(x)
=
\frac{\chi^{\tilde\gamma}(x)}
{\chi^{\tilde\gamma}(t)},
\]

where \(\tilde\gamma\) is any lift of \(\gamma\). This is well defined because two lifts differ by an element of \(R_Y\), whose character is constant on \(Y\).

For every nonzero \(\gamma\in\Gamma_Y\), choose a nonnegative ambient lift \(a\in\mathbb N^m\). Along the selected Collatz progression,

\[
|\theta^\gamma(q_j)|_2
=
\left|
\frac{q_j^a}{t^a}
\right|_2
\longrightarrow0.
\]

Therefore

\[
\boxed{
q_{a'+Rn}
\longrightarrow o_Y
\quad 2\text{-adically in }U_Y.
}
\]

The exact boundary limit is the torus-fixed point \(o_Y\), not a torus point and not an unspecified zero.

Translation constants do not change exponent support. The pullback has the form

\[
\rho^*\theta^\gamma
=
u_\gamma\,\theta^{A_Y\gamma},
\qquad
u_\gamma\in\overline{\mathbb Q}^{\times}.
\]

The exact weight growth remains \(k^R\).

---

## 11. Analytic restriction survives the quotient

The canonical functions have the form

\[
F_t(x)
=
\sum_{\substack{n\ge0\\u_n=t}}
x^{c(n)},
\qquad
\mathbf1^Tc(n)=n.
\]

On \(Y=tH\),

\[
F_t(th)
=
\sum_{\substack{n\ge0\\u_n=t}}
t^{c(n)}
\theta^{\pi_Y(c(n))}(h).
\]

The coefficient \(t^{c(n)}\) is algebraic.

Because the reduced weight is

\[
w_Y(\pi_Y(c(n)))=n,
\]

distinct terms of different \(n\) can never collapse to the same reduced character. Therefore quotienting does not create an uncontrolled infinite coefficient sum at fixed weight.

At the 2-adic place, \(t\) is itself a stable Collatz point, so its ambient coordinates are strict 2-adic units of absolute value less than one. The translated coefficients only improve convergence.

Thus the canonical functions remain analytic in a strict weighted toric neighborhood of \(o_Y\).

The prescribed scalar

\[
S|_Y=\sum_tF_t|_Y
\]

has boundary value \(1\), because the unique weight-zero term is the \(n=0\) term. Therefore

\[
\boxed{
S|_Y\ne0.
}
\]

---

## 12. Scalar-preserving Mahler descent

Do **not** restrict an old T15/T17 rational minimal system if one of its denominators vanishes identically on \(Y\).

Instead, restrict the **canonical polynomial/Laurent system** to \(Y\) first.

After translation to \(H\), the canonical equation remains exact:

\[
\mathbf F_Y(h)
=
\mathcal A_Y(h)\,
\mathbf F_Y(\rho(h)),
\]

with algebraic regular/Laurent coefficients.

Now work over \(K(H)\).

Let

\[
r_Y
=
\dim_{K(H)}
\operatorname{span}_{K(H)}
\{F_{Y,t}\}.
\]

Choose a basis

\[
\mathbf G_Y=(G_{Y,1},\ldots,G_{Y,r_Y})^T
\]

with

\[
\boxed{
G_{Y,1}=S|_Y.
}
\]

Because \(\rho^*:K(H)\to K(H)\) is injective, the T15 minimalization argument applies exactly and gives

\[
\boxed{
\mathbf G_Y(h)
=
A_Y^{\rm fun}(h)\,
\mathbf G_Y(\rho(h)),
\qquad
A_Y^{\rm fun}\in\operatorname{GL}_{r_Y}(K(H)).
}
\]

Every denominator introduced here is a nonzero rational function on \(H\); none is identically zero by construction.

This is the correct scalar-preserving descent.

---

## 13. Dense-orbit regular-tail theorem

The reduced orbit is Zariski dense in irreducible \(H\) after translation, and \(\rho\) is étale.

Bell-Ghioca-Tucker Corollary 1.4 states that for an irreducible quasiprojective variety with an étale endomorphism and a Zariski-dense orbit, every proper subvariety meets that orbit only finitely many times.

Let \(Z\subsetneq H\) be the union of zero/pole loci of:

- \(A_Y^{\rm fun}\);
- \((A_Y^{\rm fun})^{-1}\);
- basis/reconstruction matrices;
- scalar transport;
- any finite set of relation-matrix denominators arising in a lifting argument.

Then

\[
\boxed{
\#\{n\ge0:\rho^n(\beta_Y)\in Z\}<\infty.
}
\]

Hence there is a sufficiently deep point that is regular for the complete future reduced orbit.

This resolves denominator trapping.

If an old denominator locus contained all of \(Y\), that means only that the old rational basis was invalid on the smaller closure. Rebuilding the minimal system from the canonical equation removes it.

No new obstruction remains from such a denominator.

---

## 14. Relative independence after reduction

The complete relation lattice of the reduced coset has already been quotiented out.

Suppose a reduced character \(\bar\mu\in N_Y\) satisfies a T17-type relation

\[
w_Y(\bar\mu)=0
\]

and

\[
\chi^{\bar\mu}(\rho^n(\beta_Y))=1
\quad
\forall n\ge0.
\]

Because the orbit is Zariski dense in \(H\), the character is identically \(1\) on \(H\). Hence \(\bar\mu=0\).

Thus the reduced analogue of (RI) holds automatically.

More generally, any character constant on the reduced orbit is trivial in \(N_Y\) by the definition of the complete relation lattice.

Therefore:

\[
\boxed{
\text{(RI) is automatic on the reduced dense torus.}
}
\]

---

## 15. Root-of-unity eigenvalues need not disappear

The reduced linear character map \(A_Y\) may still have root-of-unity eigenvalues because a torus-coset translation can turn a periodic linear direction into a non-torsion affine drift.

Therefore T18 does **not** claim:

\[
\text{minimal orbit closure}\Longrightarrow\text{(RE)}.
\]

Instead T18 replaces (RE) by the stronger dynamical input already available:

\[
\boxed{
\text{the reduced orbit is Zariski dense under an étale self-map}.
}
\]

This is sufficient for every zero-set and bad-locus step needed in T17.

---

## 16. Reduced toric zero theorem without (RE)

Let \(f\) be a nonzero algebraic-coefficient analytic function in a strict weighted toric neighborhood of \(o_Y\).

Suppose \(f\) vanishes at infinitely many reduced-orbit points.

The orbit coordinates are \(S\)-units. Their heights grow like \(O(k^{Rn})\), while the negative logarithm of the largest 2-adic boundary coordinate is also \(\gg k^{Rn}\), exactly as in T17.

Corvaja-Zannier Theorem 3 therefore traps the zero sequence in finitely many torus cosets on which the lifted analytic function vanishes.

Intersect those cosets with \(H\).

If one intersection were all of \(H\), the reduced analytic function would vanish identically, contrary to hypothesis.

Every remaining intersection is a proper algebraic subvariety of \(H\).

Bell-Ghioca-Tucker Corollary 1.4 then implies that each such proper subvariety contains only finitely many reduced-orbit points.

Contradiction.

Hence:

\[
\boxed{
f\ne0
\Longrightarrow
f(\rho^n\beta_Y)=0
\text{ for only finitely many }n.
}
\]

This is the T18 dense-coset toric zero theorem.

It uses no separate (RE) hypothesis.

---

## 17. Extension of T17 lifting to the translated torus map

The translated pullback is

\[
\rho^*\theta^\gamma
=
u_\gamma\theta^{A_Y\gamma},
\qquad
u_\gamma\in\overline{\mathbb Q}^{\times}.
\]

The T17 auxiliary-function proof survives for the following exact reasons.

### Support

The exponent is still \(A_Y\gamma\). Therefore

\[
w_Y(A_Y^n\gamma)=k^{Rn}w_Y(\gamma).
\]

Translation changes coefficients only.

### Weighted analytic estimate

For the \(n\)-fold iterate,

\[
(\rho^n)^*\theta^\gamma
=
u_{n,\gamma}\theta^{A_Y^n\gamma},
\]

where \(u_{n,\gamma}\) is the normalized character value contributed by the translation.

Choose a nonnegative ambient lift \(a\in\mathbb N^m\) of \(\gamma\). Because \(t\) is an actual stable Collatz point and the later Collatz points converge coordinatewise to the boundary, after one further finite tail shift one has

\[
\left|\frac{q_{j+Rn,s}}{t_s}\right|_2\le1
\]

for every ambient coordinate \(s\) and every \(n\ge0\). Hence

\[
|u_{n,\gamma}|_2\le1
\]

for every \(\gamma\in\Gamma_Y\).

Thus the translation multipliers do not weaken the weighted Gauss estimate. The T17 high-support decay remains exponential in \(k^{Rn}p\), with only the harmless finite tail shift and fixed radius constants changed.

### Degree

In the finite semigroup generator presentation, \(\rho^*\) sends each generator to an algebraic constant times a monomial of generator degree \(k^R\). Degree growth is unchanged.

### Heights

The algebraic translation constants contribute at most the same \(O(k^{Rn})\) height scale already allowed in the T16/T17 global estimates.

### Local rigid analysis

\(H\) is smooth. Local torus translation, generalized binomial expansions, rigid identity, Hensel construction, and local Liouville are unchanged.

### Global zero step

Use the T18 dense-coset toric zero theorem from Section 16 instead of T17's (RI)+(RE) theorem.

### Specialization

The coordinate translation acts only on the \(x\)-variables. It does not alter the relation variables \(\mathbf X\).

Therefore the T16/T17 relation-ideal normalization still gives the original specialization polynomial exactly.

Thus:

### Theorem T18.1 — orbit-closure reduced toric exact lifting

For the reduced dense torus-coset system above, every homogeneous nonarchimedean value relation

\[
P(\mathbf f(\alpha_Y))=0
\]

lifts to an algebraic functional relation

\[
Q(h,\mathbf f(h))=0
\]

with

\[
\boxed{
Q(\alpha_Y,\mathbf X)=P(\mathbf X).
}
\]

Appending the constant function \(1\) remains harmless.

The hypotheses are:

1. the exact T15 stable-image Collatz system;
2. reduction to an irreducible arithmetic-progression orbit coset \(Y=tH\);
3. the canonical reduced semigroup \(\Gamma_Y\);
4. boundary analyticity inherited from the canonical functions;
5. scalar-preserving minimalization over \(K(H)\);
6. a sufficiently deep regular point, whose existence is automatic by Section 13.

Neither (RI) nor (RE) is required separately after this reduction.

---

## 18. Exact specialization for the Collatz anchor

Assume a positive integer anchor

\[
H=N\in\mathbb Z_{>0}.
\]

The original exact relation is

\[
S(q)+3N=0.
\]

Transport it forward to a sufficiently deep point on the selected progression and reconstruct in the reduced basis:

\[
\ell_J\mathbf G_Y(\alpha_Y)+3N=0.
\]

Adjoin \(1\) and define

\[
P(X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
\]

Theorem T18.1 gives

\[
Q(h,1,\mathbf G_Y(h))=0
\]

with

\[
\boxed{
Q(\alpha_Y,X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
}
\]

Every orbit shift, component selection, coset translation, basis change, and scalar reconstruction has been absorbed into the \(h\)-variables and the exact row \(\ell_J\).

The specialization polynomial itself is unchanged.

---

## 19. Completion-sign contradiction

Assume the substitution is primitive and genuinely aperiodic.

T14's positive-anchor argument supplies ordinary real subcriticality for the realized positive integer orbit. Therefore the canonical positive series converge at the corresponding real tail.

T18 relation lifting is algebraic, so the functional identity embeds into the real completion.

Exact scalar reconstruction gives

\[
\ell_J\mathbf G_Y^{(\infty)}(\alpha_Y)
=
S^{(\infty)}(q).
\]

The lifted specialization then yields

\[
S^{(\infty)}(q)+3N=0.
\]

But

\[
S^{(\infty)}(q)>0
\]

and \(N>0\).

Contradiction.

Therefore:

\[
\boxed{
H\notin\mathbb Z_{>0}
}
\]

for every genuinely aperiodic primitive T15 stable-image system, including the residual singular-incidence cases not covered by T17.

---

## 20. Positive rational and negative rational boundary

### Positive integers

Excluded for the complete primitive stable-image class:

\[
\boxed{
H\notin\mathbb Z_{>0}.
}
\]

### Positive rational nonintegers

Primitivity alone does not supply the needed ordinary real convergence for an abstract rational value.

If ordinary real subcriticality is independently proved, the same exact lifting/sign argument gives

\[
\boxed{
H\notin\mathbb Q_{>0}.
}
\]

### Negative rationals

Negative rational values remain unexcluded.

They are compatible with the sign identity in a real-subcritical completion and are not Collatz counterexamples.

---

## 21. Nonprimitive systems remain separate

The algebraic orbit-closure reduction, scalar-preserving descent, regular-tail theorem, toric zero theorem, and exact mixed-place lifting do not require primitivity.

Thus the **relation-lifting side** of singular incidence is also closed for nonprimitive stable-image systems satisfying the inherited finite-state analytic setup.

What remains open is the independent ordinary real-contraction step required to turn a lifted positive-anchor relation into a sign contradiction.

Therefore:

\[
\boxed{
\text{nonprimitive algebraic singular incidence is reduced,}
}
\]

but

\[
\boxed{
\text{nonprimitive positive-anchor exclusion remains open without real contraction.}
}
\]

No primitivity is smuggled into the algebraic theorem.

---

## 22. Does the reduction terminate?

Yes.

There are two equivalent finite termination arguments.

1. Laurent immediately gives the complete orbit closure as a finite union of torus cosets. Passing to a dense irreducible component reaches the final relation lattice in one geometric step.

2. If one instead adjoins character relations one at a time, every strict enlargement of the saturated relation lattice lowers the torus dimension. The process therefore stops after at most \(\dim X\) strict reductions.

The Laurent formulation is preferred because it produces the complete saturated lattice directly.

---

## 23. Complete answer to the T18 singular-incidence questions

### Does every failure of (RI) reduce to a smaller torus/coset?

**YES.** The explicit witness already gives a character coset, and Laurent gives the complete irreducible closure.

### Does every failure of (RE) reduce to a smaller torus/coset?

The **actual periodic character lattice** does. Passing to \(D_{\rm cyc}\)-step progressions gives genuine constant-character equations.

After quotienting all actual relations, a root-of-unity eigenvalue can remain only with non-torsion affine drift. It is not a further relation and need not be quotiented.

### Does iteration terminate?

**YES.** Saturated relation rank can increase only finitely many times; Laurent gives the terminal lattice directly.

### Does the final minimal closure satisfy T17 (RI)?

**YES automatically**, because the reduced orbit is dense and all constant characters have been quotiented.

### Does the final minimal closure satisfy T17 (RE)?

**NOT NECESSARILY.** Cyclotomic linear factors with non-torsion translation drift can remain.

### Is (RE) still needed?

**NO on the reduced dense coset.** Bell-Ghioca-Tucker directly supplies finite intersection with every proper algebraic subvariety.

### Can denominator trapping always be absorbed?

**YES inside the exact T15 stable-image setting.** Rebuild the minimal system over \(K(Y)\) from the canonical restriction. Newly introduced denominator loci are proper and hence hit only finitely often.

### Does a more general invariant variety survive?

**NO for the exact Collatz stable orbit.** Laurent forces every irreducible component of the closure to be a torus coset because the orbit lies in a finitely generated multiplicative subgroup.

### Is any algebraic singular-incidence subclass still outside T18?

**NO inside the T15 stable-image torus framework.** The remaining project-level gap is nonprimitive real contraction, which is independent of singular incidence.

---

## 24. Consequence back to T2

For every newly covered primitive stable-image recursive family, T18 excludes a genuinely aperiodic positive integer anchor.

Under the inherited finite-alphabet anchoring hypotheses of T2,

\[
R_m\text{ bounded}
\]

would produce an ordinary positive anchor.

Therefore

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for the complete primitive T15 stable-image class.

This is a recursive-language obstruction, not an explicit Collatz counterexample.

---

## 25. Periodicity-Conjecture boundary after T18

| Recursive class | Status after T18 |
|---|---|
| Finite abelian translations | **Closed by T11.** |
| Finite nonabelian translations | **Closed as positive-anchor routes by T12.** |
| Balanced one-variable finite-kernel systems | **Closed as positive-anchor routes by T13.** |
| Primitive dominant multivariate \(T\in\mathcal M\), \(T\)-independent systems | **Closed by T16.** |
| T17 relatively admissible stable-image torus systems | **Closed by T17; subsumed by T18 reduction.** |
| Orbit-closure-reduced primitive stable-image torus systems, including prior (RI)/(RE)/denominator failures | **NEWLY CLOSED by T18 as positive-anchor routes.** |
| Nonprimitive dominant/stable-image systems | **Exact relation lifting available after reduction; positive-anchor conclusion still open without independent real contraction.** |
| Remaining singular-incidence systems inside T15 stable-image framework | **No algebraic singular-incidence subclass remains open.** |
| General multivariate/unbalanced finite-state systems outside the exact T5/T15 stable-image analytic framework | **OPEN.** |
| General morphic/substitutive recursive languages | **OPEN outside proved subclasses.** |
| Arbitrary automatic/morphic parity languages | **OPEN.** |
| Full Lagarias Periodicity Conjecture | **OPEN.** |

T18 does not claim the general Periodicity Conjecture.

---

## 26. External theorem ledger and exact hypotheses

### Laurent 1984

Michel Laurent, “Équations diophantiennes exponentielles,” Inventiones Mathematicae 78 (1984), 299–327.

Used statement: for a finitely generated subgroup \(\Gamma\subseteq\mathbb G_m^N(\mathbb C)\) and a subvariety \(V\), the intersection \(V\cap\Gamma\) is a finite union of cosets of subgroups of \(\Gamma\). Consequently, an irreducible subvariety containing a Zariski-dense subset of a finitely generated torus subgroup is a translate of an algebraic subtorus.

Hypotheses checked here:

- split algebraic torus: YES;
- characteristic zero: YES;
- finitely generated multiplicative subgroup: YES, generated coordinatewise by 2 and 3;
- algebraic subvariety: YES, the arithmetic-progression Zariski closure.

### Bell-Ghioca-Tucker 2010

Jason P. Bell, Dragos Ghioca, Thomas J. Tucker, “The dynamical Mordell-Lang problem for étale maps,” American Journal of Mathematics 132 (2010), 1655–1675.

Theorem 1.3: for an étale endomorphism of a quasiprojective variety, intersection of an orbit with a subvariety is a finite union of full suborbits under iterates.

Corollary 1.4: if the ambient quasiprojective variety is irreducible and the orbit is Zariski dense, every proper subvariety meets the orbit only finitely.

Hypotheses checked on the reduced closure:

- irreducible quasiprojective variety: \(H\), a torus;
- self-map: translation composed with a torus isogeny;
- étale: YES in characteristic zero;
- orbit Zariski dense: YES by construction.

### Corvaja-Zannier 2005

Pietro Corvaja and Umberto Zannier, “S-unit points on analytic hypersurfaces,” Annales scientifiques de l'École Normale Supérieure 38 (2005), 76–92.

Theorem 3: an algebraic-coefficient analytic power series vanishing on an \(S\)-unit sequence tending to the origin, under the stated height bound, traps the sequence in finitely many torus cosets on which the function vanishes.

T18 inherits the exact T17 verification of the height/convergence conditions; the reduced normalized character coordinates remain \(S\)-units and retain the same exponential height versus boundary-decay scale.

---

## 27. Cobham, López-Stoll, and Brechler

### Cobham

No second multiplicatively independent automatic presentation of the same relevant sequence is proved.

**Applicable in T18: NO.**

### López-Stoll

The T3 completion-transfer defect remains unresolved and irrelevant to T18.

**Load-bearing in T18: NO.**

### Brechler

A fresh 2026-10-03 search found arXiv:2607.24877v1 and bibliographic services still classifying the work as a preprint. No peer-reviewed publication was located.

**Publication status changed: NO.**

**Load-bearing in T18: NO.**

T18 uses the already proved T17 mixed-place machinery.

---

## 28. Compute and promotion decision

No theorem-derived scientific workload is justified.

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

No explicit anchored aperiodic word was found.

No candidate or unbounded orbit was found.

No counterexample was claimed.

---

## 29. Deliverable checklist

| Required item | T18 result |
|---|---|
| exact T17 theorem state inherited | Section 2 |
| exact residual stable-image obstruction attacked | (RI), (RE), AP bad-locus trapping |
| exact AP tail | \(\mathcal O_{a,r}\), then \(\beta=\phi^{a+rb}\alpha\), \(\Psi=\phi^{rs}\) |
| exact orbit closure | finite union of torus cosets by Laurent; final \(Y=tH\) irreducible |
| closure type | torus coset; no more general final variety |
| external orbit-closure theorem | Laurent 1984, exact hypotheses in Section 26 |
| exact character relation lattice | \(R_Y=H^\perp\) |
| saturated | **YES** |
| exact cyclotomic factor | orders \(\mathcal D_{\rm cyc}\), exponent \(D_{\rm cyc}\), periodic lattice \(\Lambda_{\rm per}\) |
| minimal power used | \(R=rs\), with \(s\) minimal component period after the actual witness progression |
| induced map on reduced lattice | \(A_Y\) induced by \(\overline M^R\) on \(N/R_Y\) |
| pullback injective | **YES**, dominance of translated isogeny |
| Mahler system descends | **YES**, by canonical restriction then re-minimalization |
| \(G_{Y,1}=S|_Y\) survives | **YES** |
| denominators introduced | only nonzero rational functions from new basis/reconstruction/relation matrices |
| complete regular tail | **YES**, BGT Corollary 1.4 |
| reduced semigroup | \(\Gamma_Y=\pi_Y(\mathbb N^m)\) |
| reduced weight | \(w_Y(\pi_Y(a))=\mathbf1^Ta\) |
| exact weight growth | \(w_Y(A_Y^n\gamma)=k^{Rn}w_Y(\gamma)\) |
| attracting boundary | torus-fixed point \(o_Y\in\operatorname{Spec}K[\Gamma_Y]\) |
| reduced relative independence | **AUTOMATIC** |
| root-of-unity eigenvalues remain | **POSSIBLY**, only with non-torsion affine drift |
| T17-style toric zero theorem | **YES**, strengthened dense-coset form without (RE) |
| exact specialization preserved | **YES** |
| appending \(1\) harmless | **YES** |
| mixed-place lifting on reduced system | **YES**, Theorem T18.1 |
| completion-sign contradiction | **YES for primitive positive-integer anchor branch** |
| positive integer anchors excluded | **YES for complete primitive T15 stable-image class** |
| positive rational noninteger values excluded | only with independent ordinary real subcriticality |
| negative rational exceptions survive | **YES** |
| new bounded-\(R_m\) periodicity class | **YES** |
| complete algebraic singular-incidence class closed | **YES inside T15 stable-image framework** |
| surviving obstruction | nonprimitive ordinary real contraction, not singular incidence |
| Cobham applies | **NO** |
| López-Stoll load-bearing | **NO** |
| Brechler publication changed | **NO publication located; still preprint** |
| explicit anchored aperiodic word | **NO** |
| candidate/unbounded orbit | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |

---

## 30. Exact next theorem-sized obligation

T18 removes the residual algebraic geometry of the stable orbit closure.

The next theorem-sized obligation is therefore no longer another singular-incidence quotient.

It is:

> **CDM4-T19 — nonprimitive real-contraction / positive-anchor completion audit.**
>
> Starting from the now-complete T18 scalar-preserving orbit-closure reduction and exact mixed-place lifting theorem, classify the reachable strongly connected components of a nonprimitive uniform substitution under a hypothetical ordinary positive Collatz anchor. Determine whether positivity of the realized orbit forces ordinary real subcriticality on every component that contributes to the exact reconstructed scalar, or whether a critical/supercritical transient or recurrent component can survive without contradicting the positive anchor relation.
>
> The target is an exact nonprimitive real-convergence theorem sufficient to run the already closed T18 lifting/sign contradiction, or an explicit smaller obstruction explaining why such a theorem fails.
>
> Do not reopen orbit-closure reduction, toric support growth, finite residue search, substitution enumeration, or scientific compute.

No scientific compute is authorized.

---

## 31. Permanent lesson

The final stable-image obstruction was not a mysterious invariant subvariety.

The exact Collatz tail is an \(S\)-unit orbit. That arithmetic fact forces every Zariski orbit closure into the rigid geometry of torus cosets.

Once the **actual** arithmetic-progression orbit closure is used, three apparent defects collapse together:

- relative dependence becomes the defining relation lattice of the coset;
- denominator trapping is removed by rebuilding the scalar-preserving minimal system on the coset;
- cyclotomic linear factors either become genuine constant-character relations and are quotiented, or survive only with non-torsion affine drift.

The correct reduced zero-set hypothesis is therefore not “no root of unity in the exponent matrix.” It is the more intrinsic statement already guaranteed by the reduction:

\[
\boxed{
\text{Zariski-dense orbit under an étale self-map of the reduced torus.}
}
\]

That condition is exactly what Bell-Ghioca-Tucker needs, and it is stable under every further arithmetic subsequence.

The T15/T17 singular-incidence algebraic geometry is now closed. The remaining primitive/nonprimitive split is a real-completion issue, not a toric orbit-closure issue.

C — new recursive-language obstruction found
