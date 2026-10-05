# RMI-2 — Fresh Forward-Control Reseeding / Endogenous Information-Production Audit

**Date:** 2026-10-05  
**Programme:** Collatz Divergence Machine / RMI — Root Mechanism Invention Programme  
**Authoritative parent branch:** rmi1-finite-regenerative-orbit-state-invention-audit  
**Authoritative parent commit:** 9fe9ed1416fec8a7a23d982a89c0248fc6548d3a  
**Working branch:** rmi2-fresh-forward-control-reseeding-audit  
**Scientific trajectory compute:** NONE  
**Exact theorem-development compute:** NONE  
**Final decision:** **RMI2-B — PARTIAL RESEEDING CAPABILITY / ONE ROOT-DERIVED DEFECT ISOLATED**

---

## 1. Executive conclusion

RMI-2 does not produce a complete regenerative Collatz certificate and does not reduce the unresolved nontrivial root-arrow count.

It does, however, answer an important part of the RMI-1 defect positively:

> **The genuine forward Collatz dynamics can create arithmetic proof content that was not supplied by a stronger hidden initial 2-adic prefix.**

The smallest exact example is attached to the ordinary arithmetic of \(n+1\).

For an ordinary positive state define

\[
a(n)=v_2(n+1),\qquad b(n)=v_3(n+1).
\]

If \(n\) is odd then \(a(n)\ge1\) and the exact identity

\[
T(n)+1=\frac{3(n+1)}2
\]

gives

\[
\boxed{
a(T(n))=a(n)-1,\qquad b(T(n))=b(n)+1.
}
\]

For every odd \(n>0\),

\[
T(n)-n=\frac{n+1}{2}>0.
\]

Thus one genuine odd shortened-Collatz step strictly increases the physical integer, consumes exactly one unit of 2-adic \(n+1\) reserve, and **creates exactly one new unit of 3-adic \(n+1\) divisibility**.

This increment in \(b\) is not hidden prefix spending. It follows on the complete advertised infinite family from the exact forward identity and requires no stronger initial residue modulo any larger power of two.

So the RMI-1 statement

> no endogenous ordinary-arithmetic source of fresh information is known

is now sharpened:

> **endogenous arithmetic strengthening exists, but the fresh reserve found by RMI-2 is produced in an odd-prime channel that does not replenish the 2-adic forward-control reserve consumed by the same segment.**

That second statement is also proved exactly.

For fixed \(a,b\), write the infinite family as

\[
n+1=2^a3^b c,\qquad \gcd(c,6)=1.
\]

After the \(a\) forced odd steps,

\[
T^a(n)=3^{a+b}c-1.
\]

One subsequent even step gives

\[
y=\frac{3^{a+b}c-1}{2},
\]

hence

\[
v_2(y+1)=v_2(3^{a+b}c+1)-1.
\]

For fixed \(a,b\), and even after imposing any compatible finite congruence condition on \(c\) modulo an odd modulus, the right-hand side can be made equal to **any prescribed nonnegative integer** by an exact Chinese-remainder construction.

Therefore the newly produced 3-adic reserve does not universally force even one unit of successor 2-adic reserve once the inherited 2-adic supply is exhausted.

This is the RMI-2 conversion barrier.

The same conclusion appears in the exact control-depth accounting. The family

\[
P_{a,b}
=
\{n>0:v_2(n+1)=a,\ v_3(n+1)=b\}
\]

has maximum universal power-of-two cylinder depth exactly \(a+1\). After one odd step it becomes \(P_{a-1,b+1}\), whose maximum universal depth is exactly \(a\). The fresh \(+1\) in \(b\) therefore does not compensate for the exact one-bit RMI-1 loss.

RMI-2 also proves a useful permanent fresh invariant: after any odd step the successor is \(2\bmod3\), and after that the actual forward orbit never again becomes divisible by \(3\). This is genuine endogenous and indefinitely persistent arithmetic information. But CRT shows that a fixed nonzero residue modulo \(3\), or any finite odd-modulus packet, is compatible with every finite binary parity word. It therefore carries no parity-control power by itself and supplies no strict-growth theorem.

The hostile \(27\) example remains intact. In fact it admits a revealing sparse reparameterization:

\[
A_t
=
4\frac{2^{6t}-1}{9}-1,
\qquad t\ge1.
\]

Then \(A_1=27\) and

\[
T^3(A_t)=2^{6t-1}-1>A_t.
\]

Every individual endpoint has a large value \(v_2(T^3(A_t)+1)=6t-1\). Nevertheless the complete start family has exactly the common cylinder \(27\bmod256\), while the complete endpoint family has exactly \(31\bmod32\). Its universal proof reserve is still

\[
8\longmapsto5.
\]

The apparently powerful exponential parameter does not evade the RMI-1 accounting; it stores the same low-bit information in different notation.

The one core RMI-2 object is the **factor-transfer state**

