# CDM4-T30 — NONEXPANDING / ERASING MORPHIC NORMALIZATION AND ANCHOR-OBSTRUCTION AUDIT

**Date:** 2026-10-05  
**Authoritative input branch:** `cdm4-t29-moving-target-zero-audit`  
**Authoritative input commit:** `32f37c1dc1185b26612633ca869127adb1bce198`  
**T29 merge status at entry:** **NOT MERGED INTO `main`**; `main` diverged from the T29 line, so the exact T29 tip above was used as authority.  
**Working branch:** `cdm4-t30-nonexpanding-erasing-morphic-normalization`  
**Session type:** theorem / literature / exact morphic-normalization audit; mandatory thirtieth-session progress/correction audit.

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite-code search or ranking: **NONE**  
CPU / GPU / cloud / distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T30 proves a **partial canonical morphic normalization theorem** and isolates a genuine word-level residual class.

The universal statement

[
	ext{every genuinely aperiodic pure-morphic positive valuation word}
Longrightarrow
	ext{an exact T21 expanding-nonerasing presentation}
]

is **false**.

The failure is not caused by erasing letters or mortal letters alone.

A classical Cobham normalization, in the constructive form audited in Charlier–Leroy–Rigo, gives for every morphic word an exact representation

[
oxed{
w=	au(sigma^omega(b))
}
]

where (sigma) is nonerasing and prolongable and (	au) is a coding. This is equality of the actual one-sided word, not equality merely of languages or subshifts. Therefore, at the observable valuation-word level:

- no shift is required;
- output index (n) is unchanged;
- letter order is unchanged;
- every ordinary prefix sum (A_n) is unchanged;
- every T2 exact valuation-prefix cylinder is unchanged;
- the canonical inverse-Collatz scalar is unchanged literally;
- the exact positive-integer anchoring condition is unchanged.

For a pure valuation word, the original valuation-state series are recovered exactly by grouping the normalized hidden-state series over the fibres of the coding. Thus the recursive state interface needed by the T16–T29 machinery is preserved by a fixed finite linear projection, even though the internal alphabet need not be identical.

Erasing and mortal-letter contamination are therefore **presentation artefacts**, not the first irreducible T30 obstruction.

The decisive boundary is whether the actual word is **substitutive in the growing sense** used by Durand: a coding of the fixed point of a morphism for which every letter grows.

Two broad classes are thereby closed.

1. If a nonerasing pure morphic presentation is non-growing but factors made only of non-growing letters have bounded length, Pansiot's theorem, in Durand's formulation, says that the fixed point is substitutive. Hence the actual word has an exact coding presentation by a growing substitution and falls into T21/T29.

2. Every uniformly recurrent morphic word is primitive substitutive by Durand. Hence every genuinely aperiodic uniformly recurrent morphic positive valuation word also falls into T21/T29, regardless of whether the presentation originally supplied to the project was erasing or non-growing.

For every word on this growing-normalizable side, the T29 closed theorem applies without redoing T22–T29. A hypothetical positive-integer anchor gives

[
limsup_{n	oinfty}rac{A_n}{n}
le log_2 3
]

by the universal T3 Collatz height bound. T21 gives algebraicity of the same ordinary-prefix limsup. Since (log_2 3) is transcendental, equality is impossible, so the gap is strict. The T20/T21 scalar-transport and real-completion chain then applies, and T29 excludes the positive-integer anchor.

Thus, under the inherited T2 finite-alphabet anchoring hypotheses,

[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]

extends beyond the presentation class stated in T29 to every actual valuation word admitting the exact growing-normalizable presentation described above.

The first genuine residual class is the **pushy bounded-letter class**.

Durand records Pansiot's trichotomy for a nonerasing endomorphism (eta) prolongable on (a). If (eta) is non-growing and the fixed point contains arbitrarily long factors consisting entirely of non-growing letters, then its factor complexity is

[
Theta(n^2).
]

By contrast a growing substitution fixed point, and therefore any coding of one, has complexity at most (O(nlog n)). Hence a quadratic-complexity pure morphic fixed point cannot be represented exactly as a coding of any growing substitution.

The canonical witness is

[
eta(1)=112,qquad eta(2)=2,
qquad
w=eta^omega(1),
]

the positive-valuation relabeling of Durand's example (0mapsto001, 1mapsto1).

Writing (W_j=eta^j(1)),

[
W_{j+1}=W_jW_j2.
]

Hence (W_j) ends in (2^j). The bounded letter (2) therefore occurs in arbitrarily long pure bounded-letter factors. Durand states that this fixed point is not substitutive: it cannot be defined by a growing endomorphism. Pansiot's theorem gives quadratic factor complexity.

