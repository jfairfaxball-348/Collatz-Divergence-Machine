# POST-CDM4 PIVOT — Root-Bridge Reset / Positive Integer-Mechanism Discovery Audit

**Date:** 2026-10-05  
**Session type:** strategic root-bridge audit with targeted literature review.  
**Authoritative input:** `cdm4-t31-programme-failure-mode-audit` at `327d8fa7cb270815b31072935852428612f91a6f`.  
**Scientific trajectory compute:** **NONE.**  
**Large compute:** **NOT AUTHORIZED.**  
**CDM4 successor theorem:** **NOT AUTHORIZED.**  
**Final decision:** **P1 — LAUNCH INTEGER-FIRST MECHANISM PROGRAMME.**

## 1. Executive conclusion

The T31 freeze survives unchanged.

The strongest genuinely different bridge found is an **ordinary-integer exact return mechanism**: a finite, non-tautological collection of explicitly parameterized positive-integer families together with exact Collatz return maps between them and a proper height that grows under every indefinitely repeatable return path.

If one such closed mechanism contains one explicit positive integer, then

\[
\text{explicit ordinary integer in an exact closed expanding return mechanism}
\Longrightarrow
\text{unbounded return heights}
\Longrightarrow
\text{unbounded Collatz orbit}.
\]

There is **one unresolved nontrivial arrow**: construct one nonempty exact mechanism of this type.

This is materially closer to the root objective than CDM4 because it never begins with an abstract infinite word and never needs a later positive-anchor theorem. It begins and ends in ordinary positive integers.

No such mechanism is presently known in this repository, no explicit divergence candidate was produced in this audit, and no scientific trajectory search is authorized. The programme is therefore launched only as a **six-session killable mechanism-discovery programme**, with an earlier hard gate after session 3.

Programme name:

> **IRM — Integer Return Mechanism Programme**

The first session must answer a finite yes/no existence question for a frozen low-complexity exact-return template. It is not authorized to “develop machinery” without confronting that existence question.

## 2. Repository-state verification

The supplied T31 branch-tip commit was verified exactly:

`327d8fa7cb270815b31072935852428612f91a6f`

Commit title:

`CDM4-T31: repair ledger math formatting`

A direct compare of that commit against `main` reports:

- status: **diverged**;
- merge base: `3a3df26b59d6f9f42f779c6333c5a0ee97ad95eb`;
- `main` has 8 commits not in the T31 line;
- `main` is missing 73 commits present on the T31 line.

Therefore T31 has **not** been merged into `main`.

Per the authority rule, the exact T31 tip — not divergent `main` — is the authoritative parent for this audit.

Working branch:

`post-cdm4-root-bridge-reset`

created directly from the T31 tip.

## 3. T31 freeze confirmation

T31 concluded:

> **OVERALL FAILURE-MODE VERDICT: MOSTLY YES**

and

> **C — FREEZE CDM4 / PIVOT**

This audit found no reason to amend that conclusion.

The following remain frozen:

- pushy bounded-letter morphic resummation;
- neutral-growth / neutral-face repair;
- ordinary-prefix limsup extensions of T30;
- morphic to S-adic generalization;
- broader recursive-language hierarchies;
- further Mahler zero-theorem generalization;
- toric lifting generalization;
- multiscale filtration repair;
- divisor-local / relative-multiplicity repair;
- moving-target zero-theorem generalization;
- further symbolic anchor-exclusion classification.

There is no CDM4-T32.

T1-T30 mathematical reports remain preserved. This audit changes programme strategy, not their mathematical status.

## 4. Root objective

Find one explicit ordinary positive integer (N) whose orbit under

\[
T(n)=
\begin{cases}
n/2,&n\text{ even},\\
(3n+1)/2,&n\text{ odd},
\end{cases}
\]

is rigorously unbounded and rigorously never reaches (1).

A long finite trajectory, high peak, rare stopping time, stochastic anomaly, 2-adic orbit, infinite symbolic word, or backward-semigroup representation is not the root deliverable.

## 5. Why CDM4 is not to be resumed

The durable positive fact from T2 is important:

