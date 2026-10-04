# CDM4-T25 — Relative slow-base multiplicity / divisor-regular Mahler lifting audit

**Date:** 2026-10-04  
**Authoritative input:** T24 branch tip `300bf8ad4d205026a13374eb73eb86015d503b75` on `cdm4-t24-principal-i-adic-audit`.  
**T24 merge check:** the stated T24 tip was verified and was not contained in `main` at the start of T25; the histories had diverged. In accordance with the task instruction, the exact T24 tip, not conversational memory and not the divergent `main` tip, was used as the T25 authority.  
Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T25 finds a genuine relative-multiplicity mechanism, but only after making two distinctions that T24 did not yet have.

First, the canonical series can be substantially smaller than the unrestricted slow-analytic algebra. Write the T24 direct product as
[
Gamma_Y=mathbb NdeltaoplusGamma_{m slow},
qquad
m=	heta^delta,
]
and write each reduced letter generator uniquely as
[
pi_Y(e_s)=kappa_sdelta+eta_s,
qquad
kappa_sinmathbb N,
quad
eta_sinGamma_{m slow}.
]
For the prefix Parikh vector (c(n)), define
[
kappa(n)=sum_{i<n}kappa_{u_i}.
]
Then (kappa(n)) is nondecreasing.

If
[
kappa(n)	oinfty,
]
then every fixed (m)-adic coefficient of every canonical state series is a **finite slow polynomial**. In particular,
[
oxed{
F_t|_Yin K[Gamma_{m slow}][[m]]
}
]
after the fixed algebraic torus translation is included in the coefficients.

This removes T24's infinite-analytic-coefficient obstruction for every **finite canonical (m)-jet**. It does not make the full analytic quotient finite dimensional.

Second, the correct divisor ring is not the full rational function field. Put
[
B:=K[Gamma_{m slow}],
qquad
F:=K(Gamma_{m slow})=operatorname{Frac}(B),
qquad
R:=B[m].
]
Then
[
oxed{
mathcal O:=R_{(m)}
cong
F[m]_{(m)}
}
]
is a DVR with uniformizer (m), residue field (F), fraction field (F(m)), and
[
oxed{
widehat{mathcal O}cong F[[m]].
}
]
This is distinct from the unrestricted analytic coefficient ring
[
mathcal A_{m slow}[[m]].
]

Writing
[
ho^*m=c,m^a,
qquad
c=u_delta	heta^etain F^	imes,
]
and denoting the induced injective slow pullback by
[
sigma:=ho^*|_F,
]
the divisor-local dynamics is
[
oxed{
sum b_jm^j
longmapsto
sum sigma(b_j)c^j m^{aj}.
}
]
Thus the relative problem is a **semilinear Mahler problem over the difference field ((F,sigma))**. It is not an ordinary one-variable Mahler problem over a fixed coefficient field.

For every fixed polynomial degree in the state variables, the contraction of the original functional-relation ideal to (mathcal O[mathbf X]) is (m)-saturated. The corresponding finite-degree quotient is therefore torsion-free, hence free, over the DVR (mathcal O). This gives a genuine divisor-regular relation lattice.

There remains one further invariant. On the saturated degree-one quotient, let the induced forward Mahler map be represented by
[
B_1in M_r(mathcal O),
qquad
det B_1
e0,
]
and define
[
oxed{
lambda_m:=operatorname{ord}_m(det B_1)ge0.
}
]
Within the saturated divisor-regular lattice, (lambda_m) is invariant under every basis change in (GL_r(mathcal O)).

Hence:
[
oxed{
lambda_m=0
iff
B_1in GL_r(mathcal O).
}
]
If (lambda_m>0), every inverse matrix has a negative (m)-order entry. No divisor-regular basis of the same saturated lattice removes that pole.

This sharpens T24's denominator warning into an exact criterion.

In the unbounded-(kappa) case, and assuming (lambda_m=0), there is a genuine relative Hermite-Padé cancellation mechanism. Let
[
Jsubset F(m)[mathbf X]
]
be the original functional relation ideal and let
[
h(D_X)
=
dim_{F(m)}
left(
F(m)[mathbf X]_{le D_X}/J_{le D_X}
ight).
]
Choose an (F(m))-independent basis of analytic representatives
[
g_1,ldots,g_{h(D_X)}.
]
For fast coefficient degree at most (D_f), consider
[
E
=
sum_{i=1}^{h(D_X)}
A_i(m)g_i,
qquad
A_i(m)in F[m],
quad
deg_m A_ile D_f.
]
There are
[
N_F=(D_f+1)h(D_X)
]
unknown coefficients over the slow rational field (F). Vanishing of each successive (m)-coefficient is one (F)-linear condition. Therefore a nonzero choice exists with
[
operatorname{ord}_m(E)ge N_F-1.
]
After removing any common explicit factor (m^r), (rle D_f), the **genuine cancellation multiplicity** satisfies
[
oxed{
P_{m rel}
ge
(h(D_X)-1)(D_f+1).
}
]
This gain is not obtained by multiplying a pre-existing auxiliary by (m^P).

Because the relevant canonical finite jets lie in (B), the (F)-solution can be cleared to algebraic slow-polynomial coefficients. If the jet matrix through order (P-1) has slow degree at most (J_P) and logarithmic algebraic coefficient height at most (H_P), maximal-minor/Siegel linear algebra gives, schematically,
[
D_s=O(PJ_P),
qquad
h_{m coeff}=O(P(H_P+log N_F)).
]
These quantities are fixed before orbit time tends to infinity.

The exact local estimate then separates the scales:
[
oxed{
-log|mathcal E_n|_2
ge
c_0P_{m rel}g_{m fast}(n)
-
C_0D_sg_{m slow}(n)
-
O(1).
}
]
There is no hidden slow analytic remainder.

