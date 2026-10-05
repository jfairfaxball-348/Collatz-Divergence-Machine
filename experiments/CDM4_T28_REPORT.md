# CDM4-T28 — NONPRINCIPAL MULTISCALE FILTRATION / ITERATED-STRATUM RELATIVE-LIFTING AUDIT

**Date:** 2026-10-05  
**Authoritative input branch:** `cdm4-t27-special-fibre-degeneration-audit`  
**Authoritative input commit:** `bfb01a45f3759569bac60f7df6a1c3cc30f3c2c7`  
**T27 merged into main at session start:** **NO** — `main` and T27 were verified divergent, so the exact T27 tip above was used as authority.  
**Working branch:** `cdm4-t28-nonprincipal-multiscale-audit`

Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. Finite-code search: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T28 does **not** prove universal nonprincipal multiscale exact relation lifting.

It does, however, remove two parts of the T23 obstruction that had previously appeared potentially special to a principal fast divisor.

Let
[
g_1<cdots<g_r
]
be the T22 positive reduced growth profiles and
[
I_{>i}
]
the corresponding high-growth monomial ideals in the reduced semigroup algebra
[
R=K[Gamma_Y].
]

T28 proves:

1. Every lower-growth semigroup
   [
   Gamma_{le i}
   ]
   is a face of (Gamma_Y). Consequently
   [
   oxed{I_{>i}	ext{ is a prime monomial face ideal}.}
   ]

2. The canonical local object at stratum (i) is therefore
   [
   oxed{mathcal O_i=R_{I_{>i}}.}
   ]
   Its maximal ideal is
   [
   mathfrak p_i=I_{>i}mathcal O_i
   ]
   and its residue field is
   [
   oxed{
   k_i=operatorname{Frac}K[Gamma_{le i}].
   }
   ]

3. Unlike the principal T25 DVR, (mathcal O_i) can have dimension
   [
   c_i=operatorname{ht}I_{>i}>1
   ]
   and need not be regular or a PID. Nevertheless
   [
   mathcal O_i/mathfrak p_i^P
   ]
   has finite length over (k_i), with Hilbert–Samuel growth
   [
   ell_i(P)
   =
   dim_{k_i}mathcal O_i/mathfrak p_i^P
   =
   rac{e_i}{c_i!}P^{c_i}+O(P^{c_i-1}).
   ]

4. The T25 canonical finite-jet phenomenon has a genuine nonprincipal analogue. For every fixed stratum (i), the (mathfrak p_i)-adic order of the canonical prefix monomials tends to infinity in every live higher-growth direction. Hence every fixed canonical jet
   [
   F_tmodmathfrak p_i^P
   ]
   contains only finitely many canonical prefix terms and is algebraic over the slower rational field (k_i). No orbit-dependent slow truncation is used.

5. Therefore the T23 moving-analytic-coefficient obstruction is **removed at finite jet level**. After fixing a finite multiscale jet, the coefficients on the next stratum are algebraic moving coefficients whose heights live on strictly slower growth scales.

6. For fixed state degree (D_X), let
   [
   h(D_X)
   ]
   be the dimension of the state-polynomial quotient over the full torus function field. Using coefficient sections of
   [
   mathcal O_i/mathfrak p_i^{D_f+1},
   ]
   relative Hermite–Padé counting gives a nonzero auxiliary with
   [
   operatorname{ord}_{mathfrak p_i}Ege P
   ]
   whenever
   [
   h(D_X)ell_i(D_f+1)>ell_i(P).
   ]
   Asymptotically,
   [
   oxed{
   rac{P}{D_f}
   gtrsim
   h(D_X)^{1/c_i}.
   }
   ]
   After subtracting the worst possible coefficient (mathfrak p_i)-order (D_f), the genuine cancellation excess is still
   [
   oxed{
   P_{m rel,i}
   gtrsim
   igl(h(D_X)^{1/c_i}-1igr)D_f.
   }
   ]
   Thus positive relative transcendence still gives an arbitrarily large multiplicity ratio; higher codimension weakens the exponent from (h) to (h^{1/c_i}) but does not kill the amplifier.

7. The canonical finite-degree relation quotient over (mathcal O_i) is torsion-free by the same domain-kernel saturation argument as T25:
   [
   0
e ainmathcal O_i,quad aQin J
   Longrightarrow Qin J.
   ]
   It need not be free when (c_i>1).