- for a valuation prefix with canonical representatives (R_m), ordinary-positive realization is equivalent to boundedness/eventual stabilization of (R_m), equivalently eventual death of the anchor carry;
- under the T2 hypotheses, once an ordinary positive integer realizes an aperiodic valuation structure, bounded positive dynamics would force eventual periodicity, so realized aperiodicity gives unboundedness.

The failure of CDM4 was not that this bridge was false. It was that the programme overwhelmingly advanced the negative side:

\[
\text{structured word}
\to
\text{prove it cannot positively anchor}
\to
\text{move to a broader surviving symbolic class}.
\]

T31 documented the resulting negative-result ratchet and the AI selection effect: every local theorem closure generated another technically coherent adjacent theorem without increasing the number of explicit scientific candidate integers, positive anchors, or root certificates.

The new programme reverses the implication direction:

\[
\text{ordinary positive integers}
\to
\text{exact arithmetic closure}
\to
\text{indefinitely repeatable growth}
\to
\text{explicit unbounded orbit}.
\]

## 6. External prior-art audit

### 6.1 Terras and Everett: finite stopping-time density

Terras, *A stopping time problem on the positive integers* (Acta Arith. 30, 1976, DOI 10.4064/aa-30-3-241-252), and Everett, *Iteration of the number-theoretic function f(2n)=n, f(2n+1)=3n+2* (Adv. Math. 25, 1977, DOI 10.1016/0001-8708(77)90087-1), established that almost every positive integer eventually descends below its starting value.

**Bridge to one explicit divergent integer:** none directly. These describe typical descent, not a constructive exceptional mechanism.

**Known failure:** a zero-density divergent set remains possible.

**Constructive or exclusionary:** statistical/typical.

**Falsifiable project use:** any proposed enriched family should beat matched controls in a pre-registered persistence statistic.

**Difference from CDM4:** yes, because the objects are ordinary integers, but typicality alone is not a root proof.

### 6.2 Exact parity/residue affine dynamics

For any finite parity block, the corresponding iterate is an exact affine function on one residue class modulo a power of two. This viewpoint underlies classical stopping-time work.

This is directly useful to IRM because it gives exact finite return maps on ordinary integers.

But a fixed long expanding parity prefix is not enough. Conditional on a length-(k) parity prefix, higher binary residue bits parameterize all length-(r) parity continuations. A distribution defined only by a preselected finite parity prefix buys a finite excursion, not a persistent post-prefix bias.

**Bridge:** exact affine block + self-reproduction could be decisive.

**Failure mode:** fixed or eventually periodic block repetition returns to the old symbolic/anchor geometry.

**Constructive:** only when closure is proved on an integer family rather than prescribed symbolically.

### 6.3 Bernstein-Lagarias 2-adic conjugacy

Bernstein and Lagarias, *The 3x+1 Conjugacy Map* (Canad. J. Math. 48, 1996), show that the shortened Collatz map on \(\mathbb Z_2\) is topologically conjugate to the 2-adic shift; every infinite parity sequence has a unique 2-adic realization.

**Bridge to one explicit ordinary integer:** a theorem that the relevant 2-adic point is an ordinary positive integer.

**Known failure:** generic 2-adic realization does not supply that theorem.

**Constructive or exclusionary:** constructive in \(\mathbb Z_2\), not constructively positive-integral.

Conclusion: useful background, not a primary pivot.

### 6.4 Predecessor trees

Wirsching's *The Dynamical System Generated by the 3n+1 Function* (LNM 1681, 1998) and Applegate-Lagarias predecessor-tree work analyze exact inverse images. Applegate and Lagarias, *Density Bounds for the 3x+1 Problem I. Tree-Search Method* (Math. Comp. 64, 1995), prove substantial predecessor-tree growth; *The Distribution of 3x+1 Trees* (Experimental Math. 4, 1995) studies its distribution.

**Bridge:** one might hope to construct an exceptional infinite backward ray.

**Fatal directionality issue:** every finite predecessor maps forward *toward* the chosen target. An infinite backward ray does not provide one finite positive integer whose forward orbit follows the ray to infinity.

This is not selected.

### 6.5 Arithmetic progressions and strongly sufficient sets

Monks, *The Sufficiency of Arithmetic Progressions for the 3x+1 Conjecture* (Proc. AMS 134, 2006), proves every nonconstant arithmetic progression is sufficient. Monks et al., *Strongly sufficient sets and the distribution of arithmetic sequences in the 3x+1 graph* (Discrete Math. 313, 2013), further analyze congruence classes and sufficient sets.