The matching Liouville side has the form
[
oxed{
-log|mathcal E_n|_2
le
C_1(D_X)D_f,g_{m fast}(n)
+
C_2D_sg_{m slow}(n)
+
O(h_{m coeff}+1)
}
]
for the same algebraic auxiliary values used in the T16/T17 relation-lifting proof.

Since
[
g_{m slow}(n)=o(g_{m fast}(n)),
]
all slow coefficient complexity is asymptotically lower order for fixed auxiliary parameters.

If the relative transcendence degree
[
d_{m rel}
=
operatorname{trdeg}_{F(m)}
F(m)(G_1,ldots,G_r)
]
is positive, Hilbert-Serre gives
[
h(D_X)=Theta(D_X^{d_{m rel}}).
]
The relative cancellation space can therefore supply at least the multiplicity required by the already-closed T16 auxiliary hierarchy while keeping the new slow coefficient cost on the (g_{m slow}) scale.

Under
[
oxed{
kappa(n)	oinfty,qquad
d_{m rel}>0,qquad
lambda_m=0,
}
]
the T16/T17 mixed-place relation-lifting proof can consequently be rebuilt over the divisor-regular lattice. It gives an **original algebraic functional identity**, not a completed or graded relation, and preserves
[
oxed{
Q(alpha,mathbf X)=P(mathbf X)
}
]
exactly.

This is the new T25 relative-lifting subclass.

For a hypothetical genuinely aperiodic positive integer Collatz anchor in that subclass, append (1), apply the inherited T21 strict real prefix gap and scalar convergence, use pointwise completion portability, reconstruct the canonical scalar, and evaluate the exact lifted identity in the real completion. The inherited sign argument again gives
[
S^{(infty)}(q)+3N=0
]
with a positive real scalar and (N>0), impossible.

Therefore:
[
oxed{
	ext{no genuinely aperiodic positive-integer anchor exists in the T25 divisor-unramified}
}
]
[
oxed{
	ext{positive-relative-transcendence principal-fast subclass.}
}
]

T25 also proves a genuine obstruction on the opposite relative-algebraic branch. If
[
d_{m rel}=0,
]
the function field generated by the states is a finite algebraic extension of (F(m)). For the analytic place above (m=0), a norm/valuation argument gives
[
oxed{
operatorname{ord}_m(E)
le
C(D_f+D_X+1)
}
]
for every nonzero bounded-degree auxiliary with divisor-regular rational slow coefficients, after a fixed normalization depending only on the algebraic extension. Thus the relative-algebraic branch has no independently enlargable Hermite-Padé multiplicity factor. This is a real multiplicity obstruction, although T25 does not prove that its fixed constant can never beat every possible Liouville constant by some different argument.

The remaining principal-fast cases are therefore sharply isolated:

1. (kappa(n)) bounded: the canonical state vector is polynomial in (m) with slow analytic coefficients; a finite slow coefficient system exists, but T25 does not yet prove the exact original-state specialization theorem needed to close this branch.
2. (kappa(n)	oinfty), (d_{m rel}=0): finite-extension valuation ceiling; no unbounded relative multiplicity amplifier.
3. (kappa(n)	oinfty), (d_{m rel}>0), (lambda_m>0): exact cancellation exists, but two-sided relation transport has an unavoidable divisor pole in the saturated lattice.
4. (kappa(n)	oinfty), (d_{m rel}>0), (lambda_m=0): **newly closed by T25**.

No explicit Collatz counterexample is found.

---

## 2. Inherited T24 state

T25 treats the following as closed input and does not reprove it.

Under
[
I=I_{>1}=(m),
qquad
m=	heta^delta,
]
there are exactly two positive profiles
[
g_{m slow}<g_{m fast},
]
and
[
Gamma_Y
cong
mathbb NdeltaoplusGamma_{m slow}.
]

The reduced pullback has
[
A_Ydelta=adelta+eta,
qquad
etainGamma_{m slow},
]
and
[
ho^*m
=
u_delta m^a	heta^eta.
]
Moreover
[
operatorname{ord}_I(ho^{n*}m)=a^n,
qquad
operatorname{ord}_I(ho^{n*}f)
ge
a^noperatorname{ord}_I(f).
]

The exact (I)-order is not identified with the full fast profile. In particular, equal-radius triangular forcing can give
[
g_{m fast}(n)
asymp
n^{e_1+1}a^n
]
while the pullback order is (a^n).

Direct evaluation nevertheless satisfies
[
-log|m(q_n)|_2
=
Theta(g_{m fast}(n)).
]

T24 also proved:
[
mathcal A_Y/I^P
cong
igoplus_{k=0}^{P-1}m^kmathcal A_{m slow},
]
so exact (I^P)-vanishing is not finite codimensional over the algebraic coefficient field.

Finite slow truncation and explicit multiplication by (m^P) are closed as insufficient.

Orbit regularity does not imply divisor regularity.

The original functional relation ideal is prime/radical; completion, associated graded, and (I^P)-thickenings are not substitutes for original functional relations.

All T20-T23 scalar, profile, zero-theorem, and real-completion infrastructure remains closed.

---

## 3. Relative coefficient rings

Let
[
B=K[Gamma_{m slow}].
]
Because (Gamma_{m slow}) is cancellative and embeds in the character lattice, (B) is a domain.

Let
[
F=K(Gamma_{m slow})=operatorname{Frac}(B).
]

Let
[
mathcal A_{m slow}
]
denote the slow toric analytic algebra on the inherited strict boundary neighborhood.

These are different coefficient categories:
[
oxed{
B
subset
F
subset
operatorname{Frac}(mathcal A_{m slow}),
}
]
while
[
mathcal A_{m slow}
]
contains infinite convergent slow series and is not being identified with (F).

By the T24 direct product,
[
R=K[Gamma_Y]
cong
B[m].
]

The divisor prime is
[
I=(m).
]

