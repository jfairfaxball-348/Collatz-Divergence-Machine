# RMI-3 — Fresh-Reserve Conversion / Regenerative Control Viability Gate

**Date:** 2026-10-05  
**Programme:** Collatz Divergence Machine / RMI — Root Mechanism Invention Programme  
**Authoritative parent branch:** `rmi2-fresh-forward-control-reseeding-audit`  
**Authoritative parent commit:** `ad44b8ef4f8be8d365739c7a99f414b73a181f6e`  
**Working branch:** `rmi3-fresh-reserve-conversion-viability-gate`  
**Scientific trajectory compute:** NONE  
**Exact theorem-development compute:** NONE  
**Final decision:** **RMI3-C — HARD GATE FAILED / RMI FROZEN**

---

## 1. Executive conclusion

RMI-3 does not obtain a complete regenerative Collatz structure. The RMI-3 hard viability gate therefore fails and the RMI programme freezes. No RMI-4 is authorized.

The main durable result is a representation-neutral pullback obstruction for bounded future control.

For an ordinary positive integer n, define the parity bit

`epsilon_j(n) = T^j(n) mod 2`

and the length-K parity vector

`V_K(n) = (epsilon_0(n), ..., epsilon_(K-1)(n))`.

If a genuine bounded proof-tree leaf has depth r and exact forward map F = T^r, then pointwise

`V_K(F(n)) = (epsilon_r(n), ..., epsilon_(r+K-1)(n))`.

Thus the first K parity decisions at the successor are exactly the already-existing length-K source parity tail beginning at position r. Forward evolution can reveal, re-express, or attach new arithmetic meaning to those tail bits, but it cannot create a new restriction on them.

Consequently, if a fresh successor arithmetic fact is claimed to force a nontrivial bounded future branch pattern, the same branch restriction was already a logical restriction on the source parity tail. The arithmetic statement can be fresh while its bounded future-control content is inherited.

The same obstruction reaches the most direct physical-growth obligation. If a successor premise guarantees that ordinary magnitude exceeds the successor start within at most K further steps, it must exclude the all-even word 0^K, because along that word T^j(m) = m / 2^j < m for every 1 <= j <= K. Therefore bounded ordinary-magnitude gain requires a nontrivial finite parity-tail restriction, and that restriction is inherited under the parity-tail identity.

The RMI-2 factor-transfer mechanism also has a sharper conservation law. Write

`n + 1 = 2^a 3^b c`, with gcd(c,6) = 1.

Each forced odd step maps

`(a,b,c) -> (a-1,b+1,c)`.

Hence L = a+b and c are invariant throughout the forced odd run, and after all a odd steps

`T^a(n) = 3^L c - 1`.

The exhaustion endpoint therefore depends only on arithmetic data already present at the source. The generated increase in b is genuinely fresh as a divisibility statement, but it supplies no independent endpoint datum from which renewed binary control can be recovered.

No alternative ordinary-arithmetic structure was found that escapes these hostile tests while satisfying all seven pre-existing RMI-3 gate conditions.

The unresolved nontrivial root-arrow count remains **2**.

---

## 2. Repository-state verification

The requested RMI-2 branch was verified exactly:

- branch: `rmi2-fresh-forward-control-reseeding-audit`
- tip: `ad44b8ef4f8be8d365739c7a99f414b73a181f6e`
- commit title: `RMI-2: clean Markdown escapes in docs/FAILURE_AND_LESSON_LEDGER.md`

At session start, `main` was at:

`66accafe9acb8c27a8925241c3554c3570f9782e`.

The comparison reported a diverged history with merge base:

`3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb`.

Therefore RMI-2 had **not** been merged into `main`.

Per the authority rule, this audit uses the exact RMI-2 tip rather than divergent `main`.

The RMI-3 branch was created directly from that tip:

`rmi3-fresh-reserve-conversion-viability-gate`.

---

## 3. Confirmation of CDM4 and IRM freezes

The repository constraints remain binding:

- CDM4: **FROZEN**
- CDM4-T32: **NOT AUTHORIZED**
- IRM: **FROZEN**
- IRM-2: **NOT AUTHORIZED**
- pure finite 2-adic/parity-cylinder regeneration: **STRUCTURALLY KILLED**
- rational-affine return enlargement: **NOT AUTHORIZED**
- finite multi-state integer-affine recurrence: **STRUCTURALLY RULED OUT**
- scientific trajectory campaigning: **NOT AUTHORIZED**

RMI-3 does not reopen any of those routes.

---

## 4. Root objective

The root objective remains exactly:

Find one explicit ordinary positive integer N whose orbit under the shortened Collatz map

- T(n) = n/2 when n is even;
- T(n) = (3n+1)/2 when n is odd;

is rigorously unbounded and rigorously never reaches 1.

Finite computation, large excursion, an auxiliary completion, a symbolic orbit, an inverse object, or a non-owned dynamical construction is not certification.

---

## 5. Root implication chain at session start

The shortest honest chain at session start was:

1. obtain one complete non-tautological regenerative ordinary-orbit capability with genuinely renewed proof premises and strict proper physical gain;
2. instantiate it indefinitely on one explicit ordinary positive integer;
3. PRRS soundness gives unboundedness and non-arrival at 1.

The final implication is routine once the first two nontrivial arrows are closed.

---

## 6. Unresolved root-arrow count at session start

**2.**

RMI-3 does not reduce this count rhetorically.

---

## 7. Exact RMI-1 and RMI-2 results treated as closed

### RMI-1

For the infinite cylinder

`C(rho,K) = {rho + 2^K q : q >= 0}`,

a common shortened-Collatz block of length r <= K with s odd source states has exact form

`T^r(rho + 2^K q) = b + 3^s 2^(K-r) q`.

The strongest universally forced power-of-two cylinder depth is exactly K-r. Pure finite binary forward-control reserve is consumed at exactly one bit per shortened step.

The hostile family

`27 + 256q -> 41 + 384q -> 62 + 576q -> 31 + 288q`

has strict physical gain but exact common binary reserve 8 -> 5.

### RMI-2

For

`P_(a,b)(n): v_2(n+1)=a and v_3(n+1)=b`,

every a >= 1 gives

`P_(a,b)(n) -> P_(a-1,b+1)(T(n))`

on one genuine odd shortened-Collatz step, with

`T(n) - n = (n+1)/2 > 0`.

The increment b -> b+1 is ledger-clean and genuinely forward-generated.

The exact common binary cylinder depth changes a+1 -> a.

After the complete forced odd run,

`n+1 = 2^a 3^b c`

implies

`T^a(n) = 3^(a+b)c - 1`.

After one following even step, the successor value of v_2(state+1) can be any prescribed nonnegative integer for infinitely many admissible c, even after any compatible finite odd-modulus restriction. Thus finite odd-modulus information does not universally replenish the consumed binary reserve.

After the first odd step, the actual orbit never again becomes divisible by 3, but this permanent invariant remains compatible with every finite parity word.

The sparse family

`A_t = 4(2^(6t)-1)/9 - 1`

satisfies A_1 = 27 and T^3(A_t) = 2^(6t-1)-1 > A_t, yet its exact common cylinder reserve remains 8 -> 5.

All of these results are closed in RMI-3.

---

## 8. Exact root obstruction

RMI-2 proves that genuine forward Collatz dynamics can strengthen ordinary arithmetic information while producing physical growth. It also proves that the simplest fresh reserve — newly produced odd-prime divisibility of n+1 — is arithmetically orthogonal to the binary information controlling future branches.

The missing capability is therefore not information creation itself, but a prefix-clean conversion from forward-generated arithmetic information into renewed proof control capable of forcing another growth-producing bounded forward transition.

RMI-3 sharpens this:

> Any bounded future branch control at a successor is exactly a restriction on a shifted finite parity tail of the source orbit. Therefore a successor arithmetic fact can be newly true without supplying newly created bounded parity control.

---

## 9. Representation-neutral conversion specification

A successful conversion theorem would take:

- an advertised ordinary-positive current family S_theta defined by a finite premise P(theta,n);
- a bounded genuine forward leaf domain D;
- a positive leaf depth r;
- the exact map F = T^r;
- and a genuinely forward-generated arithmetic fact G at m = F(n);

and prove a finite successor premise Q(m) such that:

1. D is contained in the pullback F^(-1)(Q) using only the advertised source premise, genuinely encountered branch facts, and fixed stated theorems;
2. Q discharges a nontrivial bounded future proof obligation;
3. that obligation forces another strict physical-growth transition or a bounded return that necessarily yields one;
4. the successor has the same proof role needed for the next invocation;
5. no stronger initial finite parity condition is required;
6. the theorem is universal on a nontrivial infinite ordinary-positive family.

The generated arithmetic statement itself is not enough. Its output must be genuinely renewed root-usable control.

---

## 10. Definition of root-usable future control

A successor premise is root-usable only if it proves at least one of:

- a nontrivial bounded future parity/branch block;
- a bounded universal return to the same proof role;
- unavoidable strict ordinary-magnitude gain before a bounded stopping event;
- another finite exact relation whose proved bounded composition necessarily gives such a growth-producing return.

A fact compatible with every finite future parity word is not root-usable by itself.

A fact that is newly true at the successor but whose relevant bounded future-control consequence was already forced by the source premise is not a fresh conversion.

---

## 11. Minimum capability axioms

Any RMI-3 survivor must have:

1. direct ordinary-positive ownership;
2. a finite exact present premise;
3. genuine bounded forward production;
4. ledger-clean freshness under the RMI-2 pullback test;
5. root-usable converted control;
6. strict gain in a proper physical quantity;
7. composability into the same proof role;
8. non-tautology;
9. no hidden stronger initial binary premise;
10. a finite kill condition.

These are capability-derived and do not select a larger representational class.

---

## 12. Core invented object, if one survives selection

No regenerative state survives selection.

The smallest useful diagnostic is the **allowed finite parity-tail set**. For a leaf domain D, depth r, and lookahead K, define:

`W_(r,K)(D) = {(epsilon_r(n), ..., epsilon_(r+K-1)(n)) : n in D}`.

This is not promoted as a new programme state. It is a hostile diagnostic for whether a claimed successor fact truly creates bounded future control.

A successful conversion would have to produce a proper restriction on successor future behavior that was not already a restriction on W_(r,K)(D). The next theorem shows that ordinary finite parity control cannot do this.

---

## 13. Exact ordinary-forward semantics

For every ordinary positive integer n and every r,K >= 0 with K >= 1:

`V_K(T^r(n)) = (epsilon_r(n), ..., epsilon_(r+K-1)(n))`.

This is a literal identity on one actual ordinary forward orbit.

No symbolic realization theorem, inverse tree, completion, or surrogate dynamical system is involved.

---

## 14. Freshness / premise ledger

For a bounded proof-tree leaf:

- advertised current premise: P(theta,n);
- leaf domain: D, selected only by genuinely encountered branch facts;
- exact leaf map: F = T^r;
- generated fact: G(F(n));
- claimed successor control: Q(F(n)).

The successor is ledger-clean only if D is contained in F^(-1)(Q) from P, encountered branch facts, and fixed theorems.

RMI-3 adds a control-accounting test:

> If Q forces a finite parity set A at the successor, then the source premise plus encountered branch facts already force the corresponding source tail into A.

Therefore freshness of the arithmetic proposition Q does not imply freshness of its finite future-control content.

---

## 15. Conversion theorem / counterexample

### Theorem RMI3.1 — exact parity-tail conservation

Let D be any ordinary-positive leaf domain obtained by genuinely following a bounded forward segment of length r, and let F = T^r. Then for every K >= 1:

`{V_K(F(n)) : n in D} = {(epsilon_r(n), ..., epsilon_(r+K-1)(n)) : n in D}`.

**Proof.** For each n in D and 0 <= j < K,

`epsilon_j(F(n)) = T^j(T^r(n)) mod 2 = T^(r+j)(n) mod 2 = epsilon_(r+j)(n)`.

The vector equality follows pointwise.

### Corollary RMI3.1a — finite branch control cannot be freshly created

If a ledger-clean successor premise Q forces V_K(m) to lie in a proper subset A of all length-K binary words, then the source premise plus genuinely encountered branch facts already force the source parity tail at positions r through r+K-1 into A.

The arithmetic proposition Q may be fresh. Its finite branch-control content is inherited.