\[
P_{a,b}(n):\quad v_2(n+1)=a,\quad v_3(n+1)=b.
\]

It is root-derived, ordinary-owned, finite, universal over an infinite family, forward exact, non-tautological, physically increasing on every odd transition, and genuinely creates a successor arithmetic premise.

It fails exactly where RMI-2 requires it to fail if no true reseed exists:

\[
\boxed{
\text{fresh odd-prime reserve is not converted into new growth-relevant forward control.}
}
\]

The repair is not “track more residues”. The repair required by the root capability is a theorem converting a forward-generated arithmetic reserve into new usable bounded forward control without an extra initial 2-adic premise.

That is one sharply defined root-derived defect.

The unresolved nontrivial root-arrow count remains **2**.

---

## 2. Repository-state verification

The requested RMI-1 branch was verified exactly:

rmi1-finite-regenerative-orbit-state-invention-audit

at

\[
\boxed{\texttt{9fe9ed1416fec8a7a23d982a89c0248fc6548d3a}}.
\]

The commit title is:

RMI-1: clean Markdown escapes in ROADMAP.md

The branch points exactly to that commit.

A direct comparison of the RMI-1 tip against main reported:

- status: **diverged**;
- main tip at session start: 66accafe9acb8c27a8925241c3554c3570f9782e;
- merge base: 3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb;
- RMI-1 is 118 commits ahead of main;
- RMI-1 is 8 commits behind main.

Therefore RMI-1 has **not** been merged into main.

The RMI-1 tip was also compared to the RMI reboot tip

f3e0591c525b51240d7c1fcf9fbfd5579bb0be04

and is 12 commits ahead and 0 behind, with the reboot tip as merge base.

This audit therefore uses the exact RMI-1 tip as authority rather than divergent main.

The RMI-2 branch

rmi2-fresh-forward-control-reseeding-audit

was created directly from the exact RMI-1 tip.

---

## 3. Frozen-programme confirmation

The repository freezes remain binding:

- **CDM4: FROZEN.**
- **CDM4-T32: NOT AUTHORIZED.**
- **IRM: FROZEN.**
- **IRM-2: NOT AUTHORIZED.**
- pure finite 2-adic/parity-cylinder regeneration: **FROZEN / STRUCTURALLY KILLED.**
- scientific trajectory campaigning: **NOT AUTHORIZED.**

RMI-2 does not reopen any of those programmes.

The factor-transfer state is not an affine-return template, finite-state affine return system, symbolic-language extension, completion object, or larger parity-cylinder search.

---

## 4. Root objective

The root objective remains exactly:

> Find one explicit ordinary positive integer \(N\) whose orbit under
>
> \[
> T(n)=
> \begin{cases}
> n/2,&n\text{ even},\\
> (3n+1)/2,&n\text{ odd}
> \end{cases}
> \]
>
> is rigorously unbounded and rigorously never reaches \(1\).

No finite trajectory, high excursion, symbolic object without proved ordinary ownership, completion object, or theorem about a different dynamical system qualifies.

---

## 5. Root implication chain at session start

At the start of RMI-2 the shortest honest chain was:

1. construct one non-tautological finite regenerative ordinary-orbit capability whose successor proof premises are genuinely renewed and whose physical height grows properly;
2. instantiate that capability indefinitely on one explicit ordinary positive integer;
3. unboundedness and non-arrival at \(1\) follow.

**Unresolved nontrivial root-arrow count at session start: 2.**

---

## 6. Exact RMI-1 mathematics treated as closed

RMI-2 accepts without reopening:

### RMI1.1 — PRRS soundness

Indefinite regeneration of a finite ordinary-owned proof state with strict gain in a proper physical height forces an unbounded subsequence of the actual orbit and therefore an unbounded orbit that cannot later enter the \(1\leftrightarrow2\) cycle.

### RMI1.2 — exact cylinder depletion

For

\[
C(\rho,K)=\{\rho+2^Kq:q\ge0\},
\]

a common shortened-Collatz block of length \(r\le K\), with \(s\) odd source states, satisfies

\[
T^r(\rho+2^Kq)
=
b+3^s2^{K-r}q.
\]

Therefore the strongest universally forced power-of-two cylinder depth changes exactly

\[
K\longmapsto K-r.
\]

No pure finite parity-cylinder certificate can regenerate equal or greater cylinder reserve indefinitely.

### Hostile family

\[
27+256q\to41+384q\to62+576q\to31+288q
\]

has strict physical gain but exact universal reserve

\[
8\to5.
\]

The semantic statistic \(v_2(n+1)\) does not override that accounting.

These results are closed mathematics in this audit.

---

## 7. Exact root obstruction selected

RMI-2 uses the representation-neutral obstruction:

> **Finite parity-cylinder information can force genuine finite Collatz behaviour, but RMI-1 proves that this resource is consumed at exactly one binary digit per shortened step. A regenerative proof therefore requires some ordinary-arithmetic fact produced or strengthened by the actual forward evolution itself, and that fresh fact must be convertible into useful future proof control rather than merely being mathematically new.**