This is a word-level obstruction. Changing the original morphic presentation, removing erasures, or inserting a coding cannot produce an exact T21 representation without changing the actual one-sided word.

The residual obstruction is therefore sharper than “polynomial growth”. The witness above has

[
|W_j|=2^{j+1}-1,
]

so the root prefix grows exponentially even though a reachable letter is bounded.

Genuinely polynomial-growth aperiodic examples also survive and necessarily carry a neutral/bounded direction. For example,

[
pi(2)=23,qquad pi(3)=31,qquad pi(1)=1
]

is prolongable on (2) and has

[
|pi^j(2)|=1+j+rac{j(j-1)}2.
]

Its fixed point contains increasing runs of the bounded letter (1). Such systems are outside T21 for the same structural reason: a finite nonerasing system in which every reachable letter grows cannot have polynomial root growth without a bounded terminal component.

The residual class creates two new theorem-level obstructions.

First, although T3 always gives the universal inequality

[
eta:=limsup A_n/nlelog_2 3
]

under a hypothetical aperiodic positive-integer anchor, T30 did **not** verify a theorem making (eta) algebraic for every pushy residual morphic word. Existing frequency results are insufficient: algebraicity of a letter frequency when the frequency exists does not by itself prove algebraicity of the weighted prefix limsup when frequencies may fail to exist. Thus the Gelfond–Schneider strictness step is not universal in the residual class.

Second, the T21 positive grading degenerates on bounded letters. For a bounded periodic direction (b), after period refinement the length-increment row has

[
d_b=0.
]

Therefore the inherited positive grading becomes only nonnegative. There is no uniform (kappa>1) support displacement on every canonical generator, and the complete T22 positive-profile filtration cannot simply be imported. Pushiness makes this defect unavoidable: arbitrarily long pieces of the actual output may live predominantly in the neutral direction.

Accordingly T29 does **not** apply unchanged to the quadratic pushy residual class even in examples where ordinary real subcriticality can be shown separately.

No earlier promoted theorem requires correction. T21 explicitly excluded bounded-letter and erasing presentations not reduced to its growing scope, and T29 inherited that boundary correctly.

No new scientific compute is justified.

**Classification: C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND.**

The exact next theorem-sized obligation is:

> **CDM4-T31 — PUSHY BOUNDED-LETTER RESUMMATION / ORDINARY-PREFIX LIMSUP / NEUTRAL-FACE AUDIT.**
>
> For genuinely aperiodic nonerasing pure-morphic positive valuation words with recurrent bounded letters and unbounded bounded-letter factors, derive an exact growing-skeleton/bounded-run prefix decomposition; determine whether (limsup A_n/n) has a finite algebraic description; resum the bounded periodic dynamics into exact rational/algebraic coefficient functions while preserving the original output index and Collatz scalar; and decide whether the neutral directions can be quotiented or resummed to recover a finite **positive** toric filtration suitable for T29. If not, prove the first exact neutral-face obstruction.

No scientific computation is authorized.

---

## 2. Authority and repository verification

The exact T29 commit

[
	exttt{32f37c1dc1185b26612633ca869127adb1bce198}
]

was verified against the branch

[
	exttt{cdm4-t29-moving-target-zero-audit}.
]

The branch and the supplied SHA were identical.

A direct comparison with `main` showed that `main` had **not** merged T29 and had diverged from the T29 line. Therefore T30 used the exact T29 tip as authority and did not import later divergent `main` changes.

Before mathematical work, the repository governance files and the historical reports required by `START_HERE.md` were audited, with special attention to T18 and T20–T29.

The following inherited facts are load-bearing here.

1. T2 anchoring depends only on the actual valuation prefix.
2. T3 gives the universal positive-anchor height inequality.
3. T20 gives exact variable-length prefix/scalar transport for a nonerasing presentation.
4. T21 gives algebraicity of the ordinary-prefix limsup for every reachable-all-growing nonerasing pure-morphic system.
5. T22–T29 close exact lifting and positive-anchor exclusion for the complete genuinely aperiodic T22 multiscale class.
6. T29 requires no reopening once a system is placed exactly inside the T21/T22 interface.

T30 therefore does not revisit multiscale lifting.

---

## 3. Definitions and exact interface

Let

[
w=w_0w_1w_2cdots
]

be the actual positive valuation word, with finite alphabet contained in (mathbb Z_{>0}), and define

[
A_n=sum_{0le j<n}w_j.
]

For the Collatz application, the observable object is this exact one-sided word.

A presentation change is **Collatz-exact** only if it preserves the sequence (w_n) at every index (n). Exact equality of languages, orbit closures, or subshifts is insufficient.

If

[
w=	au(z),qquad z=sigma^omega(b),
]

and (	au) is a coding, then

