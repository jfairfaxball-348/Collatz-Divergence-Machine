# IRM-1 — Frozen Low-Complexity Exact Integer-Return Certificate Audit

**Date:** 2026-10-05  
**Programme:** IRM — Integer Return Mechanism Programme  
**Root objective:** find one explicit ordinary positive integer whose shortened-Collatz orbit is rigorously unbounded and never reaches 1.  
**Authoritative parent:** post-cdm4-root-bridge-reset at 4c9ad89c90f595d38d21d49c5270753eac22a22c.  
**Scientific trajectory compute:** NONE.  
**Template enumeration:** NONE.  
**Final decision:** **IRM1-C — FROZEN CLASS NULL / STRUCTURALLY RULED OUT.**

## 1. Executive conclusion

IRM-1 gives a complete **theorem-level null result** for the frozen certificate class. No enumeration is required.

For a fixed shortened-Collatz parity block of positive length \(r\), containing \(s\) odd steps, the exact action on its unique realizing residue class has the affine form

\[
T^r(n)=\frac{3^s n+c}{2^r}.
\]

Suppose a nonconstant ordinary-integer affine embedding

\[
F(q)=aq+b
\]

returns through that block to the same embedding via an integer-affine parameter map

\[
G(q)=uq+v,\qquad u,v\in\mathbb Z,
\]

on any infinite congruence cell. The exact identity

\[
T^r(F(q))=F(G(q))
\]

holds for infinitely many \(q\), so coefficient comparison forces

\[
u=\frac{3^s}{2^r}.
\]

Because \(\gcd(3^s,2^r)=1\), this cannot be an integer for any \(r\ge1\). If \(r=0\), then the identity forces \(u=1\) and \(v=0\), so \(G(q)=q\) and strict growth is impossible.

Therefore:

\[
\boxed{
\text{no nonconstant one-parameter affine embedding can have even one positive-depth self-return of the frozen integer-affine form.}
}
\]

This obstruction is local and precedes closure, growth, modulus bounds, cell count, and return-depth bounds. A finite congruence partition cannot circumvent it because every active positive-depth cell is ruled out separately.

The frozen IRM-1 class therefore contains:

- **0 complete certificates;**
- **0 positive near-certificates** under the programme's strict one-defect definition.

No candidate integer is produced. The root implication chain remains one nontrivial construction arrow away from an explicit unbounded orbit, but this particular arrow language has now been eliminated.

**IRM-2 is not authorized.** The null result does not justify a larger modulus, more cells, deeper returns, multiple parameters, rational-affine cell maps, or another enlarged template. Any later IRM session would require a separately justified root-proximate question under the post-CDM4 governance rules.

## 2. Repository-state verification

The requested post-pivot commit was verified exactly:

\[
\texttt{4c9ad89c90f595d38d21d49c5270753eac22a22c}.
\]

Its commit title is:

Post-CDM4: repair IRM roadmap math formatting

The branch post-cdm4-root-bridge-reset points exactly to this commit.

A direct comparison against main reports:

- status: **diverged**;
- main tip at session start: 66accafe9acb8c27a8925241c3554c3570f9782e;
- merge base: 3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb;
- main has 8 commits not in the post-pivot line;
- main is missing 80 commits present on the post-pivot line.

Hence the post-CDM4 branch has **not** been merged into main.

Per the authority rule, IRM-1 uses the exact post-pivot tip, not divergent main.

IRM-1 working branch:

\[
\texttt{irm1-exact-integer-return-certificate-audit}.
\]

It was created directly from the authoritative post-pivot tip.

## 3. CDM4 remains frozen

CDM4 remains **FROZEN**.

No CDM4-T32 report is created.

IRM-1 does not resume any pushy-morphic, S-adic, Mahler, toric, multiscale, moving-target, positive-anchor-obstruction, or broader symbolic-language programme. The proof below is ordinary-integer arithmetic on finite exact forward Collatz blocks.

The post-CDM4 strategic decision remains P1: test a root-proximate integer-return mechanism under a fixed, killable certificate language.

## 4. Frozen IRM-1 class audited

The audited class is exactly the session-frozen class:

