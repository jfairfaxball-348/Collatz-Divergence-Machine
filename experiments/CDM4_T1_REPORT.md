# CDM4-T1 — Recursively Closed Divergence-Mechanism Audit

**Date:** 2026-10-02  
**Session type:** mathematical / structural audit with focused literature review.  
**Scientific Collatz starts generated:** **ZERO.**  
**GPU work:** **NONE.**  
**New generator or sampling distribution:** **NONE.**  
**Counterexample found or claimed:** **NO.**  
**End-of-session classification:** **C — NEW THEORETICAL OBSTRUCTION FOUND.**

## 1. Executive result

CDM4-T1 did not find an explicit positive integer with a rigorously unbounded Collatz orbit. It did, however, sharpen the finite-description-to-infinite-behavior bottleneck into three exact project-level obstructions and one precise surviving framework.

The main proved conclusions are:

1. **Eventually periodic parity cannot support positive-integer divergence.** If the shortened-map source-parity sequence of a positive integer is eventually periodic, then the orbit is eventually periodic and therefore bounded. In particular, a finite Collatz block with net multiplier greater than one cannot be repeated forever by any positive integer.

2. **A finite graph of whole arithmetic-progression families cannot close recursively under fixed positive-length Collatz blocks.** If an edge maps an entire source progression into a target progression using one fixed parity block, the 2-adic valuation of the family period drops by at least the block length. A directed cycle would require a strict net drop back to the same period, which is impossible.

3. **Compatible residue towers can exist without representing an ordinary positive integer.** For nested moduli tending to infinity, a compatible canonical residue tower represents a fixed nonnegative integer if and only if its canonical residues eventually stabilize. Thus compactness or inverse-limit existence in a 2-adic, 3-adic, or mixed profinite space is not the missing positive-integer anchoring theorem.

These statements remove a broad natural class of proposed recursive mechanisms. They also clarify what survives:

> A viable finite-description certificate must be genuinely aperiodic at the orbit-code level or carry an unbounded scale/refinement parameter, and it must prove ordinary-positive-integer realization rather than merely construct a 2-adic/profinite point.

The strongest surviving candidate framework is therefore an **aperiodic recursively generated parity/valuation language with an exact positive-integer anchoring theorem and a rigorous growth theorem**.

A particularly sharp sufficient target is:

- a finite recursive grammar/substitution produces an infinite accelerated valuation sequence a_1,a_2,...;
- its exact starting parity-cylinder residues eventually stabilize to an explicit odd positive integer N;
- with A_m = a_1+...+a_m, the quantity 3^m / 2^A_m is unbounded (or, more strongly, tends to infinity).

If all three are proved, the accelerated odd iterates satisfy

x_m = (3^m N + C_m) / 2^A_m >= N 3^m / 2^A_m,

so the orbit is unbounded. An orbit that is unbounded cannot have reached 1 earlier, since the accelerated odd map fixes 1. This would be a genuine divergence certificate.

No such grammar, substitution, or explicit anchor was found in T1.

Accordingly, no new scientific compute is justified. P3, new distributions, GPU work, and finite exponent-code optimization remain unauthorized.

## 2. Certification-target decomposition

A valid divergence certificate must contain substantially more than a favorable finite block.

One sufficient abstract certificate is the following.

Let S be a rigorously defined subset of the positive integers. For every x in S, define an exact positive return time k(x) and a return map

R(x) = T^{k(x)}(x).

It is sufficient to prove all of:

1. **Explicit anchor:** an explicit positive integer N belongs to S.
2. **Exact recursive closure:** R(x) belongs to S for every permitted x in S.
3. **No hidden finite branch:** k(x) is a finite positive integer and every return block is exactly a legal Collatz segment.
4. **Indefinite continuation:** the closure theorem applies after every return, not merely for a bounded number of levels.
5. **Progress:** there is an integer-valued H on S with H(R(x)) > H(x) for every return, or another exact estimate forcing a return subsequence to be unbounded.
6. **1-basin exclusion:** no permitted block reaches 1 before its next return, or unboundedness is proved in a representation in which reaching 1 would make later growth impossible.