[
w_n=	au(z_n)
]

with no change of index. Put

[
v_sigma(c)=	au(c)inmathbb Z_{>0}.
]

Then

[
A_n
=
sum_{j<n}v_sigma(z_j)
]

literally.

The project therefore permits a hidden finite alphabet as long as the coding is one-letter-to-one-letter and the positive valuation of every hidden letter is its coded output.

A morphism is called **growing** in the Durand/Pansiot sense when every letter in the relevant alphabet satisfies

[
|sigma^n(c)|	oinfty.
]

This is the T21 “every reachable letter expanding” hypothesis after unreachable letters are removed.

A non-growing letter is **bounded** when its iterated image lengths remain bounded. For a nonerasing morphism, after passing to a finite power its bounded subsystem is eventually periodic.

A non-growing pure fixed point is called **pushy** here when it has arbitrarily long factors made entirely of bounded/non-growing letters. This is the Pansiot branch producing quadratic factor complexity.

---

## 4. Erasing and mortal letters can be normalized away exactly

### Theorem T30.1 — exact nonerasing coding normalization

Let (w) be any infinite morphic word. Then there exist

- a finite alphabet (B);
- a nonerasing morphism
  [
  sigma:B^*	o B^*
  ]
  prolongable on (b);
- a coding
  [
  	au:B	ooperatorname{alph}(w);
  ]

such that

[
oxed{
w=	au(sigma^omega(b))
}
]

as one-sided infinite words.

This is the classical Cobham result in the constructive form of Charlier–Leroy–Rigo.

The equality is literal. No shift occurs.

### Mortal-letter bookkeeping

Charlier–Leroy–Rigo first remove mortal letters and then convert the resulting nonerasing morphic image to a coding representation.

At an intermediate stage, deleting mortal letters can change preimage word lengths. Therefore T30 does **not** claim that naive deletion of mortal letters preserves the original presentation index.

The correct invariant is the final output equality

[
w=	au(sigma^omega(b)).
]

Because (	au) is a coding, the normalized index is again exactly the output index.

Thus:

[
oxed{
	ext{mortal letters are harmless for the Collatz observable word,}
}
]

but only after the complete exact coding normalization. “Delete mortal letters and keep the old index” is not an allowed shortcut.

### Growth is not repaired automatically

The same normalization does **not** imply that every normalized letter grows.

Charlier–Leroy–Rigo explicitly track growth types and do not turn a polynomial or bounded direction into an everywhere-growing one merely by eliminating erasures.

Therefore

[
	ext{erasure elimination}

otRightarrow
	ext{T21 normalization}.
]

This distinction is the first important T30 correction to a possible naive route.

---

## 5. Exact Collatz invariants under a coding normalization

Suppose

[
w=	au(sigma^omega(b))
]

with (	au) a coding and define (v_sigma(c)=	au(c)).

### 5.1 One-sided word and order

For every (n),

[
w_n=v_sigma(z_n),
qquad
z=sigma^omega(b).
]

Hence letter order and output position are identical.

### 5.2 Ordinary prefix sums

For every (n),

[
oxed{
A_n(w)
=
sum_{j<n}w_j
=
sum_{j<n}v_sigma(z_j).
}
]

No interpolation or reindexing occurs.

### 5.3 T2 exact cylinder

T2's exact cylinder at depth (m) is a deterministic function of

[
(w_0,ldots,w_{m-1})
]

and their cumulative sums.

Since the normalized coding gives exactly the same valuation prefix,

[
oxed{
R_m^{m normalized}=R_m^{m original}
}
]

for every (m), with the same modulus (2^{A_m+1}).

Thus the anchor carry sequence is literally unchanged.

### 5.4 Canonical inverse-Collatz scalar

The canonical scalar is

[
S(w)
=
sum_{nge0}rac{2^{A_n}}{3^n}
]

in the project normalization.

Because every (A_n) is unchanged,

[
oxed{
S_{m normalized}=S_{m original}
}
]

term by term in every completion in which it is evaluated.

### 5.5 Positive-integer anchoring

An ordinary positive integer anchor depends only on the exact valuation cylinders. Therefore

[
oxed{
w	ext{ has a positive-integer anchor}
iff
	au(sigma^omega(b))	ext{ has the same anchor}.
}
]

This is identity, not merely an implication.

### 5.6 Recursive state functions

Let (F_c^sigma) be the canonical state series associated with a hidden normalized letter (c).

For each original valuation symbol (r), define

[
F_r^{m out}
=
sum_{	au(c)=r}F_c^sigma.
]

Then (F_r^{m out}) is exactly the series obtained by selecting output positions carrying valuation (r).

Hence the original output-state functions survive as a fixed finite linear projection of the normalized state vector.