- one nonconstant ordinary-integer affine embedding \(F(q)=aq+b\);
- \(q\) an ordinary nonnegative integer parameter on an admissible domain;
- at most 8 congruence cells;
- each cell modulus at most 64;
- one exact shortened-Collatz return per cell;
- each return depth \(\tau_j\le16\);
- each parameter return
  \[
  G_j(q)=u_jq+v_j
  \]
  with integer affine coefficients \(u_j,v_j\in\mathbb Z\);
- exact identity
  \[
  T^{\tau_j}(F(q))=F(G_j(q))
  \]
  for every admissible \(q\) in the cell;
- universal closure;
- ordinary-positive ownership;
- exact forward-orbit ownership;
- one common proper strictly increasing height;
- at least one explicit admissible \(q_0\);
- non-tautology.

Throughout this audit, “integer-affine” has its standard algebraic meaning: integer coefficients. This is also the reading under which the requested constraints on \(a,b,u,v\) are Diophantine constraints. Allowing rational coefficients that happen to be integer-valued on a chosen residue class would define a different certificate class and is not imported into IRM-1 after the freeze.

A viable certificate must be indefinitely iterable. Therefore its reachable parameter set is infinite. Since \(F\) is an embedding, it is nonconstant. On an unbounded nonnegative parameter orbit with \(F(q)>0\), the viable orientation is \(a>0\). The constant case \(a=0\) is separately rejected below as non-embedding and incapable of transferring parameter growth to physical orbit growth.

## 5. Root implication chain at session start

The shortest desired chain at the start of IRM-1 was

\[
\text{explicit }q_0
\Longrightarrow
N=F(q_0)
\Longrightarrow
\text{exact closed return system}
\Longrightarrow
\text{strictly increasing proper height at genuine forward return times}
\Longrightarrow
\text{unbounded Collatz orbit of }N
\Longrightarrow
N\text{ never reaches }1.
\]

All arrows after existence of the closed expanding return certificate are elementary consequences of the certificate definition.

The only unresolved nontrivial arrow at session start was:

\[
\boxed{\text{construct one nonempty exact closed expanding ordinary-integer return certificate.}}
\]

**Unresolved nontrivial arrow count at start: 1.**

IRM-1 does not reduce this count by construction; instead it proves that the frozen low-complexity language cannot realize that arrow.

## 6. Exact algebra of a finite shortened-Collatz block

Let a fixed length-\(r\) parity block be

\[
\varepsilon_0,\ldots,\varepsilon_{r-1}\in\{0,1\},
\]

where \(\varepsilon_i=1\) denotes an odd source state and \(\varepsilon_i=0\) an even source state.

Put

\[
s_k=\sum_{i=0}^{k-1}\varepsilon_i,\qquad s=s_r.
\]

For every integer following this block exactly, write

\[
T^k(n)=\frac{3^{s_k}n+c_k}{2^k}.
\]

Starting from \(c_0=0\), one step gives

\[
c_{k+1}=
\begin{cases}
c_k,&\varepsilon_k=0,\\
3c_k+2^k,&\varepsilon_k=1.
\end{cases}
\]

Hence

\[
c=c_r
=
\sum_{\substack{0\le i<r\\ \varepsilon_i=1}}
2^i3^{\,s-s_{i+1}},
\]

and the exact block action is

\[
\boxed{
T^r(n)=\frac{3^s n+c}{2^r}.
}
\]

Here \(c\ge0\) is an integer determined entirely by the parity block.

The first \(r\) parity decisions depend only on \(n\bmod 2^r\), and every binary parity word of length \(r\) is realized by exactly one residue class modulo \(2^r\). This is standard finite parity-vector structure and is also consistent with the Bernstein-Lagarias 2-adic conjugacy and with the finite lift formulas recorded in CDM2-R2 and Angeltveit 2026.

Thus each fixed block has one exact realizing residue class

\[
n\equiv \rho \pmod{2^r}.
\]

## 7. Parity consistency of an affine parameter cell

Let

\[
F(q)=aq+b
\]

and let one congruence cell be

\[
C(t,m)=\{q\ge q_{\min}: q\equiv t\pmod m\}.
\]