Then H grows without bound along the return sequence, so the corresponding orbit cannot remain in a finite set. The orbit is unbounded and never reaches 1.

The same logic extends to a finite family S_i with exact edges e:i->j, provided source membership determines a valid edge indefinitely and every edge preserves closure and progress.

The load-bearing item is **recursive closure**. A block that grows once, a favorable finite valuation debt, or a graph of possible words is not enough.

## 3. Exact representations investigated

### 3.1 Shortened-map parity blocks

For a realizable source-parity word w of length K with f odd source states,

T^K(n) = (3^f n + c_w) / 2^K,

where c_w is a nonnegative integer and c_w>0 if f>0.

The word w corresponds to one residue r_w modulo 2^K. Every lift is

n = r_w + 2^K q,

and the endpoint has the R1 form

T^K(n) = 3^f q + b_w.

For any next word v of length s, exactly one class q modulo 2^s continues w by v. Equivalently, the concatenation wv corresponds to one refinement of the starting residue modulo 2^{K+s}.

Thus concatenating prescribed blocks consumes additional 2-adic precision. Repeating a block m times determines one start residue modulo 2^{mK}; it does not create finite-modulus self-closure.

### 3.2 Accelerated odd-map valuation blocks

For odd x_0, write

x_i = U(x_{i-1}) = (3x_{i-1}+1)/2^{a_i},

where a_i = v_2(3x_{i-1}+1) >= 1.

Let

A_m = a_1+...+a_m,    A_0=0.

Repeated substitution gives the exact identity

x_m = (3^m x_0 + C_m) / 2^{A_m},

with

C_m = sum_{j=0}^{m-1} 3^{m-1-j} 2^{A_j}.

Every term of C_m is positive. Therefore

x_m >= x_0 3^m / 2^{A_m}.

This gives a simple sufficient growth theorem: if an exact infinitely realized valuation language satisfies

limsup_{m->infinity} 3^m / 2^{A_m} = infinity,

then its odd subsequence is unbounded.

For example, a uniform asymptotic inequality

A_m <= (log_2 3 - epsilon)m + O(1)

for any epsilon>0 forces exponential growth. The missing issue is not this growth inequality. It is exact infinite realization by one positive integer.

### 3.3 Finite family graphs

The strongest possible graph formulation audited was:

- a finite set of vertices;
- each vertex is an explicitly defined infinite family of positive integers;
- each edge carries one fixed legal Collatz block;
- the edge maps every relevant source-family member into the target family;
- the graph can be iterated indefinitely;
- an exact height grows on every edge.

A graph that merely records which parity blocks are combinatorially possible is insufficient. The family-membership map must be an exact theorem.

### 3.4 Nested residue / inverse-limit systems

A recursive symbolic construction naturally creates a tower

r_j modulo M_j,

with M_j dividing M_{j+1} and M_j tending to infinity.

Such towers are natural for:

- longer parity prefixes;
- accelerated valuation words;
- mixed 2-adic / 3-adic compatibility;
- recursively refined inverse-tree survivor families.

Finite compatibility at every level can yield a perfectly valid point in an inverse limit while failing to yield any ordinary positive integer. Section 6 gives the exact anchoring criterion.

## 4. Theorem T1.1 — periodic-recursion obstruction

**Status: PROVED in CDM4-T1 from the repository's exact parity-residue theorem.**

### Statement

If the shortened-Collatz source-parity sequence of a positive integer is eventually periodic, then its Collatz orbit is eventually periodic and hence bounded.

Consequently:

- no positive divergent orbit can have an eventually periodic parity sequence;
- no fixed expanding parity block can be recursively self-applied forever by a positive integer;
- no autonomous finite-state deterministic block machine, with finitely many states and a fixed outgoing transition from each state, can certify positive-integer divergence.

### Proof

First suppose the parity sequence is purely periodic with period K.

Let x be the corresponding state. Then x and T^K(x) have exactly the same infinite source-parity sequence, because shifting the periodic sequence by K changes nothing.