The hidden state basis can change, but no observable state support is deleted and the scalar

[
S=sum_cF_c^sigma
]

is unchanged.

This is the exact state-function preservation required for T29 reuse.

---

## 6. The growing-normalizable side

### 6.1 Pansiot non-pushy reduction

For a nonerasing endomorphism (eta) prolongable on (a), let

[
x=eta^omega(a).
]

Pansiot's theorem, in Durand's formulation, separates three cases.

1. (eta) is growing.
2. (eta) is non-growing, but factors consisting only of non-growing letters have bounded length.
3. Such bounded-letter factors have unbounded length.

In case 2, Durand records that (x) can be defined as a **substitutive sequence**: an exact coding of a fixed point of a growing substitution.

Therefore case 2 is not a new Collatz class after T30. It can be represented as

[
x=	au(sigma^omega(b))
]

with (sigma) growing and (	au) a coding.

For a positive valuation word, absorb (	au) into the positive valuation map on the hidden alphabet.

All T21 hypotheses then hold on the reachable hidden alphabet.

### 6.2 Uniform recurrence

Durand proves:

[
oxed{
	ext{uniformly recurrent morphic}
Longrightarrow
	ext{primitive substitutive}.
}
]

A primitive substitution is growing.

Therefore every genuinely aperiodic uniformly recurrent morphic positive valuation word has an exact growing coding presentation, regardless of whether the presentation originally supplied to the project was erasing, non-growing, or otherwise noncanonical.

This closes a large natural class beyond the literal T21 input syntax.

### 6.3 T29 reuse

For every genuinely aperiodic valuation word having such an exact growing presentation:

1. the actual word and all (A_n) are unchanged;
2. T21 gives
   [
   eta=limsup A_n/ninoverline{mathbb Q};
   ]
3. a hypothetical positive-integer anchor gives
   [
   etalelog_2 3
   ]
   by T3;
4. (log_2 3) is transcendental, so
   [
   oxed{eta<log_2 3};
   ]
5. T20/T21 gives ordinary real convergence at every canonical tail point;
6. the normalized growing system lies in the already closed T22 multiscale framework;
7. T29 gives exact relation lifting;
8. the completion-sign contradiction excludes the positive-integer anchor.

No part of T22–T29 is reproved.

Thus:

[
oxed{
	ext{genuinely aperiodic + exact growing-normalizable}
Longrightarrow
	ext{no positive-integer anchor}.
}
]

Under T2:

[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]

through this entire normalized class.

---

## 7. Route A fails globally: the pushy residual

Consider

[
eta(1)=112,
qquad
eta(2)=2.
]

It is nonerasing and prolongable on (1).

Let

[
W_j=eta^j(1).
]

Then

[
W_{j+1}=W_jW_j2.
]

By induction,

[
|W_j|=2^{j+1}-1,
]

and (W_j) ends in (2^j).

Thus the bounded letter (2) occurs in arbitrarily long all-bounded factors.

This is exactly the third Pansiot branch.

Pansiot gives

[
oxed{
p_w(n)=Theta(n^2).
}
]

For a growing substitution fixed point, factor complexity is at most

[
O(nlog n).
]

A coding cannot increase factor complexity beyond the source asymptotic order required here.

Therefore the actual word (w) cannot be a coding of any growing substitution fixed point.

Durand states this directly for the equivalent binary example

[
0mapsto001,qquad 1mapsto1.
]

It is morphic, not uniformly recurrent, and not substitutive; equivalently, it cannot be defined by a growing endomorphism.

Hence:

[
oxed{
	ext{not every genuinely aperiodic pure-morphic positive valuation word}
	ext{ admits a T21 normalization}.
}
]

This disproves the universal Route A target.

### Why the obstruction is not “erasing”

The witness is already nonerasing.

### Why the obstruction is not “root does not expand”

The root length is exponential:

[
|W_j|=2^{j+1}-1.
]

### Why the obstruction is not presentation-specific

Quadratic factor complexity is a property of the word itself. Any exact coding representation by a growing substitution would contradict the complexity bound.

Thus the obstruction is genuinely word-level.

---

## 8. Polynomial-growth pure morphisms survive as a residual subclass

A polynomial-growth example on positive symbols is

[
pi(2)=23,qquad
pi(3)=31,qquad
pi(1)=1.
]

It is prolongable on (2).

Its incidence dynamics give

[
|pi^j(2)|
=
1+j+rac{j(j-1)}2.
]

The fixed point begins by concatenating blocks with longer and longer runs of the bounded letter (1).

Hence the system is genuinely non-growing and pushy.

The important structural point is not the exact example but the forced neutral direction.

