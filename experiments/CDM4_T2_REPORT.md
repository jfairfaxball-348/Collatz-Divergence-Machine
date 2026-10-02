# CDM4-T2 — Aperiodic Integer-Anchor / Nested-Cylinder Theorem Audit

**Date:** 2026-10-02  
**Session type:** mathematical / structural audit with focused current literature review.  
**Scientific Collatz starts generated:** **ZERO.**  
**GPU work:** **NONE.**  
**New generator or sampling distribution:** **NONE.**  
**Counterexample found or claimed:** **NO.**  
**End-of-session classification:** **C — NEW ANCHORING / APERIODICITY OBSTRUCTION FOUND.**

## 1. Executive result

CDM4-T2 did not find an explicit positive integer with an unbounded Collatz orbit. It did, however, convert the T1 ordinary-integer anchoring obstruction into an exact recursive object that can be attacked theoremically.

For an accelerated valuation prefix

a_1,...,a_m,    a_i >= 1,

write

A_0=0,    A_m=a_1+...+a_m,

and

C_0=0,    C_{m+1}=3C_m+2^{A_m}.

Then

2^{A_m} x_m = 3^m x_0 + C_m.

T2 proves that exact realization of the entire valuation prefix by an odd start is one exact congruence, not merely a formal 2-adic condition:

3^m x_0 + C_m == 2^{A_m}  (mod 2^{A_m+1}).

Consequently the prefix has a unique exact starting cylinder

R_m == 3^{-m}(2^{A_m}-C_m)  (mod 2^{A_m+1}),

with canonical representative

0 <= R_m < 2^{A_m+1}.

The extra factor of 2 in the modulus is important: modulo 2^{A_m} one enforces divisibility of the m-step numerator, while modulo 2^{A_m+1} one also enforces that the endpoint is odd, hence that the final valuation is exact. The single final congruence implies the corresponding oddness condition at every earlier accelerated endpoint.

These exact cylinders are nested. Setting

M_m = 2^{A_m+1},

there is a unique digit/carry

d_m in {0,...,2^{a_{m+1}}-1}

such that

R_{m+1}=R_m+d_m M_m.

This is the principal new representation of T2. Ordinary-positive-integer realization is exactly the statement that the anchor carry eventually dies:

one ordinary nonnegative integer anchor
iff R_m is bounded
iff R_m eventually stabilizes
iff d_m=0 eventually.

There is also an exact cross-normalized criterion requiring no bounded-alphabet assumption:

one ordinary anchor
iff R_{m+1}/M_m -> 0.

Indeed every nonzero carry has R_{m+1}>=M_m, so a non-anchored tower has infinitely many cross-normalized values at least 1.

If the valuation alphabet is bounded, say a_i<=B, then the more familiar same-level condition is also exact:

one ordinary anchor
iff R_m/2^{A_m+1} -> 0.

Thus for substitutions, morphic words and other finite-alphabet valuation languages, the vague instruction “prove eventual stabilization” can be replaced by an asymptotic theorem about an explicitly recursively generated canonical representative.

T2 also closes an important logical loop left open in T1:

> For an actual positive-integer Collatz orbit, boundedness is equivalent to eventual periodicity of the source-parity sequence.

The forward implication is elementary: a bounded orbit takes values in a finite set, so determinism forces a repeated state and hence an eventually periodic orbit. T1.1 proved the reverse implication.

Therefore:

> If an explicitly defined non-eventually-periodic parity or valuation language is proved to have one positive-integer anchor, its Collatz orbit is automatically unbounded.

A separate quantitative proof that 3^m/2^{A_m} is unbounded is sufficient but no longer logically necessary once exact anchoring and aperiodicity have both been proved. Reaching 1 is also impossible, because the shortened orbit from 1 is periodic and the accelerated valuation tail from 1 is constantly 2.

This reduces the strongest surviving certification route to one sharply defined obligation:

> Exhibit one explicitly aperiodic finitely recursive valuation/parity language and prove that its exact anchor-carry sequence d_m is eventually zero, with the stabilized value R_m=N>1.

That would already give an explicit unbounded positive-integer orbit.

The literature audit also supplies a serious route kill. Sanmin Wang's peer-reviewed E-sequence paper proves that for every irrational theta>=1, the mechanical valuation word

a_n=floor(n theta)-floor((n-1) theta)

is not the E-sequence of any odd positive integer. In Wang's terminology it is Omega-divergent; that term means “not realized by a positive integer” and must not be confused with a divergent Collatz orbit.

This kills a particularly attractive family of aperiodic growth languages. For 1<theta<log_2 3,

A_m=floor(m theta),

so the formal factor 3^m/2^{A_m} grows exponentially, yet Wang's theorem says there is no positive-integer anchor. Growth without anchoring is therefore not a hypothetical pathology; it occurs in a very natural exact symbolic class.

No theorem was found that rules out all primitive substitutions or all morphic valuation words. Those classes remain open, but T2 now gives them an exact anchoring test.

No new scientific compute is justified. No new generator/distribution is justified. GPU work remains unjustified.

## 2. Scope, authority and compute record

T2 began from the repository state frozen by CDM4-T1 and obeyed the existing research, promotion, certification and compute policies.