These results show that residue classes can be structurally unavoidable for hypothetical divergent orbits.

**Bridge:** use congruence classes as unavoidable checkpoints, then prove expansion there.

**Limitation:** sufficiency does not identify which member is divergent and does not itself supply positive drift.

Useful as a hostile check on IRM, not a standalone programme.

### 6.6 The 3x+1 semigroup

Applegate and Lagarias, *The 3x+1 Semigroup* (J. Number Theory 117, 2006; arXiv:math/0411140), define a multiplicative semigroup encoding backward iteration and prove it contains all positive integers.

This is an especially important strategic warning.

A representation motivated as a weakening of the Collatz problem becomes universal without resolving actual forward-orbit behavior.

**Strategic lesson:** never promote a representation merely because it contains or constructs ordinary integers; exact forward-orbit ownership must be preserved at every arrow.

### 6.7 Stochastic models

Lagarias-Weiss, *The 3x+1 Problem: Two Stochastic Models* (Ann. Appl. Probab. 2, 1992), and Kontorovich-Lagarias, *Stochastic Models for the 3x+1 and 5x+1 Problems* (arXiv:0910.1944), model forward and inverse dynamics by random and branching processes.

**Bridge:** theory-guided candidate distributions could target statistically exceptional starts.

**Limitation:** a stochastic tail event is not a proof of divergence.

Useful for matched-control design; insufficient as the primary root bridge.

### 6.8 Rigorous almost-all results

Tao, *Almost all orbits of the Collatz map attain almost bounded values* (Forum Math. Pi 10, 2022, DOI 10.1017/fmp.2022.8), proves that for any \(f(N)\to\infty\), almost every (N) in logarithmic density has an orbit attaining a value below (f(N)).

Krasikov-Lagarias difference-inequality methods prove explicit lower bounds for starts known to reach 1.

These constrain what a divergent population could look like but leave a zero-density exceptional set possible.

### 6.9 Long stopping times and tree-guided finite extremes

Applegate and Lagarias, *Lower bounds for the total stopping time of 3x+1 iterates* (Math. Comp. 72, 2003; arXiv:math/0103054), use large predecessor-tree computation to prove infinitely many integers with unusually large but finite total stopping time.

This shows exceptional finite behavior can be generated non-randomly, but it is not an indefinitely repeatable expansion mechanism.

### 6.10 Benford-type finite-distribution results

Lagarias-Soundararajan, *Benford's Law for the 3x+1 Function* (JLMS 74, 2006), prove approximate Benford behavior for finite initial orbit segments for most starts.

Useful as a control/null model; no root bridge.

## 7. Integer-first mechanism audit

### 7.1 Proposed bridge architecture

The candidate architecture is an **exact integer return certificate**.

A certificate must consist of:

1. finitely many explicitly defined sets \(S_i\subset\mathbb Z_{>0}\), each parameterized by ordinary nonnegative integers using congruences and inequalities;
2. for each admissible parameter point, an exact finite Collatz return from (S_i) into some (S_j);
3. an exact integer parameter update;
4. universal closure: the return claim holds for every parameter in the state domain, not sampled examples;
5. a proper height (H(i,q)) such that every infinite legal return path forces \(H\to\infty\);
6. one explicit ordinary parameter (q_0), hence one explicit positive integer (N), in the closed domain.

A testable first template is a one-parameter affine semiconjugacy:

\[
F(q)=a q+b.
\]

Split the parameter line into finitely many congruence cells. On each cell require

\[
T^{\tau(q)}(F(q))=F(G(q)),
\]

where (\tau(q)) is a finite exact return time determined by the cell and (G(q)) is an integer affine update.

The desired certificate requires

\[
G(q)>q
\]

or a rigorously equivalent common height increase on every cell in the closed domain.

Then the ordinary integers (F(q_0),F(q_1),F(q_2),dots) are actual forward Collatz iterates at certified return times and their height tends to infinity.

### 7.2 Why this is genuinely different from CDM4

The research object is not an infinite word. It is a closed subset of ordinary positive integers plus exact forward return maps.