The final clause is the RMI-2 sharpening.

Fresh arithmetic information that cannot discharge any future growth/control obligation is not a reseed.

---

## 8. Mathematical definition of fresh versus inherited/preloaded control

RMI-2 does not use Shannon information, entropy, Kolmogorov complexity, or a probabilistic filtration.

Freshness is a proof-ledger property.

Let the advertised current premise be an infinite ordinary-positive family

\[
S=\{n:P(\theta,n)\}.
\]

Let a bounded genuine forward proof procedure have finitely many leaves \(\lambda\).

For one leaf:

- \(D_\lambda\subseteq S\) is the subset selected only by branch facts actually encountered while following the genuine forward orbit;
- \(r_\lambda\ge1\) is the leaf depth;
- \(F_\lambda(n)=T^{r_\lambda}(n)\) is the exact branch map on \(D_\lambda\);
- \(Q_\lambda(m)\) is the claimed successor premise.

### Advertised-premise pullback test

The successor premise is **ledger-clean** on the leaf when the proof establishes

\[
\boxed{
D_\lambda\subseteq F_\lambda^{-1}(Q_\lambda)
}
\]

from:

1. the advertised current premise \(P(\theta,n)\);
2. exact branch facts actually encountered before that leaf;
3. fixed stated theorems.

No additional initial premise is allowed.

### Inherited / preloaded control

A claimed successor fact is **preloaded** if the proof in fact needs a proper initial refinement \(R(n)\) not implied by \(P(\theta,n)\), so that only

\[
D_\lambda\cap R
\subseteq
F_\lambda^{-1}(Q_\lambda)
\]

is proved, while the stronger root condition \(R\) is omitted from the advertised proof state.

A deeper finite 2-adic cylinder is the principal RMI-1 example.

### Endogenous / fresh control fact

A successor fact is **fresh** when the full advertised-premise pullback inclusion holds and the strengthened successor statement is obtained from the genuine forward identity or encountered branch facts, with no stronger initial premise.

Freshness is therefore relative to the advertised proof state, not a claim that a deterministic map creates metaphysical information.

This criterion is finite and auditable whenever the proof tree and successor predicates are finite.

---

## 9. Representation-neutral capability specification

A successful RMI-2 reseeding theorem would certify an infinite ordinary family \(S_\theta\) and a bounded genuine forward rule such that:

1. every current owned state lies in \(S_\theta\);
2. the rule follows only actual forward Collatz steps;
3. every leaf gives strict physical gain;
4. every leaf proves a successor state in the same proof schema;
5. the successor proof has enough root-relevant future-control power to invoke the rule again;
6. the successor proof is ledger-clean under Section 8;
7. the new control is not merely the unspent remainder of a stronger initial finite 2-adic cylinder;
8. the rule is universal over a nontrivial infinite family rather than an exact-\(n\) singleton;
9. a finite theorem can kill the proposed reseed.

No mathematical representation is built into this specification.

---

## 10. Minimum capability axioms

The RMI-2 minimum axioms are the RMI-1 PRRS axioms with one explicit distinction.

### A. Ordinary ownership

The state is an ordinary positive integer on one actual forward orbit.

### B. Genuine forward production

Every new premise arises after genuine forward Collatz evolution.

### C. Finite present premise

The advertised proof state is finite.

### D. Ledger-clean freshness

Section 8 must hold.

### E. Root-usable future control

The newly obtained successor premise must discharge a nontrivial bounded future proof obligation relevant to regeneration or physical growth.

A permanent but growth-inert congruence is not enough.

### F. Reseed balance

The fresh part must compensate for the control consumed by the certified segment, either in the same measure or through an exact alternative theorem.

### G. Physical gain

The transition gives strict gain in a proper physical quantity, or belongs to a proved macro-rule that necessarily does.

### H. Composability

The successor has the same proof role needed for the next invocation.

### I. Non-tautology

The state is universal over a nontrivial infinite family and does not reduce to exact-\(n\) continuation.

### J. Finite killability

A finite exact theorem or counterexample can disprove the reseed.

No extra axioms are introduced.

---

## 11. Candidate selection

Before choosing the candidate, the RMI-2 capability question asks:

> Can the actual forward dynamics strengthen some arithmetic relation without consuming a stronger hidden 2-adic prefix?

The smallest direct place to inspect is an arithmetic expression transformed exactly by one genuine branch.

For an odd source state,

\[
T(n)+1
=
\frac{3n+1}{2}+1
=
\frac{3(n+1)}2.
\]

This identity simultaneously:

- divides \(n+1\) by \(2\);
- multiplies it by \(3\);
- is valid for every odd ordinary source state;
- accompanies strict physical gain.

It therefore supplies the minimal root-derived test of whether consumed binary control can be replaced by a newly produced arithmetic reserve.