For every s>=1, a realizable length-s parity word determines a unique starting residue modulo 2^s. Therefore x and T^K(x) are congruent modulo 2^s for every s.

Their difference is divisible by every power of 2, hence

T^K(x)=x.

So x is periodic and its orbit is bounded.

If the parity sequence is only eventually periodic, apply the same argument to the state reached at the beginning of the periodic tail. The original orbit is then eventually periodic and bounded. QED.

### Expanding-block corollary

Let one repeated period contain f odd steps and have affine constant c. Then its period map is

F(x) = (3^f x+c)/2^K.

Pure periodicity forces F(x)=x, so

(2^K-3^f)x=c.

If 3^f>2^K and f>0, then c>0 while the denominator 2^K-3^f is negative, forcing x<0. Thus:

> A parity block with net multiplier 3^f/2^K>1 has no positive integer that repeats that block forever.

If f=0, the only fixed point of the all-even block is x=0. If 3^f<2^K, a positive fixed point is not a divergent mechanism; it is bounded periodic behavior.

This kills the simplest proposed route

S -> fixed growing block -> S

when S means exact repetition of the same parity pattern.

### Finite deterministic automaton corollary

An autonomous deterministic machine with finitely many control states eventually repeats a control state. Its sequence of fixed edge labels is then eventually periodic. If those labels are exact Collatz parity blocks, the actual parity sequence is eventually periodic, so the orbit is bounded.

A viable finite description must therefore obtain nonperiodicity from something not contained in a finite autonomous state alone: for example an unbounded counter/scale parameter, a growing substitution word, or exact branching determined by unbounded arithmetic state.

## 5. Theorem T1.2 — arithmetic-progression closure obstruction

**Status: PROVED in CDM4-T1. This is the strongest new route-kill of the session.**

### Setup

Let a vertex family be one full arithmetic-progression tail

S_i = { r_i + M_i q : q >= q_i },

with M_i>0.

Suppose an edge e:i->j is represented by one fixed realizable parity block of positive length K_e, containing f_e odd steps, and suppose:

1. every sufficiently large member of S_i follows that exact block; and
2. the block endpoint of every such member lies in S_j.

### Lemma 5.1 — source period must contain the block's 2-adic precision

Two starts have the same length-K_e parity word only if they are congruent modulo 2^{K_e}.

Consecutive members of S_i differ by M_i. Therefore

2^{K_e} divides M_i.

### Lemma 5.2 — target period divides the affine image step

For n_q=r_i+M_iq, the fixed block gives

T^{K_e}(n_q)
 = (3^{f_e}r_i+c_e)/2^{K_e}
   + (3^{f_e}M_i/2^{K_e})q.

The difference between endpoints for consecutive q is

D_e = 3^{f_e}M_i/2^{K_e}.

Because all endpoints lie in the one target progression S_j, their differences are multiples of M_j. Hence

M_j divides D_e.

Taking 2-adic valuations and using that 3^{f_e} is odd,

v_2(M_j) <= v_2(M_i)-K_e.

Since K_e>=1, every such edge strictly consumes 2-adic period depth.

### Theorem

No directed cycle of such edges can exist.

Indeed, around a directed cycle e_1,...,e_t returning to i,

v_2(M_i)
 <= v_2(M_i) - (K_{e_1}+...+K_{e_t}),

which is impossible because every K_e is positive. QED.

### Consequence

A finite directed graph whose vertices are full arithmetic-progression families and whose edges are whole-family fixed-block Collatz maps cannot contain an infinite recursively closed path: a finite graph with an infinite path must contain a directed cycle, and such a cycle is impossible.

This theorem does **not** rule out:

- recursively shrinking subfamilies;
- nested congruence cylinders whose modulus grows at every return;
- nonlinear/infinite-depth families;
- aperiodic substitution systems;
- state descriptions with an unbounded scale variable.

Those surviving cases are exactly where an integer-anchoring theorem becomes necessary.

## 6. Theorem T1.3 — ordinary-integer anchoring criterion for nested residues