For every \(q\in C(t,m)\) to realize the same length-\(r\) parity block, it is necessary and sufficient that

\[
F(q)\equiv \rho\pmod{2^r}
\]

throughout the cell.

Since \(q=t+mk\), this is equivalent to the pair

\[
\boxed{
at+b\equiv \rho\pmod{2^r}
}
\]

and

\[
\boxed{
2^r\mid am.
}
\]

This is the exact interaction between the affine embedding and the congruence-cell modulus.

The modulus restriction can therefore help make a fixed parity block uniform on a cell. It does **not** alter the affine multiplier of the resulting Collatz block.

## 8. Exact compatibility equations for \(F\) and \(G\)

On one cell suppose the exact return has depth \(r\), odd-step count \(s\), affine constant \(c\), and parameter update

\[
G(q)=uq+v,\qquad u,v\in\mathbb Z.
\]

The required identity is

\[
\frac{3^s(aq+b)+c}{2^r}
=
a(uq+v)+b
\]

for every admissible \(q\) in the cell.

Multiplying by \(2^r\),

\[
3^saq+3^sb+c
=
2^rau q+2^rav+2^rb.
\]

Because a congruence cell contains infinitely many integers, equality on the cell is equality of the two affine functions. Therefore:

\[
\boxed{
a(3^s-2^ru)=0
}
\]

and

\[
\boxed{
3^sb+c=2^r(av+b).
}
\]

Equivalently, for a nonconstant embedding \(a\ne0\),

\[
\boxed{
u=\frac{3^s}{2^r}
}
\]

and

\[
\boxed{
2^rav=(3^s-2^r)b+c.
}
\]

These are the complete affine compatibility equations.

They are independent of the cell modulus except for the separate parity-consistency condition from Section 7.

## 9. Structural null theorem

### Theorem IRM1.1 — positive-depth integer-affine self-return obstruction

Let \(F(q)=aq+b\) be nonconstant. Let one infinite congruence cell of ordinary integer parameters follow a fixed positive-length shortened-Collatz block of length \(r\ge1\), containing \(s\) odd steps. There is no integer-affine map

\[
G(q)=uq+v,\qquad u,v\in\mathbb Z,
\]

such that

\[
T^r(F(q))=F(G(q))
\]

for every \(q\) in the cell.

#### Proof

Section 8 gives

\[
u=\frac{3^s}{2^r}.
\]

The numerator \(3^s\) is odd and \(\gcd(3^s,2^r)=1\). For \(r\ge1\), the reduced denominator is therefore \(2^r>1\), so \(u\notin\mathbb Z\). Contradiction. \(\square\)

### Corollary IRM1.1a — no partition escape

A finite congruence partition cannot circumvent Theorem IRM1.1. Every active cell with positive return depth is ruled out separately.

This is stronger than a search null over the declared limits. It does not depend on:

- the 8-cell bound;
- the modulus-64 bound;
- the depth-16 bound;
- the additive constants;
- the particular parity block;
- closure between cells;
- or the choice of initial \(q_0\).

### Corollary IRM1.1b — zero-depth returns cannot grow

If \(r=0\), then \(s=0\) and \(c=0\). Section 8 gives

\[
u=1
\]

and

\[
av=0.
\]

For \(a\ne0\),

\[
v=0,
\]

so

\[
\boxed{G(q)=q.}
\]

Thus a zero-depth return cannot strictly increase any height through a changed parameter state.

### Corollary IRM1.1c — the frozen class is empty

Every indefinitely iterable nonconstant frozen certificate would need at least one active return. Positive-depth returns are impossible by Theorem IRM1.1, while zero-depth returns are the identity and cannot satisfy strict growth.

Therefore the frozen class contains no complete certificate.

## 10. Constant-embedding and sign edge cases

### \(a=0\)

If \(a=0\), then \(F(q)=b\) is constant and is not an embedding.

Even if one artificially allowed it, any parameter growth could be disconnected from the physical Collatz state: all represented states would equal \(b\). A proper height such as \(H(q)=q\) could then be made to grow by an arbitrary bookkeeping map without proving that the actual orbit is unbounded.