No affine-return class, automaton, graph, completion, symbolic language, or prior named field was selected first.

---

## 12. Core invented object — factor-transfer state

For integers \(a,b\ge0\), define

\[
P_{a,b}(n)
\iff
v_2(n+1)=a
\quad\text{and}\quad
v_3(n+1)=b.
\]

Equivalently,

\[
n+1=2^a3^b c,
\qquad
c\in\mathbb Z_{>0},
\qquad
\gcd(c,6)=1.
\]

For every admissible \(a,b\), this is an infinite ordinary-positive family after the trivial positivity bound.

The pair \((a,b)\) is not the physical state. The owned physical state remains the actual ordinary integer \(n\).

The pair records two exact divisibility reserves of the same physical quantity \(n+1\).

---

## 13. Exact ordinary-forward semantics

If \(a\ge1\), then every member of \(P_{a,b}\) is odd.

For one genuine shortened-Collatz step,

\[
m=T(n)=\frac{3n+1}{2}.
\]

Then

\[
m+1=\frac{3(n+1)}2.
\]

Hence:

\[
P_{a,b}(n)
\Longrightarrow
P_{a-1,b+1}(m).
\]

No future state is queried.

No completion is used.

No backward step is used.

No stronger residue class is selected.

---

## 14. Exact reseeding definition for this candidate

The current 2-adic control reserve is the part of the state that certifies a fixed upcoming odd run.

The candidate attempts to reseed by converting the consumed factor of \(2\) in \(n+1\) into a newly proved factor of \(3\) in the successor \(m+1\).

Thus:

- inherited reserve: \(a\);
- newly produced arithmetic reserve: the increment \(b\mapsto b+1\);
- desired but unproved conversion: use the produced 3-adic reserve to obtain new root-relevant forward control after the 2-adic reserve reaches zero.

The candidate is successful only if that conversion exists without adding hidden initial low bits.

---

## 15. Theorem RMI2.1 — exact endogenous factor transfer

Let \(n>0\) satisfy \(P_{a,b}(n)\) with \(a\ge1\).

Then, with \(m=T(n)\),

\[
\boxed{
P_{a,b}(n)
\Longrightarrow
P_{a-1,b+1}(m)
}
\]

and

\[
\boxed{
m-n=\frac{n+1}{2}>0.
}
\]

### Proof

Write

\[
n+1=2^a3^b c,
\qquad
\gcd(c,6)=1.
\]

Since \(a\ge1\), \(n\) is odd, so

\[
m+1
=
\frac{3(n+1)}2
=
2^{a-1}3^{b+1}c.
\]

Because \(c\) is coprime to \(6\), the displayed powers of \(2\) and \(3\) are exact.

The growth identity follows from

\[
m-n
=
\frac{3n+1}{2}-n
=
\frac{n+1}{2}.
\]

\(\square\)

### Freshness assessment

The increment \(b\mapsto b+1\) is ledger-clean.

It holds on the entire advertised infinite family \(P_{a,b}\).

It does not require a stronger initial power-of-two cylinder.

It is therefore a genuine RMI-2 example of endogenous arithmetic strengthening.

---

## 16. Full odd-run transfer

Iterating Theorem RMI2.1 exactly \(a\) times gives:

### Corollary RMI2.1a

For

\[
n+1=2^a3^b c,\qquad \gcd(c,6)=1,
\]

\[
\boxed{
T^a(n)=3^{a+b}c-1
}
\]

and

\[
\boxed{
P_{a,b}(n)
\Longrightarrow
P_{0,a+b}(T^a(n)).
}
\]

Moreover,

\[
T^a(n)-n
=
3^b c(3^a-2^a)>0.
\]

Thus the complete inherited \(2\)-reserve can be converted into an equal increment of \(3\)-reserve while producing strict physical gain.

This is exact factor transfer.

It is not yet regenerative forward control.

---

## 17. Premise / information accounting

For one odd step:

### Present premises

\[
v_2(n+1)=a,\qquad v_3(n+1)=b,\qquad a\ge1.
\]

### Information consumed

One unit of \(2\)-adic divisibility of \(n+1\):

\[
a\mapsto a-1.
\]

### Successor premise proved

\[
v_2(T(n)+1)=a-1,
\qquad
v_3(T(n)+1)=b+1.
\]

### What is genuinely new?

The exact increment

\[
b\mapsto b+1.
\]

It follows from multiplication by \(3\) in the genuine odd branch and is independent of any deeper initial binary residue.

### What future transition does it certify?

By itself, the new \(3\)-adic factor certifies arithmetic divisibility and contributes to the exact permanent nonmultiplicity-by-\(3\) structure below.

It does **not** certify a new future parity bit after the inherited \(a\)-reserve is exhausted.

### Does the accounting compose?

The factor-transfer identity composes for the finite odd run.

The **reseed accounting does not** compose beyond exhaustion of \(a\), because no theorem converts the accumulated \(3\)-reserve back into successor forward control.

