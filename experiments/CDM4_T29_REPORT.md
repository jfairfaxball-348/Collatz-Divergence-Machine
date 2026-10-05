# CDM4-T29 — CANONICAL STRATUMWISE ALGEBRAIC-MOVING-TARGET ZERO THEOREM / EXACT-DESCENT AUDIT

**Date:** 2026-10-05  
**Authoritative input branch:** `cdm4-t28-nonprincipal-multiscale-audit`  
**Authoritative input commit:** `257fc07a02a437cb198fd98fa254b031d61d2f6a`  
**T28 merged into main at session start:** **NO** — the exact T28 tip exists and `main` was verified divergent from it, so the T28 tip above was used as authority.  
**Working branch:** `cdm4-t29-moving-target-zero-audit`

Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. Finite-code search: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T29 proves the missing synchronized zero/nonvanishing theorem for the **actual canonical finite-jet auxiliary class produced by T28**, and this is sufficient to close the nonprincipal T22 multiscale exact-lifting obstruction.

The load-bearing published arithmetic input is Ru–Vojta's moving-hyperplane Subspace Theorem. In the form recorded as Theorem 7.6/7.7 in Vojta's exposition, it applies to a sequence
[
x(n)inmathbf P^N(K)
]
over one fixed number field, moving hyperplanes with coefficient height
[
h(H(n))=o(h(x(n))),
]
and linear nondegeneracy over the coherent moving-coefficient field. Every infinite target sequence admits an infinite coherent subsequence.

For the T28 jets all of those hypotheses can now be checked exactly.

The main new observations are:

1. A canonical finite jet is stronger than the phrase "algebraic moving coefficient" suggests. After choosing a basis of
   [
   mathfrak p_i^a/mathfrak p_i^{a+1}
   ]
   over
   [
   k_i=operatorname{Frac}K[Gamma_{le i}],
   ]
   its coefficients are values of **fixed rational functions on the slower face**, with algebraic constants. Hence they lie in one fixed number field after evaluation on the exact algebraic orbit. No varying algebraic-number field is needed in the load-bearing argument.

2. Coherence is not an obstruction. From any infinite zero subsequence one passes to an infinite coherent subsequence.

3. Linear nondegeneracy is forced by the T18 finite-hit property. After grouping current-stratum monomials by cosets of the slower character subgroup, a moving-field linear dependence would clear denominators to a fixed nonzero Laurent relation on the T18 reduced torus. Such a relation cannot vanish on an infinite orbit subsequence.

4. The correct local "initial form" needs one refinement inside a fixed T22 profile. T22 already gives, for every positive current-profile character,
   [
   -log|	heta^gamma(q_n)|_2
   =
   
u_i(gamma)g_i(n)+o(g_i(n)),
   qquad
   
u_i(gamma)>0.
   ]
   This leading coefficient is used only to identify the analytically dominant finite cluster. It is **not** a new lattice gauge, not a replacement of exact ideal powers, and not a Rees/integral-closure filtration.

5. T28 finite jets imply local discreteness of those leading coefficients in the canonical support: below every fixed bound there are only finitely many relevant prefix terms. Therefore a nonzero lowest-profile component has a finite dominant cluster with one leading coefficient (
u_0), while the omitted same-profile terms have coefficient at least (
u_0+delta) for some fixed (delta>0), and higher-profile terms are smaller on a strictly faster scale.