Its local ring is
[
mathcal O
=
R_I.
]
Every nonzero element of (B) lies outside (I), hence becomes a unit. Therefore
[
oxed{
mathcal O
cong
F[m]_{(m)}.
}
]

Consequences:

- (mathcal O) is a DVR;
- (m) is a uniformizer;
- the residue field is (F);
- the fraction field is
  [
  L:=F(m)=K(Gamma_Y);
  ]
- the completion is
  [
  widehat{mathcal O}=F[[m]].
  ]

The unrestricted analytic (m)-adic ring is larger:
[
mathcal A_{m slow}[[m]].
]

T25 never replaces one by the other.

---

## 4. Slow-base dynamics and the local pullback

The slow semigroup is invariant:
[
A_YGamma_{m slow}subseteqGamma_{m slow}.
]
Hence pullback induces an injective field endomorphism
[
sigma:F	o F.
]

Write
[
c=u_delta	heta^etain F^	imes.
]
Then
[
ho^*m=c,m^a.
]

For
[
f(m)=rac{p(m)}{q(m)}in F[m]_{(m)}
]
the denominator has nonzero constant term
[
q(0)in F^	imes.
]
After pullback,
[
ho^*q
=
sigma(q)(c,m^a)
]
still has nonzero constant term
[
sigma(q(0)).
]
Therefore
[
oxed{
ho^*:mathcal O	omathcal O
}
]
is well defined.

On the completion,
[
oxed{
ho^*
left(
sum_{jge0}b_jm^j
ight)
=
sum_{jge0}
sigma(b_j)c^jm^{aj}.
}
]

Thus the divisor dynamics has ramification index (a) and nontrivial slow coefficient dynamics (sigma).

This is why an ordinary one-variable theorem over a fixed coefficient field cannot be imported merely by renaming (m) as the Mahler variable.

---

## 5. Canonical fast-count decomposition

For each letter generator,
[
pi_Y(e_s)
=
kappa_sdelta+eta_s.
]

Define the additive fast-count homomorphism
[
kappa:Gamma_Y	omathbb N,
qquad
kappa(kdelta+eta)=k.
]

For the fixed-point prefix,
[
pi_Y(c(n))
=
kappa(n)delta+eta(n),
]
where
[
oxed{
kappa(n)
=
sum_{i<n}kappa_{u_i}.
}
]

Hence (kappa(n)) is nondecreasing.

The pullback identity
[
A_Ydelta=adelta+eta
]
and slow invariance imply
[
oxed{
kappa(A_Ygamma)=a,kappa(gamma).
}
]
Thus the fast-count functional is an exact eigenfunctional for the reduced exponent action.

### 5.1 Unbounded fast count

Assume
[
kappa(n)	oinfty.
]

For fixed (j), the set
[
{n:kappa(n)=j}
]
is finite.

A canonical state series is
[
F_t
=
sum_{n:u_n=t}
a_n	heta^{pi_Y(c(n))}
]
with fixed algebraic translation coefficients (a_n).

Grouping by (m)-order gives
[
F_t
=
sum_{jge0}
m^j
left(
sum_{substack{n:u_n=t\kappa(n)=j}}
a_n	heta^{eta(n)}
ight).
]

The inner sum is finite. Therefore
[
oxed{
[m^j]F_tin B
}
]
for every (j), and
[
oxed{
F_tin B[[m]].
}
]

This is the canonical finite-jet theorem.

It does not say
[
mathcal A_Y/I^P
]
is finite dimensional. It says that the particular canonical state jets needed by the auxiliary construction are algebraic slow polynomials.

### 5.2 Bounded fast count

If (kappa(n)) is bounded, monotonicity makes it eventually constant.

Then each canonical state series has only finitely many (m)-powers:
[
oxed{
F_tinmathcal A_{m slow}[m].
}
]

Equating powers of (m) in the canonical functional equation produces a finite system of slow analytic coefficient functions under the induced slow map.

This is a real structural reduction, but T25 does not promote it to an exact original-state lift. The unresolved step is to carry the original specialization polynomial through the coefficient extraction and back to the original canonical state variables without weakening
[
Q(alpha,mathbf X)=P(mathbf X).
]

---

## 6. (m)-saturated functional relation modules

Let
[
J
=
ker
left(
L[mathbf X]
	o
operatorname{Frac}(mathcal A_Y),
quad
X_imapsto G_i
ight)
]
be the original functional relation ideal over
[
L=F(m).
]

Fix state-polynomial degree (D_X), and let
[
V_{D_X}=mathcal O[mathbf X]_{le D_X}.
]

Define
[
M_{D_X}
=
Jcap V_{D_X}.
]

### Theorem T25.1 — divisor saturation

[
oxed{
M_{D_X}
	ext{ is }m	ext{-saturated in }V_{D_X}.
}
]

Indeed, if
[
mQin M_{D_X},
]
then in the analytic function domain
[
m,Q(mathbf G)=0.
]
Since (m
e0) and the analytic function ring embeds in a domain,
[
Q(mathbf G)=0.
]
Hence
[
Qin M_{D_X}.
]

Therefore
[
V_{D_X}/M_{D_X}
]
is torsion-free over the DVR (mathcal O).

It is finitely generated, hence free.

Consequently the short exact sequence
[
0	o M_{D_X}	o V_{D_X}	o V_{D_X}/M_{D_X}	o0
]
splits over (mathcal O).

This is the divisor-regular finite-degree replacement for the full-field complement used in T16/T18.

No completion or associated graded ring has been introduced.

---

## 7. The divisor ramification invariant of relation transport

The canonical polynomial system induces forward semilinear transport on the saturated degree-one quotient.

Choose an (mathcal O)-basis. The induced matrix has
[
B_1in M_r(mathcal O),
qquad
det B_1
e0
]
because after tensoring with (L) it is the same minimal rational functional system already known to be invertible.