This is the isolated defect.

---

## 18. Usable future-control definition

For RMI-2, a successor fact is **root-usable forward control** only if it proves a nontrivial bounded future statement that helps discharge the next regeneration/growth obligation.

Examples that qualify in principle include:

- a forced future branch or branch block;
- a bounded universal return to the same proof schema;
- a theorem forcing a physical gain before a bounded stopping event;
- another finite relation whose composability is proved to imply such a return.

A fact does not qualify merely because it is new and invariant.

This definition is deliberately weaker than “must determine parity”, but parity-cylinder depth remains a valid exact diagnostic for a candidate whose only proposed control source is divisibility of \(n+1\).

---

## 19. Theorem RMI2.2 — exact control-depth accounting for \(P_{a,b}\)

For every \(a,b\ge0\), the infinite family \(P_{a,b}\) has maximum common power-of-two cylinder depth exactly

\[
\boxed{a+1}.
\]

After one odd transition from \(a\ge1\),

\[
P_{a,b}\to P_{a-1,b+1},
\]

the maximum common cylinder depth is exactly

\[
\boxed{a}.
\]

Therefore the universal binary forward-control depth falls by exactly one despite the fresh increment in \(b\).

### Proof

If \(v_2(n+1)=a\), then

\[
n+1=2^a u
\]

with \(u\) odd, so

\[
n\equiv2^a-1\pmod{2^{a+1}}.
\]

Hence \(P_{a,b}\) lies in one class modulo \(2^{a+1}\).

The condition \(v_3(n+1)=b\) is an odd-prime condition. By CRT, the odd cofactor \(c\) in

\[
n+1=2^a3^b c
\]

can realize both admissible odd residues modulo \(4\) while remaining coprime to \(3\). Therefore the family is not contained in one class modulo \(2^{a+2}\).

So the exact common depth is \(a+1\).

Apply the same argument to the successor family \(P_{a-1,b+1}\), whose exact depth is \(a\).

\(\square\)

### Consequence

The new 3-adic reserve is genuine arithmetic information, but it does not replenish the RMI-1 parity-cylinder reserve.

---

## 20. Theorem RMI2.3 — cross-prime conversion barrier

Fix integers \(a\ge1\), \(b\ge0\), and put

\[
L=a+b.
\]

Write

\[
n+1=2^a3^b c,\qquad \gcd(c,6)=1.
\]

After the complete forced odd run,

\[
x=T^a(n)=3^L c-1.
\]

The state \(x\) is even.

After one even step,

\[
y=T(x)=\frac{3^L c-1}{2},
\]

so

\[
\boxed{
v_2(y+1)=v_2(3^L c+1)-1.
}
\]

Then:

> For every prescribed integer \(k\ge0\), there exist infinitely many admissible odd cofactors \(c\), with \(3\nmid c\), such that
>
> \[
> v_2(y+1)=k.
> \]

More strongly, the same statement remains true after imposing any compatible finite congruence condition on \(c\) modulo an odd modulus.

### Proof

We need

\[
v_2(3^L c+1)=k+1.
\]

Because \(3^L\) is odd, it is invertible modulo \(2^{k+2}\).

First choose \(c\) modulo \(2^{k+1}\) so that

\[
3^Lc\equiv-1\pmod{2^{k+1}}.
\]

There are exactly two lifts of that class modulo \(2^{k+2}\). Exactly one lift also satisfies the congruence modulo \(2^{k+2}\). Choose the other lift. Then

\[
v_2(3^Lc+1)=k+1.
\]

The chosen residue is odd.

Any additional compatible condition modulo an odd modulus \(M\), including a nonzero condition modulo \(3\), combines with this binary residue by the Chinese remainder theorem because

\[
\gcd(M,2^{k+2})=1.
\]

Adding multiples of the combined modulus gives infinitely many positive solutions.

\(\square\)

### Meaning

No finite packet of odd-modulus information, including the generated \(3\)-adic reserve, supplies a universal positive lower bound on the successor \(v_2(\,\cdot+1)\) after the inherited binary reserve is exhausted.

The missing conversion is not a matter of choosing a larger odd modulus.

---

## 21. Permanent fresh invariant — and why it is not enough

If \(n\) is odd then

\[
T(n)=\frac{3n+1}{2}\equiv2\pmod3.
\]

If a state \(m\) is not divisible by \(3\), then:

- if \(m\) is even, \(T(m)=m/2\) is still nonzero modulo \(3\);
- if \(m\) is odd, \(T(m)\equiv2\pmod3\).

Therefore:

### Lemma RMI2.4

After the first odd Collatz step on any actual orbit,

\[
\boxed{
3\nmid T^j(n)
}
\]

for every later state.

This is a genuinely forward-created permanent invariant.

However, for any fixed nonzero residue \(r\bmod3\) and any finite parity word of length \(K\), the parity word corresponds to one residue \(\rho\bmod2^K\), and CRT gives an ordinary integer satisfying simultaneously