8. Freeness is not required for a finite transport bound. If (mathscr M) is such a finite torsion-free local relation module, one can choose a free lattice
   [
   mathscr Ncongmathcal O_i^s
   ]
   with
   [
   mathscr Nsubseteqmathscr Msubseteq d^{-1}mathscr N
   ]
   for one fixed (0
e dinmathcal O_i).
   Artin–Rees then gives a constant (C_{m AR}) such that division through this fixed denominator loses at most (C_{m AR}) powers of (mathfrak p_i).

9. After passing to a fixed macro-iterate for which the transverse ideal expands,
   [
   ho^{N*}mathfrak p_isubseteqmathfrak p_i^{a_i},
   qquad a_ige2,
   ]
   the cumulative inverse-transport loss through (n) macro-iterates is bounded by
   [
   oxed{
   D_XC_{m AR}
   rac{a_i^n-1}{a_i-1}.
   }
   ]
   Thus the single-DVR T27 geometric slope tax has a genuine higher-codimension adic analogue.

10. Rees valuations and normalized blowups give a useful divisorial interpretation, but they are **not** the exact primary object for T28. A finite Rees-valuation family controls integral closures of powers
    [
    overline{I^n},
    ]
    whereas exact lifting is formulated in the actual powers
    [
    I^n.
    ]
    Replacing the exact filtration by integral closure is not specialization-safe without an additional descent theorem.

The first remaining obstruction is therefore no longer “moving analytic coefficients” in the T23 sense, nor lack of multiplicity, nor lack of a finite transport tax.

It is:

[
oxed{
	extbf{a synchronized stratumwise algebraic-moving-target zero/nonvanishing theorem}
}
]

for the canonical finite-jet algebra, followed by exact descent to the original relation polynomial.

Existing moving-target Subspace Theorems are now structurally relevant because their essential small-height requirement is compatible with the new finite jets: coefficients from slower strata have height
[
o(g_{i+1}(n)).
]
However T28 does not verify the full coherence/nondegeneracy hypotheses needed to iterate those theorems through the complete face flag, and therefore does not promote a full zero theorem or exact relation lift.

A normalized blowup also does not by itself close this gap. Pullback to a blowup is birational on the torus, but a relation obtained only on one exceptional chart may contain exceptional denominators or chart ratios. T28 does not prove that such a local relation descends to the original canonical variables with
[
Q(alpha,mathbf X)=P(mathbf X)
]
literally.

Accordingly:

[
oxed{
	ext{new exact relation-lifting theorem: NOT YET OBTAINED.}
}
]

No new positive-integer anchor class is excluded in T28, and no new bounded-(R_m) periodicity class is promoted.

---

## 2. Authority and closed input state

T28 treats T20–T27 as closed unless an actual mathematical error is found.

The exact T27 tip was verified to be
[
oxed{
	exttt{bfb01a45f3759569bac60f7df6a1c3cc30f3c2c7}.
}
]

At session start `main` was not a descendant of that commit; the compare result was divergent. Therefore T27, not `main`, was used as authority.

No T20–T27 theorem was reopened.

---

## 3. Face-prime theorem for the T22 filtration

Fix (i<r).

Recall
[
Gamma_{le i}
=
{gammainGamma_Y:
operatorname{prof}(gamma)le g_i}
cup{0}.
]

For positive characters T22 proves
[
operatorname{prof}(gamma+eta)
=
max{operatorname{prof}(gamma),operatorname{prof}(eta)}.
]

Hence if
[
gamma+etainGamma_{le i},
]
then both
[
gamma,etainGamma_{le i}.
]

Thus (Gamma_{le i}) is a semigroup face.

The complement monomials generate
[
I_{>i}.
]

Since
[
R/I_{>i}
cong
K[Gamma_{le i}]
]
and a semigroup algebra of a cancellative affine semigroup is a domain,
[
oxed{
I_{>i}	ext{ is prime}.
}
]

This gives a canonical local object at every adjacent stratum, with no chosen generator and no non-unimodular lattice gauge.

---

## 4. The canonical relative local ring

Put
[
mathcal O_i=R_{I_{>i}},
qquad
mathfrak p_i=I_{>i}mathcal O_i.
]