No candidate population was generated. No trajectory campaign was executed. No candidate trajectory was extended. No finite exponent-code optimization or ranking campaign was performed.

The only calculations used were tiny exact checks of symbolic congruences and recurrences. They were theorem-support calculations, not a search over starts or valuation words.

The authoritative prior barriers remain:

- T1.1: eventual-periodic parity implies eventual-periodic bounded orbit;
- T1.2: whole arithmetic-progression return graphs under fixed positive-length blocks cannot cycle because each edge consumes 2-adic period depth;
- T1.3: a compatible nested residue tower represents one ordinary integer if and only if its canonical representatives eventually stabilize;
- CDM2-R1/R2: every finite parity prefix retains complete finite future-parity freedom across its lifts, and finite inverse-tree pruning cannot remove that freedom unless it kills all sufficiently large lifts.

T2 does not weaken or supersede those results. It refines the infinite-depth anchoring side.

## 3. The exact accelerated valuation cylinder

### Theorem T2.1 — exact valuation-prefix start cylinder

**Status: PROVED in CDM4-T2.**

Let a_1,...,a_m be positive integers. Define

A_i = a_1+...+a_i,    A_0=0,

and

C_0=0,
C_{i+1}=3C_i+2^{A_i}.

Equivalently,

C_m = sum_{j=0}^{m-1} 3^{m-1-j} 2^{A_j}.

Then an odd integer N realizes exactly the accelerated valuation prefix a_1,...,a_m if and only if

3^m N+C_m == 2^{A_m}  (mod 2^{A_m+1}).

Equivalently,

N == R_m  (mod 2^{A_m+1}),

where

R_m == 3^{-m}(2^{A_m}-C_m)  (mod 2^{A_m+1}).

Because 3 is invertible modulo every power of two, R_m is unique.

#### Proof

If N realizes the exact valuations, then after m accelerated steps

x_m=(3^mN+C_m)/2^{A_m}

is odd. This is exactly the displayed congruence.

Conversely suppose the displayed final congruence holds. For any i<m,

C_m
== 3^{m-i}C_i + 3^{m-1-i}2^{A_i}
   (mod 2^{A_i+1}),

because every later summand contains at least 2^{A_i+1}.

Reducing the final congruence modulo 2^{A_i+1} gives

3^{m-1-i}[3(3^iN+C_i)+2^{A_i}] == 0
(mod 2^{A_i+1}).

The outside factor is odd. Since -2^{A_i} and +2^{A_i} are equal modulo 2^{A_i+1}, and multiplication by 3 fixes the unique class 2^{A_i} modulo 2^{A_i+1}, it follows that

3^iN+C_i == 2^{A_i}  (mod 2^{A_i+1}).

Thus every intermediate quotient is odd and each requested valuation is exact. QED.

### Consequence: the exact modulus is 2^{A_m+1}

A residue modulo 2^{A_m} alone is a useful formal 2-adic start representative, but it does not by itself encode the final endpoint-odd bit. For exact finite valuation realization the natural cylinder modulus is 2^{A_m+1}.

This is the modulus used throughout the rest of T2.

## 4. Nested cylinders and the anchor-carry recurrence

### Theorem T2.2 — anchor-digit recurrence

**Status: PROVED in CDM4-T2.**

Let R_m be the canonical representative of the exact prefix cylinder from T2.1 and put

M_m=2^{A_m+1}.

Then the cylinders nest:

R_{m+1} == R_m  (mod M_m).

Therefore there is a unique integer

d_m in {0,...,2^{a_{m+1}}-1}

such that

R_{m+1}=R_m+d_m M_m.

The sequence R_m is consequently nondecreasing.

This is a mixed-radix expansion of the 2-adic start point. If the empty odd cylinder is initialized by R_0=1 modulo 2, then

R_m
= 1 + sum_{j=0}^{m-1} d_j 2^{A_j+1}.

The d_j are not heuristic scores. They are exact digits saying how the canonical ordinary representative must change when one more valuation is imposed.

### Endpoint form of the recurrence

Define the canonical odd endpoint

Y_m=(3^mR_m+C_m)/2^{A_m}.

Any lift of the m-prefix cylinder can be written

N=R_m+qM_m.

After m accelerated steps its endpoint is exactly

Y_m+2*3^m q.

Let a=a_{m+1} and define

H_m=(3Y_m+1)/2.

The next valuation equals a if and only if

H_m+3^{m+1}q == 2^{a-1}  (mod 2^a).

Hence the next anchor digit is exactly

d_m
== 3^{-(m+1)}(2^{a_{m+1}-1}-H_m)
   (mod 2^{a_{m+1}}),

chosen canonically in the interval 0,...,2^{a_{m+1}}-1.

The corresponding endpoint recurrence is

2^{a_{m+1}}Y_{m+1}
=3Y_m+1+2d_m3^{m+1}.

This is an explicit finite recurrence with an unbounded integer state. It is a genuine escape from the bounded autonomous finite-state obstruction of T1.1, but it does not solve the problem: the missing theorem is now to force d_m=0 eventually for a nonperiodic recursively generated code.

## 5. General nested-tower strengthening of T1.3

The T2 carry viewpoint is not special to powers of two.

Let

M_1 | M_2 | ... ,    M_j -> infinity,