\[
n\equiv r\pmod3,
\qquad
n\equiv\rho\pmod{2^K}.
\]

Thus the permanent \(3\)-free invariant is compatible with every finite binary parity pattern.

It is fresh and composable, but not growth-relevant forward control.

---

## 22. Physical properness and growth

For every odd step in the factor-transfer state,

\[
T(n)-n=\frac{n+1}{2}>0.
\]

For a full \(a\)-step odd run,

\[
T^a(n)-n
=
3^bc(3^a-2^a)>0.
\]

Therefore the candidate has genuine physical gain while its inherited binary reserve remains positive.

The problem is not bookkeeping height.

The problem is that the rule cannot prove another such physically increasing odd-run state after the binary reserve reaches zero.

No indefinite proper-growth theorem follows.

---

## 23. Non-tautology test

For fixed \(a,b\), \(P_{a,b}\) contains infinitely many ordinary positive integers.

The transition theorem is universal over the whole family.

It does not store the exact current integer.

It does not continue iteration until a favorable state is found.

It certifies in advance the exact next factor-transfer transition for every family member.

Therefore the candidate is not killed by the exact-\(n\) tautology test.

---

## 24. Exact toy example — \(7\)

\[
7+1=2^3.
\]

So \(7\in P_{3,0}\).

The exact transitions are

\[
7\to11\to17\to26,
\]

with premise states

\[
P_{3,0}
\to
P_{2,1}
\to
P_{1,2}
\to
P_{0,3}.
\]

The physical values strictly increase:

\[
7<11<17<26.
\]

Three units of \(2\)-reserve in \(n+1\) have been converted into three units of \(3\)-reserve.

The next even step is

\[
26\to13,
\]

and

\[
13+1=14,
\]

so the successor has

\[
v_2(14)=1,\qquad v_3(14)=0.
\]

The accumulated \(3\)-reserve did not itself determine or preserve the successor binary reserve.

This is a complete ordinary-orbit realization of the partial factor-transfer mechanism.

---

## 25. Exact toy example — \(27\)

\[
27+1=28=2^2\cdot7,
\]

so

\[
27\in P_{2,0}.
\]

Then

\[
27\to41\to62
\]

gives

\[
P_{2,0}\to P_{1,1}\to P_{0,2}.
\]

The two odd steps genuinely create

\[
v_3(63)=2.
\]

The next step is

\[
62\to31
\]

and

\[
31+1=32,
\]

so the particular orbit acquires

\[
v_2(32)=5.
\]

This looks like a successful \(3\)-to-\(2\) conversion.

It is not universal over \(P_{2,0}\).

The general state in \(P_{2,0}\) is

\[
n=4c-1,
\qquad
\gcd(c,6)=1.
\]

After two odd steps and one even step,

\[
y+1=\frac{9c+1}{2}.
\]

For \(c=7\),

\[
v_2(y+1)=5.
\]

For \(c=1\),

\[
v_2(y+1)=v_2(5)=0.
\]

RMI2.3 proves that all nonnegative values occur across the family.

The \(27\) conversion therefore depends on additional information about \(c\), not on the fresh \(3\)-reserve alone.

---

## 26. Hostile sparse-parameter audit of the \(27\) phenomenon

A tempting repair is to encode the favorable cofactor arithmetically instead of as an explicit binary residue.

Define

\[
c_t=\frac{2^{6t}-1}{9},
\qquad
A_t=4c_t-1.
\]

Since \(2^6\equiv1\pmod9\), these are integers.

Also

\[
A_1=27.
\]

Two odd steps give

\[
T^2(A_t)
=
9c_t-1
=
2^{6t}-2,
\]

and the next even step gives

\[
\boxed{
T^3(A_t)=2^{6t-1}-1.
}
\]

The physical gain is

\[
T^3(A_t)-A_t
=
\frac{2^{6t-1}+4}{9}>0.
\]

Each individual endpoint has

\[
v_2(T^3(A_t)+1)=6t-1.
\]

This looks much stronger than the RMI-1 cylinder accounting.

But the complete family satisfies

\[
A_t-27
=
256\frac{2^{6(t-1)}-1}{9},
\]

so every \(A_t\) lies in

\[
27\bmod256.
\]

Moreover \(A_2-A_1\) has exact 2-adic valuation \(8\), so the complete family has no stronger common cylinder.

At the endpoint,

\[
T^3(A_t)-31
=
32(2^{6(t-1)}-1),
\]

and \(T^3(A_2)-T^3(A_1)\) has exact 2-adic valuation \(5\).

Therefore the complete sparse family has exact reserve

\[
\boxed{
8\to5.
}
\]

The exponential parameterization stores the same hidden prefix reserve rather than regenerating it.

This is the mandatory hostile answer to “just represent the favorable low bits nonlinearly”.

---

## 27. Hostile deeper-prefix audit

The factor-transfer theorem itself survives the deeper-prefix audit.