**Status: PROVED in CDM4-T1. The underlying arithmetic fact is elementary; a closely related start-representative stabilization condition also appears in contemporary exponent-code work.**

### Statement

Let

M_1 | M_2 | M_3 | ... ,     M_j -> infinity,

and let r_j be canonical residues with

0 <= r_j < M_j,

satisfying the compatibility condition

r_{j+1} == r_j (mod M_j).

Then there exists one ordinary nonnegative integer N satisfying

N == r_j (mod M_j)

for every j if and only if the canonical residues r_j are eventually constant. In that case their eventual constant value is N.

### Proof

If such an N exists, choose j large enough that M_j>N. The canonical residue of N modulo M_j is then N itself, so r_j=N. The same is true for every later modulus. Thus r_j eventually stabilizes.

Conversely, if r_j=N for all j>=J, compatibility implies N has every earlier residue as well, so N satisfies the full tower. QED.

### Parity-language corollary

An infinite shortened-map parity word determines a compatible sequence of exact starting residues

r_K modulo 2^K.

That infinite word is realized by one nonnegative ordinary integer N if and only if the canonical r_K eventually stabilize to N.

Therefore a recursively generated 2-adic parity point is not enough. A proof must show that its inverse parity-residue tower eventually becomes one ordinary integer.

### Mixed-adic corollary

The same statement applies to any nested mixed modulus such as

M_j = 2^{K_j}3^{A_j}

when both exponents are nondecreasing and M_j tends to infinity.

Thus a nonempty compatible mixed 2/3-adic inverse limit can still be merely a profinite object. Finite-level CRT compatibility does not supply an ordinary positive integer.

## 7. Relation to the CDM2-R1/R2 finite-depth obstruction

T1 does not contradict R1/R2. It identifies what an escape from them would have to do.

R1 says that after one fixed length-K prefix,

T^K(r+2^Kq)=3^f q+b,

and q modulo 2^s can realize every next length-s parity block.

R2 says that every finite family of current inverse kills is eventually periodic modulo a power of 3; if one sufficiently large survivor residue remains, CRT combines it with every desired q modulo 2^s.

Therefore every **finite level** retains future freedom.

An infinite recursively nested construction can escape that theorem only by imposing compatibility across unboundedly many levels. But T1.3 shows the new danger:

> Infinite compatibility may produce a 2-adic or profinite point without producing an ordinary positive integer.

Thus the finite-depth obstruction and the infinite-depth anchoring obstruction form a two-stage barrier:

1. finite data do not constrain the future enough;
2. infinite nested data may constrain the future but lose the positive-integer anchor.

A successful mechanism must cross both barriers simultaneously.

## 8. Finite-state and substitution systems

### 8.1 Killed class: autonomous deterministic finite-state block machines

Killed by T1.1. Finite deterministic control eventually cycles, producing an eventually periodic edge/block word and therefore a bounded Collatz orbit.

### 8.2 Killed class: finite progression-family return graphs

Killed by T1.2. Whole-family progression closure loses 2-adic period depth on every positive-length edge, so no directed cycle can close.

### 8.3 Surviving class: aperiodic substitutions / morphic recursive languages

A substitution on a finite alphabet can have a finite description while generating a non-eventually-periodic infinite word because each substitution level grows.

Such a system is not killed by T1.1.

If its symbols encode accelerated valuation blocks, a substitution matrix or another exact recurrence can in principle prove a long-term bound on

A_m = sum_{i<=m} a_i,

and hence prove unbounded multiplicative growth.

But that would still leave the central realization obligation:

> prove that the exact parity-cylinder start residues generated by all substitution levels eventually stabilize to one explicit positive integer.

No substitution system satisfying both the growth and anchoring obligations was found.

Therefore substitution systems survive as a framework, not as a result.

## 9. 2-adic / 3-adic coupling at infinite depth

The finite R2 CRT theorem depends on finite independent moduli. An infinite code couples its prefixes nonlocally because every level must extend the previous one.

A useful exact structural state for an accelerated code consists of:

- A_m, the accumulated power of 2;
- C_m, the affine correction;
- a starting residue/cylinder compatible with the first m valuations;
- an endpoint residue modulo 3^m;
- the real growth ratio 3^m/2^{A_m}.

The affine recursion is exact:

A_{m+1}=A_m+a_{m+1},

C_{m+1}=3C_m+2^{A_m}.

A July 2026 preprint by Oliver Kramer independently studies finite accelerated exponent codes through a real drift, a 2-adic start representative, and a 3-adic endpoint representative. It proves necessary asymptotic compatibility conditions for codes generated by one fixed positive integer and explicitly states that the proposed finite diagnostics are not a verification method.

This is relevant to CDM4 because it confirms that a coupled 2/3/infinity representation is mathematically natural. It does **not** authorize a new finite-code optimization campaign here.

For CDM4 purposes the exact requirement is stronger and simpler:

- the starting cylinder must anchor to one ordinary positive integer;
- the recursively generated code must be exact indefinitely;
- the real growth lower bound must be unbounded.

Finite improvements in residue rates, drift, or a combined score remain finite diagnostics and are not certification evidence.

## 10. Global least-divergent minimality

R2 already proves, conditional on a least divergent positive integer N, that

T^j(N)>N for every j>=1,

and that all forward states are distinct.

T1 asked whether the infinite family of inequalities can create a stronger recursive object than its finite truncations.

The answer found here is negative but more precise.

For any fixed K, the minimality inequalities reduce to the R2 K-survival restrictions. Passing to all K creates a nested infinite condition, but a proof based only on nonempty compatible residue cylinders risks producing a 2-adic point rather than an ordinary integer.

For the actual fixed N, the start-residue tower must eventually stabilize to N once the modulus exceeds N. Thus any global-minimality argument that genuinely improves on finite K must exploit the **whole stabilized integer anchor**, not merely compactness of the finite survivor sets.

No non-circular theorem of that kind was found.

The strongest exact restatement is therefore:

> Global least-divergent minimality can beat the finite-depth obstruction only through a theorem about the entire compatible tower; finite intersection/compactness alone is insufficient because ordinary-positive-integer realization requires eventual canonical-residue stabilization.

## 11. Inverse-tree recursion

Finite inverse-tree scoring remains blocked by R2.

A recursively self-similar inverse subtree would be relevant only if it produced a forward invariant or return invariant for an explicit positive integer. Merely having many predecessors, or avoiding all kills to a growing finite depth, does not do this.

If a recursive inverse construction is represented by nested congruence classes, T1.3 applies: its inverse limit may exist without an ordinary integer anchor.

If instead it maps full arithmetic progression families around a finite return graph, T1.2 applies and kills the cycle.

Thus a surviving inverse-tree route must introduce genuinely non-periodic/nested structure plus a separate positive-integer anchoring theorem. No such invariant subtree was found.

## 12. Other mathematical languages audited

### 12.1 2-adic symbolic dynamics

Bernstein and Lagarias prove that the shortened 3x+1 map on Z_2 is conjugate to the one-sided shift, and that the conjugacy induces permutations modulo 2^n.

This fully supports the parity-word freedom used in R1 and explains why finite symbolic words are easy to realize 2-adically.

It also emphasizes the T1 distinction: symbolic existence in Z_2 is not the same as positive-integer realization.

Reference:

Daniel J. Bernstein and Jeffrey C. Lagarias, The 3x + 1 Conjugacy Map, Canadian Journal of Mathematics 48 (1996), 1154-1169. DOI 10.4153/CJM-1996-060-x.

Daniel J. Bernstein, A non-iterative 2-adic statement of the 3N+1 conjecture, Proceedings of the AMS 121 (1994), 405-408.

### 12.2 Continuous shift endomorphisms / block maps

Kraft and Monks classify certain conjugacies induced by continuous endomorphisms of the shift system.

This is useful evidence that sophisticated finite/block symbolic transformations exist on the 2-adic dynamical system. It does not supply the missing positive-integer invariant family or growth certificate.