Then (mathcal O_i) is Noetherian local and
[
mathfrak p_i
]
is its maximal ideal.

Modulo (mathfrak p_i), every nonzero element of (K[Gamma_{le i}]) becomes invertible after localization. Therefore
[
oxed{
mathcal O_i/mathfrak p_i
cong
operatorname{Frac}K[Gamma_{le i}].
}
]

This is the exact higher-codimension replacement for the T25 residue field
[
K(Gamma_{m slow}).
]

If
[
c_i=operatorname{ht}I_{>i},
]
then
[
dimmathcal O_i=c_i.
]

Only when (c_i=1) and the local ring is the T25 divisor ring does one recover a DVR.

---

## 5. Finite relative jets

Because (mathcal O_i) is Noetherian local,
[
mathcal O_i/mathfrak p_i^P
]
is Artinian for every fixed (P). Hence it has finite length over the residue field.

The Hilbert–Samuel theorem gives
[
ell_i(P)
=
operatorname{length}_{mathcal O_i}
(mathcal O_i/mathfrak p_i^P)
=
rac{e(mathfrak p_i,mathcal O_i)}{c_i!}P^{c_i}
+
O(P^{c_i-1}).
]

Thus the correct finite jet object exists without principalness.

This alone is not enough; the canonical state functions must have algebraic finite jets.

---

## 6. Canonical multiscale finite-jet theorem

Let
[
gamma_n=pi_Y(c(n))
]
be the canonical prefix character.

For a fixed face (i), let
[
mathcal A_i
=
{s:pi_Y(e_s)
otinGamma_{le i}}
]
be the letters contributing above the face.

Since
[
	heta^{gamma_n}
=
prod_{j<n}	heta^{pi_Y(e_{u_j})},
]
if (k_i(n)) is the number of indices (j<n) with (u_jinmathcal A_i), then
[
oxed{
	heta^{gamma_n}in I_{>i}^{,k_i(n)}.
}
]

In a live higher-growth stratum,
[
k_i(n)	oinfty.
]

The reason is structural. If only finitely many above-face letters occurred in the fixed word, then under repeated substitution the total above-face incidence generated from the finite exceptional prefix would remain bounded. The corresponding transverse incidence would have spectral radius at most (1). All remaining descendants lie in (Gamma_{le i}), so their exact reduced exponent recurrences have profile at most (g_i). This contradicts the assumption that the exceptional letter represents a strictly higher T22 profile, all of whose live exponential radii exceed (1).

Consequently
[
operatorname{ord}_{mathfrak p_i}	heta^{gamma_n}	oinfty.
]

For the canonical state function
[
F_t
=
sum_{n:u_n=t}
a_n	heta^{gamma_n},
]
only finitely many terms survive modulo (mathfrak p_i^P). Hence
[
oxed{
F_tmodmathfrak p_i^P
	ext{ is a finite algebraic jet over }
k_i.
}
]

This is the genuine nonprincipal analogue of T25's theorem
[
[m^j]F_tin K[Gamma_{m slow}].
]

It is stronger than an orbit-dependent approximation: the jet is fixed algebraic data before orbit time tends to infinity.

---

## 7. What happens to the T23 moving analytic coefficients

T23 stopped after
[
f=sum_jm_jf_j
]
because the coefficients
[
f_j(q_n^{m slow})
]
were moving analytic values.

T28 changes the canonical auxiliary situation.

For every fixed multiscale jet, the coefficients are obtained from finitely many canonical prefix terms and therefore lie in the rational/algebraic function field of the slower face.

At the next stratum their evaluations are algebraic numbers, and their heights grow only on the lower scale:
[
h(	ext{coefficient at time }n)
=
O(g_i(n))
=
o(g_{i+1}(n)).
]

Thus:
[
oxed{
	ext{the moving-analytic-coefficient obstruction is eliminated at fixed canonical jet order.}
}
]

It is replaced by a smaller problem: prove a coherent moving-target zero theorem for those algebraic small-height jets, synchronized at the same orbit time.

---

## 8. Relative Hilbert–Samuel Hermite–Padé multiplicity

Fix state-polynomial degree (D_X) and let
[
h=h(D_X)
]
be the dimension over the full torus function field of the state-polynomial quotient by exact functional relations.