Define
[
lambda_m
=
operatorname{ord}_m(det B_1).
]

If
[
Uin GL_r(mathcal O)
]
is another divisor-regular basis, then
[
B_1'
=
U B_1,ho^*(U^{-1}).
]
Both
[
det U
quad	ext{and}quad
ho^*(det U)
]
are units of (mathcal O). Hence
[
oxed{
operatorname{ord}_mdet B_1'
=
lambda_m.
}
]

### Theorem T25.2 — exact divisor-regular invertibility criterion

[
oxed{
lambda_m=0
iff
B_1in GL_r(mathcal O).
}
]

If (lambda_m>0), then
[
det(B_1^{-1})
]
has negative (m)-order. Hence at least one entry of (B_1^{-1}) has negative (m)-order.

Thus:
[
oxed{
lambda_m>0
Longrightarrow
	ext{no }GL_r(mathcal O)	ext{ basis of the saturated lattice removes the divisor pole.}
}
]

A non-unimodular rescaling by powers of (m) changes the lattice and its special fiber. Such a move is not an innocuous basis change for exact specialization and is not accepted as a divisor-regular repair.

This is the exact T25 replacement for the vague statement “perhaps saturation removes the poles.”

---

## 8. Relative auxiliary dimension

Assume now
[
kappa(n)	oinfty.
]

For fixed (D_X), let
[
h(D_X)
=
dim_L
L[mathbf X]_{le D_X}/J_{le D_X}.
]

By Theorem T25.1, the corresponding divisor-local quotient has the same rank over (mathcal O).

Choose analytic representatives
[
g_1,ldots,g_h
]
for an (L)-basis, with
[
h=h(D_X).
]

For fast polynomial degree (D_f), consider
[
E
=
sum_{i=1}^h A_i(m)g_i,
qquad
A_i(m)
=
sum_{j=0}^{D_f}a_{ij}m^j,
qquad
a_{ij}in F.
]

There are exactly
[
oxed{
N_F=(D_f+1)h(D_X)
}
]
unknowns over the slow rational field (F).

Because all finite canonical jets are in (B), every coefficient
[
[m^k]E
]
is an element of (F), and
[
[m^k]E=0
]
is one (F)-linear equation in the unknowns.

Therefore the first (P) coefficient identities have rank at most (P).

For
[
P=N_F-1
]
there is a nonzero solution.

Because the (g_i) are (L)-linearly independent, the resulting (E) is not the zero function.

### 8.1 Removing explicit common (m)-factors

Let
[
r=min_ioperatorname{ord}_mA_i.
]
Then
[
0le rle D_f.
]

Divide the whole coefficient vector and auxiliary by (m^r).

The resulting coefficient vector is primitive with respect to (m); at least one coefficient polynomial is an (m)-unit.

Its exact cancellation order is at least
[
N_F-1-r
ge
h(D_f+1)-1-D_f.
]

Hence:
[
oxed{
P_{m rel}
ge
(h(D_X)-1)(D_f+1).
}
]

This is the T25 multiplicity gain.

It survives after all common explicit powers of (m) have been removed.

Therefore it is not the T24-neutral construction
[
E=m^PE_0.
]

---

## 9. Exact finite-(K) count with bounded slow degree

Let
[
H_{m slow}(D_s)
=
dim_K B_{le D_s}.
]

If each slow coefficient (a_{ij}) is required a priori to lie in
[
B_{le D_s},
]
then the raw number of algebraic unknowns is
[
oxed{
N_K
=
(D_f+1)h(D_X)H_{m slow}(D_s).
}
]

The first (P) exact (m)-coefficient identities are polynomial identities on the slow base.

If the relevant jet entries through order (P-1) have maximum slow degree (J_P), then the (k)-th identity lies in a slow polynomial space of degree bounded by
[
D_s+J_P
]
up to the fixed degree contribution from the chosen state basis.

Thus its scalar (K)-equations are the coefficients of a finite slow polynomial, not a truncated analytic series.

The exact number of independent scalar equations is the rank of the corresponding finite coefficient matrix over (K).

The invariant count is simpler after tensoring with (F):

- unknowns:
  [
  (D_f+1)h(D_X);
  ]
- exact conditions:
  at most one independent (F)-linear condition per (m)-order.

This is the correct relative dimension calculation.

It does **not** assert that arbitrary elements of
[
mathcal A_Y/I^P
]
are finite dimensional.

---

## 10. Clearing slow rational coefficients and height bounds

The (F)-linear kernel can be chosen by maximal minors.

For a finite target order (P), all matrix entries are rational slow functions with algebraic coefficients.

Let (J_P) bound numerator/denominator slow degree and let (H_P) bound logarithmic algebraic coefficient height after a common slow denominator is chosen.

A maximal-minor vector has, schematically,
[
oxed{
D_s=O(PJ_P)
}
]
and
[
oxed{
h_{m coeff}
=
O(P(H_P+log N_F)).
}
]

All implied constants depend only on the fixed finite generator presentation and number field.

Multiplying by a common slow denominator has
[
operatorname{ord}_m=0.
]
It therefore does not reduce the exact (m)-multiplicity.

Its evaluation can contribute only slow-scale local size and slow-scale global height.

Translation constants are algebraic and enter (H_P) and the fixed slow-degree bookkeeping.

No orbit-dependent truncation degree is introduced.

All auxiliary parameters are fixed before
[
n	oinfty.
]

---

## 11. Functional equations do not make the full slow analytic quotient finite

T25 does **not** reverse T24's infinite-codimension theorem.

For a general analytic auxiliary
[
E=sum_{jge0}m^jE_j,
qquad
E_jinmathcal A_{m slow},
]
the conditions
[
E_0=cdots=E_{P-1}=0
]
remain complete slow analytic identities.

The new finite reduction occurs because, in the unbounded-(kappa) canonical branch:

1. the canonical finite (m)-jets are slow polynomials;
2. the finite-degree relation quotient is a finite free (mathcal O)-module;
3. the auxiliary is built from that finite canonical quotient with rational slow coefficients.

Thus the functional equations do not collapse
[
mathcal A_{m slow}
]
to finite dimension.

They restrict the relevant auxiliary problem to a finite rational slow-base module.

This distinction is essential.

---

## 12. Local upper estimate

Let
[
M_n=-log|m(q_n)|_2.
]
T24 gives
[
M_n=Theta(g_{m fast}(n)).
]

After exact cancellation and removal of common explicit (m)-factors,
[
E=m^{P_{m rel}}U,
]
where (U) is analytic in the inherited strict toric neighborhood after clearing only slow denominators.

Divisor-regular denominators have (m)-order zero. Their possible growth along the boundary is controlled by slow characters.

Thus
[
-log|E(q_n)|_2
ge
P_{m rel}M_n
-
C D_sg_{m slow}(n)
-
O(1).
]

Equivalently,
[
oxed{
-log|E(q_n)|_2
ge
cP_{m rel}g_{m fast}(n)
-
C D_sg_{m slow}(n)
-
O(1).
}
]

No term of the form
[
L,g_{m slow}(n)
]
comes from an uncontrolled analytic truncation remainder.

The only slow term is the explicitly controlled algebraic/rational slow coefficient complexity.

---

## 13. Global Liouville estimate

The T16/T17 algebraic auxiliary values remain algebraic numbers.

T25 does not apply Liouville directly to a Mahler-function value.

The relative construction replaces the multiplicity step inside the existing relation-matrix auxiliary proof.

Under
[
lambda_m=0,
]
the relation transport and its inverse are over (mathcal O). No factor of negative (m)-order is introduced.

For fixed (D_X), the inherited algebraic degree/height bookkeeping therefore gives
[
h(mathcal E_n)
le
C_1(D_X)D_f,g_{m fast}(n)
+
C_2D_sg_{m slow}(n)
+
O(h_{m coeff}+1).
]

The local product-formula/Liouville inequality then yields
[
oxed{
-log|mathcal E_n|_2
le
C_3(D_X)D_f,g_{m fast}(n)
+
C_4D_sg_{m slow}(n)
+
O(h_{m coeff}+1)
}
]
for every nonzero auxiliary value.

The T23 principal zero theorem supplies the same eventual nonvanishing input needed to choose infinitely many such values.

---

## 14. Positive relative transcendence gives an independently enlargable multiplicity parameter

Let
[
d_{m rel}
=
operatorname{trdeg}_{L}
L(G_1,ldots,G_r).
]

If
[
d_{m rel}>0,
]
then the Hilbert function satisfies
[
oxed{
h(D_X)=Theta(D_X^{d_{m rel}}).
}
]

Hence
[
P_{m rel}
ge
(h(D_X)-1)(D_f+1).
]

The ordinary T16 auxiliary proof needed a multiplicity factor that grows independently of the final base-degree parameter. Its target was schematically
[
p
asymp
D_X^{1/N}D_f
]
for a fixed ambient dimension (N).

The T25 relative space imposes only one coefficient identity per (m)-order over (F), rather than all ordinary multivariate Taylor conditions. Since (h(D_X)) has positive polynomial growth, the relative space supplies at least the T16 target order after the usual parameter hierarchy is chosen.

The new slow denominator/height terms are fixed before orbit time and satisfy
[
D_sg_{m slow}(n)
=
o(g_{m fast}(n)).
]

Thus the exact T16 upper/lower contradiction survives.

---

## 15. Theorem T25.3 — divisor-unramified relative exact lifting

Assume the complete T18-reduced/T23-principal/T24-two-profile setup.

Assume additionally:

1. **unbounded canonical fast count**
   [
   kappa(n)	oinfty;
   ]
2. **positive relative functional transcendence**
   [
   d_{m rel}>0;
   ]
3. **divisor-unramified saturated transport**
   [
   lambda_m=0;
   ]
4. the inherited T23 principal zero theorem and T16/T17 algebraic regular-tail hypotheses.

Then every homogeneous algebraic relation
[
P(mathbf G(alpha))=0
]
at the chosen (2)-adic Collatz point admits an algebraic functional relation
[
Q(x,mathbf G(x))=0
]
in the original functional relation ideal with
[
oxed{
Q(alpha,mathbf X)=P(mathbf X).
}
]

Appending the constant function (1) remains valid.

### Proof audit

Only the T16/T17 multiplicity/localization layer changes.

1. Use Theorem T25.1 to replace full-field complements by finite free (mathcal O)-quotients.
2. Use (lambda_m=0) to make the induced relation transport two-sided over (mathcal O). No denominator of positive (m)-order is inverted.
3. Use the canonical finite-jet theorem to express the required finite (m)-jet conditions over (F), then Theorem T25's relative Hermite-Padé count to obtain exact cancellation multiplicity.
4. Clear only slow denominators. They are (m)-units.
5. The local estimate gains
   [
   P_{m rel}g_{m fast}(n)
   ]
   with only controlled
   [
   D_sg_{m slow}(n)
   ]
   corrections.
6. The global degree/height and local Liouville layers are the T16/T17 ones, with the new slow coefficient complexity asymptotically lower order.
7. T23 supplies eventual nonvanishing for the nonzero analytic auxiliary.
8. The same parameter hierarchy gives the contradiction used to force the desired functional relation.
9. Because the construction takes place in the contraction of the **original** relation ideal to (mathcal O[mathbf X]), the output is an actual rational/algebraic functional identity. No completed or associated-graded relation is promoted.
10. Clearing a slow denominator (d) with (d(alpha)
e0) can be normalized by the algebraic constant (d(alpha)^{-1}). Hence the final relation preserves the input polynomial exactly:
    [
    Q(alpha,mathbf X)=P(mathbf X).
    ]

