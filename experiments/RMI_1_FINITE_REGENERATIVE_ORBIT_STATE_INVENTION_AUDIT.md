# RMI-1 — Finite Regenerative Orbit-State Invention Audit

**Date:** 2026-10-05  
**Programme:** Collatz Divergence Machine / RMI — Root Mechanism Invention Programme  
**Authoritative parent branch:** \`rmi-root-mechanism-invention-reboot\`  
**Authoritative parent commit:** \`f3e0591c525b51240d7c1fcf9fbfd5579bb0be04\`  
**Working branch:** \`rmi1-finite-regenerative-orbit-state-invention-audit\`  
**Scientific trajectory compute:** NONE  
**Exact theorem-development compute:** NONE  
**Final decision:** **RMI1-B — PARTIAL REGENERATIVE CAPABILITY / ONE ROOT-DERIVED DEFECT ISOLATED**

---

## 1. Executive conclusion

RMI-1 does **not** produce a complete regenerative Collatz certificate and does not reduce the unresolved root-arrow count.

It does produce one durable theorem-level obstruction and one root-derived candidate proof-state architecture.

The exact new obstruction is:

> **Finite 2-adic / parity-cylinder proof reserve is consumed at exactly one bit per shortened-Collatz step.**

More precisely, if an infinite arithmetic progression is specified by one residue class modulo \(2^K\), then after any fixed genuine forward segment of length \(r\le K\), the strongest residue class modulo a power of \(2\) that is universally forced for the image family has depth exactly \(K-r\). No positive-depth forward segment can regenerate the same amount of parity-cylinder control from cylinder information alone.

This sharpens the repository's earlier statement that finite prefixes do not persist. It gives an exact **information-accounting law**: pure finite-prefix information is not merely nonpersistent; it has a deterministic depletion rate.

A hostile example is the ordinary family

\[
n=27+256q,\qquad q\ge0.
\]

Every member follows the exact three-step shortened-Collatz segment

\[
27+256q
\to
41+384q
\to
62+576q
\to
31+288q.
\]

The endpoint is strictly larger:

\[
31+288q-(27+256q)=4+32q>0,
\]

and it satisfies

\[
31+288q\equiv31\pmod{32}.
\]

At the level of the visually attractive quantity \(v_2(n+1)\), the state appears to regenerate from exact value \(2\) to at least \(5\). But the proof that forces this event did not start from only \(v_2(n+1)=2\). It started from the stronger eight-bit cylinder \(n\equiv27\pmod{256}\). The forward segment consumes three bits and leaves exactly the five-bit cylinder \(31\bmod32\).

Thus the apparent \(2\to5\) "renewal" is paid for by hidden stronger initial parity information. It is not regeneration.

The one core RMI-1 invention is therefore a **Proof-Reserve Regenerative State (PRRS)**: an ordinary-orbit proof state whose premises are carried explicitly and whose regeneration is accepted only when the successor premises are derived from the stated current premises plus facts encountered on the certified genuine forward segment, with no hidden stronger prefix assumption.

The PRRS architecture survives the ownership, completion, bounded-orbit and template-ladder audits as a sound proof discipline. However, no Collatz-specific **reseed law** was found that creates new forward-control information after the exact cylinder reserve has been consumed.

That is the single isolated defect:

\[
\boxed{\text{No endogenous ordinary-arithmetic source of fresh forward-control information is yet known.}}
\]

RMI1-A is therefore not justified.

RMI1-C would discard a durable new root-level obstruction and a sharply delimited next capability. The correct verdict is RMI1-B.

---

## 2. Repository-state verification

The requested RMI reboot commit was verified exactly:

\[
\boxed{\texttt{f3e0591c525b51240d7c1fcf9fbfd5579bb0be04}}
\]

on branch:

\[
\texttt{rmi-root-mechanism-invention-reboot}.
\]

The branch exists.

A direct comparison with the authoritative POST-IRM1 tip

\[
\texttt{2294cbf7fc66c876bf4e56f468d77b33632a4a2a}
\]

shows the RMI reboot tip is 10 commits ahead and 0 behind, with that POST-IRM1 tip as merge base.

A direct comparison of the RMI reboot tip against \`main\` reports a **diverged** history with merge base

\[
\texttt{3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb}.
\]

Therefore the RMI reboot has **not** been merged into \`main\`.

This audit accordingly branches from the exact RMI reboot tip rather than divergent \`main\`.

---

## 3. Frozen-programme confirmation

The repository governance remains binding:

- **CDM4: FROZEN.**
- **CDM4-T32: NOT AUTHORIZED.**
- **IRM: FROZEN.**
- **IRM-2: NOT AUTHORIZED.**
- RMI is a separate foundational-invention programme.
- No scientific trajectory campaign is authorized.

Nothing in RMI-1 reopens CDM4 or IRM.

The T31 strategic failure diagnosis remains binding: internally generated theorem boundaries are not root progress.

The POST-IRM1 negative results remain binding:

- unrestricted rational-affine return coordinates are tautological without an independent invariant/growth theorem;
- recurrent finite multi-state integer-affine positive-depth return systems are ruled out by cycle-slope telescoping;
- necessary modular or stopping-time structure is not a constructive regenerative mechanism.

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

No finite trajectory, large excursion, symbolic object without ordinary ownership, or theorem about another system qualifies.

---

## 5. Root implication chain at session start

The RMI reboot gives the shortest capability-level chain:

1. invent and prove sound a finite regenerative ordinary-orbit capability whose exact regeneration plus proper physical growth implies indefinite growth;
2. instantiate that capability indefinitely on one explicit ordinary positive integer;
3. unboundedness and non-arrival at \(1\) follow.

The final implication is routine once the first two arrows are closed.

**Unresolved nontrivial root-arrow count at session start: 2.**

---

## 6. Exact root obstruction selected

The repository's default obstruction was:

> We can certify exact finite Collatz behaviour, and we can impose arbitrarily long exact prefixes, but we do not possess finite proof information attached to one ordinary orbit that regenerates enough of its own certification power after the forced finite information has been consumed.

RMI-1 sharpens this to:

> **Known finite exact forward-control information is predominantly 2-adic cylinder information. Under genuine shortened-Collatz iteration, such information is consumed at exactly one binary digit per step. We lack a finite ordinary-arithmetic mechanism that creates fresh forward-control information at the successor state rather than spending information already hidden in a stronger initial prefix.**

This is the one root obstruction attacked in RMI-1.

---

## 7. Representation-neutral capability specification

A successful regenerative proof state must do more than predict a finite segment.

It must certify, from finitely stated present premises:

1. a finite genuine forward segment of one actual ordinary positive orbit;
2. strict increase in a proper physical quantity;
3. a successor proof state of the same proof schema;
4. successor premises derived from the current premises and facts obtained during the certified segment;
5. no reliance on an unstated stronger initial parity/residue prefix;
6. no externally prescribed infinite parity/valuation future;
7. no later ordinary-positive anchoring theorem;
8. a finite local falsifier.

The crucial RMI-1 refinement is items 4 and 5.

A proof state has not regenerated merely because a visually useful statistic is larger at the endpoint. It has regenerated only if the **premises needed to use the proof again** have themselves been renewed.

---

## 8. Minimum capability axioms

RMI-1 retains the reboot axioms with one sharpening.

### A. Ordinary ownership

The physical state is one ordinary positive integer on one actual forward orbit.

### B. Forward exactness

Every promoted transition is a genuine finite shortened-Collatz segment.

### C. Finite description

The proof premises and update rule are finitely described at every stage.

### D. Regeneration

The successor has a proof state of the same schema.

Literal equality is not required.

### E. Physical growth

A proper function of actual orbit states strictly increases at each certified regeneration.

### F. Properness

Infinitely many regenerations cannot occur inside a bounded set of physical integers.

For RMI-1 it is enough to use an integer-valued proper height \(H\) with

\[
H(n^+)\ge H(n)+1.
\]

The simplest physical choice is \(H(n)=n\).

### G. Non-tautology

The proof payload cannot be the exact current integer plus unrestricted continuation.

A promoted concrete state must exhibit compression: the same stated premises prove the same transition theorem for an infinite ordinary-positive family, with the actual owned integer as one member.

### H. Root compression

The state must replace an infinite proof obligation by a finite repeatable proof rule.

### I. Killability

A finite theorem, counterexample, or exact bounded check must be able to refute the claimed regeneration.

### J. Anti-hierarchy

Failure does not authorize a richer neighboring syntax automatically.

### K. Premise-renewal accounting — RMI-1 sharpening

Every premise used to justify the successor state must be traced to one of:

- a stated premise of the current state;
- an exact fact encountered on the certified forward segment;
- a theorem deriving a new arithmetic fact from those items.

An unstated stronger initial cylinder is not a renewal source.

---

## 9. The core invented object: Proof-Reserve Regenerative State

### 9.1 Definition

A **Proof-Reserve Regenerative State (PRRS)** schema consists of

\[
\mathcal K=(\Theta,P,\mathcal D,U,H),
\]

where:

1. \(\Theta\) is a finitely described parameter domain;
2. \(P(\theta,n)\) is a finitely stated arithmetic predicate on \(\theta\in\Theta\) and ordinary \(n\in\mathbb Z_{>0}\);
3. \(\mathcal D\) is a finite local proof procedure / bounded observation tree;
4. \(U\) is a finite successor-parameter update rule;
5. \(H:\mathbb Z_{>0}\to\mathbb Z_{\ge0}\) is a proper physical height.

An **owned PRRS instance** is a pair \((\theta,n)\) with \(P(\theta,n)\) true for one actual ordinary orbit state \(n\).

The exact integer \(n\) is the physical owned state. It is not by itself the proof payload.

### 9.2 Compression requirement

For promotion, \(P(\theta,\cdot)\) must hold for an infinite ordinary-positive family, and the finite proof in \(\mathcal D\) must be universal over that family.

This blocks the trivial state \(P(\theta,m)\equiv(m=n)\).

### 9.3 Local forward rule

Starting from any \(n\) satisfying \(P(\theta,n)\), \(\mathcal D\) may inspect only exact states actually reached while following \(T\).

Every leaf must terminate after a finite positive depth \(r\) and prove

\[
n^+=T^r(n),
\]

together with a finite successor parameter

\[
\theta^+=U(\theta,\text{observations})
\]

and successor premise

\[
P(\theta^+,n^+).
\]

No fact about \(T^{r+j}(n)\), \(j>0\), may be assumed.

### 9.4 Physical gain

Every leaf must prove

\[
H(n^+)\ge H(n)+1.
\]

### 9.5 Proof-reserve / premise ledger

The derivation of \(P(\theta^+,n^+)\) must cite only:

- the current premise \(P(\theta,n)\);
- exact identities valid on the certified segment;
- branch facts actually encountered before the leaf;
- fixed theorems included in the schema.

If the transition proof secretly requires a stronger initial predicate \(\widetilde P(\widetilde\theta,n)\) not implied by \(P(\theta,n)\), regeneration fails.

### 9.6 Regeneration

A PRRS schema is **regenerative at \((\theta,n)\)** when the local rule produces \((\theta^+,n^+)\) satisfying the same schema and all premise-ledger requirements.

A complete indefinitely regenerative PRRS is one for which the rule is total on every successor instance reachable from the initial instance.

RMI-1 does not construct such a complete Collatz object.

---

## 10. Why PRRS is root-derived rather than template-derived

The object is not obtained by saying:

- affine failed, therefore use nonlinear maps;
- one state failed, therefore use more states;
- fixed modulus failed, therefore increase the modulus.

It is derived from the exact missing capability:

> finite proof power must renew itself after its current future-control information has been consumed.

PRRS therefore records the thing previous programmes did not explicitly account for: **where the successor's proof premises came from**.

The state may change scale, dimension, notation or local representation. None of those features is promoted by itself.

The invariant requirement is premise renewal plus physical gain on one ordinary orbit.

---

## 11. Exact ordinary-forward semantics

Every PRRS transition is an implication of the form

\[
P(\theta,n)
\Longrightarrow
\left[
n^+=T^r(n),\;
P(\theta^+,n^+),\;
H(n^+)\ge H(n)+1
\right],
\]

where \(r\ge1\) is finite and is certified by the bounded local proof.

The actual orbit state is always \(n\) or \(T^j(n)\).

No symbolic representative substitutes for the ordinary integer.

No completion is used to define ownership.

---

## 12. Regeneration theorem for a complete PRRS

### Theorem RMI1.1 — PRRS soundness

Assume there is a PRRS schema \(\mathcal K\), an explicit ordinary positive integer \(N\), and an initial parameter \(\theta_0\) such that:

1. \(P(\theta_0,N)\);
2. the PRRS local rule is total on every successor instance reachable from \((\theta_0,N)\);
3. every return has positive finite depth;
4. every return satisfies
   \[
   H(n_{j+1})\ge H(n_j)+1;
   \]
5. \(H\) is proper on ordinary positive integers.

Then the actual shortened-Collatz orbit of \(N\) is unbounded and never reaches \(1\).

#### Proof

Inductively apply the total PRRS rule.

This yields finite positive times

\[
0=t_0<t_1<t_2<\cdots
\]

and actual orbit states

\[
n_j=T^{t_j}(N)
\]

such that

\[
H(n_j)\ge H(N)+j.
\]

Hence \(H(n_j)\to\infty\).

Properness of \(H\) implies the set \(\{n_j\}\) is unbounded, so the full orbit is unbounded.

If the orbit ever reached \(1\), its future would be the bounded \(1\leftrightarrow2\) shortened-map cycle, contradicting the unbounded subsequence. \(\square\)

### Assessment

The theorem is sound but, by itself, is not enough for RMI1-A.

Generic recurrence/nontermination certificates are known in program verification. The Collatz-specific missing part is a non-tautological arithmetic state whose premise ledger genuinely renews.

---

## 13. The exact finite-prefix depletion theorem

The central mathematical result of RMI-1 is the following.

### Definition — 2-adic cylinder reserve

For \(K\ge1\) and residue \(\rho\), define the infinite cylinder

\[
C(\rho,K)=\{\rho+2^Kq:q\in\mathbb Z_{\ge0}\},
\]

with \(\rho\) chosen so the represented integers are positive in the intended range.

The integer \(K\) is the cylinder's explicit parity-control reserve: the first \(K\) shortened-Collatz parity decisions are fixed across the cylinder.

### Theorem RMI1.2 — exact cylinder-reserve loss

Let \(C(\rho,K)\) be an infinite 2-adic cylinder and let \(1\le r\le K\).

Let the common first \(r\) parity decisions contain \(s\) odd source states.

Then there is an integer \(b\) such that for every \(q\ge0\),

\[
T^r(\rho+2^Kq)
=
b+3^s2^{K-r}q.
\]

Consequently:

1. every image is in one residue class modulo \(2^{K-r}\);
2. no single residue class modulo \(2^{K-r+1}\) contains the complete image family;
3. the maximum universally forced power-of-two residue depth of the image family is exactly \(K-r\).

#### Proof

For the common parity block,

\[
T^r(n)=\frac{3^s n+c}{2^r}
\]

with integer \(c\) fixed by that block.

Substitute

\[
n=\rho+2^Kq.
\]

Then

\[
T^r(n)
=
\frac{3^s\rho+c}{2^r}
+
3^s2^{K-r}q.
\]

Because \(\rho\) realizes the block, the first term is an integer; call it \(b\).

Thus the entire image is congruent to \(b\pmod{2^{K-r}}\).

For consecutive parameters \(q\) and \(q+1\), the image difference is

\[
3^s2^{K-r}.
\]

Since \(3^s\) is odd,

\[
v_2\!\left(3^s2^{K-r}\right)=K-r.
\]

Therefore those two images differ modulo \(2^{K-r+1}\), proving that no stronger common power-of-two residue is universally forced. \(\square\)

---

## 14. Corollaries of exact cylinder-reserve loss

### Corollary RMI1.2a — no pure-cylinder regeneration

A positive-depth PRRS whose entire forward-control premise is one finite 2-adic cylinder cannot regenerate a successor cylinder with equal or greater parity-control reserve.

Every positive-depth transition satisfies

\[
K^+=K-r<K.
\]

### Corollary RMI1.2b — finite cylinder chains terminate

For a chain of pure-cylinder transitions of positive depths \(r_0,r_1,\ldots\),

\[
K_j
=
K_0-\sum_{i<j}r_i.
\]

Hence no finite initial cylinder reserve can support infinitely many positive-depth certified transitions.

### Corollary RMI1.2c — apparent residue renewal implies hidden input information or a genuinely new arithmetic source

If a successor appears to have a larger useful 2-adic statistic, then one of two things occurred:

1. the proof used a stronger initial cylinder than the advertised state carried; or
2. a non-cylinder arithmetic theorem genuinely created new forward-control information.

This is the exact fork RMI must now audit.

---

## 15. Exact toy example: the apparent \(27\to31\) regeneration

Consider

\[
n=27+256q,\qquad q\ge0.
\]

The first three source parities are odd, odd, even.

Exactly:

\[
T(n)=41+384q,
\]

\[
T^2(n)=62+576q,
\]

\[
T^3(n)=31+288q.
\]

Physical gain is strict:

\[
T^3(n)-n=4+32q>0.
\]

Also,

\[
n+1
=
28+256q
=
4(7+64q),
\]

so

\[
v_2(n+1)=2
\]

for every \(q\ge0\).

At the endpoint,

\[
T^3(n)+1
=
32+288q
=
32(1+9q),
\]

so

\[
v_2(T^3(n)+1)\ge5.
\]

If one recorded only the semantic statistic \(v_2(n+1)\), this could be misread as a regenerated future-control reserve \(2\to5\).

But the actual proof premise was

\[
n\equiv27\pmod{256},
\]

which carries cylinder depth \(K=8\).

The endpoint family is

\[
31+288q\equiv31\pmod{32},
\]

and consecutive endpoints differ by \(288=9\cdot32\), so no common class modulo \(64\) exists.

Thus the exact reserve transformation is

\[
\boxed{8\to5}
\]

after three steps, exactly as Theorem RMI1.2 predicts.

The \(2\to5\) statistic increase is real arithmetic, but it is not proof-reserve regeneration.

This is a nontrivial ordinary-forward example and a hostile falsification of a tempting false notion of renewal.

---

## 16. A second toy identity: consecutive odd-run transport

If

\[
n=2^a m-1,
\]

then for \(0\le j\le a\),

\[
T^j(n)=3^j2^{a-j}m-1.
\]

In particular,

\[
T^a(n)=3^a m-1.
\]

This certifies an arbitrarily long exact growth prefix when \(n>1\).

However the residue reserve has fallen from \(a\) low binary digits of \(n+1\) to zero after those \(a\) forced odd steps.

The identity is therefore an exact model of **proof consumption**, not regeneration.

It cannot by itself support an infinite PRRS.

---

## 17. What information PRRS compresses

The physical integer \(n\) is not the compressed content.

The compressed content is the finite premise packet \(P(\theta,\cdot)\) together with one universal local theorem that applies to every integer in the packet's family.

A successful concrete PRRS would compress:

- many possible exact integers;
- multiple possible bounded local branch outcomes;
- the proof that all allowed outcomes return to the same proof schema;
- the proof that every return creates strict physical gain.

This differs from simply iterating one exact integer.

---

## 18. Future proof obligation created by compressed information

For a genuine PRRS instance, the current finite premises must imply

\[
\text{finite real orbit segment}
\Longrightarrow
\text{successor premises}
\Longrightarrow
\text{repeatable rule}.
\]

The successor premises cannot be obtained by asking for extra unconsumed low bits of the original integer.

The specific missing Collatz obligation is now:

> produce one arithmetic premise that is **reseeded by the forward dynamics** strongly enough to replace the \(r\) bits of parity-cylinder control consumed by an \(r\)-step segment.

---

## 19. Why PRRS is not computationally equivalent to unrestricted iteration

A PRRS transition theorem is universal over an infinite ordinary-positive family and has bounded proof shape.

It does not certify one instance by continuing \(T\) until something favorable happens.

The rule must prove, in advance, that every allowed local branch terminates in a successor premise with physical gain.

This is the same distinction between:

- executing a loop on one input; and
- proving an inductive progress certificate for a whole state family.

The targeted literature confirms that finite recurrence/nontermination certificates are a legitimate proof technology in other dynamical/program systems. But those generic certificates do not supply the missing Collatz arithmetic reseed law.

---

## 20. Hostile finite-prefix audit

The pure 2-adic cylinder implementation of PRRS is **killed**.

Theorem RMI1.2 proves exact one-bit-per-step reserve depletion.

Any claimed regeneration based only on finite power-of-two residue information must therefore be one of:

- an unstated stronger initial prefix;
- a finite chain that eventually exhausts;
- a completion/2-adic infinite prescription;
- or a tautological replay of unrestricted Collatz.

The \(27\to31\) example demonstrates why semantic statistics such as \(v_2(n+1)\) are insufficient unless the premise ledger records the full information used to force them.

---

## 21. Hostile ownership audit

PRRS itself keeps ordinary ownership.

All physical transitions are \(T^r(n)\) for ordinary positive \(n\).

The killed cylinder implementation also has perfect ownership; its failure is not ownership but nonrenewal.

No backward-tree membership is used.

---

## 22. Hostile completion audit

No completion is required for PRRS soundness or for Theorem RMI1.2.

The cylinder-loss theorem is an ordinary-integer statement.

An infinite nested sequence of ever-stronger initial cylinders would converge naturally to a 2-adic object, but relying on that would reproduce the forbidden completion/anchor failure mode.

PRRS explicitly rejects such front-loading as regeneration.

---

## 23. Hostile template-ladder audit

PRRS is not promoted because it is "more general than affine returns."

Its defining new feature is premise-renewal accounting, demanded by the root obstruction.

RMI-1 does **not** propose:

- polynomial return maps;
- more affine states;
- larger moduli;
- longer fixed blocks;
- multiple parameters;
- a larger symbolic language.

The exact cylinder theorem instead rules out one large family of fake successors before any enlargement is considered.

---

## 24. Hostile bounded-orbit countermodel test

A complete PRRS requires a proper integer-valued physical height \(H\) with

\[
H(n_{j+1})\ge H(n_j)+1
\]

at every regeneration.

If the actual physical orbit were bounded, only finitely many ordinary states could occur.

Properness then bounds \(H\) on that finite set.

This contradicts

\[
H(n_j)\ge H(n_0)+j.
\]

Therefore the PRRS axioms do not admit an indefinitely regenerating bounded physical orbit.

The toy cylinder fragment is not a complete PRRS and therefore makes no divergence claim.

---

## 25. Root implication chain after RMI-1

The shortest chain is now:

1. construct one non-tautological PRRS whose successor premises are genuinely reseeded rather than inherited from a stronger hidden finite prefix;
2. instantiate the complete regenerative rule indefinitely from one explicit ordinary positive integer;
3. PRRS soundness gives an unbounded actual orbit and non-arrival at \(1\).

The exact cylinder-reserve theorem removes pure finite 2-adic prefix information from the possible renewal source.

However no positive reseed law has yet been constructed.

**Unresolved nontrivial root-arrow count after RMI-1: 2.**

The count does not change.

---

## 26. Finite kill condition

A proposed PRRS construction is killed if any of the following can be shown finitely:

1. its successor premise requires a stronger initial condition than the advertised current premise;
2. all forward-control premises reduce to a finite 2-adic cylinder, so Theorem RMI1.2 forces reserve depletion;
3. successor proof power is obtained only by increasing a preloaded finite prefix;
4. the proof rule calls unrestricted Collatz iteration as an oracle;
5. the compressed family collapses to a singleton/exact-current-integer encoding;
6. physical gain is only bookkeeping gain;
7. ordinary forward ownership is lost;
8. the recurrence exists only in a completion or backward model;
9. a bounded physical orbit can satisfy all stated axioms;
10. no finite arithmetic theorem can decide whether a claimed reseed is genuine.

For the pure-cylinder candidate, condition 2 kills it exactly.

---

## 27. Exact computation used

No computation was used.

Exact consumption:

- exact toy state evaluations executed by code: 0;
- scientific trajectories: 0;
- random starts: 0;
- CPU theorem-search time: 0 seconds;
- GPU: 0;
- cloud/distributed work: 0.

The toy examples and theorem were derived by exact hand algebra.

---

## 28. Literature used and why it was relevant

The literature role was deliberately narrow.

### Laarhoven and de Weger — Collatz / De Bruijn residue graphs

Thijs Laarhoven and Benne de Weger, *The Collatz conjecture and De Bruijn graphs*, arXiv:1209.3495.

Relevant point: power-of-two residue-class dynamics are shift/De-Bruijn in character and connect to the known 2-adic conjugacy. This is consistent with, and conceptually attacks, the possibility that finite power-of-two residue data could self-renew under forward iteration.

RMI-1 did not rely on this paper for Theorem RMI1.2; the theorem is proved directly above.

### Leike and Heizmann — finite nontermination certificates

Jan Leike and Matthias Heizmann, *Geometric Nontermination Arguments*, TACAS 2018 / arXiv:1609.05207.

Relevant point: finite proof objects representing infinite or even unbounded executions are established proof technology for suitable transition systems, and recurrence sets are a known nontermination-certificate concept.

This literature prevents a false novelty claim.

The new RMI-1 issue is not the generic idea of a finite recurrence certificate. It is the Collatz-specific arithmetic requirement that the certificate renew **forward-control premises** without hidden finite-prefix spending.

No giant literature survey was performed.

---

## 29. Theorem-level capability actually obtained

### Obtained

**PROVED:** exact 2-adic cylinder-reserve loss theorem.

**PROVED:** pure finite-cylinder proof states cannot regenerate indefinitely at positive Collatz depth.

**PROVED:** the \(27\bmod256\to31\bmod32\) family is an exact example where a superficially improving valuation statistic hides net proof-reserve depletion.

**DEFINED WITH SOUNDNESS THEOREM:** PRRS, including physical properness and premise-renewal accounting.

### Not obtained

No concrete ordinary-integer PRRS instance was found that genuinely regenerates its forward-control premises from a non-cylinder arithmetic source.

No explicit unbounded candidate integer was found.

No root arrow was closed.

---

## 30. Exact continuation / freeze decision

The pure-cylinder regenerative construction is frozen and must not be enlarged by deeper residues, longer prefixes, more residue labels, or larger finite branch trees.

RMI as a whole is not frozen at RMI-1.

Continuation is justified by one durable root-derived defect:

\[
\boxed{\text{fresh ordinary-arithmetic reseeding of forward-control information}}
\]

and by the reboot rule permitting continuation when a precise obstruction sharply changes the next design requirement.

The next session must attack that capability itself.

It must not generalize the killed cylinder object.

---

## 31. Exactly one next question

### RMI-2 — FRESH FORWARD-CONTROL RESEEDING / ENDOGENOUS INFORMATION-PRODUCTION AUDIT

> **Does there exist a finitely describable ordinary-arithmetic relation attached to one actual positive Collatz state, not equivalent to fixing a stronger finite 2-adic cylinder, such that a bounded genuine forward segment both produces strict physical gain and proves a successor relation of the same schema carrying at least as much usable finite forward-control information as the current state?**

The session must begin representation-neutrally.

It must not start by choosing polynomials, automata, valuations, p-adics, graphs, or a larger return-map class.

Its first task is to define what qualifies as **fresh** control information under the RMI-1 premise ledger and then search for the smallest arithmetic source capable of producing it.

---

## 32. Final RMI-1 verdict

\[
\boxed{\textbf{RMI1-B — PARTIAL REGENERATIVE CAPABILITY / ONE ROOT-DERIVED DEFECT ISOLATED}}
\]

Reason:

- a new exact obstruction was proved;
- a sound finite regenerative proof-state architecture was defined;
- pure finite-prefix/cylinder implementations were structurally killed;
- one precise missing capability remains;
- no full regenerative ordinary Collatz state was obtained;
- root-arrow count remains 2;
- the next question is forced by the missing capability, not by template adjacency.

The governing mentality remains:

> We are not waiting for mathematics to become ready for Collatz. We are attempting to invent mathematics that is ready for Collatz.

The governing discipline remains:

> Invent boldly, but every invention must remain accountable to one actual ordinary forward orbit and to the root objective.