Choose (h) independent representatives
[
g_1,ldots,g_h.
]

For coefficient complexity (D_f), choose a residue-field linear section of
[
mathcal O_i/mathfrak p_i^{D_f+1}.
]

There are
[
h,ell_i(D_f+1)
]
unknown scalar coefficients over (k_i).

Requiring
[
sum_jA_jg_j
equiv0
pmod{mathfrak p_i^P}
]
imposes at most
[
ell_i(P)
]
linear conditions over (k_i), because all relevant canonical jets are algebraic by Section 6.

Hence if
[
h,ell_i(D_f+1)>ell_i(P),
]
there is a nonzero solution.

Using Hilbert–Samuel asymptotics gives
[
P
le
(h^{1/c_i}+o(1))D_f.
]

A nonzero coefficient vector represented modulo
[
mathfrak p_i^{D_f+1}
]
has minimum coefficient order at most (D_f). Therefore, even without a principal common factor that can be divided out, the cancellation excess satisfies
[
oxed{
P_{m rel,i}
ge
P-D_f.
}
]

Thus
[
oxed{
rac{P_{m rel,i}}{D_f}
gtrsim
h(D_X)^{1/c_i}-1.
}
]

If
[
d_{m rel}>0,
]
then
[
h(D_X)	oinfty
]
polynomially, so the ratio can be made arbitrarily large.

The T26 argument
[
d_{m rel}=0Longrightarrow	ext{eventual periodicity}
]
uses only algebraicity of the canonical state field over the torus rational function field, the positive T21 grading, and the canonical support specialization. It is not essentially principal. Therefore genuine aperiodicity again forces
[
oxed{d_{m rel}>0.}
]

So higher codimension weakens the multiplicity exponent but does not remove the resource.

---

## 9. Canonical local relation modules

Let (J) be the exact functional relation ideal and fix (D_X).

Contract the finite-degree relation module to (mathcal O_i[mathbf X]).

If
[
0
e ainmathcal O_i,
qquad
aQin J,
]
then
[
a,Q(mathbf G)=0
]
in the analytic target domain. Hence
[
Q(mathbf G)=0
]
and
[
Qin J.
]

Therefore the finite-degree quotient is torsion-free over (mathcal O_i).

Unlike over the T25 DVR, torsion-free does not imply free when (c_i>1).

But if (mathscr M) is a finite torsion-free (mathcal O_i)-module of rank (s), choose (s) elements giving a basis after tensoring with the fraction field. Their span is a free lattice
[
mathscr Ncongmathcal O_i^s
]
with
[
mathscr Nsubseteqmathscr M.
]

The quotient (mathscr M/mathscr N) is finite torsion, so one fixed nonzero
[
dinmathcal O_i
]
annihilates it:
[
dmathscr Msubseteqmathscr N.
]

Thus
[
oxed{
mathscr N
subseteq
mathscr M
subseteq
d^{-1}mathscr N.
}
]

This is the correct higher-dimensional substitute for choosing a DVR basis.

---

## 10. Artin–Rees transport tax

Apply Artin–Rees to the inclusion
[
dmathscr Msubseteqmathscr N
]
with respect to (mathfrak p_i).

There is a constant (C_{m AR}) such that, for sufficiently large (n),
[
mathfrak p_i^nmathscr Ncap dmathscr M
subseteq
d,mathfrak p_i^{n-C_{m AR}}mathscr M.
]

Hence whenever inverse transport introduces the fixed denominator (d), it can lose at most (C_{m AR}) units of (mathfrak p_i)-adic order.

For state-polynomial degree (D_X), the loss is at most
[
D_XC_{m AR}
]
per inverse macro-step.

For the live transverse stratum, after replacing the map by one fixed iterate if necessary, finite generation and growth of every above-face generator give
[
ho^{N*}mathfrak p_i
subseteq
mathfrak p_i^{a_i},
qquad
a_ige2.
]

Therefore (n) inverse macro-steps cost at most
[
oxed{
D_XC_{m AR}
rac{a_i^n-1}{a_i-1}.
}
]

An initial multiplicity (P) retains at least
[
a_i^n
left(
P-rac{D_XC_{m AR}}{a_i-1}
ight)
+
rac{D_XC_{m AR}}{a_i-1}.
]