This proves the theorem.

---

## 16. Relative-algebraic multiplicity obstruction

Assume
[
d_{m rel}=0.
]

Then
[
E_{m fun}:=L(G_1,ldots,G_r)
]
is a finite algebraic extension of
[
L=F(m).
]

Fix the analytic place (w) above (m=0).

After multiplying the finite set of state generators by one fixed divisor-regular normalizing factor, they are integral at all places above (m=0).

Let (E
e0) be an auxiliary of state degree at most (D_X), fast rational degree at most (D_f), and slow rational coefficients of (m)-order zero.

Take the field norm
[
N_{E_{m fun}/L}(E)in F(m)^	imes.
]

The (m)-degree of its numerator and denominator is
[
O(D_f+D_X+1)
]
with constants depending only on the fixed algebraic extension and chosen generators.

The valuation of the norm is the sum of local valuations above (m=0), with ramification/residue weights. After the fixed integrality normalization all other contributions are bounded below linearly in (D_X).

Therefore
[
oxed{
operatorname{ord}_w(E)
le
C(D_f+D_X+1).
}
]

### Theorem T25.4 — finite-extension relative multiplicity ceiling

In the relative-algebraic branch, bounded-degree rational slow-base auxiliaries cannot acquire a multiplicity-to-fast-complexity ratio that tends to infinity.

This is a genuine Route-B-style obstruction to the **relative Hermite-Padé amplification mechanism**.

It does not prove that every conceivable arithmetic argument fails; the fixed constant in the linear bound is not compared to every possible Liouville constant.

---

## 17. Zorin stable-ideal audit

Primary source:

Evgeniy Zorin, “Zero Order Estimates for Analytic Functions,” *International Journal of Number Theory* 9 (2013), 333–392, DOI 10.1142/S1793042112501370; arXiv:1103.1174.

The source was checked at theorem level, not by title inference.

The multiplicity in Zorin's main setup is
[
operatorname{ord}_{z=0}P(mathbf f(z))
]
for one formal/analytic parameter (z).

The stable-ideal machinery controls ideals stable under the functional transformation, but “stable ideal” does not by itself mean order along an arbitrary positive-dimensional divisor.

There are two attempted identifications.

### 17.1 Take (z=m) and coefficient field (F=K(Gamma_{m slow}))

The unbounded-(kappa) finite-jet theorem does place the canonical series in
[
F[[m]].
]

However, the actual pullback is semilinear:
[
bmapstosigma(b)
]
on (F), together with
[
mmapsto c,m^a.
]

Zorin's theorem is not stated as the arithmetic relative lifting theorem for this moving coefficient endomorphism, and it does not provide the required number-field height estimates for evaluation of rational slow coefficients on the Collatz orbit.

### 17.2 Enlarge the coefficient field to contain arbitrary slow analytic functions

Then the (m)-series formalism can absorb the slow functions, but the coefficient field has exactly the uncontrolled analytic size that T24 identified as fatal.

The arithmetic coefficient-height layer is lost.

Therefore:
[
oxed{
	ext{Zorin is structurally relevant but not a load-bearing T25 lifting theorem.}
}
]

T25's positive theorem is proved directly from the canonical finite-jet structure and the already-audited T16/T17 arithmetic auxiliary architecture.

---

## 18. Nishioka zero-order audit

Primary source:

Kumiko Nishioka, “On an estimate for the orders of zeros of Mahler type functions,” *Acta Arithmetica* 56 (1990), 249–256, DOI 10.4064/aa-56-3-249-256.

The paper defines ordinary zero order at
[
z=0
]
for one-variable formal power series over a characteristic-zero field and proves a zero-order estimate for Mahler-type functions.

No relative positive-dimensional divisor version with a slow rational-function coefficient field, orbit arithmetic height layer, divisor-regular relation matrices, and exact prescribed specialization is present.