### Theorem RMI3.3 — factor-transfer conservation

For

`n+1 = 2^a 3^b c`, gcd(c,6)=1,

each forced odd step sends

`(a,b,c) -> (a-1,b+1,c)`.

Hence L=a+b and c are invariant, and after the complete odd run:

`T^a(n) = 3^L c - 1`.

The newly generated b-reserve therefore adds no independent input to the exhaustion endpoint.

Any favorable binary-recapture condition on that endpoint is a restriction on source data (L,c).

---

## 16. Exact physical-gain theorem

RMI-2's factor-transfer step has genuine physical gain:

`T(n)-n = (n+1)/2 > 0`

for every odd n.

RMI-3 proves the complementary obstruction.

### Theorem RMI3.2 — bounded ordinary-magnitude gain requires finite parity control

Suppose a successor premise Q guarantees that for every represented ordinary state m, some 1 <= j <= K satisfies T^j(m) > m.

Then Q must exclude the all-even word 0^K.

**Proof.** If the first K source states are all even, then T^j(m)=m/2^j<m for every 1 <= j <= K. This contradicts the claimed bounded gain.

Thus any bounded theorem forcing another ordinary-magnitude gain carries nontrivial finite parity-tail information. By RMI3.1, that control was already a restriction on the source parity tail.

Strict local physical gain exists. Fresh regenerated control sufficient to compel another bounded gain does not.

---

## 17. Composability / regeneration theorem

No complete regeneration theorem is obtained.

The factor-transfer rule composes only while the inherited a-reserve remains positive. At exhaustion, the generated odd-prime reserve does not supply a bounded universal next growth transition.

Attempting to observe the following even run does not repair this within bounded proof semantics. Under only finite odd-modulus information, CRT permits arbitrarily long all-even continuations, so there is no finite universal observation bound without additional binary control.

Therefore item 8 of the RMI-3 conversion accounting — ability to invoke the same proof role again — fails.

---

## 18. Indefinite-regeneration-implies-unboundedness connection

RMI1.1, PRRS soundness, remains valid conditionally:

If one explicit ordinary orbit admits indefinitely many finite regenerative returns, every return has positive depth, every return gives strict gain in a proper physical height, and the local rule is total on every successor, then the actual orbit is unbounded and therefore cannot eventually enter the 1 <-> 2 cycle.

RMI-3 does not invalidate this soundness theorem.

It fails to instantiate its premise with a complete non-tautological Collatz regeneration rule.

---

## 19. Exact ordinary-orbit regeneration instance, if obtained

No complete ordinary-orbit regeneration instance is obtained.

Two exact partial test cases remain useful.

### Start 7

The orbit begins:

`7 -> 11 -> 17 -> 26 -> 13 -> 20 -> 10 -> 5 -> 8 -> 4 -> 2 -> 1`.

The first three odd steps realize:

`P_(3,0) -> P_(2,1) -> P_(1,2) -> P_(0,3)`

with strict physical growth and fresh increasing 3-adic reserve.

The mechanism then fails to regenerate and the orbit converges to 1.

### Start 27

The orbit begins:

`27 -> 41 -> 62 -> 31`.

The first two odd steps realize:

`P_(2,0) -> P_(1,1) -> P_(0,2)`.

The particular next even step reaches 31, for which v_2(31+1)=5. RMI2.3 proves that this favorable recapture is not universal over P_(2,0).

Neither example satisfies the RMI-3 regeneration condition.

---

## 20. Hostile cylinder audit

The mandatory hostile family is:

`n = 27 + 256q`.

Its exact three-step image is:

`T^3(n) = 31 + 288q`.

The source family has exact common binary cylinder depth 8. The endpoint family has exact common binary cylinder depth 5.

Thus the reserve is exactly:

`8 -> 5`.

RMI3.1 gives the representation-neutral interpretation: the successor parity tail is the source parity tail shifted by three positions. The endpoint control is not newly created.

---

## 21. Hostile CRT audit

Any predicate consisting entirely of finitely many congruence conditions modulo an odd modulus M is compatible, by CRT, with every residue modulo 2^K for every finite K.

By the classical finite parity-vector bijection, it is therefore compatible with every finite future parity word.

This includes:

- the generated RMI-2 3-adic reserve;
- the permanent post-odd-step nondivisibility by 3;
- any finite enlargement by more odd-prime residue coordinates.

Finite odd-modulus information by itself has zero universal finite parity control.

---

## 22. Hostile exact-n audit

The exact current integer determines its entire future orbit.

A state of the form "n equals this exact integer" therefore carries unlimited future information but is tautological for RMI purposes.

Likewise, a parameterization that determines the exact current integer and then invokes unrestricted Collatz iteration is rejected.

No RMI-3 result relies on exact-n continuation as a regenerative mechanism.

---

## 23. Hostile nonlinear-hidden-prefix audit

For every nonlinear, exponential, recursive, or Diophantine family, the audit question is:

> Which finite parity-tail restrictions hold universally over the complete advertised family, and were those restrictions already present at the source?

The mandatory RMI-2 family

`A_t = 4(2^(6t)-1)/9 - 1`

has individual endpoints with large v_2(T^3(A_t)+1), but the complete source family has exact binary depth 8 and the complete endpoint family depth 5.

The nonlinear parameterization therefore stores inherited parity information rather than regenerating it.

RMI3.1 generalizes the hostile test from one common cylinder to arbitrary finite allowed parity-tail sets.

---

## 24. Hostile ownership audit

Ownership is direct throughout the RMI-3 mathematics.

Every state is an ordinary positive integer.

Every transition is a genuine forward shortened-Collatz step.

No inverse tree, predecessor selection, symbolic realization theorem, or later positive-anchor theorem is needed.

No surviving complete regenerative structure nevertheless exists.

---

## 25. Hostile completion audit

No 2-adic or other completed object is used as a physical orbit state.

No inverse limit, formal orbit, completed affine system, or symbolic completion is used to claim regeneration.

Finite parity-vector facts are interpreted only as ordinary residue information about ordinary positive integers.

---

## 26. Hostile template-ladder audit

RMI-3 does not respond to the factor-transfer failure by adding:

- v_5, v_7, or more prime valuations;
- more residue coordinates;
- more states;
- more parameters;
- a larger finite automaton;
- a rational-affine return system;
- a nonlinear state hierarchy;
- a p-adic completion.

The parity-tail theorem is a kill theorem for the required conversion capability, not an enlarged candidate language.

---

## 27. Hostile bounded-orbit countermodel

The exact orbit of 7 reaches 1 after exhibiting:

- three consecutive strict growth steps;
- ledger-clean factor transfer;
- fresh increasing 3-adic reserve;
- the permanent post-odd-step 3-free property.

Therefore all of those partial ingredients can occur inside a convergent ordinary orbit.

They are not divergence evidence.

A complete mechanism still requires regeneration. No candidate supplies it.

---

## 28. Shortest implication chain after the work

No root arrow is closed.

The shortest honest chain remains:

1. obtain one complete non-tautological regenerative ordinary-orbit capability with genuinely renewed proof control and strict proper physical gain;
2. instantiate it indefinitely on one explicit ordinary positive integer;
3. PRRS soundness yields unboundedness and non-arrival at 1.

RMI-3 adds a durable negative theorem: bounded future parity/growth control cannot be newly created by a ledger-clean bounded forward segment; it is a shifted restriction of the source parity tail.

That narrows the mechanism space but does not close arrow 1.

---

## 29. Unresolved root-arrow count after the work

**2.**

The count is unchanged.

---

## 30. Finite kill condition

The RMI-3 route is killed for continuation because no structure simultaneously provides:

1. finite exact definition;
2. direct ordinary-positive ownership;
3. genuinely fresh successor control rather than shifted source-tail control;
4. strict gain in a proper physical quantity;
5. a total bounded regeneration rule;
6. a theorem that indefinite repetition forces unboundedness;
7. one exact nontrivial ordinary-orbit regeneration instance.

Specific theorem-level kills are:

- finite odd-modulus packets: CRT;
- successor finite parity restrictions: parity-tail conservation;
- bounded ordinary-magnitude gain: requires a finite parity-tail exclusion;
- factor-transfer recapture: conservation of L=a+b and c;
- nonlinear favorable families: hidden-prefix/parity-tail audit;
- exact-n continuation: tautology;
- unbounded waiting for a favorable branch: violates bounded proof semantics;
- larger valuation/state systems: unauthorized template escalation without a theorem-derived conversion need.