Thus the nonprincipal local module has the same qualitative finite-threshold structure as T27.

No non-unimodular gauge is used.

---

## 11. Rees valuations and normalized blowups

For a Noetherian ideal, the normalized blowup has finitely many exceptional divisors and hence finitely many Rees valuations. For monomial ideals these are toric divisorial valuations.

They satisfy the classical valuation description of integral closures of ideal powers.

This is useful for:

- interpreting asymptotic transverse slopes;
- recording exceptional divisors;
- bounding integral-closure orders;
- comparing local monomial charts.

It is not enough for exact T28 lifting.

The reason is exact:
[
{v_j(f)ge n,v_j(I) orall j}
]
characterizes
[
finoverline{I^n},
]
not necessarily
[
fin I^n.
]

The T25/T27 multiplicity and specialization argument is formulated in the exact relation lattice and exact ideal powers.

Therefore:
[
oxed{
	ext{Rees valuations are an interpretation layer, not a replacement for the exact adic filtration.}
}
]

---

## 12. Why the fastest face is the correct first local layer

Let
[
mathfrak p_{m fast}
=
I_{>r-1}mathcal O_{r-1}.
]

Every generator in this maximal growth stratum has the same T22 profile (g_r).

Therefore:

- evaluation of (mathfrak p_{m fast}^P) gives local decay on scale (P,g_r(n));
- the global point height is also (Theta(g_r(n)));
- coefficient data from the residue field
  [
  operatorname{Frac}K[Gamma_{le r-1}]
  ]
  have lower height (o(g_r(n))).

Thus the original T22 scale mismatch disappears at the top relative layer.

One may then attempt to descend recursively through
[
I_{>r-2},I_{>r-3},ldots,I_{>1}.
]

All stages use the same synchronized orbit time (n). No asynchronous iterate counts are introduced.

---

## 13. The remaining zero/nonvanishing obstruction

T23's full analytic zero theorem is known only when
[
I_{>1}
]
is principal.

T28's finite jets show why the old reason for failure is no longer the right one for canonical auxiliaries: the next-face coefficients can be made algebraic with lower-scale height.

However a complete induction still needs a theorem of the following form.

### Required theorem T28-Z

Let (E) be a nonzero analytic expression generated by the canonical state functions and algebraic toric coefficients, with finite algebraic jets along every face prime.

If
[
E(q_n)=0
]
for infinitely many synchronized reduced orbit points, then the lowest surviving multiscale initial form must vanish identically; iterating over the finite face flag must force (E=0).

At the (i+1)-st step, the initial form is a finite algebraic moving target whose coefficient heights are
[
O(g_i(n))
=
o(g_{i+1}(n)).
]

This is exactly the small-height regime required by moving-target Subspace Theorem technology.

What T28 does **not** prove is the full package of:

- coherence of the moving coefficient family;
- required algebraic nondegeneracy on every infinite subsequence;
- passage from small value to exact vanishing of the initial form in the toric setting;
- compatibility of successive face reductions with the semilinear relation module;
- exact reconstruction of the original input relation after the induction.

This is now the first theorem-sized obstruction.

---

## 14. Blowup/descent audit

Blowing up (I_{>i}) principalizes its pullback ideal locally.

This does not by itself prove T28-Z.

On a chart one divides by an exceptional generator and introduces ratios of monomials. These ratios are regular on that chart but generally are not elements of the original positive semigroup algebra.

A functional relation proved only in such chart variables is not yet an original canonical relation.

Birational pullback preserves a relation already known globally, but the reverse direction requires descent.

T28 does not prove that an arbitrary locally constructed chart relation:

- is compatible on overlaps;
- has no exceptional denominator;
- descends through the normalized blowup;
- and recovers
  [
  Q(alpha,mathbf X)=P(mathbf X)
  ]
  literally.

Therefore:
[
oxed{
	ext{normalized blowup exact descent: OPEN.}
}
]

---

## 15. Exact-specialization status

No new universal nonprincipal lift is proved.

Therefore T28 does not weaken the specialization requirement.

The required conclusion remains
[
oxed{
Q(alpha,mathbf X)=P(mathbf X).
}
]

Statements only on:

- an exceptional divisor;
- an associated graded ring;
- a Rees chart;
- an integral closure of an ideal power;
- or a local blowup coordinate system

are not promoted.

---

## 16. Completion-sign status

The inherited T21/T19/T20 completion chain is ready as soon as T28-Z plus exact relation lifting is proved.

For a hypothetical positive integer anchor:

1. append (1);
2. use the T21 strict prefix gap;
3. obtain real convergence of the canonical scalar/state tails;
4. transport the exact lifted algebraic identity to the real completion;
5. reconstruct the canonical scalar;
6. obtain
   [
   S^{(infty)}(q)+3N=0
   ]
   against
   [
   S^{(infty)}(q)>0,quad N>0.
   ]

Because T28 does not finish exact lifting, this contradiction is **not newly applicable**.

---

## 17. Positive rational and negative rational status

### Positive integers

No new nonprincipal class is excluded in T28.

### Positive rational nonintegers

Unchanged. They are excluded only in classes where ordinary real subcriticality is independently available together with exact lifting.

### Negative rationals

Unchanged and unexcluded by the completion-sign argument.

They are not Collatz counterexamples.

---

## 18. T2 bounded-(R_m) consequence

The T27 theorem
[
R_m	ext{ bounded}Longrightarrow	ext{eventual periodicity}
]
remains proved throughout the complete principal-fast class.

T28 does not extend it to the complete nonprincipal multiscale class because T28-Z and exact descent remain open.

---

## 19. Literature checkpoint

### Rees valuations / normalized blowup

The classical Rees valuation theorem identifies integral closures of ideal powers through finitely many DVR valuations associated with the normalized blowup.

T28 uses this only as interpretation. Exact powers remain primary.

### Artin–Rees

The Artin–Rees lemma supplies the uniform finite loss needed when a finite torsion-free local module is sandwiched between a free lattice and one fixed denominator multiple.

This is the higher-dimensional replacement for reading pole loss directly from DVR elementary divisors.

### Moving targets

Ru–Vojta's moving-target Subspace Theorem and later moving-hypersurface variants require algebraic moving targets with coefficient height negligible compared with point height.

T23 failed this interface because analytic truncation to the next-scale precision had height
[
Omega(g_{i+1}(n)).
]

T28 finite jets change the situation:
[
h(	ext{jet coefficient})
=
O(g_i(n))
=
o(g_{i+1}(n)).
]

Thus moving-target theory is now hypothesis-shaped correctly at the height level, but T28 does not verify the remaining coherence/nondegeneracy and exact-descent hypotheses.

### Adamczewski–Faverjon 2026

Published and unchanged. It does not itself supply the nonprincipal stratumwise moving-target theorem above.

### Brechler 2026

Rechecked on 2026-10-05. arXiv:2607.24877 is still listed as a preprint; no journal publication was located. It remains non-load-bearing.

---

## 20. Required deliverable answers

### Does the T25 finite-jet theorem have a genuine nonprincipal multivaluation analogue?

**YES at fixed canonical jet order.** The face-prime local rings give finite Artinian transverse jets, and canonical prefix orders tend to infinity, so every fixed canonical jet is finite algebraic data over the slower rational field.

### Can canonical saturated relative lattices be constructed stratum by stratum?

**YES as finite torsion-free local modules.** They need not be free in codimension (>1), but each admits a finite free sandwich with one fixed denominator.

### Does a finite family of divisorial valuations replace the T25 DVR?

**NOT EXACTLY.** Rees valuations are finite and canonical for integral-closure asymptotics, but exact ideal powers and Artin–Rees local modules are the specialization-safe objects.

### Does semilinear transport admit a finite multiscale slope-tax bound?

**YES at each face prime**, after a fixed expanding macro-iterate, via free-sandwich denominator clearing plus Artin–Rees:
[
D_XC_{m AR}rac{a_i^n-1}{a_i-1}.
]

### Can iterated relative Hermite–Padé multiplicity dominate that tax?

**YES quantitatively at the local counting level.** Hilbert–Samuel multiplicity gives a ratio growing like
[
h(D_X)^{1/c_i}-1,
]
which is unbounded under genuine aperiodicity because (d_{m rel}>0).

### Are moving analytic coefficients eliminated?

**YES at every fixed canonical finite jet.** They become algebraic moving coefficients over slower rational fields with strictly lower height.