6. The dominant cluster is therefore a finite moving hyperplane
   [
   L_n(X)=sum_{j=1}^M a_j(n)X_j
   ]
   with
   [
   h(L_n)=o(g_i(n)),
   qquad
   h(x(n))=Theta(g_i(n)),
   ]
   and
   [
   lambda_{L_n,v_2}(x(n))
   ge
   delta' h(x(n))+o(h(x(n)))
   ]
   for some (delta'>0).

7. Add the (M) coordinate hyperplanes. Because the current-stratum monomial coordinates are (S)-units, their proximity sum contributes the exact projective baseline
   [
   M h(x(n))+O(1).
   ]
   The moving hyperplane contributes the additional positive proportion above. Ru–Vojta gives at most
   [
   (M+arepsilon)h(x(n))+O(1).
   ]
   Taking (arepsilon<delta') is a contradiction unless the dominant initial form vanishes identically.

This proves the canonical stratumwise moving-target zero theorem:

[
oxed{
E(q_n)=0	ext{ on an infinite subsequence}
Longrightarrow
	ext{the lowest surviving canonical multiscale initial form is identically zero}.
}
]

The argument is synchronized: every stratum uses the same exact T18 orbit index (n). Repeating through the finite profile flag gives

[
oxed{
E(q_n)=0	ext{ infinitely often}
Longrightarrow
E=0
}
]

for the T28 canonical finite-jet algebra modulo the already-known exact functional relations.

This closes the missing nonvanishing input in the T25/T27/T28 auxiliary-function proof. Relative Hilbert–Samuel Hermite–Padé multiplicity beats the finite Artin–Rees transport tax; the fastest live face supplies local decay and global height on the same (g_r)-scale; lower-face coefficient height is (o(g_r)); and T29 supplies eventual nonvanishing unless the auxiliary is already a functional relation.

Therefore the inherited T16/T17/T25/T27 relation-matrix argument now yields:

[
oxed{
Q(alpha,mathbf X)=P(mathbf X)
}
]

**literally on the original canonical variables for the complete genuinely aperiodic T22 multiscale class.**

No blowup or Rees-chart descent is needed. Exact powers (mathfrak p_i^P) remain primary throughout.

The completion-sign chain must therefore run immediately. Under a hypothetical positive-integer anchor, T21 supplies the strict ordinary-prefix gap and real convergence; append (1), port the exact algebraic functional identity to the real completion, reconstruct the positive scalar, and obtain
[
S^{(infty)}(q)+3N=0
]
against
[
S^{(infty)}(q)>0,qquad N>0.
]

Hence no genuinely aperiodic system in the complete T22 multiscale class has a positive-integer anchor.

Under the inherited T2 finite-alphabet anchoring hypotheses,

[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]

now holds through the complete T22 multiscale class, strictly beyond the principal-fast class closed at T27.

Positive rational noninteger values remain excluded only when ordinary real subcriticality is independently known. Negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. No scientific compute is justified.

---

## 2. Authority and closed inherited state

The exact T28 commit
[
	exttt{257fc07a02a437cb198fd98fa254b031d61d2f6a}
]
was verified at session start. The named T28 branch exists. Comparison with `main` showed divergent histories rather than T28 already merged into `main`. T29 therefore branched from the exact T28 tip.

T20–T28 are treated as closed. In particular T29 does not redo:

- the T18 dense reduced torus orbit and finite-hit property;
- T20 exact variable-length scalar transport;
- T21 strict positive-integer real prefix gap and expanding support grading;
- T22 intrinsic finite positive growth profiles and exact height/local-contraction asymptotics;
- T23 slowest-face elimination;
- T25 relative Hermite–Padé architecture;
- T26 aperiodicity (Rightarrow) positive relative transcendence;
- T27 finite canonical inverse-transport tax and exact specialization normalization;
- T28 face-prime local rings, finite canonical jets, Hilbert–Samuel multiplicity, torsion-free local modules, and Artin–Rees transport tax.

No scientific computation was performed.

---

## 3. Published moving-target theorem actually used

Let (K) be a number field and (S) a finite set of places. Ru–Vojta's theorem concerns moving hyperplanes
[
H_1(n),ldots,H_q(n)subsetmathbf P^N_K
]
and points
[
x(n)inmathbf P^N(K).
]

The hypotheses relevant here are:

1. general position of the selected moving hyperplanes;
2. on every infinite coherent subsequence, linear independence of the point coordinates over the moving coefficient field;
3. small target height:
   [
   h(H_j(n))=o(h(x(n))).
   ]

The conclusion is the moving-target Subspace inequality with coefficient
[
N+1+arepsilon.
]

The stronger variant permits placewise maxima over general-position subsets, but T29 does not need that extra flexibility after deleting identically zero coefficients from the moving hyperplane.

### 3.1 Coherent subsequences exist

The standard moving-target coherence lemma says every infinite index set contains an infinite coherent subset for a finite family of moving targets.

Thus an assumed infinite zero subsequence can always be refined to an infinite coherent one.

Coherence is therefore **proved available**, not postulated.

### 3.2 Why moving hypersurface variants are not needed

Every T29 initial form is finite after the canonical-jet reduction. Put its finitely many current-stratum monomials into projective coordinates. The initial form becomes a moving **linear** hyperplane.

Hence Ru–Vojta's original moving-hyperplane theorem is already the exact theorem needed. Later moving-hypersurface variants are compatible background but add no load-bearing strength here.

---

## 4. Canonical finite jets lie over one fixed coefficient field

Fix a stratum (i).

T28 gives
[
mathcal O_i=K[Gamma_Y]_{I_{>i}},
qquad
mathfrak p_i=I_{>i}mathcal O_i,
]
and
[
k_i=mathcal O_i/mathfrak p_i
=
operatorname{Frac}K[Gamma_{le i}].
]

For every fixed (P), the quotient
[
mathcal O_i/mathfrak p_i^P
]
has finite length over (k_i).

Choose any finite (k_i)-basis adapted to the powers
[
mathfrak p_i^a/mathfrak p_i^{a+1},
qquad
0le a<P.
]

A canonical state jet has only finitely many prefix terms, so its coordinates in this basis are finite sums of slower monomials with algebraic constants. Thus they are elements of (k_i), not values in an uncontrolled sequence of algebraic extensions.

Evaluating a fixed
[
ain k_i
]
on the exact slower orbit gives
[
a(q_n)in K'
]
for one fixed number field (K') containing the finitely many algebraic translation constants.

The height estimate for a fixed rational function gives
[
h(a(q_n))
=
O(g_i(n))
]
when (a) lives on the (i)-th slower face.

At the next profile,
[
g_i(n)=o(g_{i+1}(n)).
]

Therefore every moving hyperplane arising from a fixed canonical jet satisfies
[
oxed{
h(H(n))=o(h(x(n))).
}
]

### Boundary of the statement

T29 does **not** claim a new theorem for arbitrary algebraic-cover-valued moving coefficients whose specializations range through unbounded number fields. Such an extension is unnecessary for the T28 Hermite–Padé auxiliaries, whose canonical jet coefficients lie in the slower rational function field itself.

---

## 5. Within-profile leading coefficient

A growth profile
[
g_i(n)=n^{e_i}ho_i^n
]
records the asymptotic scale but not the positive leading constant.

T22 already proves that for every positive reduced character (gamma) of exact profile (g_i),
[
-log|	heta^gamma(q_n)|_2
=

u_i(gamma)g_i(n)+o(g_i(n)),
qquad

u_i(gamma)>0.
	ag{1}
]

For positive characters of the same profile, the leading coefficient is additive:
[

u_i(gamma+eta)
=

u_i(gamma)+
u_i(eta).
	ag{2}
]

Multiplication by a strictly slower character changes (1) only by
[
o(g_i(n)),
]
so (
u_i) is well-defined on the current-profile transverse monomial modulo slower factors.

This (
u_i) is used only to identify the analytically dominant terms in a finite canonical jet.

It does **not** replace:

- (I_{>i}^P) by an integral closure;
- the canonical lattice by a slope-normalized lattice;
- the exact semigroup by a non-unimodular gauge;
- the face-prime filtration by a Rees valuation.

Exact ideal powers remain the algebraic filtration used by Hermite–Padé and Artin–Rees.

---

## 6. Local discreteness of the canonical support

Fix a live transition from the slower face (Gamma_{le i-1}) to profile (g_i).

There are finitely many reduced letter generators. Among those with profile at least (g_i), let
[

u_{min}>0
]
be the minimum positive current-profile leading coefficient.

A prefix monomial of transverse face-prime order (a) has current-profile leading coefficient at least
[
a
u_{min}
]
unless it already lies on a faster profile.

Therefore every bound
[

u_i(gamma)le B
]
forces a bounded transverse order.

T28 then supplies the decisive finiteness: for each bounded transverse order, only finitely many canonical prefix terms occur in a fixed state jet.

Hence:

[
oxed{
	ext{for every }B,	ext{ only finitely many canonical current-profile terms satisfy }

u_i(gamma)le B.
}
	ag{3}
]

Thus the set of current-profile leading coefficients occurring in a canonical analytic expression is locally finite.

A nonzero current-profile component therefore has a smallest coefficient
[

u_0,
]
and there is a positive gap
[
Delta_
u>0
]
to the next occurring coefficient.

All terms of coefficient (
u_0) form a **finite dominant cluster**.

This is the exact finite object to which Ru–Vojta is applied.

---

## 7. Fixed monomial basis over the slower field

Write the dominant cluster as
[
F_i(x)
=
sum_{j=1}^M a_j(x_{m slow})	heta^{eta_j}(x),
	ag{4}
]
where the (a_j) are in the slower rational field.

If
[
eta_j-eta_k
]
belongs to the group generated by the slower face, then
[
	heta^{eta_j}
=
r_{jk}(x_{m slow})	heta^{eta_k}
]
for a slower rational character (r_{jk}).

Group such terms.

After this compression the exponents
[
eta_1,ldots,eta_M
]
lie in distinct cosets modulo the slower character subgroup.

Consequently the monomials are linearly independent over the slower rational field inside the function field of the reduced torus.

This is the canonical fixed monomial basis required by the moving-target theorem.

---

## 8. Theorem T29.1 — algebraic nondegeneracy over the moving coefficient field

Let (J) be any infinite coherent subset of the synchronized T18 orbit indices for the cluster (4).

Put
[
x(n)
=
[
	heta^{eta_1}(q_n):
cdots:
	heta^{eta_M}(q_n)
].
]

Let (R_{J,H}) be the Ru–Vojta moving coefficient field generated by ratios of the
[
a_j(q_n).
]

Then the coordinates of (x(n)) are linearly independent over (R_{J,H}).

### Proof

Assume
[
sum_j c_j(n)	heta^{eta_j}(q_n)=0
]
eventually on (J), with (c_jin R_{J,H}), not all zero.

Every generator of (R_{J,H}) is the evaluation sequence of a fixed slower rational function. Therefore, after field operations and clearing denominators, the relation becomes
[
sum_j b_j(x_{m slow})	heta^{eta_j}(x)=0
	ag{5}
]
on infinitely many exact T18 orbit points, with fixed slower rational functions (b_j).

Clear their fixed denominators. Equation (5) becomes a fixed Laurent polynomial relation on the T18 reduced torus.

Because the (eta_j) occupy distinct slower cosets, that Laurent polynomial is not the zero function.

T18 says every proper algebraic subvariety meets the chosen reduced arithmetic-progression orbit only finitely often.

Contradiction.

Therefore no such moving-field linear dependence exists. QED.

This is stronger than merely saying "the target is nondegenerate": every infinite subsequence has the required nondegeneracy after coherent refinement.

---

## 9. General position

After deleting coefficients that are identically zero as slower rational functions, T18 finite-hit implies every remaining
[
a_j(q_n)
]
is nonzero for all but finitely many synchronized orbit points.

Use the (M) coordinate hyperplanes
[
X_j=0
]
and the moving hyperplane
[
H(n):quad
sum_j a_j(q_n)X_j=0.
]

In
[
mathbf P^{M-1},
]
these (M+1) hyperplanes are in general position whenever every moving coefficient is nonzero:

- all (M) coordinate hyperplanes have empty common intersection;
- (H(n)) together with any (M-1) coordinate hyperplanes meets the remaining coordinate point, and that point is not on (H(n)) because its coefficient is nonzero.

Thus Ru–Vojta's general-position hypothesis is satisfied eventually.

Uniform degree is (1).

---

## 10. Small value gives a positive projective proximity gap

All normalized monomial coordinates
[
	heta^{eta_j}(q_n)
]
are (S)-units for one fixed finite (S) containing the 2-adic and Archimedean places.

All (eta_j) are in the same profile (g_i) and the same minimal leading-coefficient cluster (
u_0). Hence
[
logmax_j|	heta^{eta_j}(q_n)|_2
=
-
u_0g_i(n)+o(g_i(n)).
	ag{6}
]

The omitted same-profile terms have leading coefficient at least
[

u_0+Delta_
u,
]
while every higher-profile term is smaller than
[
exp(-B g_i(n))
]
for every fixed (B).

If the full analytic expression vanishes at (q_n), (4) therefore satisfies
[
|F_i(q_n)|_2
le
expleft(
-(
u_0+Delta_
u)g_i(n)+o(g_i(n))
ight).
	ag{7}
]

Normalize the moving hyperplane by one nonzero coefficient, so its local coefficient norm is at least (1). The exact Weil function then gives
[
lambda_{H(n),2}(x(n))
ge
Delta_
u g_i(n)+o(g_i(n)).
	ag{8}
]

Because the finite current-profile coordinate set has
[
h(x(n))=Theta(g_i(n)),
]
there exists
[
delta>0
]
such that
[
oxed{
lambda_{H(n),2}(x(n))
ge
delta h(x(n))
}
	ag{9}
]
for all sufficiently large (n) in the zero subsequence.

This is the exact small-value-to-projective-proximity conversion.

It is stronger and safer than silently reading absolute smallness as exact vanishing.

---

## 11. Coordinate hyperplane baseline

For the (M) coordinate hyperplanes (H_1,ldots,H_M), the (S)-unit product formula gives
[
rac1{[K:mathbf Q]}
sum_{vin S}
sum_{j=1}^M
lambda_{H_j,v}(x(n))
=
M h(x(n))+O(1).
	ag{10}
]

At the nonarchimedean places the normalized Weil functions are nonnegative. At Archimedean places the moving-hyperplane contribution is bounded below by a constant depending only on (M).

Adding (9) to (10) yields
[
rac1{[K:mathbf Q]}
sum_{vin S}
left(
sum_{j=1}^Mlambda_{H_j,v}(x(n))
+
lambda_{H(n),v}(x(n))
ight)
ge
(M+delta/2)h(x(n))
]
for all sufficiently large (n).

Ru–Vojta, with projective dimension
[
M-1,
]
gives for every (arepsilon>0)
[
le
(M+arepsilon)h(x(n))+O(1)
]
outside finitely many indices.

Choose
[
0<arepsilon<delta/2.
]

Contradiction.

Therefore the dominant cluster cannot be nonzero.

---

## 12. Theorem T29.2 — canonical stratumwise moving-target zero theorem

Let (E) be a canonical analytic expression of the class used in the T28 lifting construction: it is generated by the canonical state functions and fixed algebraic/rational toric coefficient functions, and every required face-prime jet is the finite canonical jet of T28.

Suppose
[
E(q_n)=0
]
on an infinite synchronized orbit subsequence.

Then the lowest surviving growth-profile component of (E) vanishes identically modulo the exact functional relation ideal.

### Proof

For the slowest profile, T23 already supplies slowest-face elimination.

At a later profile (g_i), all lower profiles have already been removed identically.

Use Sections 5–6 to choose the finite dominant current-profile cluster of smallest 2-adic leading coefficient.

T28 makes that cluster algebraic over the slower rational field and finite.

Sections 7–9 verify fixed monomial basis, coherence, general position and moving-field linear nondegeneracy.

Sections 10–11 convert the exact zero equation into a Ru–Vojta contradiction unless the cluster vanishes identically.

Remove the identically vanishing cluster and repeat through the locally finite leading-coefficient support.

If every finite cluster vanishes, uniqueness/separatedness of the canonical toric analytic expansion makes the whole current-profile component zero.

QED.

No asynchronous orbit index is introduced.

---

## 13. Corollary T29.3 — full synchronized finite-flag zero theorem

There are only finitely many T22 positive growth profiles
[
g_1<cdots<g_r.
]

Apply Theorem T29.2 successively at the same exact orbit index.

If a canonical analytic expression vanishes on an infinite orbit subsequence, every profile component vanishes identically.

Hence
[
oxed{
E(q_n)=0	ext{ infinitely often}
Longrightarrow
E=0
}
]
in the canonical analytic algebra modulo the exact functional relation ideal.

Equivalently, every nonzero canonical expression in the T28 auxiliary class has only finitely many zeros on the synchronized T18 reduced orbit.

This is the nonprincipal analogue of the dense-orbit nonvanishing input that was previously available only in the balanced/principal settings.

---

## 14. Interface with relative Hermite–Padé and Artin–Rees

T29 does not redo T28's Hilbert–Samuel count.

Fix (D_X).

At a face prime of height (c_i), T28 gives
[
rac{P_{m rel,i}}{D_f}
gtrsim
h(D_X)^{1/c_i}-1.
]

Genuine aperiodicity gives
[
h(D_X)	oinfty.
]

T28 also gives the degree-(D_X) inverse-transport loss
[
D_XC_{m AR}rac{a_i^n-1}{a_i-1}.
]

Thus the parameter hierarchy is:

1. choose (D_X) so the relative multiplicity ratio dominates the fixed Liouville constants and the Artin–Rees threshold;
2. choose (D_f) and the corresponding (P);
3. transport on the original canonical local relation module, paying the finite geometric Artin–Rees tax;
4. evaluate at the same synchronized orbit time (n).

At the fastest live face:

- exact local decay is on the (g_r(n))-scale;
- global point height is on the same (g_r(n))-scale;
- residue-field coefficient height is
  [
  O(g_{r-1}(n))=o(g_r(n)).
  ]

Hence the T22 fast/slow mismatch is gone.

Now there are two cases.

### Case 1 — infinitely many zero evaluations

T29.3 makes the auxiliary a genuine functional relation.

### Case 2 — not infinitely many zero evaluations

T29.3 gives eventual nonvanishing. The inherited local upper bound and global Liouville lower bound then contradict each other once the relative multiplicity parameter has been chosen above the T28 transport and height constants.

Therefore the auxiliary must lie in the exact functional relation ideal.

This is precisely the missing T28 interface.

---

## 15. Theorem T29.4 — complete T22 nonprincipal exact relation lifting

Assume a T18-reduced T22 multiscale system is genuinely aperiodic.

Then every prescribed homogeneous algebraic value relation
[
P(mathbf G(alpha))=0
]
in the chosen nonarchimedean completion lifts to an algebraic functional relation
[
Q(x,mathbf G(x))=0
]
on the **original canonical variables** with
[
oxed{
Q(alpha,mathbf X)=P(mathbf X).
}
]

### Proof structure

- T28 supplies canonical finite jets and unbounded relative multiplicity at the fastest face.
- T28 supplies finite Artin–Rees inverse-transport loss on the original relation module.
- T29.3 supplies eventual nonvanishing for every nonzero transported auxiliary.
- The fastest face has matched local/global (g_r)-scale and lower-order coefficient height.
- The inherited T16/T17 local upper estimate, product-formula Liouville lower estimate, algebraic relation-matrix construction and final normalization now run without the T22 obstruction.
- No new quotient of the scalar support and no non-unimodular gauge is used.
- The final normalization is the same exact normalization already audited in T16/T27; if an intermediate constant unit (uinoverline{mathbf Q}^{	imes}) occurs, replacing (widetilde Q) by (u^{-1}widetilde Q) preserves the functional identity and returns the specialization exactly to (P).

Thus the original prescribed polynomial survives literally.

QED.

---

## 16. Rees/blowup exact-descent audit

T29 does **not** need the blowup route.

Accordingly:

- no semilinear lift to a normalized blowup is used;
- no eventual single-chart theorem is required;
- no exceptional-coordinate height estimate is used;
- no overlap gluing theorem is required;
- no exceptional denominator is introduced;
- no relation is first constructed only upstairs.

All multiplicity remains in the exact powers
[
mathfrak p_i^P.
]

Rees valuations retain their T28 interpretation only:
[
finoverline{I^P}
]
is an integral-closure statement and is not substituted for
[
fin I^P.
]

Therefore:

[
oxed{
	ext{new Rees/blowup descent theorem: NOT NEEDED AND NOT CLAIMED.}
}
]

The exact descent is instead algebraic because the complete proof never leaves the original canonical relation module.

---

## 17. Completion-sign consequence

Assume for contradiction that a genuinely aperiodic system in the complete T22 multiscale class has a positive integer anchor
[
N>0.
]

Append the constant function (1) and use the exact anchor relation.

Theorem T29.4 gives a functional identity with the original specialization polynomial exactly preserved.

T21 gives
[
limsup_{n	oinfty}rac{A_n}{n}<log_2 3
]
under the positive-integer anchor hypothesis.

Hence the canonical scalar and state tails converge in the ordinary real completion at every actual algebraic tail point used by the reduced system.

Port the algebraic identity to the real completion and reconstruct the original scalar.

Then
[
S^{(infty)}(q)+3N=0.
]

But the canonical scalar is a convergent sum of positive real terms, so
[
S^{(infty)}(q)>0.
]

Contradiction.

Therefore:

[
oxed{
	ext{no genuinely aperiodic T22 multiscale system has a positive-integer anchor.}
}
]

---

## 18. Consequence for bounded canonical representatives

Under the inherited T2 finite-alphabet anchoring hypotheses,
[
R_m	ext{ bounded}
]
produces an ordinary positive-integer anchor.

T29 excludes such an anchor for every genuinely aperiodic system in the complete T22 class.

Hence:

[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]

through the complete T22 multiscale class.

This strictly extends the T27 principal-fast result.

---

## 19. Positive and negative rational values

The completion-sign contradiction above uses the T21 strict real prefix gap that follows from a **realized positive integer Collatz anchor**.

Therefore T29 does not promote a universal statement excluding every abstract
[
Hinmathbf Q_{>0}.
]

If ordinary real subcriticality
[
limsup A_n/n<log_2 3
]
is independently known for a T29-lifted system, the same exact functional identity excludes a positive rational value.

Without that independent real hypothesis, positive rational noninteger status is unchanged.

Negative rational values remain unexcluded and are not Collatz counterexamples.

---

## 20. Literature audit

### Ru–Vojta

Min Ru and Paul Vojta, **"Schmidt's subspace theorem with moving targets,"** *Inventiones Mathematicae* 127 (1997), 51–65, DOI 10.1007/s002220050114.

Load-bearing facts:

- moving hyperplanes over a fixed number field;
- coherent subsequences and the moving coefficient field;
- linear nondegeneracy over that field;
- target-height hypothesis
  [
  h(H(n))=o(h(x(n)));
  ]
- projective Subspace bound
  [
  (N+1+arepsilon)h(x(n)).
  ]

Vojta's later exposition records these as Theorems 7.6 and 7.7.

### Moving hypersurfaces

Later moving-hypersurface theorems, including Giang Le and subsequent variants, preserve the same coherence/small-height/nondegeneracy architecture. They are not needed here because the canonical finite-jet initial form is linear after monomial-coordinate embedding.

### Adamczewski–Faverjon 2026

The published multivariate Mahler lifting architecture remains inherited and load-bearing for the algebraic relation-matrix and exact-normalization stages. It is not treated as the T29 moving-target theorem.

### Brechler 2026

Enzo Brechler, arXiv:2607.24877v1, **"Transcendence of multivariate Mahler functions and algebraic relations between their values."**

Rechecked on 2026-10-05:

- arXiv still lists version 1;
- current indexing located in the audit still classifies it as a preprint;
- no journal publication was located.

It remains non-load-bearing.

---

## 21. Required deliverable answers

- **Do the T28 finite algebraic jets satisfy a published moving-target theorem?**  
  **YES for the actual canonical jet class used by Hermite–Padé.** After finite basis expansion their moving coefficients are fixed slower rational functions evaluated in one number field; Ru–Vojta applies.

- **Coherence proved?**  
  **YES.** Every infinite zero subsequence admits an infinite coherent refinement.

- **Algebraic/linear nondegeneracy proved?**  
  **YES.** After slower-coset compression, any moving-field dependence would give a fixed Laurent relation with infinitely many T18 orbit hits.

- **Small value forces exact vanishing of the next-stratum initial form?**  
  **YES for the canonical class.** The within-profile 2-adic leading coefficient produces a finite dominant cluster and a positive projective proximity gap.

- **Does induction through all growth strata work at one synchronized orbit time?**  
  **YES.**

- **New Rees/blowup descent theorem?**  
  **NO; unnecessary.**

- **Do local chart relations glue and descend?**  
  **NOT USED.** No chartwise relation is constructed.

- **Are exact powers retained rather than integral closures?**  
  **YES.**

- **Does relative Hermite–Padé / Artin–Rees plug into the zero theorem?**  
  **YES.**

- **New exact relation-lifting theorem obtained?**  
  **YES — complete genuinely aperiodic T22 multiscale class.**

- **Does**
  [
  Q(alpha,mathbf X)=P(mathbf X)
  ]
  **survive literally?**  
  **YES.**

- **Completion-sign contradiction applies?**  
  **YES for positive-integer anchors.**

- **New positive-integer anchor class excluded?**  
  **YES — the remaining genuinely aperiodic nonprincipal T22 multiscale class.**

- **Does**
  [
  R_m	ext{ bounded}Longrightarrow	ext{eventual periodicity}
  ]
  **extend beyond principal-fast?**  
  **YES — through the complete T22 multiscale class under the inherited T2 anchoring hypotheses.**

- **Positive rational noninteger values?**  
  **UNCHANGED in general; excluded when independent real subcriticality is known.**

- **Negative rational values?**  
  **UNCHANGED / UNEXCLUDED.**

- **Explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample found?**  
  **NONE.**

- **Scientific compute justified?**  
  **NO.**

---

## 22. Permanent T29 lessons

### T29-L1 — canonical "algebraic moving coefficients" are fixed-field rational targets after jet expansion

For the actual T28 auxiliaries, no varying-number-field theorem is required.

### T29-L2 — coherence is cheap; nondegeneracy is the substantive hypothesis

Coherence comes from the standard extraction lemma. T18 finite-hit geometry proves the needed nondegeneracy.

### T29-L3 — exact ideal order and analytic dominance are different but compatible

The algebraic proof keeps exact powers (mathfrak p_i^P). The local leading coefficient (
u_i) only identifies the analytically dominant finite cluster inside those exact jets.

Do not replace one by the other.

### T29-L4 — coordinate hyperplanes supply the missing baseline

For (S)-unit monomial coordinates, the coordinate-hyperplane proximity sum is exactly the (M h(x)) baseline. A super-small moving linear form then contributes a strict positive excess, which is exactly what Ru–Vojta forbids.

### T29-L5 — the nonprincipal obstruction is removed without a blowup

No exceptional chart, integral closure, or gluing theorem is needed.

### T29-L6 — the full T22 multiscale class is now exact-lifting closed

The remaining single-morphism boundary lies outside T21's expanding nonerasing hypothesis, not inside unequal-growth toric lifting.

---

## 23. Next surviving recursive class

T21–T29 close the expanding nonerasing pure-morphic class in scope, including reducible systems with arbitrary finite T22 multiscale growth flags.

The first surviving **single-morphism** class is therefore the non-expanding / erasing boundary: morphic presentations for which the exact fixed-point dynamics cannot yet be placed in the T21 expanding nonerasing framework without proving that the normalization preserves the valuation word, exact prefix cylinders, and canonical scalar specialization.

More general finite-directive (S)-adic systems lie beyond that boundary.

---

## 24. Exact next theorem-sized obligation

**CDM4-T30 — NONEXPANDING / ERASING MORPHIC NORMALIZATION AND ANCHOR-OBSTRUCTION AUDIT.**

T30 is also the mandatory thirtieth-session progress/correction audit.

Primary theorem-sized target:

> Let a finite positive valuation word be generated by a pure morphic presentation outside the T21 expanding nonerasing hypotheses. Prove that every genuinely aperiodic such presentation can be transformed, with exact preservation of the valuation word and the T2 prefix-cylinder/anchor scalar, into an expanding nonerasing morphic system already covered by T29; or identify the first irreducible non-growing/erasing class for which such a normalization is impossible.

If a residual class survives, derive its exact prefix/scalar transport and determine whether a hypothetical positive integer anchor still forces the strict real prefix gap and a finite toric growth filtration sufficient for the T29 moving-target mechanism.

Do not reopen T22–T29 multiscale lifting.

No substitution enumeration, candidate trajectories, scientific starts, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

---

## 25. Classification

[
oxed{
	extbf{C — SYNCHRONIZED MOVING-TARGET ZERO THEOREM AND COMPLETE T22 MULTISCALE EXACT LIFTING PROVED.}
}
]

No Collatz counterexample is claimed.