and let compatible canonical representatives satisfy

0<=r_j<M_j,
r_{j+1}==r_j (mod M_j).

Then uniquely

r_{j+1}=r_j+d_jM_j,

with

0<=d_j<M_{j+1}/M_j.

Hence r_j is nondecreasing.

### Theorem T2.3 — equivalent anchoring criteria

**Status: PROVED in CDM4-T2.**

For such a tower, the following are equivalent:

1. one ordinary nonnegative integer N realizes every congruence;
2. r_j is bounded;
3. r_j eventually stabilizes;
4. d_j=0 eventually;
5. r_{j+1}<M_j eventually;
6. r_{j+1}/M_j -> 0.

Proof:

- T1.3 gives 1 iff 3.
- A bounded nondecreasing integer sequence stabilizes, so 2 iff 3.
- The digit recurrence gives 3 iff 4.
- A nonzero d_j gives r_{j+1}>=M_j, while d_j=0 gives r_{j+1}=r_j<M_j, so 4 iff 5.
- If the tower stabilizes at N, then N/M_j->0. If it does not stabilize, infinitely many d_j are nonzero and therefore infinitely many r_{j+1}/M_j are at least 1. Hence 6 is also equivalent.

This is a more operational form of T1.3. It replaces a qualitative inverse-limit warning by an explicit extinction condition on carry digits.

### Corollary T2.3a — bounded-ratio same-level test

If

M_{j+1}/M_j <= Q

for one fixed Q, then ordinary anchoring is also equivalent to

r_j/M_j -> 0.

Indeed, if the tower is not anchored, infinitely many d_{j-1} are nonzero, giving

r_j>=M_{j-1}>=M_j/Q

along infinitely many j.

### Accelerated bounded-alphabet corollary

If an infinite valuation word has a_i<=B, then

M_m/M_{m-1}=2^{a_m}<=2^B.

Therefore

positive/nonnegative ordinary anchor
iff R_m/2^{A_m+1}->0.

This applies directly to substitutions and morphic words over a finite valuation alphabet.

Without a uniform bound on the valuation symbols, same-level decay R_m/M_m->0 is only necessary, not sufficient: very large modulus jumps can dilute infinitely many nonzero carry events. The cross-normalized criterion R_{m+1}/M_m->0 remains exact without this assumption.

## 6. Aperiodicity itself is an exact growth theorem after anchoring

### Theorem T2.4 — bounded orbit iff eventual-periodic parity

**Status: PROVED in CDM4-T2, using T1.1 for one direction.**

For a positive integer under the shortened Collatz map,

the orbit is bounded
iff its source-parity sequence is eventually periodic.

T1.1 proved the reverse direction: eventual-periodic parity forces an eventually periodic, hence bounded, orbit.

For the forward direction, a bounded positive orbit takes values in a finite set. Determinism therefore forces a repeated state. From the first repeat onward the state orbit is periodic, so its source-parity sequence is eventually periodic. QED.

### Corollary T2.4a — aperiodic anchored language certifies unboundedness

If one explicit positive integer N realizes an infinite source-parity word that is not eventually periodic, then the forward orbit of N is unbounded.

If N ever reached 1, its later shortened parity would be the period 1,0,1,0,..., contradiction. Therefore such an N would satisfy the root objective.

For accelerated valuations, the shortened source-parity word is obtained by concatenating

1 0^{a_1-1}, 1 0^{a_2-1}, ...

An eventually periodic valuation sequence gives an eventually periodic parity word. Conversely an eventually periodic positive Collatz parity word has eventually periodic gaps between successive odd states, hence eventually periodic accelerated valuations.

Therefore an aperiodic accelerated valuation sequence with a positive anchor also certifies unboundedness.

### Strategic consequence

T1 treated exact growth, such as unbounded 3^m/2^{A_m}, as a natural sufficient second half of a certificate.

T2 sharpens this:

> For a language whose aperiodicity is already proved, the anchor theorem is the only remaining logical bridge to unboundedness.

Quantitative growth remains useful for structure, rate estimates and independent proof routes, but it is not required in addition to exact aperiodicity plus anchoring.

This substantially narrows the search target.

## 7. Quantitative growth for recursive valuation words

Although no longer logically necessary after T2.4, the affine lower bound remains exact:

x_m
=(3^mN+C_m)/2^{A_m}
>=N 3^m/2^{A_m}.

For any recursively generated valuation word satisfying

A_m/m -> alpha < log_2 3,

there is epsilon>0 such that for all sufficiently large m,

A_m <= (log_2 3-epsilon)m,

and therefore the lower bound grows exponentially.

For a primitive substitution on a finite alphabet with fixed valuation weights, Perron-Frobenius frequency theory normally gives a limiting weighted mean alpha. A strict inequality alpha<log_2 3 is therefore enough for a quantitative growth theorem if an ordinary anchor can also be proved.

At the critical value alpha=log_2 3, frequency alone is insufficient and one would need discrepancy information on A_m-m log_2 3.

T2 found no need to optimize finite words to estimate these quantities. The unresolved difficulty is still exact positive-integer realization.

## 8. Mechanical and Sturmian valuation words: a broad natural route kill

Sanmin Wang, in the peer-reviewed paper