Reference:

Benjamin Kraft and Keenan Monks, On conjugacies of the 3x+1 map induced by continuous endomorphisms of the shift dynamical system, Discrete Mathematics 310 (2010), 1875-1883. DOI 10.1016/j.disc.2010.02.009.

### 12.3 Accelerated exponent / E-sequence languages

SanMin Wang's E-sequence preprint explicitly studies which infinite valuation sequences are realized by an odd positive integer. This is directly aligned with the T1 anchoring obligation, although it is a preprint and its claims are not imported here as load-bearing theorems.

Oliver Kramer's 2026 preprint gives a modern finite exponent-code diagnostic with real, 2-adic and 3-adic coordinates and proves necessary compatibility behavior for codes generated by a fixed positive integer.

These papers reinforce the choice of valuation language as a legitimate structural representation. They do not currently provide an explicit recursively generated divergent positive integer.

References:

SanMin Wang, An E-sequence approach to the 3x + 1 problem, arXiv:1809.02278.

Oliver Kramer, Adaptive Search in Collatz Exponent-Code Space via 2-adic and 3-adic Constraints, arXiv:2607.10041.

### 12.4 Rational base 3/2

Eliahou and Verger-Gaugry give a peer-reviewed rational-base 3/2 representation in which the odd shortened step n -> (3n+1)/2 has an exact word operation: for odd n, the representation of the image is obtained by appending a digit 1.

This is a genuinely different symbolic language and may be useful for exposing word recurrences or odometer structure. However, CDM4-T1 found no theorem in that representation providing recursive closure plus forced unbounded growth.

Reference:

Shalom Eliahou and Jean-Louis Verger-Gaugry, The number system in rational base 3/2 and the 3x+1 problem, Comptes Rendus Mathematique 363 (2025), 329-336. DOI 10.5802/crmath.662.

### 12.5 The 3x+1 semigroup

Applegate and Lagarias characterize a multiplicative semigroup that encodes backward iteration and contains every positive integer.

This is mathematically exact and useful for backward reachability, but its semigroup multiplication permits representations not corresponding to one legal forward orbit. Therefore semigroup membership alone is too weak for a divergence certificate.

Reference:

David Applegate and Jeffrey C. Lagarias, The 3x+1 Semigroup, Journal of Number Theory 117 (2006), 146-159. DOI 10.1016/j.jnt.2005.06.010.

### 12.6 Diophantine approximation / S-unit viewpoint

Finite affine identities naturally create exponential Diophantine relations between powers of 2 and powers of 3. Such methods are powerful for finite closure equations and cycle-type equations, but CDM4-T1 found no imported theorem that turns them into an exact positive-integer aperiodic divergence mechanism.

The useful T1 lesson is scope discipline: a Diophantine bound on one finite block is not recursive closure. Any future use must control an infinite compatible family or a finite recurrence that automatically regenerates all required equations.

No S-unit theorem was imported as a new project result.

## 13. Route dispositions

### FAILED / killed in T1

1. **One fixed growing block repeated forever.**  
   Killed by T1.1: infinite repetition forces a periodic orbit; an expanding block's 2-adic fixed point is not positive.

2. **Autonomous deterministic finite-state block machine.**  
   Killed by eventual periodicity of the finite control path.

3. **Finite graph of full arithmetic-progression families with whole-family fixed-block edges.**  
   Killed by T1.2: every edge consumes 2-adic period depth and no directed cycle can close.

4. **Compactness / inverse-limit nonemptiness as an integer-existence proof.**  
   Killed by T1.3: a compatible residue tower may define only a profinite point.

5. **Finite exponent-code optimization as a substitute for realization.**  
   Rejected by existing finite-depth policy and by the exact anchoring requirement. Finite real/2-adic/3-adic diagnostics do not prove an infinite ordinary-integer orbit.

6. **Recursive inverse-tree richness without a forward invariant.**  
   Rejected: it does not force indefinite forward growth.

### SURVIVES as a framework only