In a finite nonerasing morphism, polynomial growth of a growing root can only occur through a spectral-radius-one chain. Such a chain contains bounded terminal components.

Therefore polynomial-growth pure morphisms cannot satisfy T21's hypothesis that every reachable letter grows.

They do not become T21 systems merely by changing the scale from exponential to polynomial.

---

## 9. Ordinary-prefix limsup and the positive-integer anchor gap

This step must be split into three logically separate statements.

### 9.1 Universal Collatz inequality

Assume a genuinely aperiodic valuation word is realized by a positive odd integer.

T3's distinct-orbit product bound gives

[
A_n
le
nlog_2 3
+
rac13log_2(n+1)
+
O(1).
]

Therefore

[
oxed{
limsup_{n	oinfty}rac{A_n}{n}
le
log_2 3.
}
]

This statement is independent of morphic normalization.

### 9.2 Algebraicity on the growing-normalizable side

T21 gives

[
oxed{
eta=limsup A_n/ninoverline{mathbb Q}
}
]

for the exact growing presentation.

Because the output word is unchanged, this is the ordinary-prefix limsup of the original valuation word.

### 9.3 Gelfond–Schneider strictness

(log_2 3) is transcendental.

Indeed if

[
delta=log_3 2
]

were algebraic irrational, Gelfond–Schneider would make (3^delta) transcendental, contradicting (3^delta=2). It is not rational because no nontrivial powers of (2) and (3) agree.

Thus (log_2 3=1/delta) is transcendental.

Hence an algebraic (eta) satisfying (etalelog_2 3) must satisfy

[
oxed{
eta<log_2 3.
}
]

This closes the normalized class.

### 9.4 Residual pushy class

T30 did not verify a theorem asserting algebraicity of

[
eta=limsup A_n/n
]

for every pushy pure-morphic valuation word.

Known morphic frequency theorems do not supply this automatically. Statements of the form

[
	ext{if a letter frequency exists, it is algebraic}
]

do not prove that all required frequencies exist, nor that a weighted ordinary-prefix limsup is algebraic in their absence.

Therefore the exact residual boundary is:

[
oxed{
	ext{universal }etalelog_2 3	ext{ survives;}
quad
	ext{universal algebraicity and hence universal strictness do not yet.}
}
]

This is a theorem-level obstruction and must not be replaced by an assumption.

### 9.5 The canonical pushy witness is subcritical

For

[
eta(1)=112,qquad eta(2)=2,
]

the full substitution prefixes satisfy

[
#_1(W_j)=2^j,
qquad
#_2(W_j)=2^j-1.
]

Thus their weighted mean tends to

[
rac{2^j+2(2^j-1)}{2^{j+1}-1}
longrightarrow
rac32.
]

In fact the ordinary mean exists for this binary pure morphic example. Since

[
2^{3/2}=sqrt8<3,
]

we have

[
rac32<log_2 3.
]

So even a residual pushy word can have a strict ordinary real gap.

This does **not** put it in T29 because the toric growth problem below remains.

---

## 10. Exact scalar transport beyond T21

Once erasures are removed, the T20 identity remains exact without assuming that every letter grows.

Let (M) be the incidence matrix of a nonerasing prolongable presentation, (c(n)) the Parikh vector of the prefix of length (n), and

[
L_J(n)=mathbf1^TM^Jc(n).
]

Then

[
sigma^J(u_{<n})=u_{<L_J(n)},
]

so

[
c(L_J(n))=M^Jc(n)
]

and

[
A_{L_J(n)}=v^TM^Jc(n).
]

At the exact Collatz tail point (q_J),

[
oxed{
S(q_J)
=
sum_{nge0}
rac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
}
]

Thus T30 does not lose exact prefix transport.

What fails in the residual class is the **asymptotic positivity** needed to turn that transport into the T21/T22 growth geometry.

If a bounded letter (b) occurs, then

[
|sigma^J(b)|
]

is bounded. The normalized index (L_J(n)) is still exact, but its contribution from the (b)-direction does not expand.

---

## 11. Neutral directions obstruct direct T22/T29 reuse

T21 defines, after a suitable period refinement, the length increment

[
d^T
=
mathbf1^TM^a(M^R-I).
]

When every reachable letter expands, a deep enough choice gives

[
d_s>0
]

for every reachable (s).

That positivity is essential to the canonical grading.

For a bounded periodic letter (b),

[
M^Rb
]

returns to the same bounded mass after refinement, so

[
oxed{
d_b=0.
}
]

Therefore in the pushy residual class

[
d^Tx
]

is at best a nonnegative grading.

There is no constant (kappa>1) for which

[
w(A^ngamma)ge Ckappa^nw(gamma)
]

holds on every nonzero canonical generator.

Equivalently, the bounded direction creates a **zero growth profile**.