Sanmin Wang, An E-Sequence Approach to the 3x+1 Problem,
Symmetry 11 (2019), 1415,
DOI 10.3390/sym11111415,

uses exactly the accelerated odd recurrence

x_n=(3x_{n-1}+1)/2^{a_n},

with x_n odd, and calls the valuation sequence the E-sequence.

Wang defines a generalized E-sequence to be Omega-divergent when it is not the E-sequence of any odd positive integer. This terminology is unrelated to an unbounded Collatz orbit and is translated carefully here as “no positive-integer anchor.”

One of Wang's stated results is:

For every irrational theta>=1, the sequence

a_n=floor(n theta)-floor((n-1)theta)

has no odd positive-integer realization.

### T2 consequence

For any irrational

1<theta<log_2 3,

the same word has

A_m=floor(m theta),

so

3^m/2^{A_m}

grows exponentially.

Thus this class has an exact favorable growth law and aperiodic symbolic structure, yet fails the positive-integer anchor theorem.

This is a direct worked example of the central T1/T2 warning:

> a beautiful aperiodic growth language can be a purely 2-adic symbolic object and still fail the root objective.

Mechanical/Sturmian valuation languages of this form are therefore **FAILED** as an anchor route.

Published Sturmian-substitution characterizations show that nontrivial substitution-invariant Sturmian words occur for special quadratic irrational slopes/intercepts. Therefore Wang's mechanical theorem also removes a nontrivial natural substitutive Sturmian subclass from the valuation programme. It does not rule out all primitive substitutions or all morphic words.

## 9. Primitive substitutions and morphic languages

### What survives

No peer-reviewed theorem was found that rules out every aperiodic primitive substitutive accelerated valuation word as the E-sequence of a positive integer.

Therefore the general primitive-substitution question remains open in this project.

T2 nevertheless adds two exact constraints:

1. finite valuation alphabets automatically fall under the bounded-alphabet anchoring test
   R_m/2^{A_m+1}->0;
2. if the word is proved aperiodic, then a positive anchor alone would force an unbounded orbit by T2.4.

This turns a substitution candidate into a precise arithmetic theorem question rather than a finite-code search problem.

### Literature-dependent possible stronger obstruction

Josefina López and Peter Stoll's 2021 arXiv preprint
The 3x+1 Periodicity Conjeture in R,
arXiv:2101.12747,
claims that if a rational 2-adic integer has a non-cyclic Collatz trajectory, then the lower parity-one density must equal ln(2)/ln(3).

This is highly relevant but is a preprint, and T2 does not promote it as a load-bearing project theorem without independent verification.

If that claim is independently established, it combines strongly with finite-state and substitution frequency theory. For example, Jason Bell proved in a peer-reviewed 2020 paper that the lower and upper densities of an automatic set are computable rational numbers. Since ln(2)/ln(3) is not rational, the López-Stoll claim would rule out aperiodic automatic shortened-parity sequences as rational 2-adic/positive-integer Collatz trajectories.

A related argument may constrain primitive substitutions through their algebraic letter frequencies. This is a promising theorem-audit direction, not a T2 result.

## 10. Finite transducers with an unbounded counter or scale

T1.1 kills autonomous deterministic finite-state block machines because finite control eventually cycles.

T2.2 shows what a genuine escape looks like.

The state can consist of finite control plus unbounded exact arithmetic data such as

(A_m,R_m,Y_m,m),

with d_m computed by the exact congruence recurrence. Such a system need not have eventually periodic control output because its unbounded arithmetic state can keep changing.

Therefore:

- a finite transducer with an unbounded counter/scale parameter is not killed merely by T1.1;
- however, it must prove eventual extinction of the exact anchor carry d_m;
- a bounded carry/control state by itself supplies no such proof and risks collapsing back to periodic control or to T1.2-style finite congruence closure.

T2 found a finite recurrence for the starting cylinder, satisfying one of the requested escape routes. It did not find a recurrence theorem proving its boundedness for a nonperiodic Collatz language.

## 11. Mixed 2-adic / 3-adic coupling

The exact endpoint recurrence from T2.2,

2^{a_{m+1}}Y_{m+1}
=3Y_m+1+2d_m3^{m+1},

couples the start-cylinder carry d_m to the endpoint dynamics.

It has the right 2/3 shape:

- powers of 2 encode forward valuation precision;
- powers of 3 encode the affine transport of start lifts;
- d_m is the exact integer by which the canonical start representative must move.

This is stronger than treating the two p-adic coordinates as unrelated finite scores. It gives one exact common integer variable.

However, T2 found no theorem from this identity that forces d_m=0 eventually.

In particular:

- finite CRT compatibility still does not force an ordinary anchor;
- a compatible mixed modulus 2^K3^A still falls under T1.3/T2.3;
- no product-formula, S-unit, linear-forms, or p-adic argument was located that gives a depth-independent upper bound on R_m for the recursive classes audited;
- 3-adic endpoint compatibility does not currently convert into an archimedean bound on the 2-adic start representative.

Thus mixed-adic coupling remains structurally relevant but does not yet solve anchoring.

## 12. Height and boundedness criteria

T2 answers the requested boundedness question positively at the representation level.

A compatible canonical residue tower is anchored exactly when its canonical height is bounded.