No 2-adic completion, canonical scalar, symbolic anchor, inverse limit, or later ordinary-representative theorem is needed.

Finite parity words may appear only as local proofs of exact finite returns.

### 7.3 Root distance

Shortest implication chain:

1. Construct one nonempty exact closed expanding return certificate containing explicit (N).
2. Certified returns form an infinite subsequence of the actual forward orbit with unbounded height.
3. Therefore the forward orbit of (N) is unbounded and cannot reach (1).

Only step 1 is unresolved.

**Unresolved nontrivial arrow count: 1.**

### 7.4 Positive versus negative leverage

Success must produce either:

- an explicit candidate integer already covered by an exact indefinite return proof; or
- an explicit positive integer family with closure and growth where any admissible member supplies a candidate.

An impossibility theorem is permitted only as a **kill result**. It does not authorize a larger adjacent hierarchy automatically.

### 7.5 Ordinary-integer integrity

The programme remains in \(\mathbb Z_{>0}\) throughout.

A finite residue calculation is allowed because it certifies actual integer transitions. A 2-adic or symbolic argument may be used only as a lemma; if it creates a new return-to-integers bridge, that bridge must be stated and proved immediately.

### 7.6 Falsifiability

Kill early if:

- closure requires prescribing an infinite parity/valuation sequence;
- the parameter update is merely the original Collatz problem in renamed variables, with no monotone/proper quantity gained;
- closure requires a nonordinary 2-adic point;
- exact closed templates collapse to eventual periodicity or nonexpansion;
- the first two frozen template searches are null with no mathematically justified positive near-certificate;
- by the end of IRM-3 there is no explicit ordinary-integer family with exact self-return plus a candidate growth certificate.

### 7.7 Compute role

No trajectory campaign is needed to validate an exact certificate.

Tiny exact enumeration or SMT/SAT-style search may be used only as theorem discovery for a **pre-frozen finite certificate language**:

- at most (10^6) certificate templates examined;
- at most 60 CPU-seconds;
- exact arithmetic only;
- no random starts;
- no GPU;
- no cloud/distributed work;
- no long trajectory extension;
- null result recorded as null.

No scientific candidate search is authorized by this audit.

### 7.8 External interest

A finite exact semiconjugacy from an arithmetic family to a provably expanding integer map would be independently interesting in arithmetic dynamics.

Secondary only.

### 7.9 AI-selection-effect test

**Risk: HIGH unless governed.**

An AI can endlessly enlarge state count, congruence moduli, return depth, parameter dimension, and piecewise cases.

Governance:

> After one justified enlargement of the frozen certificate language, another enlargement is forbidden unless the previous result supplied a concrete positive near-certificate whose one identified defect is repaired by the enlargement.

“No certificate yet” is not a reason to increase the search space.

## 8. Positive-anchor construction / recognition audit

### 8.1 Attraction

T2 gives

\[
\text{ordinary anchor}+\text{aperiodic realized valuation structure}
\Longrightarrow
\text{unbounded positive orbit}.
\]

A positive anchoring theorem would attack the exact bridge CDM4 never supplied.

### 8.2 Why it is not selected

T2 also says ordinary anchoring means the representatives eventually stabilize and the carry eventually dies.

Once the carry has died, the ordinary integer is fixed and the rest of the infinite valuation word is simply its actual future orbit. A construction cannot freely keep choosing later symbols after stabilization.

Thus a successful positive-anchor programme must eventually prove a property of the actual orbit of an ordinary integer. At that point it has effectively become integer-first.

The 2-adic conjugacy intensifies this diagnosis: abstract infinite parity realization is easy in \(\mathbb Z_2\); ordinary-positive realization is the exceptional bridge.

### 8.3 Root distance

At least:

1. positive ordinary-anchor theorem for a nontrivial infinite family;
2. proof the realized tail is aperiodic or otherwise divergence-forcing;
3. T2 yields unboundedness.

**Unresolved nontrivial arrows: 2.**

### 8.4 Stop rule

A positive-anchor side investigation is allowed only if it begins with an operation that provably preserves ordinary positive anchoring.

If two sessions produce only new anchor obstructions, completion criteria, or broader symbolic families, kill it.

### 8.5 Verdict

**MAYBE as a bounded side question; DO NOT LAUNCH as primary programme.**