The T22 filtration

[
g_1<cdots<g_r
]

was built from positive growth profiles. It cannot simply be extended by declaring a zero profile harmless, because pushiness produces arbitrarily long pieces of the actual prefix supported in the neutral letters.

At the level of exact tail coordinates, a bounded letter can have

[
q_{J,b}
=
rac{2^{B_J(b)}}{3^{ell_J(b)}}
]

periodic or eventually periodic rather than converging toward the toric boundary.

Consequently:

- positive support displacement fails in that direction;
- finite face-prime jet local finiteness is not automatic;
- neutral coefficients need not have lower asymptotic height merely by T22;
- the T29 moving-target zero theorem cannot be invoked without a new reduction.

This is the second exact T30 obstruction.

---

## 12. What a future neutral-letter reduction must preserve

The natural next approach is not to alter the valuation word.

A valid T31 reduction would have to decompose the exact prefix into

1. a growing skeleton;
2. finite or periodic bounded-letter blocks attached to that skeleton.

Because bounded-letter dynamics are finite after a power, one may hope to resum long bounded blocks by finite rational/geometric factors.

But the following must remain literal:

[
n,
qquad
A_n,
qquad
R_n,
qquad
S=sum_n2^{A_n}/3^n.
]

In particular a bounded block of length (L) cannot be collapsed to one symbolic letter unless the lost (L) output positions are restored analytically in the scalar and in every exact prefix cylinder.

A successful resummation must therefore be an identity of generating/state functions, not a deletion of neutral positions.

No such theorem is promoted in T30.

---

## 13. Status of rational values

The T29 rational-value boundary remains unchanged.

### Positive integer values

Excluded throughout the newly enlarged exact growing-normalizable class.

### Positive rational noninteger values

A general abstract positive rational inverse value does not by itself supply T3's positive-integer orbit inequality.

Therefore positive rational noninteger values are excluded only when ordinary real subcriticality

[
limsup A_n/n<log_2 3
]

is independently known.

The exact normalization preserves that condition whenever it is known.

### Negative rational values

Remain unexcluded.

The completion-sign argument has the wrong sign to exclude them.

---

## 14. T2 periodicity consequence after T30

Let (w) be a finite-alphabet positive valuation word in the exact growing-normalizable class.

If

[
R_m
]

is bounded, T2 gives an ordinary positive integer anchor.

If (w) were genuinely aperiodic, T29 applied to the normalized presentation would exclude that anchor.

Therefore

[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]

for every exact growing-normalizable morphic valuation word.

This is a real extension beyond the literal presentation scope of T29:

- erasing presentations of such a word are allowed;
- mortal-letter contamination is allowed;
- non-growing non-pushy pure presentations are allowed;
- uniformly recurrent morphic presentations are allowed.

The implication is **not** promoted for the quadratic pushy residual class.

---

## 15. Literature audit

### 15.1 Charlier–Leroy–Rigo

Émilie Charlier, Julien Leroy, Michel Rigo, “Asymptotic properties of free monoid morphisms,” *Linear Algebra and its Applications* 500 (2016), 119–148, DOI 10.1016/j.laa.2016.02.030.

Load-bearing points:

- every morphic word admits an exact coding of a nonerasing fixed point;
- the construction is algorithmic;
- mortal letters are explicitly removed;
- the final word equality is exact;
- the construction tracks growth type rather than silently promoting non-growing systems to growing ones.

### 15.2 Durand 2013

Fabien Durand, “Decidability of uniform recurrence of morphic sequences,” *International Journal of Foundations of Computer Science* 24 (2013), 123–146, DOI 10.1142/S0129054113500032.

Load-bearing points:

- substitution is defined there as prolongable and growing;
- uniformly recurrent morphic sequences are primitive substitutive;
- Durand gives the explicit non-substitutive example (0mapsto001, 1mapsto1);
- the paper restates Pansiot's growing/non-growing complexity trichotomy.

### 15.3 Pansiot 1984

Jean-Jacques Pansiot, “Complexité des facteurs des mots infinis engendrés par morphismes itérés,” ICALP 1984, LNCS 172, 380–389, DOI 10.1007/3-540-13345-3_34.

Load-bearing point:

for nonerasing pure morphic fixed points, unbounded all-non-growing factors produce quadratic complexity, whereas growing morphisms have complexity at most (nlog n).

### 15.4 Durand 1998

Fabien Durand, “A characterization of substitutive sequences using return words,” *Discrete Mathematics* 179 (1998), 89–101, DOI 10.1016/S0012-365X(97)00029-0.

Context:

return substitutions characterize primitive substitutive recurrence structure. T30 uses the stronger 2013 uniformly recurrent morphic conclusion when closing that class.