1. **Aperiodic substitution/morphic valuation languages.**
2. **Nested mixed-adic cylinder systems with a proved ordinary-integer anchor.**
3. **Return systems with an unbounded scale/counter parameter rather than finite autonomous state.**
4. **Rational-base or transducer representations if they can prove exact recursive closure, not merely encode finite steps.**

No surviving framework currently contains an explicit candidate or a completed certification bridge.

## 14. Strongest surviving research direction

The strongest surviving framework is:

> **A finite recursive generator for an aperiodic accelerated valuation language, coupled to exact start-cylinder stabilization and a provable growth recurrence.**

The target theorem can be stated without heuristic metrics.

Let G generate a unique infinite sequence a_1,a_2,... of positive integers. Define A_m and C_m by

A_0=0, C_0=0,

A_{m+1}=A_m+a_{m+1},

C_{m+1}=3C_m+2^{A_m}.

Let R_L be the unique exact shortened-parity cylinder residue corresponding to the valuation prefix through level L, including the endpoint-odd condition needed to make the valuations exact.

A qualifying theorem would prove:

1. **Anchor:** R_L is eventually equal to one explicit odd N>1.
2. **Exact realization:** consequently N realizes every generated valuation a_i.
3. **Growth:** limsup 3^m/2^{A_m}=infinity, preferably from a finite substitution/recurrence theorem.
4. **Nonperiodicity:** the generated parity sequence is not eventually periodic, automatically necessary by T1.1.

Then

x_m >= N 3^m/2^{A_m}

is unbounded. Reaching 1 would force the accelerated odd orbit to remain 1 forever, contradicting unboundedness.

This would satisfy the root objective.

## 15. Single missing proof obligation

The central obligation is now sharper than “find recursive closure.”

It is:

> **Construct, or rule out for a broad recursive class, an aperiodic finitely generated parity/valuation language whose exact starting residue tower eventually stabilizes to one explicit positive integer while its accumulated valuations force an unbounded real growth factor.**

The anchoring and growth requirements must hold for the **same infinite language**.

Solving only the growth side produces a 2-adic/profinite phantom risk.

Solving only the anchoring side merely describes the actual orbit of a fixed integer and gives no divergence.

This simultaneous condition is the missing bridge.

## 16. Compute / generator / GPU decision

### New scientific compute

**NOT JUSTIFIED.**

T1 produced no explicit recursive candidate needing finite validation and no theory-derived population over which a bounded search would answer a new question.

### New generator or sampling distribution

**NOT JUSTIFIED.**

The surviving object is a theorem-level recursive language/anchor problem. Designing a population of finite valuation codes before obtaining an exact infinite-realization mechanism would revert to finite feature optimization.

### GPU work

**NOT JUSTIFIED.**

There is no new high-volume workload. The current bottleneck remains mathematical.

### Tiny validation calculations

No candidate-search calculation was run. The T1 conclusions are algebraic proofs. No scientific Collatz start was generated.

## 17. End-of-session classification

**C — NEW THEORETICAL OBSTRUCTION FOUND.**

The session did not produce a recursively closed divergence certificate. It did rigorously rule out a broad natural class of proposed mechanisms and sharpen the surviving problem.

The strongest project-new obstruction is T1.2: no finite cycle of full arithmetic-progression families can be recursively closed under whole-family fixed positive-length Collatz blocks because the required family period loses 2-adic valuation on every edge.

T1.1 additionally kills all eventual-periodic parity mechanisms, including repeated expanding blocks and autonomous deterministic finite-state block machines.

T1.3 identifies the exact positive-integer anchoring failure of inverse-limit constructions.

## 18. Answers to the final questions

1. **What exact form could a valid divergence certificate take?**  
   An explicit positive anchor in an exactly forward/return-invariant recursively closed family, with finite legal return times, exact 1-avoidance, and an integer-valued height increasing on every return; equivalently, an exact infinitely realized valuation language with an unbounded multiplicative growth lower bound.