### Does a Rees/blowup construction preserve the original specialization polynomial?

**PULLBACK YES; LOCAL-TO-GLOBAL DESCENT NOT PROVED.** No chartwise relation is promoted without exact descent.

### Is a new exact relation-lifting theorem obtained?

**NO.**

### Does
[
Q(alpha,mathbf X)=P(mathbf X)
]
survive literally?

No new lift is proved, so no new specialization statement is claimed. The equality remains mandatory.

### Does the completion-sign contradiction apply to a new class?

**NO.**

### Is any new positive-integer anchor class excluded?

**NO.**

### Is
[
R_m	ext{ bounded}Rightarrow	ext{eventual periodicity}
]
extended beyond the principal-fast class?

**NO.**

### Positive rational noninteger status

Unchanged: excluded only with independent real subcriticality plus exact lifting.

### Negative rational status

Unchanged: not excluded.

### Explicit anchored aperiodic word / candidate / unbounded orbit / counterexample

**NONE.**

### Scientific compute justified?

**NO.**

---

## 21. Permanent T28 lessons

### T28-L1 — the T22 filtration is a flag of prime faces

The high-growth ideals are not arbitrary monomial ideals:
[
oxed{
I_{>i}	ext{ is the prime ideal complementary to the face }Gamma_{le i}.
}
]

### T28-L2 — principalness is not required for finite canonical jets

The finite-jet theorem is fundamentally a statement about growth of transverse prefix order, not about existence of one uniformizer.

### T28-L3 — higher codimension changes Hilbert counting, not the existence of a multiplicity amplifier

A height-(c) local ring changes
[
h
]
to approximately
[
h^{1/c}
]
in the multiplicity ratio. Positive relative transcendence still makes the ratio unbounded.

### T28-L4 — freeness is convenient, not essential

Torsion-free local relation modules can be sandwiched by a free lattice with one fixed denominator. Artin–Rees converts that denominator into a finite adic loss.

### T28-L5 — Rees valuations see integral closure, not exact powers

Do not replace
[
I^P
]
by
[
overline{I^P}
]
without an explicit exact-descent theorem.

### T28-L6 — the T23 moving analytic obstruction has moved

At finite canonical jet order the coefficients are algebraic and lower-height. The live obstruction is now the synchronized algebraic moving-target zero/nonvanishing theorem plus exact descent.

### T28-L7 — one synchronized orbit remains absolute

Every jet, height comparison, moving target, transport tax, and future induction uses the same exact orbit time (n).

---

## 22. Exact next theorem-sized obligation

**CDM4-T29 — CANONICAL STRATUMWISE ALGEBRAIC-MOVING-TARGET ZERO THEOREM / EXACT-DESCENT AUDIT.**

Treat T28 as closed infrastructure:

- (I_{>i}) are canonical prime face ideals;
- (mathcal O_i=R_{I_{>i}}) are the canonical relative local rings;
- fixed canonical (mathfrak p_i)-jets are finite algebraic data over slower rational fields;
- moving analytic coefficients are eliminated at fixed jet order;
- Hilbert–Samuel relative Hermite–Padé multiplicity is unbounded under genuine aperiodicity;
- finite torsion-free local relation modules admit free sandwiches;
- Artin–Rees gives a finite geometric semilinear transport tax;
- Rees valuations control only integral-closure asymptotics and are not a substitute for exact powers;
- no asynchronous orbit times are permitted.

The single next obligation is:

> Prove that the finite algebraic moving initial forms produced by the canonical face-prime jets satisfy a synchronized moving-target zero theorem along the T18 dense orbit, with coefficient height (o) of the next-stratum point height, and iterate that theorem through the complete finite growth flag. Then prove that the resulting relation descends to the original canonical relation module with
> [
> Q(alpha,mathbf X)=P(mathbf X)
> ]
> literally.

A successful T29 theorem would close the remaining nonprincipal multiscale exact-lifting obstruction and should immediately trigger the inherited completion-sign contradiction.

No scientific compute is authorized.

---

## 23. Classification

[
oxed{
	extbf{C — NEW CANONICAL MULTISCALE RELATIVE INFRASTRUCTURE PROVED; FULL EXACT LIFTING STILL OPEN.}
}
]