For exact accelerated cylinders this means:

R_m <= B for all m

for one fixed B

implies, and is equivalent to, eventual stabilization to one ordinary integer.

More operationally, it is enough to prove any one of:

- d_m=0 for all sufficiently large m;
- R_{m+1}<2^{A_m+1} for all sufficiently large m;
- R_{m+1}/2^{A_m+1}->0.

For bounded valuations it is also enough to prove

R_m/2^{A_m+1}->0.

These are usable criteria because they refer to quantities generated directly from the symbolic recursion.

What remains missing is a theorem that obtains such a bound from a nontrivial aperiodic substitution/transducer/Diophantine mechanism.

No S-unit theorem currently supplies that missing uniform bound.

## 13. Exact Diophantine identities and self-similarity

The affine identity

2^{A_m}x_m-3^mN=C_m

remains exact, with

C_{m+1}=3C_m+2^{A_m}.

At recursive substitution levels m_j one may in principle derive closed recurrences for A_{m_j}, C_{m_j}, R_{m_j}, and Y_{m_j}.

T2 found no natural self-similarity that collapses these identities to one finite positive-integer equation determining N while remaining aperiodic.

The exact anchor-carry recurrence is therefore the more direct object:

- if a recursive block structure can prove its induced d_m vanish after some level, the anchor follows;
- if it proves infinitely many nonzero d_m, the proposed language is definitively a 2-adic/profinite phantom for the positive-integer objective.

This is the recommended diagnostic for future theorem work, not a finite ranking metric.

## 14. Rational-base 3/2 and transducer representations

Eliahou and Verger-Gaugry's peer-reviewed 2025 paper
The number system in rational base 3/2 and the 3x+1 problem,
Comptes Rendus Mathématique 363 (2025), 329-336,
DOI 10.5802/crmath.662,
exposes exact links between rational-base 3/2 representations, odometer behavior and Collatz.

The representation remains mathematically interesting because finite word operations can encode Collatz steps compactly.

T2 found no theorem in that framework converting word self-similarity into:

- bounded exact canonical start representatives;
- eventual zero anchor carry;
- or an explicit ordinary-positive-integer aperiodic anchor.

Accordingly the rational-base route survives as an encoding language only. It is not promoted to a certification mechanism.

## 15. Least-divergent minimality

Assume conditionally that a least divergent positive integer N exists.

R2 already proved

T^j(N)>N for every j>=1.

For the actual infinite valuation language of N, the T2 exact canonical representatives satisfy

R_m=N

once

2^{A_m+1}>N.

Thus their carry digits are eventually zero.

But using this observation to construct N would be circular: the bound is obtained from the assumed existence of the anchor N itself.

T2 found no non-circular consequence of least-divergent minimality that supplies a uniform upper bound on R_m from the symbolic recursion.

For a finite prefix, smaller compatible representatives are merely other finite-prefix starts; minimality does not say they must share the hypothetical divergent future. This is exactly the finite-depth freedom preserved by R1/R2.

Therefore least-divergent minimality does not currently advance the anchor proof beyond supplying necessary finite conditions.

## 16. Relation to Bernstein-Lagarias 2-adic conjugacy

Bernstein and Lagarias, The 3x+1 Conjugacy Map,
Canadian Journal of Mathematics 48 (1996), 1154-1169,
DOI 10.4153/CJM-1996-060-x,
prove that the shortened Collatz map on Z_2 is conjugate to the one-sided shift and that the conjugacy induces a permutation modulo 2^n.

This explains why every infinite parity word has a perfectly valid 2-adic realization.

For accelerated valuations, the corresponding formal 2-adic start can be written in the familiar convergent form

N_2
= - sum_{j=0}^{infinity} 2^{A_j}/3^{j+1}

in Z_2.

T2 does not claim novelty for the existence of this 2-adic encoding.

The project-specific advance is the exact finite-cylinder formulation with endpoint-odd modulus 2^{A_m+1}, followed by the carry-extinction criterion that separates a finite positive integer from a genuinely infinite 2-adic integer.

This is exactly the distinction demanded by T1.3.

## 17. Relation to López-Stoll Sturmian work

López and Stoll's peer-reviewed 2009 paper
The 3x+1 Conjugacy Map over a Sturmian Word,
Integers 9 (2009), 141-162,
DOI 10.1515/INTEG.2009.014,
studies the Bernstein-Lagarias conjugacy on aperiodic mechanical/Sturmian parity words.

Its abstract explicitly frames the unresolved distinction between an aperiodic parity vector and an eventually periodic/rational 2-adic image.

That literature is closely aligned with the T2 anchor problem.

Wang's later E-sequence theorem provides a direct positive-integer non-realizability result for the accelerated mechanical valuation class. T2's carry criterion supplies a complementary exact finite-cylinder language in which such non-realizability must manifest as infinitely many nonzero anchor digits.

No claim of publication-level novelty is made for the broad 2-adic viewpoint.

## 18. Relation to Kramer 2026 exponent-code work

Oliver Kramer's July 2026 preprint
Adaptive Search in Collatz Exponent-Code Space via 2-adic and 3-adic Constraints,
arXiv:2607.10041,
tracks finite exponent codes using real drift, a 2-adic start representative, and a 3-adic endpoint representative.