This fails the ordinary-integer embedding intent, the non-tautology test, and the root implication chain. It is rejected.

### \(a<0\)

An indefinitely iterable certificate with a proper strictly increasing parameter height has infinitely many reachable parameter states. For nonnegative integer \(q\), an affine \(F(q)=aq+b\) with \(a<0\) cannot remain positive on an unbounded reachable parameter set.

Thus a viable ordinary-positive embedding has \(a>0\).

No sign loophole survives.

## 11. Strict growth and the parity-density condition

The exact multiplier identity explains the intended growth question.

If one temporarily ignores the frozen integrality requirement on \(u\), the asymptotic parameter multiplier on a fixed block is

\[
u=\frac{3^s}{2^r}.
\]

For the preferred condition \(G(q)>q\) on all sufficiently large \(q\), a positive-length block would require

\[
\frac{3^s}{2^r}>1,
\]

hence

\[
\boxed{
\frac{s}{r}>\frac{\log 2}{\log 3}\approx0.6309297536.
}
\]

The equality case \(3^s=2^r\) is impossible for positive integers \(r,s\).

Thus strict affine growth carries the familiar high odd-step-density requirement.

However, IRM-1 does **not** need a separate theorem proving that such density is incompatible with closure. The integer-affine coefficient obstruction is stronger: it rules out every positive-depth cell before the sign of \(3^s-2^r\) matters.

Known stopping-time and almost-all results likewise do not supply the IRM-1 null theorem. They constrain typical or asymptotic behavior but do not forbid a hypothetical exceptional finite closed subsystem. The null result here is exact local affine arithmetic.

## 12. Universal closure cannot repair the obstruction

Universal closure asks that every permitted return lands back in the admissible parameter domain and in a permitted cell.

But closure is a condition **after** a valid cell return exists.

Theorem IRM1.1 says that no positive-depth cell return of the required integer-affine form exists at all.

Therefore a finite collection of cells cannot average away the obstruction, and there is no meaningful “average multiplier” theorem to prove inside the frozen class. The result is stronger than “every local multiplier is at most 1”:

\[
\boxed{
\text{there is no positive-depth integer local multiplier }u\text{ of the required form at all.}
}
\]

## 13. Relation to earlier repository mathematics

### CDM4-T2

T2 showed how exact finite parity/valuation information defines precise ordinary-integer cylinders and emphasized that finite symbolic compatibility must not be confused with one ordinary positive anchor.

IRM-1 stays entirely on the ordinary-integer side. It uses finite parity cylinders only to certify an actual forward block and does not introduce a 2-adic anchor.

### CDM2-R2

R2 records the standard exact affine prefix form

\[
T^j(n)=\frac{3^{f_j}n+c_j}{2^j}
\]

and proves that lifts of one parity-prefix residue retain full finite future-parity freedom. IRM-1 uses the same exact affine structure but asks for a stronger object: a return to the same one-parameter embedding.

The coefficient comparison in Section 8 shows that the stronger self-return demand is incompatible with an integer-affine parameter update at any positive depth.

### CDM3-P2A

P2A identified the missing finite-description-to-infinite-behavior bridge and authorized theory only when it supplies recursively closed exact growth.

IRM-1 directly tests such a bridge. Its null result is therefore information about the bridge language, not another finite trajectory statistic.

## 14. External prior-art check

The external audit was deliberately narrow.

### Terras 1976 and Everett 1977

Terras, “A stopping time problem on the positive integers,” Acta Arithmetica 30 (1976), 241-252, and Everett's 1977 follow-up establish strong density results for finite stopping time and analyze residue-class structure.

Relevance:

- finite stopping-time classes are naturally organized by binary congruence information;
- these results do not rule out the frozen IRM-1 certificate class by themselves;
- no density theorem is used in the proof of Theorem IRM1.1.

Terras reference: https://eudml.org/doc/205476

### Bernstein-Lagarias 1996

Bernstein and Lagarias, “The 3x+1 Conjugacy Map,” Canadian Journal of Mathematics 48 (1996), 1154-1169, prove the 2-adic conjugacy and that the induced map modulo \(2^n\) is a permutation.

Relevance:

- supports the one-to-one finite parity-vector / power-of-two residue structure;
- does not provide ordinary-positive closure or growth.

DOI: 10.4153/CJM-1996-060-x

### Angeltveit 2026

Vigleik Angeltveit, “An improved algorithm for checking the Collatz conjecture for all \(n<2^N\),” arXiv:2602.10466, states that the first \(k\) parity decisions depend only on the last \(k\) bits and records the exact lift law across additions of \(2^k\).

Relevance:

- a contemporary confirmation of the exact finite affine/residue structure;
- preprint status;
- not load-bearing for the IRM-1 proof.

Reference: https://arxiv.org/abs/2602.10466

### Monks 2006; Monks et al. 2013

Kenneth M. Monks proved every nonconstant arithmetic progression is sufficient for the 3x+1 conjecture and analogous divergent-orbit questions. Monks, Monks, Monks and Monks later developed strongly sufficient residue sets and modular graph structure.

Relevance:

- arithmetic progressions can be unavoidable test sets for hypothetical divergent behavior;
- sufficiency is not forward invariance, exact self-return, or strict growth;
- these theorems neither construct nor rule out the frozen certificate by themselves.

Monks 2006: Proceedings of the AMS 134 (2006), 2861-2872, DOI 10.1090/S0002-9939-06-08567-4.  
Strongly sufficient sets: Discrete Mathematics 313 (2013), 468-489, DOI 10.1016/j.disc.2012.11.019.

### Applegate-Lagarias 2006

“The 3x+1 Semigroup” encodes backward iteration and proves a universal multiplicative semigroup statement.

Relevance:

- reinforces the post-pivot warning that a representation may be universal while not preserving one actual forward orbit;
- no semigroup result is needed for IRM1.1.

DOI: 10.1016/j.jnt.2005.06.010.

### Prior-art conclusion

No external result located in the targeted audit was needed to prove the frozen-class null. The obstruction is an elementary consequence of exact finite-block affine arithmetic plus the frozen integer-coefficient return requirement.

No claim of publication-level novelty is made.

## 15. Search method and theoretical reductions before enumeration

The frozen class was written down before any search.

Theoretical reduction then proceeded in this order:

1. derive the exact finite block
   \[
   T^r(n)=(3^s n+c)/2^r;
   \]
2. derive the exact parity-consistency conditions
   \[
   at+b\equiv\rho\pmod{2^r},\qquad 2^r\mid am;
   \]
3. impose the exact self-return identity;
4. compare coefficients on the infinite cell;
5. obtain
   \[
   u=3^s/2^r;
   \]
6. use coprimality of 3 and 2 to rule out integer \(u\) for every positive \(r\);
7. check the \(r=0\), \(a=0\), and sign edge cases.

At that point the full class was mathematically ruled out.

**Theoretical reductions were proved before enumeration: YES.**

## 16. Computation and frozen envelope

The authorized maximum envelope was:

- at most \(10^6\) certificate templates;
- at most 60 CPU-seconds;
- exact integer/rational arithmetic only;
- no floating-point validity decisions;
- no GPU;
- no cloud;
- no distributed compute;
- no random high-magnitude starts;
- no long-orbit campaign;
- no broad Collatz search;
- no open-ended parameter sweep.

Observed use:

- certificate templates enumerated: **0**;
- candidate trajectories executed: **0**;
- Collatz scientific starts generated: **0**;
- CPU-seconds of certificate enumeration: **0**;
- GPU/cloud/distributed work: **0**.

No executable search was necessary because Theorem IRM1.1 proves a complete null over the entire frozen class, and in fact over any cell count/modulus/depth bounds with the same nonconstant \(F\) and integer-affine \(G\) architecture.

## 17. Complete candidate certificates found

**0.**

No cell can satisfy a positive-depth exact integer-affine self-return for nonconstant \(F\), so no multi-cell certificate can exist.

## 18. Hostile verification

Because there are no surviving candidates, hostile verification is applied to the putative class as a whole.

### 18.1 Exact identity test

Passed as an obstruction: the exact symbolic identity yields the two coefficient equations in Section 8. These equations are incompatible with positive depth.

### 18.2 Parity-consistency test