Therefore:
[
oxed{
	ext{Nishioka's classical zero-order estimate is not the missing T25 theorem.}
}
]

---

## 19. Broader literature audit

### 19.1 Adamczewski-Faverjon 2026

Boris Adamczewski and Colin Faverjon, “Mahler's method in several variables and finite automata,” *Annals of Mathematics* 204 (2026), together with its published addendum, remains the peer-reviewed source of the multivariate lifting architecture used by T16-T18.

Its published proof supplies the ordinary finite-codimensional auxiliary mechanism, global vanishing input, relation matrices, and exact specialization.

T25 uses that architecture after replacing the point-order multiplicity step by the relative finite-jet construction above.

The paper does not state the T25 divisor-relative theorem over the slow difference field.

### 19.2 Difference algebra and parametrized difference Galois theory

Difference algebra naturally permits coefficient fields carrying a nontrivial endomorphism.

Published work of Dreyfus-Hardouin-Roques and Adamczewski-Dreyfus-Hardouin gives powerful functional algebraic/hypertranscendence tools for Mahler equations.

Those theories do not supply the specific arithmetic package required here:

- exact (m)-divisor multiplicity;
- algebraic slow rational coefficient height at moving Collatz points;
- Liouville comparison on (g_{m fast});
- divisor-regular relation transport;
- exact specialization of a prescribed value relation.

They are therefore background, not the T25 bridge.

### 19.3 Function-field Mahler analogues

Published and preprint function-field Mahler analogues found in the audit predominantly concern positive characteristic.

They do not supply the characteristic-zero number-field height theorem required for the slow rational base here.

### 19.4 Arithmetic sections with prescribed divisor multiplicity

General algebraic geometry correctly records that explicit vanishing along a principal divisor costs degree linearly.

That is already the T24 identity
[
dim(I^Pcap R_{le D})
=
H_Gamma(D-Ps).
]

Such section-counting theorems do not create cancellation among canonical Mahler functions and do not supply exact value-relation lifting.

### 19.5 Brechler 2026

Enzo Brechler, arXiv:2607.24877, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” was rechecked.

As of T25 it remains a July 2026 preprint.

Its announced multivariate rational-transcendental dichotomy, meromorphy, strengthened lifting, and descent results are highly relevant to the residual
[
d_{m rel}=0
]
boundary.

They are not used as load-bearing input.

### 19.6 Fatou rational/transcendental dichotomy

The classical Fatou theorem for one-variable power series with coefficients in a finite set remains useful background for possible future reductions of the relative-algebraic branch.

T25 does not obtain a specialization from the reduced torus states to a finite-valued one-variable series that would certify
[
d_{m rel}>0
]
in every aperiodic principal-fast system.

No such inference is promoted.

---

## 20. Exact specialization and original relation ideal

The relative cancellation is performed inside finite free modules obtained by contracting
[
Jsubset L[mathbf X]
]
to
[
mathcal O[mathbf X].
]

Therefore every relation produced after the auxiliary contradiction lies in the original rational functional relation ideal after tensoring back to (L).

Clearing denominators uses only (m)-units.

No statement of the following form is used as a substitute:

- equality modulo (m);
- equality modulo (m^P);
- equality in an associated graded ring;
- equality only in (F[[m]]);
- equality only in an (m)-adic completion.

The output of Theorem T25.3 is an actual algebraic functional identity.

The normalization is algebraic and gives
[
oxed{
Q(alpha,mathbf X)=P(mathbf X)
}
]
literally.

---

## 21. Appending (1), scalar reconstruction, and the sign contradiction

For the newly closed T25 subclass, adjoin
[
1
]
exactly as in T16-T21.

At the chosen deep 2-adic Collatz point, a hypothetical positive integer anchor gives the exact scalar value relation
[
P(1,mathbf G(alpha))=0.
]

Theorem T25.3 gives
[
Q(x,1,mathbf G(x))=0
]
with
[
Q(alpha,mathbf X)=P(mathbf X).
]

The T18 scalar-preserving reconstruction remains exact.

T21 supplies, for a hypothetical positive integer anchor, the strict ordinary-real prefix gap below
[
log_2 3
]
and hence ordinary real convergence of the canonical scalar at the same algebraic tail point.

Pointwise completion portability applies because the lifted identity is algebraic.

The real specialization therefore yields the same exact scalar relation.

But the real canonical scalar is positive, while the positive integer anchor contributes (3N>0).

Thus
[
S^{(infty)}(q)+3N=0
]
is impossible.

Hence:
[
oxed{
	ext{the newly closed T25 relative-lifting subclass has no genuinely aperiodic positive-integer anchor.}
}
]

---

## 22. Positive rational and negative rational boundaries

The T25 lifting theorem itself is algebraic and is not restricted to integer values.

The completion-sign step is different.

The strict real prefix gap used by T21 is derived from a hypothetical **positive integer** Collatz anchor.

Therefore T25 does not claim that an arbitrary positive rational noninteger value is automatically subcritical.

A positive rational noninteger is excluded by the same argument only if intrinsic real subcriticality/convergence is independently known for that system.

Negative rational values remain non-counterexamples to the root objective.

---

## 23. T2 consequence

For every recursive class satisfying the inherited T2 finite-alphabet anchoring hypotheses and the new T25 closure conditions
[
kappa(n)	oinfty,
qquad
d_{m rel}>0,
qquad
lambda_m=0,
]
a genuinely aperiodic positive-integer anchor is impossible.

Therefore the inherited T2 implication upgrades to
[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]
for this newly closed T25 subclass.

No such new T2 consequence is claimed for the residual principal-fast cases.

---

## 24. Candidate and compute status

No explicit anchored aperiodic word was found.

No positive integer candidate was found.

No positive rational anchor was found.

No unbounded orbit was found.

No Collatz counterexample was found or claimed.

T25 is entirely theoretical.

No new scientific starts were executed.

No substitution enumeration, residue/carry/exponent-code search, generator design, CPU campaign, GPU work, cloud work, cluster work, distributed work, or volunteer computation was performed.

No theorem-derived numerical workload is created.

Therefore:

- `docs/COMPUTE_BUDGET.md`: **UNCHANGED**;
- `docs/METRIC_CATALOG.md`: **UNCHANGED**.

---

## 25. Periodicity-Conjecture boundary after T25

| Recursive class | Status after T25 | Strongest project conclusion |
|---|---|---|
| finite abelian translations | closed by T11 | no genuinely nonperiodic positive anchor in covered class |
| finite nonabelian translations | closed by T12 | no genuinely nonperiodic positive-integer anchor |
| balanced finite-kernel systems | closed by T13 | no genuinely nonperiodic positive-integer anchor; bounded (R_mRightarrow) eventual periodicity |
| T16-T21 dominant / toric / orbit-closure / uniform and balanced reducible classes | closed | exact lifting plus real sign contradiction; corresponding T2 implications |
| T22 general genuine unequal-growth systems | open | fast-height / slow-contraction obstruction remains |
| T23 principal-high subclass | analytic zero theorem closed | exact lifting not universal |
| T24 principal structural subclass | two-profile/direct-product and exact (m)-pullback closed | bare (I^P) auxiliary route closed |
| T25 principal, unbounded (kappa), (d_{m rel}>0), (lambda_m=0) | **newly closed** | exact relative lifting, exact specialization, no genuinely aperiodic positive-integer anchor; T2 implication |
| T25 principal, bounded (kappa) | open but reduced | canonical states polynomial in (m) over slow analytic coefficients; exact coefficient-system-to-original-specialization bridge missing |
| T25 principal, unbounded (kappa), (d_{m rel}=0) | open with new obstruction | finite-extension valuation ceiling; no independently enlargable relative multiplicity gain |
| T25 principal, unbounded (kappa), (d_{m rel}>0), (lambda_m>0) | open with new obstruction | genuine cancellation exists, but saturated two-sided relation transport has unavoidable (m)-pole |
| general nonprincipal unequal-growth systems | open | moving analytic coefficients / nonprincipal high-ideal obstruction remains |
| arbitrary automatic/morphic parity languages | open | no universal anchor theorem |
| full Periodicity Conjecture | open | not solved |

No row is an explicit Collatz counterexample.

---

## 26. Cobham / López-Stoll / Adamczewski-Faverjon / Zorin / Brechler status

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant parity/valuation object.

**Load-bearing in T25:** NO.

### López-Stoll

The previously rejected real-to-2-adic density bridge is not used.

**Load-bearing in T25:** NO.

### Adamczewski-Faverjon

The published 2026 multivariate relation-lifting architecture is load-bearing through the already-audited T16/T17 mixed-place reconstruction.

T25 does not attribute the new divisor-relative theorem to that paper.

### Zorin

Stable ideals and zero-order estimates are structurally relevant.

The published theorem controls one-parameter order at (z=0); it does not provide the T25 semilinear slow-base arithmetic lifting theorem.

**Direct theorem match:** NO.

### Nishioka

Classical zero-order estimates are ordinary one-variable point-order results.

**Direct relative/divisor theorem match:** NO.

### Brechler

The 2026 multivariate rational/transcendental and descent paper remains an arXiv preprint as of this audit.

It is potentially relevant to the residual relative-algebraic branch but is **non-load-bearing**.

---

## 27. What T25 proves and does not prove

### Proved

- exact divisor coefficient rings
  [
  B, F, mathcal O, widehat{mathcal O};
  ]
- semilinear slow-base divisor dynamics;
- canonical fast-count decomposition;
- finite slow-polynomial canonical (m)-jets when (kappa(n)	oinfty);
- polynomial-in-(m) canonical states when (kappa(n)) is bounded;
- (m)-saturation and freeness of finite-degree original relation modules;
- exact divisor-ramification invariant (lambda_m) on the saturated lattice;
- criterion
  [
  lambda_m=0
  iff
  	ext{two-sided divisor-regular transport};
  ]
- exact relative auxiliary dimension over (F);
- genuine cancellation multiplicity
  [
  P_{m rel}ge(h(D_X)-1)(D_f+1);
  ]
- slow-degree and algebraic-height clearing bounds;
- fast local / slow residual scale separation;
- matching Liouville scale under divisor-unramified transport;
- a divisor-unramified positive-relative-transcendence exact lifting theorem;
- exact original specialization
  [
  Q(alpha,mathbf X)=P(mathbf X);
  ]
- positive-integer exclusion and T2 consequence for the new T25 subclass;
- finite-extension multiplicity ceiling when (d_{m rel}=0).

### Not proved

- (lambda_m=0) for every canonical principal-fast system;
- (d_{m rel}>0) for every aperiodic principal-fast system;
- exact original-state lifting for the bounded-(kappa) coefficient-system reduction;
- a universal theorem for all T23/T24 principal-high systems;
- a relative lifting theorem for nonprincipal high ideals;
- positive-rational noninteger exclusion without intrinsic subcriticality;
- an explicit positive integer with unbounded orbit;
- the full Periodicity Conjecture.

---

## 28. Exact next theorem-sized obligation

**CDM4-T26 — canonical divisor-unramifiedness / relative-transcendence completion audit.**

The next theorem must attack the residual principal-fast trichotomy, not restart bare (I^P) multiplication.

Primary targets:

1. Prove or refute that the saturated canonical relation lattice always has
   [
   lambda_m=0.
   ]
   If false, classify the semilinear (m)-slopes and determine whether a different **analytic, specialization-preserving** lattice can remove them.

2. Prove or refute that every genuinely aperiodic unbounded-(kappa) canonical principal-fast system has
   [
   d_{m rel}>0.
   ]
   The relative-algebraic branch must be attacked without using the non-peer-reviewed Brechler preprint as a load-bearing theorem.

3. For bounded (kappa), rebuild the extracted finite slow coefficient system through the original functional relation ideal and prove an exact normalization that returns the original scalar specialization polynomial.

If these three points close positively, the entire T23/T24 principal-high subclass reaches the T21 real sign contradiction.

If one fails, the failure must be recorded as a theorem-sized semilinear/divisor obstruction.

No scientific computation is authorized.

---

## 29. Permanent lesson

T24's infinite-codimension warning was correct for the full analytic quotient but was too coarse for the canonical finite-jet problem.

The canonical recursive language carries an extra discrete coordinate:
[
kappa(n)=operatorname{ord}_m	heta^{pi_Y(c(n))}.
]
When that coordinate tends to infinity, every fixed divisor jet contains only finitely many prefix terms. Exact divisor cancellation can then be performed over the **slow rational function field** rather than over the unrestricted slow analytic algebra.

The correct local algebra is the DVR
[
K(Gamma_{m slow})[m]_{(m)}.
]
Saturation there really does recover finite free relation modules.

But divisor regularity has one more layer: the semilinear relation transport itself can be ramified. The determinant valuation
[
lambda_m
]
detects whether inverse transport remains inside the divisor-local ring.

Thus the principal-fast problem now has three distinct invariants:

[
oxed{
	ext{canonical jet finiteness}
+
	ext{relative functional transcendence}
+
	ext{divisor-unramified transport}.
}
]

When all three are favorable, the fast local factor is a genuine cancellation gain, not a removable explicit factor, and the original T16/T17 exact-specialization machinery works again.

When relative transcendence collapses, finite-extension valuation theory imposes a linear multiplicity ceiling.

The remaining question is no longer whether a principal (I)-adic filtration exists. It is whether the canonical Mahler module is unramified and relatively transcendental over its slow difference field.

C — new recursive-language obstruction found