## 9. Theory-guided candidate-distribution audit

### 9.1 Legitimate version

A P3 route is legitimate only if theory predicts an explicitly generated family of actual integers differs from matched controls **after** any forced finite prefix has been consumed.

Possible metrics:

- first-passage time below start;
- maximum excursion after the forced block;
- survival time after the forced block;
- post-prefix odd-step/valuation statistics;
- rate of triggering a frozen structural condition.

### 9.2 Finite-prefix trap

A high-growth finite parity prefix can be imposed exactly by choosing one residue class modulo (2^k). This produces a finite excursion.

But it does not itself enrich the unconstrained continuation. Higher binary lifts parameterize all longer parity continuations. A family special only because of the first (k) prescribed parity bits is finite-prefix engineering, not a persistent divergence mechanism.

### 9.3 Repository compute history

CDM3-P2 executed 46,669,202 exact trajectories from a frozen 60M-start population after pruning. CDM3-P2A found near-identical means/tail quantiles to P1 and no exceptional structural population.

The lesson is:

> a new distribution requires a new mechanism.

### 9.4 Valid future P3 hypothesis

Reconsider P3 only if IRM or another theory identifies a finite arithmetic signature (P(n)) that is not merely a fixed parity prefix and predicts a post-prefix effect.

A proper pilot would pre-register:

- candidate family (P(n));
- bit-length matched controls;
- (10^4) to (10^5) starts;
- one primary post-prefix metric;
- effect-size threshold before execution;
- null/failure threshold;
- no scale-up on suggestive maxima.

### 9.5 Root distance

1. theory -> enriched actual-integer family;
2. family -> explicit exceptional candidate;
3. candidate -> rigorous indefinite mechanism/proof.

**Unresolved nontrivial arrows: 2 to 3.**

### 9.6 Verdict

**MAYBE / PARK.**

## 10. Fourth bridge: inverse-tree / semigroup construction

A superficially different route is

\[
\text{target integer}
\to
\text{large inverse tree or multiplicative backward representation}
\to
\text{choose an infinite exceptional branch}.
\]

It fails the hostile bridge test.

A finite predecessor (m) of (a) satisfies (T^
u(m)=a). Its forward orbit goes toward (a), not outward along the predecessor tree. An infinite backward ray contains infinitely many different starting integers; it is not one forward orbit.

The 3x+1 semigroup sharpens the warning: it contains all positive integers, but semigroup membership does not preserve ownership by one actual forward Collatz trajectory.

**Verdict: NO.**

## 11. Hostile bridge / falsification tests

| Direction | Root distance | Positive leverage | Ordinary-integer integrity | Concrete falsifier | Session stop | Compute test | External value | AI-loop risk |
|---|---:|---|---|---|---|---|---|---|
| Integer return mechanism | 1 | direct construction / sufficient condition | complete | no exact closed expanding family in frozen templates; collapse to tautology/periodicity | IRM-3 hard gate, IRM-6 absolute audit | tiny exact certificate enumeration only | high | high unless template growth frozen |
| Positive-anchor construction | 2 | positive sufficient condition | bridge itself is the issue | no anchor-preserving operation; work reverts to obstruction theorems | 2 side sessions | none initially | high | very high |
| Theory-guided distribution | 2-3 | candidate enrichment | complete | no pre-registered post-prefix effect vs controls | 3 sessions before scale-up | (10^4)-(10^5) pilot only after theory | medium-high | medium |
| Inverse-tree / semigroup | >=2 with wrong-direction bridge | backward construction | actual integers, wrong ownership | infinite branch still does not give one forward divergent orbit | reject now | none | high | high |
| Resume symbolic hierarchy | >=3 | mainly exclusion | ordinary-integer bridge remains late | same anchor gap persists | reject now | none | high as pure math | severe |

## 12. Compact comparison table