Fully characterized by

\[
at+b\equiv\rho\pmod{2^r},\qquad 2^r\mid am.
\]

Parity consistency can hold, but it cannot repair the return-slope obstruction.

### 18.3 Closure test

Never reached for a positive-depth candidate. No valid local return exists to close.

### 18.4 Growth test

Never reached for positive depth. At depth zero, \(G(q)=q\), so strict growth fails.

### 18.5 Infinite-iterability test

Fails for the class because no positive-depth return exists and zero-depth returns are stationary.

### 18.6 Positivity test

No candidate reaches this stage. The viable sign analysis requires a nonconstant positive-oriented embedding.

### 18.7 Forward-ownership test

The derivation uses actual finite forward Collatz blocks throughout. There is no backward-tree or semigroup substitution.

### 18.8 Nonperiodicity / noncycle test

No expanding system exists. The zero-depth identity is stationary and cannot certify unboundedness.

### 18.9 Non-tautology test

The null proof does not rename unrestricted Collatz dynamics.

A constant \(F\) plus an artificially growing parameter is explicitly rejected as a fake bookkeeping semiconjugacy because it would detach parameter height from the physical orbit.

### 18.10 CDM4-relapse test

No infinite symbolic word, positive anchor, 2-adic point, Mahler theorem, or completion bridge is introduced.

**CDM4 relapse: NO.**

## 19. Exact null result

The exact IRM-1 null theorem is:

> For the shortened Collatz map, a nonconstant one-parameter affine embedding \(F(q)=aq+b\) cannot return to itself through any fixed positive-length parity block via an affine parameter map \(G(q)=uq+v\) with integer coefficients. On every infinite congruence cell, exact coefficient comparison forces \(u=3^s/2^r\), which is nonintegral for \(r\ge1\). The only zero-depth return is \(G(q)=q\). Therefore no finite congruence-partitioned collection of such returns can be universally closed and strictly expanding.

This proves the frozen class null without relying on bounded enumeration.

## 20. Positive near-certificate assessment

**Positive near-certificates found: 0.**

The strict near-certificate rule requires all but one certificate condition to be rigorously satisfied by a concrete mechanism, with one explicit defect and a mathematically compelled repair.

IRM-1 has no such object.

The fact that a rational slope \(3^s/2^r\) would be natural if rational-affine cell maps were allowed is **not** a positive near-certificate:

- no concrete universally closed growing mechanism with that one defect was found;
- permitting rational coefficients changes the frozen certificate language;
- the identity embedding with rational piecewise slopes immediately risks reproducing ordinary Collatz itself;
- “relax integer-affine” is therefore not a compelled repair of an otherwise complete certificate.

The null result does not authorize that enlargement.

## 21. Non-tautology assessment

The frozen architecture was non-tautological in intent because a finite closed expanding parameter system would have converted indefinite repetition into a theorem.

No such system exists.

The theorem also identifies one tautology hazard for any future independently authorized design: if the parameterization becomes \(F(q)=q\) and the permitted piecewise maps are simply the usual rational affine branches of \(T\), the construction has merely renamed Collatz unless a genuinely new closed monotone subsystem is proved.

That observation is recorded as a governance warning only, not as an IRM-2 proposal.

## 22. IRM viability assessment

IRM-1 produced a useful kill theorem rather than a positive object.

Positive facts:

- the frozen class is eliminated exactly, not merely searched unsuccessfully;
- the obstruction is simple, reusable, and local;
- no compute ladder was triggered;
- no symbolic/completion bridge reappeared.

Negative facts:

- no explicit positive integer candidate was produced;
- no closed ordinary-integer return family was produced;
- no positive near-certificate survived;
- the root construction arrow remains open.

Under the post-CDM4 governance rules, these facts do **not** justify an automatic next template.

## 23. Decision on IRM-2

\[
\boxed{\textbf{IRM-2 NOT AUTHORIZED.}}
\]

Reason:

IRM-1 is null and contains no strict positive near-certificate. No independently justified new root-proximate question emerged that would satisfy the separate IRM-2 authorization condition.

This report therefore does not define a larger certificate class, does not increase modulus/cell/depth limits, and does not move to multiple parameters or rational-affine return maps.