### 15.5 Frequency literature

The project previously recorded algebraic frequency results for substitutive/morphic systems where the relevant frequencies exist.

T30 does not promote these into a theorem on the limsup of weighted ordinary prefixes in every pushy residual word.

That non-implication is part of the T30 boundary.

---

## 16. Deliverable audit

| Question | T30 answer |
|---|---|
| Can every genuinely aperiodic pure-morphic positive valuation word be represented by an expanding nonerasing morphism sufficient for T29? | **NO.** Quadratic pushy pure fixed points are exact counterexamples. |
| Does the successful normalization preserve the exact one-sided valuation word? | **YES.** |
| Is a coding used? | **YES**, in general a letter-to-letter coding. |
| Is a shift used? | **NO.** |
| Are ordinary prefix indices preserved? | **YES**, once the final coding normal form is reached. |
| Are ordinary prefix sums (A_n) preserved? | **YES, term by term.** |
| Is the T2 exact cylinder preserved? | **YES, literally.** |
| Is the canonical scalar preserved literally? | **YES, term by term.** |
| Can mortal letters be removed harmlessly? | **YES at the final output-word interface; NO to naive index-preserving deletion at an intermediate presentation.** |
| Can bounded letters always be eliminated or absorbed? | **NO.** Pushy bounded-letter recurrence is the first irreducible obstruction. |
| Do genuinely polynomial-growth aperiodic cases survive? | **YES.** They live in the residual neutral/bounded-letter branch. |
| Does the ordinary-prefix limsup remain algebraic in every surviving class? | **NOT PROVED.** This is an exact T31 obligation. |
| Does the positive-integer strict gap survive? | **YES on the growing-normalizable side; not yet universally proved in the pushy residual.** |
| Does T29 apply unchanged after successful normalization? | **YES.** |
| Is a new positive-integer anchor class excluded? | **YES:** every genuinely aperiodic exact growing-normalizable morphic word, including erasing/non-growing presentations of such a word. |
| Does (R_m) bounded imply eventual periodicity beyond the literal T29 presentation class? | **YES, throughout the exact growing-normalizable class; not yet in the pushy residual.** |
| Positive rational noninteger values? | **Excluded only when ordinary real subcriticality is independently known.** |
| Negative rational values? | **Unexcluded.** |
| Explicit anchored aperiodic word found? | **NO.** |
| Candidate positive integer found? | **NO.** |
| Unbounded Collatz orbit found? | **NO.** |
| Collatz counterexample found or claimed? | **NO.** |
| Is new scientific compute justified? | **NO.** |

---

## 17. Thirtieth-session global progress/correction audit

### 17.1 Recursive-language classes closed

The programme has closed, at the positive-integer anchoring interface, a sequence of increasingly broad classes.

1. Exact finite-periodic and finite arithmetic-family closures were killed in T1–T2.
2. Specified automatic/substitutive return classes and balanced finite-kernel classes were progressively closed through T3–T13.
3. Primitive and then nonprimitive multivariate finite-state systems were closed through T14–T19 under the exact lifting architecture.
4. Variable-length growing pure morphic systems acquired exact scalar transport and ordinary-prefix algebraicity in T20–T21.
5. Unequal-growth reducible expanding systems were completed through the T22 multiscale programme.
6. T23–T29 supplied the exact relative local machinery and moving-target zero theorem needed to close the complete genuinely aperiodic T22 class.
7. T30 now shows that erasing/mortal contamination and many non-growing presentations do not create new Collatz words: whenever the actual word is substitutive/growing-normalizable, it is already in the T29 class.

The first natural single-morphism residual is now the pushy non-growing pure-morphic class.

### 17.2 Exact hypotheses that still delimit the theorem

The current positive-anchor exclusion still requires the actual finite positive valuation word to admit an exact coding presentation by a nonerasing growing substitution to invoke T21/T29 directly.

The residual pushy class can fail this word-level property.

The unresolved inputs there are:

- algebraicity of the ordinary-prefix limsup;
- treatment of the neutral/bounded-letter directions;
- recovery of a positive toric filtration or an exact substitute.

### 17.3 Has the unresolved recursive-language space materially narrowed?

**YES.**

Before T20, general variable-length morphic behavior was open.

After T29, every expanding nonerasing T22 multiscale presentation was closed.

T30 now removes erasing and mortal-letter syntax as independent boundaries and absorbs the non-pushy and uniformly recurrent sides into that closure.

The residual is not “arbitrary morphic”. It has a precise canonical witness and a concrete combinatorial signature: recurrent bounded letters with unbounded bounded-letter factors, including the quadratic-complexity Pansiot branch.

### 17.4 Does any earlier promoted theorem require correction?

**NO.**