The preprint proves necessary asymptotically vanishing residue-rate behavior for codes generated by one fixed positive integer and explicitly states that its finite diagnostics are not a verification method.

T2 agrees with the structural lesson and does not authorize optimization of those finite diagnostics.

The T2 exact cylinder differs in purpose:

- it uses modulus 2^{A_m+1} to encode exact final endpoint oddness for a valuation prefix;
- it derives the canonical lift digit d_m between successive exact cylinders;
- it obtains an if-and-only-if ordinary-anchor criterion from eventual carry extinction;
- for bounded valuation alphabets it upgrades same-level normalized start-residue decay to an if-and-only-if condition.

Kramer is a preprint and is treated as such. No novelty or priority claim is made.

## 19. Recursive language classes audited

### Killed or sharply constrained

1. **Eventually periodic parity/valuation languages.**  
   Already killed by T1.1; T2.4 completes the equivalence with bounded positive orbits.

2. **Finite autonomous deterministic block machines.**  
   Already killed by T1.1.

3. **Finite whole-arithmetic-progression return graphs.**  
   Already killed by T1.2.

4. **Compatible profinite towers without carry extinction.**  
   Killed for the positive-integer objective by T1.3/T2.3.

5. **Irrational mechanical accelerated valuation words.**  
   Killed by Wang's peer-reviewed positive-integer non-realizability theorem.

6. **Growth-favorable irrational mechanical words with 1<theta<log_2 3.**  
   Particularly instructive failure: exact formal exponential growth but no positive anchor.

### Survive, but with a sharper obligation

1. **General aperiodic primitive substitutions over a finite valuation alphabet.**
2. **General morphic valuation words not covered by Wang's mechanical class.**
3. **S-adic or recursive block concatenations with unbounded structural scale.**
4. **Finite transducers carrying an unbounded exact arithmetic state.**
5. **Mixed 2/3-adic recurrences capable of proving carry extinction.**
6. **Rational-base 3/2 descriptions if they can prove an ordinary anchor rather than merely encode steps.**

For every finite-alphabet surviving class, the exact test is now:

R_m/2^{A_m+1}->0

or equivalently eventual d_m=0.

## 20. Strongest new theorem / obstruction

The strongest project-level T2 result is the combined anchor theorem:

> Every finite accelerated valuation prefix has one exact start cylinder modulo 2^{A_m+1}. Successive canonical cylinders differ by one exact mixed-radix anchor digit d_m. An infinite valuation language is realized by one ordinary nonnegative integer if and only if d_m=0 eventually; equivalently its canonical exact start representatives are bounded, or equivalently R_{m+1}/2^{A_m+1}->0. For bounded valuation alphabets this is also equivalent to R_m/2^{A_m+1}->0.

This converts “ordinary-integer anchoring” from a passive end condition into an explicit recursive extinction problem.

The complementary T2.4 result says that for a proved aperiodic language, solving this anchor problem is already enough to prove unboundedness.

The strongest literature-backed class obstruction is Wang's theorem excluding all irrational mechanical accelerated valuation words from positive-integer realization.

## 21. Strongest surviving framework

The strongest surviving framework is now narrower than the T1 formulation.

Choose an explicitly non-eventually-periodic finitely recursive valuation word

a_1,a_2,...

and generate its exact cylinder state

(A_m,C_m,R_m,Y_m,d_m).

Then prove:

1. the recursion is exactly equivalent to the intended Collatz valuations;
2. d_m=0 for all sufficiently large m;
3. the stabilized value N=R_m is an explicit positive integer greater than 1;
4. the valuation/parity word is not eventually periodic.

By T2.4, item 4 plus the exact positive anchor already forces the orbit of N to be unbounded and to avoid 1.

A separate lower bound through 3^m/2^{A_m} can be retained as an independent strengthening but is no longer necessary for certification.

## 22. Single missing proof obligation

The exact missing proof obligation is:

> Find one explicit aperiodic finitely recursive valuation/parity language and prove that its exact anchor-carry recurrence has d_m=0 eventually, with the resulting stabilized representative N>1.

Equivalently:

> Prove boundedness of the exact canonical start representatives R_m for one explicit aperiodic recursive language.

This is theorem-sized and directly certification-relevant.

A broader high-value alternative is:

> Classify eventual-zero anchor carry for primitive substitutions or another finite-alphabet recursive class.

A theorem proving eventual carry is impossible for every aperiodic member of such a class would be a major obstruction. A theorem proving eventual carry for one explicit aperiodic member would immediately create an unbounded-orbit counterexample by T2.4.

## 23. Literature audit and claim status

### Peer-reviewed / published sources used

**Bernstein and Lagarias (1996).**  
Daniel J. Bernstein and Jeffrey C. Lagarias, The 3x+1 Conjugacy Map, Canadian Journal of Mathematics 48, 1154-1169. DOI 10.4153/CJM-1996-060-x.  
Use: exact 2-adic shift conjugacy and finite residue permutations under the same shortened-map convention.

**López and Stoll (2009).**  
Josefina López and Peter Stoll, The 3x+1 Conjugacy Map over a Sturmian Word, Integers 9, 141-162. DOI 10.1515/INTEG.2009.014.  
Use: aperiodic Sturmian/mechanical parity vectors inside the 2-adic conjugacy framework.