Any later IRM-2 would require a new explicit authorization based on a separately justified root bridge, not continuity from IRM-1.

## 24. Answers to the specific mathematical questions

### 1. Can a single affine family \(F(q)=aq+b\) admit an exact self-return under a fixed finite Collatz block with parameter multiplier \(u>1\)?

**No in the frozen integer-affine class.**

For every nonconstant \(F\),

\[
u=3^s/2^r.
\]

For \(r\ge1\), this is not an integer at all. For \(r=0\), \(u=1\) and \(v=0\).

### 2. What exact Diophantine relations must hold?

For one cell realizing a block of length \(r\), odd count \(s\), constant \(c\), and parity residue \(\rho\bmod2^r\):

\[
at+b\equiv\rho\pmod{2^r},
\]

\[
2^r\mid am,
\]

\[
a(3^s-2^ru)=0,
\]

\[
3^sb+c=2^r(av+b).
\]

For \(a\ne0\),

\[
u=3^s/2^r,
\qquad
2^rav=(3^s-2^r)b+c.
\]

### 3. If no for one fixed block, can a finite congruence-partitioned collection circumvent the obstruction?

**No.**

Every active positive-depth cell independently violates the integer-slope condition.

### 4. Does universal closure force the average or every local multiplier to be \(\le1\)?

A stronger statement holds in the frozen class: **no positive-depth integer local multiplier exists at all.** Therefore average-multiplier analysis is unnecessary.

### 5. Does strict growth necessarily imply a parity-density condition incompatible with closure?

Ignoring the already-fatal integer-slope condition, strict asymptotic growth on a positive-length block would require

\[
3^s>2^r
\]

or

\[
s/r>\log 2/\log 3.
\]

IRM-1 does not prove a separate density-versus-closure incompatibility because the exact integrality obstruction kills the class first.

### 6. Do known stopping-time / residue-class theorems already rule out all or part of the frozen class?

They supply relevant finite residue structure and typicality constraints, but the complete IRM-1 rule-out does not depend on them.

Terras/Everett do not by themselves exclude an exceptional closed growing subsystem. Bernstein-Lagarias and Angeltveit support the exact finite parity/residue framework. Monks-style sufficient sets constrain where hypothetical divergent orbits must intersect but do not supply or forbid the required self-return.

### 7. Is there a simple theorem showing every finite-state one-parameter affine return system either contains descent, is eventually periodic, or fails closure?

For the **frozen same-embedding integer-affine architecture**, IRM1.1 is stronger:

\[
\boxed{
\text{every positive-depth cell fails the exact self-return equation before descent, periodicity, or closure need be considered.}
}
\]

This is the valid IRM-1 structural null theorem.

### 8. Is there any exact mechanism in the frozen class whose existence would immediately certify one explicit unbounded orbit?

**No.**

The class is empty under the required positive-depth integer-affine self-return condition.

## 25. Root implication chain at session end

The shortest root chain remains

\[
\text{explicit ordinary integer}
\Longrightarrow
\boxed{\text{some exact closed expanding ordinary-integer mechanism}}
\Longrightarrow
\text{unbounded genuine forward orbit}
\Longrightarrow
\text{never reaches }1.
\]

The frozen IRM-1 affine/integer-affine mechanism has been proved unavailable.

At the programme level, the unresolved nontrivial bridge remains:

\[
\boxed{\text{construct one valid exact ordinary-integer mechanism by some independently justified route.}}
\]

**Unresolved nontrivial arrow count at end: 1.**

Within the frozen IRM-1 class, the existence arrow is not unresolved; it is **proved impossible**.

## 26. Final decision

\[
\boxed{\textbf{IRM1-C — FROZEN CLASS NULL / STRUCTURALLY RULED OUT}}
\]

The governing question was:

> Did this session produce or eliminate a concrete exact ordinary-integer mechanism capable of proving one actual Collatz orbit unbounded?

Answer:

> **It eliminated the complete frozen one-parameter integer-affine self-return class by exact algebra.**

No larger class is proposed.

No IRM-2 is authorized.

No counterexample is claimed.