The increment

\[
b\mapsto b+1
\]

requires no deeper initial 2-adic premise.

However any claim that the new \(b\)-reserve forces a large successor \(a\)-reserve fails RMI2.3 unless an additional relation on the odd cofactor is supplied.

If that relation is merely a finite binary restriction in new notation, RMI1.2 kills it.

The \(A_t\) family shows that even an exponential-looking parameter can be exactly such hidden low-bit storage at the family level.

---

## 28. Hostile exact-\(n\) audit

The core theorem is universal over every \(P_{a,b}\), an infinite ordinary family.

The report does not infer regeneration from retaining the exact current integer.

The \(27\) one-point jump to \(v_2=5\) is explicitly rejected as a universal reseed.

The candidate therefore survives the exact-\(n\) audit as a partial mechanism.

---

## 29. Hostile ownership audit

Ownership is direct.

Every state is an ordinary positive integer.

Every transition is a genuine forward shortened-Collatz step.

No inverse tree, predecessor selection, symbolic realization theorem, or later positive anchor is used.

---

## 30. Hostile completion audit

No 2-adic, 3-adic, inverse-limit, or formal completion object is used for ownership.

The notation \(v_2\) and \(v_3\) is ordinary integer divisibility.

All theorems are statements about finite ordinary integers.

---

## 31. Hostile template-ladder audit

The candidate was not selected as a larger IRM or CDM4 class.

Its defining identity was forced by the RMI-2 question:

\[
T(n)+1=\frac{3(n+1)}2
\]

is the smallest ordinary arithmetic identity on a genuine growing branch that can visibly transfer consumed binary divisibility into a different arithmetic reserve.

RMI-2 does not react to the conversion failure by adding:

- more prime valuations;
- more states;
- more moduli;
- more parameters;
- a nonlinear return-map hierarchy;
- a symbolic language;
- a completion.

The next question, if authorized, is the missing conversion capability itself.

---

## 32. Hostile bounded-orbit countermodel test

The partial factor-transfer rule can occur inside bounded or ultimately bounded Collatz orbits.

The example \(7\) realizes three consecutive factor-transfer growth steps but later enters the ordinary convergent dynamics.

The permanent \(3\)-free invariant also holds on many convergent orbits.

Therefore neither fresh arithmetic production nor permanent arithmetic information alone implies unboundedness.

A complete RMI mechanism still requires the missing conversion into repeatable growth-relevant forward control.

This hostile test passes in the correct sense: it prevents overpromotion of the partial theorem.

---

## 33. Shortest implication chain after RMI-2

The shortest chain is now:

1. prove one prefix-clean arithmetic conversion theorem that turns forward-generated reserve into renewed root-usable forward control while preserving ordinary ownership and physical gain;
2. instantiate the resulting complete regenerative rule indefinitely on one explicit ordinary positive integer;
3. PRRS soundness gives an unbounded actual orbit and non-arrival at \(1\).

RMI-2 has shown that the “fresh arithmetic production” part of arrow 1 is nonempty.

It has not closed arrow 1 because the fresh reserve is not yet root-usable.

**Unresolved nontrivial root-arrow count after RMI-2: 2.**

The count is unchanged.

---

## 34. Finite kill condition

The factor-transfer route is killed as a complete reseeding mechanism if:

1. fresh odd-prime reserve cannot be converted into any renewed root-usable forward control without adding a stronger initial 2-adic premise;
2. every proposed conversion law reduces, under pullback, to a deeper finite cylinder or equivalent low-bit encoding;
3. the conversion works only for exact singleton integers rather than a nontrivial infinite ordinary family;
4. the successor control requires unrestricted forward iteration to discover;
5. physical gain is lost or becomes bookkeeping-only;
6. ordinary forward ownership is lost;
7. the conversion exists only in a completion or inverse representation;
8. the repair is merely “track more residues/primes/parameters” without a theorem forced by the conversion defect.

RMI2.3 already kills conversion from finite odd-modulus information alone.

---

## 35. Exact computation used

No computation was executed.

A tiny exact cofactor check was considered, with the predeclared purpose of falsifying a universal \(3\)-reserve-to-\(2\)-reserve lower bound.

The exact CRT argument in Theorem RMI2.3 proved the stronger statement for the full infinite family, making computation unnecessary.

Exact consumption:

- exact toy state evaluations executed by code: **0**;
- certificate templates enumerated: **0**;
- scientific trajectories: **0**;
- random starts: **0**;
- CPU theorem-search time: **0 seconds**;
- GPU: **0**;
- cloud/distributed work: **0**.

The examples were checked by exact hand algebra.

---

## 36. Literature used and why it was relevant

No new external literature was required to prove the RMI-2 results.

The repository-authoritative prior audits had already established the relevant background:

- finite binary parity prefixes are exact power-of-two residue information;
- 2-adic conjugacy does not solve ordinary-positive ownership;
- strongly sufficient odd-modulus sets are hitting constraints, not constructive growth mechanisms;
- rational-affine return coordinates are tautological without an independent invariant;
- finite multi-state integer-affine recurrent return systems retain a denominator obstruction.

RMI-2's new results are elementary ordinary-integer consequences of:

\[
T(n)+1=\frac{3(n+1)}2
\]

on odd states and the Chinese remainder theorem.

No publication-level novelty claim is made.

The absence of a literature dependency is acceptable under the RMI Foundational Invention Principle because the object is derived directly from the root obstruction and is finitely killable.

---

## 37. Theorem-level fresh reseeding actually obtained

### Obtained

**PROVED:** a mathematically precise finite freshness criterion based on the advertised-premise pullback ledger.

**PROVED:** the factor-transfer theorem

\[
P_{a,b}\to P_{a-1,b+1}
\]

on every genuine odd step.

**PROVED:** strict physical gain accompanies every such transition.

**PROVED:** the increment in \(v_3(n+1)\) is genuinely fresh and does not require a stronger hidden initial power-of-two cylinder.

**PROVED:** after a complete odd run, the generated \(3\)-reserve alone does not give any universal successor \(2\)-reserve; every nonnegative successor value is possible even under arbitrary compatible finite odd-modulus restrictions.

**PROVED:** the permanent post-odd-step invariant \(3\nmid n\) is genuinely forward-created but compatible with every finite parity word.

**PROVED:** the sparse exponential family through \(27\) still has exact universal cylinder accounting \(8\to5\), despite arbitrarily large individual endpoint values of \(v_2(n+1)\).

### Not obtained

No successor premise carrying at least as much **root-usable** forward control as the current premise was obtained.

No complete regenerative PRRS was obtained.

No indefinitely repeatable physical-growth theorem was obtained.

No explicit unbounded candidate integer was obtained.

No root arrow was closed.

Therefore RMI2-A is not justified.

---

## 38. Exact continuation / freeze decision

The factor-transfer object is retained only as a **partial capability and conversion testbed**.

Its current theorem-level contribution is real:

> Collatz can create fresh ordinary arithmetic proof content during genuine forward growth.

Its exact defect is equally real:

> the fresh reserve found here is in an arithmetically orthogonal channel and does not regenerate the consumed root-usable forward control.

RMI2-C would discard the first positive answer to the RMI-2 freshness subquestion and would fail to preserve the exact cross-prime barrier as a design constraint.

RMI2-A would overstate the result because no reseed balance or indefinite composability has been proved.

The correct decision is:

\[
\boxed{\textbf{RMI2-B — PARTIAL RESEEDING CAPABILITY / ONE ROOT-DERIVED DEFECT ISOLATED}}
\]

RMI remains active for exactly one further session because RMI-3 is already the hard viability gate.

RMI-3 must decide the conversion defect. It may not respond by enlarging the valuation packet or by building a hierarchy of prime-reserve states.

---

## 39. Exactly one next question

### RMI-3 — FRESH-RESERVE CONVERSION / REGENERATIVE CONTROL VIABILITY GATE

> **Does there exist a finitely stated ordinary-arithmetic conversion law, valid on a nontrivial infinite ordinary-positive family and proved from only the advertised current premise plus a bounded genuine forward Collatz segment, that converts forward-generated arithmetic reserve into renewed root-usable future control with strict physical gain, without being equivalent to a stronger initial finite 2-adic prefix?**

The factor-transfer state is the mandatory hostile test case, not a mandatory representation for the answer.

A successful RMI-3 must clear the existing hard viability gate.

If no structure satisfies the RMI-3 gate, RMI freezes.

---

## 40. Final RMI-2 verdict

\[
\boxed{\textbf{RMI2-B — PARTIAL RESEEDING CAPABILITY / ONE ROOT-DERIVED DEFECT ISOLATED}}
\]

Reason:

- a precise freshness criterion was obtained;
- genuine endogenous arithmetic strengthening was proved on ordinary forward Collatz dynamics;
- strict physical gain accompanies the strengthening;
- the mechanism is universal over nontrivial infinite ordinary families and is non-tautological;
- the fresh reserve does not replenish the consumed usable binary control;
- an exact CRT theorem isolates the conversion failure;
- the hostile \(27\) family remains consistent with RMI-1 reserve depletion;
- no complete regenerative certificate or explicit unbounded orbit was obtained;
- root-arrow count remains 2;
- exactly one root-derived defect remains for the RMI-3 gate.

The governing mentality remains:

> We are not waiting for mathematics to become ready for Collatz. We are attempting to invent mathematics that is ready for Collatz.

The governing discipline remains:

> Invent boldly, but every invention must remain accountable to one actual ordinary forward orbit and to the root objective.

The RMI-2 result is therefore:

> **Fresh arithmetic information can be created. What remains unknown is whether Collatz can convert that fresh information into fresh forward control before the proof reserve is exhausted.**