**Wang (2019).**  
Sanmin Wang, An E-Sequence Approach to the 3x+1 Problem, Symmetry 11, 1415. DOI 10.3390/sym11111415.  
Use: accelerated E-sequence convention and proved non-realizability of several nonperiodic classes, including all irrational mechanical valuation words.

**Parvaix (1999).**  
Bruno Parvaix, Substitution invariant sturmian bisequences, Journal de théorie des nombres de Bordeaux 11, 201-210.  
Use: characterization of substitution-invariant Sturmian systems, supporting the statement that Wang's mechanical obstruction intersects a genuine substitutive subclass.

**Bell (2020).**  
Jason P. Bell, The upper density of an automatic set is rational, Journal de théorie des nombres de Bordeaux 32, 585-604. DOI 10.5802/jtnb.1135.  
Use: exact rationality/computability of lower and upper densities for automatic sets, relevant only to the literature-dependent possible automatic-sequence obstruction.

**Eliahou and Verger-Gaugry (2025).**  
Shalom Eliahou and Jean-Louis Verger-Gaugry, The number system in rational base 3/2 and the 3x+1 problem, Comptes Rendus Mathématique 363, 329-336. DOI 10.5802/crmath.662.  
Use: exact rational-base representation framework; no integer-anchor theorem imported.

### Preprints, explicitly not promoted as load-bearing project theorems

**López and Stoll (2021).**  
The 3x+1 Periodicity Conjeture in R, arXiv:2101.12747.  
Use: possible parity-density rigidity route. Status: PREPRINT. Its strongest density claim is not used as a proved T2 theorem.

**Kramer (2026).**  
Oliver Kramer, Adaptive Search in Collatz Exponent-Code Space via 2-adic and 3-adic Constraints, arXiv:2607.10041.  
Use: contemporary real/2-adic/3-adic exponent-code diagnostics and necessary residue-rate behavior. Status: PREPRINT. No finite search diagnostic is imported as certification evidence.

### Novelty discipline

T2.1-T2.4 were derived directly from exact arithmetic and T1's established framework. No claim of global mathematical novelty or publication priority is made.

The literature audit establishes nearby prior art and identifies Wang's mechanical E-sequence theorem as directly relevant. Any future publication claim would require a substantially deeper prior-art audit and independent proof review.

## 24. Compute, generator and GPU decision

### New scientific compute

**NOT JUSTIFIED.**

T2 found no explicit aperiodic anchored language and no theorem-derived population whose finite enumeration would answer the missing infinite question.

### New generator or distribution

**NOT JUSTIFIED.**

The new exact objects R_m and d_m are theorem objects. Turning them into finite ranking scores before proving an implication theorem would recreate the finite-code optimization failure mode prohibited by T1.

### GPU work

**NOT JUSTIFIED.**

No high-volume workload has emerged. The bottleneck remains proof of carry extinction / integer anchoring.

### Metric catalog

**NO UPDATE.**

R_m and d_m are not promoted as candidate-ranking metrics. They belong in the structural theorem state, not the finite search metric registry.

### Compute budget

**NO UPDATE.**

No workload is frozen or authorized.

## 25. Relation to CDM4-T1 Theorems T1.1-T1.3

T2.1 and T2.2 refine the object to which T1.3 applies: exact accelerated valuation prefixes produce nested canonical start cylinders with explicit lift digits.

T2.3 strengthens T1.3 operationally by making stabilization equivalent to boundedness, eventual zero carry, an exact cross-level inequality, and a cross-normalized limit criterion.

T2.4 uses T1.1 together with the elementary finite-state consequence of boundedness to show that positive-orbit boundedness and eventual parity periodicity are equivalent. This is what makes aperiodicity itself a sufficient unboundedness theorem after anchoring.

T1.2 remains fully active: no finite whole-progression return graph is revived.

## 26. Relation to CDM2-R1/R2 finite-depth freedom

R1/R2 prove that no finite prefix and no finite family of current inverse kills forces a favorable finite future parity block across all lifts.

T2 does not try to defeat this at finite depth.

Instead, the exact digits d_m describe how the unique canonical start representative changes as infinitely many exact future valuations are imposed.

At every finite level many ordinary lifts exist. The positive-integer question appears only in the infinite behavior of the canonical representative:

- eventual d_m=0 gives a finite ordinary anchor;
- infinitely many nonzero d_m gives a genuinely infinite 2-adic start point.

Thus R1/R2 and T2 fit together cleanly:

finite levels preserve freedom;
infinite refinement creates a unique 2-adic point;
carry extinction decides whether that point lies in the ordinary nonnegative integers.

## 27. End-of-session classification

**C — NEW ANCHORING / APERIODICITY OBSTRUCTION FOUND.**

T2 did not produce an integer-anchored aperiodic growth structure.

It did produce an exact anchor recurrence and a stronger equivalence package that sharply constrains every finite-alphabet recursive valuation language. It also identifies a peer-reviewed route kill for all irrational mechanical E-sequences, including examples with formally favorable growth.

No explicit candidate exists.

No explicit unbounded orbit was found.

No counterexample is claimed.

## 28. Answers to the final questions