T21 explicitly restricted its algebraicity theorem to nonerasing presentations in which every reachable letter expands.

T29 inherited that scope.

T30 does not weaken either theorem. It enlarges the class of words known to possess a presentation satisfying those hypotheses and identifies a genuine class that does not.

The only correction is terminological/strategic: “morphic” must not be silently treated as “substitutive/growing”.

### 17.5 Does theory progress justify new scientific compute?

**NO.**

The remaining obstruction is theorem-level and structural.

No candidate distribution, ranking metric, substitution enumeration, or trajectory campaign is licensed by the residual pushy class.

### 17.6 Is the root objective still realistically connected to this line?

**LOGICALLY YES; empirically no candidate has emerged.**

T2 keeps the connection exact:

[
	ext{aperiodic positive valuation word}
+
	ext{positive integer anchor}
Longrightarrow
	ext{unbounded orbit and no arrival at }1.
]

The CDM4 programme has substantially constrained where such a recursive word could live.

But thirty theory sessions have produced exclusions and structural theorems, not one anchored aperiodic word.

The line remains relevant because the residual pushy class is natural and not manufactured. The project should not pretend that exclusion progress itself is a candidate-generation mechanism.

### 17.7 Should another representation supersede pure morphisms now?

**NOT YET.**

The pushy residual is a natural, theoremically coherent pure-morphic boundary. It contains genuinely new neutral-scale behavior that has not yet received one focused audit.

A pivot to finite-directive (S)-adic systems at T30 would be premature.

If T31 either closes the pushy class or proves that its neutral directions destroy the finite exact-lifting architecture in an essentially unrepairable way, then the next recursive-language enlargement should be selected from the actual surviving interface, with finite-directive (S)-adic systems a plausible candidate.

No strategic pivot is manufactured merely because T30 is a milestone.

---

## 18. Permanent lessons

### Lesson 1 — exact output equality is the right normalization invariant

Internal presentation lengths may change dramatically when erasures or mortal letters are removed.

For Collatz, this is harmless only when the final representation satisfies exact one-sided equality under a coding.

Language equality is not enough.

### Lesson 2 — erasing is not the irreducible boundary

Every morphic word can be put into a nonerasing coding normal form.

The first word-level failure is bounded-letter pushiness.

### Lesson 3 — root growth does not characterize T21 eligibility

A pure fixed point may have exponentially growing root prefixes while retaining a bounded reachable letter.

The word (1mapsto112, 2mapsto2) is the canonical example.

### Lesson 4 — a zero growth profile is not a small positive profile

The T22/T29 machinery depends on positive displacement.

A genuinely neutral generator with zero increment cannot be inserted into the existing profile list by notation alone.

### Lesson 5 — algebraic frequencies do not automatically give algebraic limsup

The Collatz strictness step needs algebraicity of the actual ordinary-prefix limsup.

A theorem about frequencies conditional on their existence is weaker.

---

## 19. Exact next theorem-sized obligation

**CDM4-T31 — PUSHY BOUNDED-LETTER RESUMMATION / ORDINARY-PREFIX LIMSUP / NEUTRAL-FACE AUDIT**

Start from a genuinely aperiodic nonerasing pure-morphic positive valuation word in the Pansiot pushy branch:

- at least one reachable bounded letter;
- arbitrarily long factors consisting only of bounded letters;
- no exact growing-substitution coding presentation.

Prove or sharply refute the following package.

1. After passing to one finite morphism power, classify the bounded-letter subsystem exactly as a finite periodic morphism.
2. Derive an exact arbitrary-prefix decomposition into growing skeleton segments and bounded periodic blocks, preserving the original output index.
3. Prove that
   [
   eta=limsup A_n/n
   ]
   belongs to an explicitly finite algebraic set, or give a precise counterexample/obstruction.
4. Under a hypothetical positive-integer anchor, combine that result with T3 to decide whether
   [
   eta<log_2 3
   ]
   follows universally.
5. Derive an exact state/scalar resummation of every bounded block. No output position may be deleted.
6. Determine whether the resummed system has finitely many **positive** growth profiles and finite canonical jets so that T29 applies.
7. If positivity cannot be recovered, state the first exact neutral-face obstruction.

No substitution enumeration, candidate trajectories, finite-code search, or scientific compute is authorized.

---

## 20. End classification

[
oxed{
	extbf{C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND}
}
]

T30 proves a genuine normalization extension and a genuine failure of universal normalization.

The growing-normalizable word class is now T29-closed even when the originally supplied presentation is erasing or non-growing.

The first surviving exact single-morphism boundary is the pushy bounded-letter / quadratic-complexity class, with polynomial-growth cases included as a natural subfamily.

No Collatz counterexample is found or claimed.