The hard gate therefore fails.

---

## 31. Exact computation used

No theorem-development computation was executed.

No scientific trajectory computation was executed.

Exact consumption:

- code-executed toy state evaluations: **0**
- certificate-template enumerations: **0**
- scientific starts: **0**
- random high-magnitude starts: **0**
- CPU theorem-search time: **0 seconds**
- GPU: **0**
- cloud/distributed scientific compute: **0**

The candidate falsification question was settled symbolically by the exact parity-tail identity and elementary arithmetic.

The displayed toy orbits were checked by exact hand algebra, not used as empirical evidence.

---

## 32. Literature used and why relevant

No new external theorem was required to prove the RMI-3 obstruction.

Classical finite parity-vector results associated with Terras and Everett are relevant as background because they identify length-K parity words with ordinary residue classes modulo 2^K. RMI3.1 itself needs only the simpler forward-shift identity.

The arithmetic-progression / strongly-sufficient-set literature associated with Monks and collaborators remains relevant only as hostile context: modular information can impose genuine orbit constraints without supplying a regenerative expanding subsystem.

No publication-level novelty claim is made for the parity-tail shift identity. The project-level contribution is its use as exact freshness/control accounting at the RMI-3 viability gate.

---

## 33. Literal seven-condition RMI-3 gate table

| Gate condition | Result | Reason |
|---|---|---|
| 1. finite exact definition | FAIL AS A COMPLETE STRUCTURE | The parity-tail object is only a diagnostic; no complete regenerative state survives |
| 2. direct ordinary-positive one-orbit ownership | PASS FOR THE ANALYSIS | Every theorem concerns actual ordinary forward iterates |
| 3. proved non-tautological regeneration using carried finite information plus genuinely generated forward facts | FAIL | Bounded successor parity/growth control pulls back to inherited source-tail control |
| 4. strict gain in a proper physical quantity | PARTIAL ONLY | Odd factor-transfer steps strictly increase n, but the gain rule does not regenerate |
| 5. theorem that indefinite repetition forces unboundedness | CONDITIONAL ONLY | PRRS soundness exists, but no structure satisfies its regenerative premise |
| 6. finite kill condition | PASS | Parity-tail pullback, CRT, factor-transfer conservation, exact-n, hidden-prefix and boundedness tests are finite/theorem-level kills |
| 7. at least one exact nontrivial ordinary-orbit regeneration instance | FAIL | 7 and 27 realize partial transfer/growth only, not complete regeneration |

The gate requires all seven conditions.

It is failed.

---

## 34. Exact programme continuation / freeze decision

No structure satisfies every RMI-3 viability condition.

The unresolved root-arrow count remains 2.

Therefore:

- **FREEZE RMI**
- **DO NOT CREATE RMI-4**
- do not enlarge the failed state;
- do not add more valuations or residues;
- do not convert parity-tail conservation into another symbolic-language hierarchy;
- do not reopen CDM4 or IRM;
- do not authorize scientific trajectory compute from this result;
- preserve RMI-1 through RMI-3 as durable positive and negative design information.

A future reopening would require genuinely new theorem-level evidence that escapes the bounded-control pullback obstruction while retaining ordinary-positive ownership, finite non-tautological regeneration, and strict proper physical gain.

---

## 35. Next question

None.

RMI3-A was not obtained, so the governing instructions forbid creation of a next RMI session question.

The governing mentality remains:

> We are not waiting for mathematics to become ready for Collatz.
>
> We are attempting to invent mathematics that is ready for Collatz.

The governing discipline remains:

> Invent boldly, but every invention must remain accountable to one actual ordinary forward orbit and to the root objective.

The RMI-3 selection question was:

> Can forward-generated arithmetic information be converted into another bounded proof of physical growth before the proof reserve runs out?

The audit answer is:

> No qualifying conversion was obtained. For bounded finite parity/growth control, the purported successor control is exactly inherited source-tail information, and no alternative structure cleared the hard gate.

RMI3-C — HARD GATE FAILED / RMI FROZEN