1. **What is the exact residue/cylinder representation of an accelerated valuation prefix?**  
   For A_m=sum a_i and C_{m+1}=3C_m+2^{A_m}, exact realization is the unique cylinder
   R_m == 3^{-m}(2^{A_m}-C_m) (mod 2^{A_m+1}).
   The modulus 2^{A_m+1} enforces both integrality and endpoint oddness, hence exact valuations.

2. **What exact criterion characterizes when an infinite compatible tower represents one positive integer?**  
   Its canonical representatives eventually stabilize to a positive value. Equivalently, the exact carry digits d_m are eventually zero. For the accelerated cylinders the stabilized value is the start N.

3. **Can eventual stabilization be replaced by a useful boundedness or recurrence criterion?**  
   **YES.** It is equivalent to bounded R_m, eventual d_m=0, eventual R_{m+1}<2^{A_m+1}, and R_{m+1}/2^{A_m+1}->0. With bounded valuations it is also equivalent to R_m/2^{A_m+1}->0.

4. **Can a primitive substitution or morphic valuation word be realized by a positive Collatz integer?**  
   **UNKNOWN in general.** Wang rules out the entire irrational mechanical E-sequence class, which contains important Sturmian/substitutive examples, but no theorem found here rules out every aperiodic primitive substitution or morphic word.

5. **If so, can its valuation sums force unbounded growth?**  
   If its weighted mean valuation satisfies alpha<log_2 3, yes: the exact affine lower bound gives exponential growth. More generally, if the anchored language is provably aperiodic, T2.4 already forces unboundedness without a quantitative growth-rate theorem.

6. **If not, what theorem rules it out?**  
   For irrational mechanical valuation words, Wang's 2019 peer-reviewed theorem proves they are not E-sequences of any odd positive integer. No general primitive-substitution exclusion theorem is promoted in T2.

7. **Can a finite transducer with an unbounded counter/scale parameter escape T1?**  
   **YES in principle.** T2.2 is itself a finite recurrence with unbounded exact arithmetic state. The new obligation is to prove its anchor carry eventually vanishes. Finite bounded autonomous control alone remains killed by T1.1.

8. **Can mixed 2-adic/3-adic compatibility force a finite ordinary-integer anchor?**  
   **No such theorem was found.** The mixed endpoint identity exposes the same carry d_m but does not bound it. Finite CRT compatibility remains insufficient.

9. **Can least-divergent minimality help prove boundedness/stabilization of the start residues?**  
   **No non-circular theorem was found.** The actual least divergent N would of course stabilize its own residues, but this assumes the anchor rather than constructs it.

10. **What broad recursive language classes were killed?**  
    In addition to T1's periodic/bounded-state/progression-family classes, T2 kills irrational mechanical accelerated valuation words as positive-integer anchors via Wang, including growth-favorable choices with 1<theta<log_2 3.

11. **What is the strongest new theorem or obstruction?**  
    The exact valuation-cylinder and anchor-carry theorem T2.1-T2.3, together with the bounded-alphabet normalized-residue equivalence. T2.4 further shows that an aperiodic positive anchor alone would certify unboundedness.

12. **What is the strongest surviving framework?**  
    An explicitly aperiodic finite recursive valuation language whose exact cylinder recurrence can be proved to have eventual zero anchor carry.

13. **What one proof obligation now blocks certification?**  
    Prove d_m=0 eventually, equivalently bounded/stabilizing R_m, for one explicit aperiodic recursively defined valuation/parity word, with stabilized N>1.

14. **Is any new scientific compute justified?**  
    **NO.**

15. **Is a new generator/distribution justified?**  
    **NO.**

16. **Is GPU work justified?**  
    **NO.**

17. **Was any explicit candidate found?**  
    **NO.**

18. **Was any explicit unbounded orbit found?**  
    **NO.**

19. **Was any counterexample claimed?**  
    **NO.**

20. **What exact next action is authorized?**  
    **CDM4-T3 theory only:** audit eventual-zero anchor carry for finite-alphabet recursive languages, beginning with primitive substitutions/morphic words; independently verify any load-bearing use of the López-Stoll 2021 parity-density preprint before promoting a broad automatic/substitution obstruction. No scientific starts, finite-code optimization, new generator/distribution, GPU, cloud, distributed or volunteer search is authorized.

## 29. Permanent interpretation

CDM4-T2 changes the missing bridge from an existence slogan into an exact arithmetic recurrence.

The positive-integer problem is no longer merely:

“Does the nested 2-adic cylinder stabilize?”

It is:

“Do the exact mixed-radix anchor digits d_m eventually become zero?”

For finite valuation alphabets, this is equivalently a concrete asymptotic statement about the canonical start representative.

The session also removes a redundant burden from the strongest surviving certificate. Once an exact positive anchor is coupled to a proved aperiodic Collatz language, unboundedness follows from determinism and finiteness of bounded state space. The hard part is therefore the anchor.

The most tempting structured growth examples confirm rather than evade this diagnosis: irrational mechanical valuation words can have excellent exact growth rates while Wang's theorem proves that no positive integer realizes them.

The next mathematical language must therefore explain why an aperiodic recursive word has **finite support in the anchor-carry expansion**.

That is the precise theorem now separating finite recursive description from an explicit unbounded Collatz orbit.