2. **Can a finite Collatz block be made recursively self-applicable?**  
   Not by repeating one fixed parity block on a positive integer. Infinite repetition makes the parity sequence periodic, hence the orbit periodic and bounded. An expanding repeated block has no positive fixed point.

3. **Can a finite family of blocks form a closed, provably growing symbolic system?**  
   Not as an autonomous deterministic finite-state block machine, and not as a finite graph of whole arithmetic-progressions mapped by fixed blocks. More general aperiodic/nested systems are not ruled out.

4. **Can the 2-adic future-parity freedom and 3-adic inverse constraints be coupled at infinite or recursive depth?**  
   In principle yes: an infinite recursively compatible code couples all levels, and modern exponent-code work explicitly tracks both coordinates. But finite-level compatibility is insufficient, and no positive-integer growth certificate was found.

5. **Does global least-divergent minimality imply anything stronger than every finite K-survival condition?**  
   No additional effective theorem was found. Any stronger argument must use the full compatible tower and its stabilized ordinary-integer anchor; finite truncation or compactness alone does not improve R2.

6. **Is there a recursively defined valuation/parity language realized by an explicit positive integer and forcing growth?**  
   None found.

7. **Can inverse-tree mathematics produce a recursively invariant forward-growth structure rather than finite pruning?**  
   No qualifying structure was found. Finite inverse rules remain pruning; nested inverse systems still face the integer-anchor obligation.

8. **What proposed routes were killed, and exactly why?**  
   Fixed repeated growing blocks and deterministic finite-state machines fail by eventual periodicity; whole-progression return graphs fail by strict loss of 2-adic period depth; inverse-limit existence fails to imply an ordinary integer unless canonical residues stabilize; finite exponent-code diagnostics remain finite evidence.

9. **What is the strongest theorem or obstruction obtained?**  
   T1.2, the arithmetic-progression closure obstruction, together with T1.1 and T1.3 as complementary barriers.

10. **What is the strongest surviving candidate framework?**  
    An aperiodic finite substitution/recursive valuation language with exact positive-integer anchoring and provable accumulated-valuation growth.

11. **What single proof obligation blocks that framework from certification?**  
    Prove simultaneous eventual stabilization of its exact starting residue tower to an explicit positive integer and unbounded growth of 3^m/2^{A_m} for the same infinite language.

12. **Is any new scientific compute justified?**  
    **NO.**

13. **Is a new generator/distribution justified?**  
    **NO.**

14. **Is GPU work justified?**  
    **NO.**

15. **Was any explicit unbounded orbit found?**  
    **NO.**

16. **Was any counterexample claimed?**  
    **NO.**

17. **What exact next action is authorized?**  
    A theory-only follow-up, provisionally **CDM4-T2 — APERIODIC INTEGER-ANCHOR / NESTED-CYLINDER THEOREM AUDIT**, focused on the simultaneous anchoring-and-growth obligation above. No scientific starts, GPU work, new generator, or finite-code ranker campaign is authorized.

## 19. Literature status and claim discipline

The project-level theorems T1.1–T1.3 were derived directly from exact arithmetic and the repository's already-proved parity-residue facts. No claim of global mathematical novelty or publication priority is made.

The focused literature audit was used to identify nearby frameworks and avoid mistaking standard 2-adic symbolic freedom for a new result.

The 2026 Kramer source is a recent preprint and is treated as such. Its finite diagnostics are not imported as proof of divergence.

No literature theorem was used to weaken the root certification standard.

## 20. Permanent interpretation

CDM4-T1 changes the shape of the search.

The missing finite object is unlikely to be a fixed loop of favorable blocks or a finite collection of ordinary congruence families. Exact Collatz blocks consume 2-adic information, and a positive divergent orbit cannot settle into periodic symbolic control.

A successful finite description must instead generate **unbounded information from finite rules**—for example through an aperiodic substitution or a scale parameter—and it must simultaneously prove that the resulting infinite symbolic object is anchored to one ordinary positive integer.

That is the precise bridge now separating symbolic elegance from a valid divergence certificate.

No progress toward a counterexample is claimed beyond this sharpening of the obstruction landscape.