| Direction | Starting object | Exact route to ordinary integer | Unresolved bridge count | Constructive / exclusionary | Falsifiability | Likely compute role | Information gain if false | CDM4-trap danger | External value | Budget | Verdict |
|---|---|---|---:|---|---|---|---|---|---|---:|---|
| **Integer-first exact return mechanism** | explicit integer family | already ordinary; exact forward returns remain in family | **1** | constructive | high | tiny exact template search only | high if frozen class is broad enough | medium, governed | high | **6 sessions** | **LAUNCH** |
| Positive-anchor construction/recognition | infinite structured object / anchored prefixes | must prove positive anchor | 2 | constructive in intent | medium | little/no compute | medium | **high** | high | 2 side sessions max | park |
| Theory-guided enriched distribution | actual integers | immediate | 2-3 | candidate constructive | high | small matched-control pilot after theory | high for a specific mechanism | medium | medium-high | 3 before scale-up | park |
| Inverse-tree / semigroup construction | predecessors / rational products | integers exist but forward ownership is missing | >=2 | representation/backward constructive | low for root bridge | none | low | high | high | 0 | reject |
| Resume symbolic hierarchy | infinite word | separate anchor theorem required | >=3 | mainly exclusionary | low at root | none | low | **severe** | high as pure math | 0 | reject |

## 13. Counterfactual restart test

### Integer-first exact return mechanism

**YES.**

It attacks a sufficient condition on actual integers and has one unresolved nontrivial arrow.

If it fails under a deliberately broad frozen certificate class, that reduces the space of simple exact self-reproducing arithmetic mechanisms.

### Positive-anchor construction

**MAYBE.**

It attacks a real bridge but easily becomes a completion-to-integer problem. A failure that merely finds another anchor-free family mostly invites another abstraction.

### Theory-guided candidate distribution

**MAYBE.**

Reasonable only with a mechanism predicting post-conditioning behavior. A clean null pilot can kill a specific mechanism and have high information gain.

### Inverse-tree / semigroup route

**NO** as a primary divergence route.

Forward ownership is wrong-direction.

### Resume symbolic hierarchy

**NO.**

Its failure would invite another nearby symbolic class rather than materially shrinking plausible root mechanisms.

## 14. Recommended programme

\[
\boxed{\textbf{P1 — LAUNCH INTEGER-FIRST MECHANISM PROGRAMME}}
\]

### Programme name

**IRM — Integer Return Mechanism Programme**

### Root theorem/objective

Produce an explicit ordinary positive integer (N) and a finite exact return certificate proving that an infinite subsequence of its actual shortened-Collatz orbit has a proper height tending to infinity.

A successful certificate must itself imply unboundedness. It cannot defer the decisive bridge to another representation theorem.

### Maximum initial session budget

**6 research sessions.**

Mandatory hard viability gate at the end of **IRM-3**.

No automatic IRM-7 is authorized.

## 15. First bounded research target

### IRM-1 falsifiable question

> **Does there exist a non-tautological one-parameter affine integer return certificate in a frozen low-complexity template for the shortened Collatz map?**

Initial template:

- one ordinary-integer embedding (F(q)=a q+b), \(q\ge q_0\);
- at most **8** congruence cells for (q);
- cell moduli at most **64**;
- exact Collatz return depth at most **16 shortened steps** per cell;
- on each cell, integer-affine update (G_j(q)=u_j q+v_j);
- exact identity
  \[
  T^{\tau_j}(F(q))=F(G_j(q))
  \]
  for every (q) in that cell;
- universal forward closure;
- a common proper height with strict increase on every return, preferably (G_j(q)>q);
- at least one explicit admissible (q_0).

### Success

IRM-1 succeeds only if it produces an explicit exact certificate satisfying all conditions, or a rigorously proved positive near-certificate with **one named defect** whose repair has a mathematically compelled extension.

“Interesting affine formulas” is not success.

“Many expanding finite blocks” is not success.

### Failure

IRM-1 fails if the frozen template contains no certificate and no single mathematically compelled positive near-certificate.

A null result does not automatically authorize larger moduli, deeper returns, more states, or more parameters.

## 16. Exact kill criteria

Kill immediately if:

1. **Symbolic relapse:** closure requires an infinite parity/valuation prescription.
2. **Completion relapse:** closure exists only for a 2-adic/formal point with no proved ordinary-positive representative.
3. **Tautological semiconjugacy:** parameter recurrence is computationally equivalent to unrestricted Collatz dynamics and supplies no new monotone/proper quantity.
4. **Periodicity collapse:** closed mechanisms force eventual periodicity rather than unbounded growth.
5. **Representation slippage:** a semigroup, inverse tree, automaton, or formal representation no longer tracks one actual forward orbit.

Kill at the end of IRM-2 if two frozen template tests are null and there is no theorem-level reason for a specific extension.

Kill at the end of IRM-3 unless there is at least one of:

- explicit positive integer candidate with a partially completed exact self-return certificate;
- explicit positive integer family with exact closure and a rigorously established nontrivial growth inequality;
- positive sufficient condition for such a certificate instantiated by at least one nontrivial arithmetic family.

At IRM-6, full viability audit is mandatory.

## 17. Compute authorization status

### This audit

**No scientific compute was run.**

**No scientific trajectory campaign is authorized.**

### IRM-1

A tiny exact finite template enumeration is permitted only as a diagnostic aid after the template is frozen in writing:

- <= (10^6) templates;
- <= 60 CPU-seconds;
- exact arithmetic;
- no random integer search;
- no GPU;
- no cloud;
- no distributed compute;
- no open-ended parameter sweep;
- no promotion based on finite trajectory length or peak.

Any search script must emit a complete certificate candidate independently checkable symbolically, or a complete null summary.

This is theorem-discovery tooling, not evidence of divergence.

## 18. Governance rules for IRM

### Rule 1 — Root proximity

Every session begins with the shortest implication path from its deliverable to an explicit positive integer with a rigorously unbounded orbit.

### Rule 2 — Positive progress requirement

By IRM-3 the programme must possess a positive ordinary-integer object: candidate, family, or exact sufficient condition instantiated by a real family.

### Rule 3 — No automatic successor

Completion of an affine-return theorem does not authorize a higher-dimensional or larger-modulus successor unless that successor repairs one specific positive near-certificate.

### Rule 4 — Fixed budget

IRM has six sessions maximum before a full viability decision.

### Rule 5 — Compute follows theory

No large search is authorized. Future candidate-distribution compute must arise from an independently stated arithmetic mechanism and a pre-registered post-prefix prediction.

### Rule 6 — Residual is not promising

A surviving larger certificate class is not evidence that a counterexample lives there.

### Rule 7 — Internal terminology budget

New project-specific abstractions are forbidden unless they compress a proof of an exact ordinary-integer return or root certificate.

### Rule 8 — Killable hypotheses

Every mechanism must include the finite theorem, counterexample, or experiment that kills it.

### Rule 9 — No template ladder

State count, modulus, return depth, or parameter dimension may be enlarged at most once after a null result, and only to repair a named positive near-certificate.

### Rule 10 — Forward-orbit ownership

Every represented object used for promotion must be demonstrably part of one actual forward orbit of one ordinary positive integer. Backward-tree membership, semigroup membership, or 2-adic realization is insufficient.

## 19. Final decision

\[
\boxed{\textbf{P1 — LAUNCH INTEGER-FIRST MECHANISM PROGRAMME}}
\]

Why P1:

- shortest root path;
- ordinary-integer integrity throughout;
- direct sufficient-condition architecture;
- exact falsifiers;
- bounded template language;
- no later positive-anchor bridge;
- compute optional and tiny;
- failure can be informative rather than generative of an endless adjacent hierarchy.

Why not P2: high risk of recreating CDM4.

Why not P3: valid but two to three arrows from the root and finite-prefix enrichment is not persistent enrichment.

Why not P4: no fourth route found with a shorter valid forward bridge; inverse-tree and semigroup constructions fail forward-orbit ownership.

Why not P5: IRM is root-proximate, finitely falsifiable, and different enough from CDM4 to justify one tightly bounded launch.

## 20. End state

- T31 remains authoritative and unmerged into `main`.
- CDM4 remains frozen.
- No CDM4-T32 exists.
- No explicit counterexample or scientific divergence candidate was found.
- No validated enriched candidate distribution was found.
- No scientific trajectory compute was authorized.
- IRM is authorized for at most six sessions.
- The first question is finite and killable.

First research question:

> **Does the frozen IRM-1 one-parameter affine certificate class contain an exact, universally closed, strictly expanding ordinary-integer return mechanism for the shortened Collatz map?**

Kill condition:

> **If the frozen template is null and supplies no single mathematically compelled positive near-certificate, record the null and do not enlarge the template automatically.**
