# START HERE

## Live repository state

- Repository: jfairfaxball-348/Collatz-Divergence-Machine
- Project stage: **CDM4-T11 COMPLETE — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND; NO NEW SCIENTIFIC COMPUTE AUTHORIZED**
- Root objective: find an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach 1
- Nontrivial finite cycles: **out of scope**
- Current authoritative theory report: experiments/CDM4_T11_REPORT.md
- Current authoritative scientific-search report: experiments/CDM3_P2_REPORT.md
- Current authoritative post-campaign audit: experiments/CDM3_P2A_REPORT.md
- Current engineering benchmark: experiments/CDM3_B1_REPORT.md
- Current explicit candidate frontier: calibration-only candidates 27 and 127, both resolved; **no scientific divergence candidate**
- T10 infrastructure remains closed: Adamczewski–Bell–Smertnig 2023 supplies the arbitrary-place same-point lifting theorem for the regular one-variable Mahler system at \(W=2^B/3^k\).
- T11 pairwise-collision theorem: for full-length digit polynomials \(S,T\) with \(S(0)=T(0)=1\) and degree \(k-1\), a nontrivial coboundary \(S/T=R/R(z^k)\) forces \(S=Q_\beta\), \(T=Q_\alpha\), where \(Q_\gamma=(z^k-\gamma)/(z-\gamma)\) and \(\alpha,\beta\) are fixed points of \(z\mapsto z^k\).
- Elementary-2 consequence: the only distinct Walsh pair satisfying that criterion is, for odd \(k\), the trivial/alternating rational pair. After rational components are removed, **every genuine nonrational rational-multiple class is a singleton**.
- Exact grouped weights therefore collapse to
  \[
  A_{\{\chi\}}(W)=\widehat C_\chi\ne0
  \]
  on exact support. Same-point rational cancellation is impossible for every genuinely nonperiodic reduced elementary-2 Walsh family.
- Stronger corollary: the same degree argument shows that in finite abelian translation kernels any distinct pairwise coboundary can occur only between individually rational character products. After rational-character removal, genuine classes are singletons over the cyclotomic splitting field as well.
- Project consequence: no genuinely nonperiodic family in the covered elementary-2 class, and more generally the covered finite-abelian translation class, has an ordinary positive-integer anchor. Hence bounded canonical representatives \(R_m\) imply eventual periodicity throughout these covered classes.
- Restricted Periodicity-Conjecture boundary: the balanced finite-abelian translation branch is closed; the live residual boundary moves to higher-dimensional/nonabelian translation blocks, generic finite \(k\)-kernel Mahler systems, and the more general multivariate/unbalanced automatic inverse systems.
- Current computational-reach frontier: P2 exhausted 60,000,000 additional frozen sparse starts; no exceptional object or counterexample occurred. Same-distribution scaling remains unauthorized.
- Current certification frontier: none
- CDM2-E2: **NOT AUTHORIZED**
- CDM3: **parked pending a new scientific mechanism**
- Immediate next task: **CDM4-T12 — finite nonabelian translation / higher-dimensional representation audit, theory only**
- T12 target: derive the exact irreducible matrix Mahler blocks for balanced finite-group translation systems and classify the functional linear/module relations relevant to the prescribed Collatz coordinate, using T10 lifting as closed infrastructure.
- Forbidden next action: P3/further same-distribution CPU scaling, GPU production or benchmark work, cloud/distributed/volunteer scaling, a new sampling distribution/generator, a new ranking metric or finite exponent-code optimization campaign, substitution enumeration, or longer candidate trajectories.
- Explicitly permitted next action: **CDM4-T12 theorem/symbolic analysis only**. No new scientific starts are authorized.

The repository, not conversational memory, is the authoritative research state.

The dated closeouts below preserve historical decisions. Their then-next actions are superseded by this live state and the final authoritative next-task section. In particular, earlier P1/P2 authorizations do not authorize another campaign.

## Read before working

1. `AGENTS.md`
2. `PROJECT_CHARTER.md`
3. `ROADMAP.md`
4. `docs/RESEARCH_PROTOCOL.md`
5. `docs/COMPUTE_BUDGET.md`
6. `docs/PROMOTION_POLICY.md`
7. `docs/CERTIFICATION_POLICY.md`
8. `docs/FAILURE_AND_LESSON_LEDGER.md`
9. `docs/PREVIOUS_WORK_AUDIT.md`
10. `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`
11. `docs/METRIC_CATALOG.md`
12. `docs/BASIN_AND_CACHE_POLICY.md`
13. `experiments/CDM2_E1_REPORT.md`
14. `experiments/CDM2_E1_RESULT.json`
15. `experiments/CDM2_R1_REPORT.md`
16. `experiments/CDM2_R2_REPORT.md`
17. `experiments/CDM2_R3_REPORT.md`
18. `docs/CDM2_R3_ARCHITECTURE.md`
19. `experiments/CDM2_R3_BENCHMARK_RESULT.json`
20. `experiments/CDM3_P1_REPORT.md`
21. `experiments/CDM3_P1_RESULT.json`
22. `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`
23. `experiments/CDM3_B1_REPORT.md`
24. `experiments/CDM3_B1_RESULT.json`
25. `docs/CDM3_B1_ENGINEERING.md`
26. `experiments/CDM3_P2_PREFLIGHT_REPORT.md`
27. `experiments/CDM3_P2_PREFLIGHT_RESULT.json`
28. `experiments/CDM3_P2_INTEGRATION_CLOSEOUT.md`
29. `experiments/CDM3_P2_REPORT.md`
30. `experiments/CDM3_P2_RESULT.json`
31. `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`
32. `experiments/CDM3_P2A_REPORT.md`
33. `experiments/CDM4_T1_REPORT.md`
34. `experiments/CDM4_T2_REPORT.md`
35. `experiments/CDM4_T3_REPORT.md`
36. `experiments/CDM4_T3_SYMBOLIC_CHECK_RESULT.json`
37. `experiments/CDM4_T3_INPUT_MANIFEST.json`
38. `experiments/CDM4_T4_REPORT.md`
39. `experiments/CDM4_T5_REPORT.md`
40. `experiments/CDM4_T6_REPORT.md`
41. `experiments/CDM4_T7_REPORT.md`
42. `experiments/CDM4_T8_REPORT.md`
43. `experiments/CDM4_T9_REPORT.md`
44. `experiments/CDM4_T10_REPORT.md`
45. `experiments/CDM4_T11_REPORT.md`

## Strategic course correction — 2026-10-01

The project is not intended to remain indefinitely inside bounded algebraic refinement.

Its central **working search hypothesis** is:

> There exists a magnitude regime far beyond the presently verified Collatz frontier in which unbounded orbits occur often enough that a sufficiently capable search machine could realistically encounter one.

For **search design**, proceed conditionally as though this hypothesis is true.

This is a HEURISTIC / CONJECTURAL premise only. It is not a theorem and cannot appear as a premise in a certification proof.

The practical consequence is important:

> Increasing computational reach by many orders of magnitude is itself a legitimate research objective when the method is technically credible, finitely budgeted, exact in candidate-affecting decisions, and aimed at a qualitatively new magnitude regime.

The previous rule against throughput-first work is therefore narrowed, not erased. Blind scaling remains a failed strategy. **Reach-first engineering is now explicitly in scope.**

## Frozen proof boundary

Nothing about the course correction changes the standard of proof.

- finite survival is not divergence;
- a huge peak is not divergence;
- an unresolved compute budget is not divergence;
- a model prediction is not divergence;
- a high-magnitude start is not divergence;
- external finite verification is not local certification.

The root result still requires an explicit positive integer and a rigorous proof that its shortened-Collatz orbit is unbounded and never reaches `1`.

## Frozen CDM2-R2 mathematics

CDM2-R2 remains authoritative mathematics even though it no longer dictates the next strategy.

Conditional on a least divergent start `N`:

- every positive forward iterate satisfies `T^j(N)>N`;
- exact prefix minimality gives only K-survival/no-descent interval restrictions on the lift quotient;
- fixed inverse words give exact binary q kills through power-of-3 congruences plus linear inequalities;
- the mod-9 smaller-preimage sieve excludes exactly four q classes modulo 9 for a fixed prefix;
- any finite family of inverse-tree kills becomes eventually periodic modulo a power of 3;
- if any unbounded survivor residue remains, CRT combines it with every residue modulo `2^s`, so every finite future parity block still occurs.

Therefore no finite-depth q ranker was promoted. This kills one route; it does **not** imply that high-magnitude explicit search is pointless.

## Preserved failures — interpreted correctly

Do not revive these as proofs or standalone candidate claims:

- finite survival;
- peak chasing;
- parity-run chasing;
- total stopping-time extremality;
- arbitrary modular feature scores with no mechanism;
- affine-correction ranking;
- quantitative smaller-preimage clearance;
- finite inverse-depth residue scoring.

Also do not waste compute reproducing known contiguous verification with inferior machinery.

However, the following are now legitimate research objects:

- sparse high-magnitude sampling;
- radically different candidate-generation distributions;
- exact low-cost rejection filters;
- CPU vectorisation;
- GPU kernels;
- distributed work units;
- compressed/parity-block execution;
- accelerated odd-map execution;
- arbitrary-precision fallback design;
- checkpointing and deterministic replay;
- methods that avoid verifying every smaller integer;
- machine architectures designed specifically to reach starts many orders of magnitude above the current contiguous frontier.

## CDM2-R3 closeout — 2026-10-01

CDM2-R3 is complete with classification **R3-A — PRODUCTION-CREDIBLE ARCHITECTURE FOUND**.

Durable findings:

- sparse high-magnitude search and contiguous verification have different economics;
- first descent at an untrusted huge state is not convergence in the uniform sparse-search arm;
- a bounded exact benchmark directly executed 12,288 deterministic starts across 128–1024 bits;
- every benchmark start reached the Tier-2 discovery basin n<2^71;
- no overflow, repeat, horizon survivor, exceptional survivor or counterexample occurred;
- fixed-limb odd-only arithmetic materially outperformed both scalar shortened stepping and GMP odd-only reference execution on the benchmark host;
- starting magnitude through 1024 bits was not the dominant ordinary-candidate cost;
- the remaining dominant uncertainty is the survivor-cost tail and the truth/frequency of the counterexample-at-scale hypothesis.

The complete machine is specified in docs/CDM2_R3_ARCHITECTURE.md.

The CDM3-P1 resource design was frozen in docs/COMPUTE_BUDGET.md before execution. CDM3-P1 subsequently passed every required preflight gate and completed as **P1-B — MACHINE VALIDATED; ENGINEERING BOTTLENECK FOUND**.

## CDM3-B1 closeout — 2026-10-01

CDM3-B1 is complete as **B1-A — THROUGHPUT REGRESSION RESOLVED**.

The final exact optimized path recovered 102.35%, 101.39% and 99.70% of the side-by-side R3 U-step rate at 256, 512 and 1024 bits. Every correctness gate passed. Native compilation and unconditional recovery-copy placement were both confirmed material causes.

The next scientific action is frozen in `docs/COMPUTE_BUDGET.md` as CDM3-P2: exactly 60,000,000 generated starts, double P1, with no GPU execution.

On 2026-10-02 the dedicated `CDM3-P2-v1` integration passed every frozen preflight gate in workflow run `36982432002` / job `110759729097`. The exact P1 generator semantics remain `CDM3-P1-gen-v1`; the P2 counter audit proves all six frozen intervals are disjoint from P1 and each other. No P2 scientific start was executed by preflight. The immediate next action is now the exact frozen 60,000,000-start CPU campaign.

## CDM3-P2 closeout — 2026-10-02

CDM3-P2 is complete with classification **P2-ORDINARY-NULL**.

The exact frozen 60,000,000-start population was exhausted:

- generated: **60,000,000**;
- Arm-L pretrajectory pruned: **13,330,798**;
- exact trajectories executed: **46,669,202**;
- Tier-2 basin hits: **46,669,202**;
- exact U-steps: **59,293,075,669**;
- shortened-step equivalents: **118,586,359,433**;
- exceptional freezes: **0**;
- repeated states: **0**;
- 4096-bit / bigint escapes: **0**;
- invariant failures: **0**;
- campaign resource stops: **0**.

All 600 frozen work units completed. Active scientific wall was 437.370285 seconds and summed process CPU was 1,081.483885 seconds, inside the frozen 15-minute / 60-CPU-minute envelope. No candidate entered structural or certification analysis. No explicit unbounded orbit was found and no counterexample was claimed.

P2's survivor-cost means and deterministic tail quantiles closely matched P1 at the same bit-length/arm cells. The doubled sample produced only modest finite increases in maxima; the global P2 maximum was 3,357 U-steps and +29 peak bits, far below the exceptional thresholds.

This null result did not support automatic scaling and placed the repository in **STOP AND AUDIT** pending CDM3-P2A. The subsequent P2A audit has now closed that decision point.

## Historical CDM3-P2A session prompt — completed

### CDM3-P2A — POST-CAMPAIGN AUDIT AND NEXT-STEP DECISION

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository — not conversational memory — as the authoritative research state.

Before analysis, read the complete Read before working list above, especially:

- `experiments/CDM3_P1_REPORT.md`
- `experiments/CDM3_P1_RESULT.json`
- `experiments/CDM3_P2_REPORT.md`
- `experiments/CDM3_P2_RESULT.json`
- `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`
- `experiments/CDM3_B1_REPORT.md`
- `docs/COMPUTE_BUDGET.md`
- `docs/FAILURE_AND_LESSON_LEDGER.md`

### Root objective

The root objective remains an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and never reaches 1.

### Task

Perform a no-new-scientific-start audit of P1 and P2.

Determine what the completed 30M + 60M campaigns actually taught about:

- survivor-cost tail stability by band/arm;
- Arm-L exact-pruning yield and whether it changed downstream cost distributions;
- finite maxima versus sample-size effects;
- production economics after B1;
- whether the current uniform/least-divergent-targeted sampling design has produced any scientifically useful signal beyond efficient ordinary resolution;
- whether the counterexample-at-scale search hypothesis has been meaningfully tested by this magnitude regime and sample size;
- what materially different research direction, if any, has a defensible information-gain argument.

Do **not** execute P3, new CPU starts, GPU work, a new distribution, or a new metric calibration in this audit.

Classify candidate next directions, kill weak routes, and if a new compute campaign is scientifically justified, specify the smallest proposed frozen envelope but leave it **UNAUTHORIZED / NOT EXECUTED** pending a later explicit decision.

If no new direction clears that bar, say so and preserve STOP-AND-AUDIT / theory-design status.

No finite null result is evidence that Collatz is true, and no finite survivor statistic is proof of divergence.


## CDM3-P2A closeout — 2026-10-02

CDM3-P2A is complete. Authoritative audit: `experiments/CDM3_P2A_REPORT.md`.

**Decision: C — STRUCTURE/THEORY PIVOT JUSTIFIED; NO NEW COMPUTE CAMPAIGN AUTHORIZED.**

Across P1+P2, the programme generated **90,000,000** starts, exactly pruned **19,996,018** Arm-L starts before trajectory execution, executed **70,003,982** exact trajectories, and every executed trajectory reached the Tier-2 basin. No exceptional object entered structural or certification analysis.

P2's disjoint doubled population reproduced P1's per-band/per-arm means and deterministic p50/p90/p99/p99.9 tail geometry. The modest and inconsistent changes in finite maxima do not supply evidence of a changing survivor-tail regime.

Arm L remains mathematically valid as exact least-divergent binary pruning and removed **44.4356%** of generated Arm-L starts across P1+P2. Its surviving trajectories showed no empirical enrichment over Arm U. It is pruning, not a predictive ranker.

The current 256/512/1024-bit sparse distribution remains a valid baseline, but it is **not justified as the next production distribution**. More of the same CPU sampling has no current information-gain argument. GPU acceleration would presently address throughput rather than the scientific bottleneck.

No materially different reach-first design is ready to freeze. `docs/COMPUTE_BUDGET.md` is therefore unchanged.

The strongest unresolved bottleneck is the missing finite-description-to-infinite-behavior bridge: an effective nonlocal or recursively closed structure that forces indefinite future behavior after the finite-prefix and finite inverse-sieve freedoms already proved in CDM2-R1/R2.

No explicit unbounded orbit was found. No counterexample was claimed.

## CDM4-T1 closeout — 2026-10-02

CDM4-T1 is complete. Authoritative report: `experiments/CDM4_T1_REPORT.md`.

**Classification: C — NEW THEORETICAL OBSTRUCTION FOUND.**

No scientific Collatz starts were generated.

The session proved three durable project-level obstructions:

- **eventually periodic parity obstruction:** any positive integer with eventually periodic shortened-map parity has an eventually periodic, bounded orbit; therefore a fixed expanding block cannot repeat forever on a positive integer, and an autonomous deterministic finite-state block machine cannot certify divergence;
- **arithmetic-progression closure obstruction:** if a fixed positive-length Collatz block maps an entire arithmetic-progression family into another such family, the 2-adic valuation of the family period strictly drops; therefore no finite directed cycle of whole progression families can close recursively;
- **ordinary-integer anchoring criterion:** a compatible nested residue tower with moduli tending to infinity represents one nonnegative ordinary integer if and only if its canonical residues eventually stabilize. A 2-adic/profinite inverse-limit point is not by itself a positive-integer candidate.

The strongest surviving framework is an **aperiodic recursively generated parity/valuation language** with both:

1. exact start-cylinder residues eventually stabilizing to one explicit positive integer N; and
2. accumulated valuation growth forcing `limsup 3^m/2^A_m = infinity` (or another exact unbounded-growth theorem).

No such explicit language/anchor was found. No unbounded orbit was found. No counterexample was claimed.

No new compute, generator/distribution, finite-code ranker, or GPU workload is authorized.

## CDM4-T2 closeout — 2026-10-02

CDM4-T2 is complete. Authoritative report: experiments/CDM4_T2_REPORT.md.

**Classification: C — NEW ANCHORING / APERIODICITY OBSTRUCTION FOUND.**

No scientific Collatz starts were generated.

T2 derived the exact accelerated valuation-prefix start cylinder. For a_1,...,a_m, with A_m=sum a_i and C_{m+1}=3C_m+2^{A_m}, exact realization is the unique canonical residue

R_m == 3^{-m}(2^{A_m}-C_m)  (mod 2^{A_m+1}).

The exact cylinders nest. Writing M_m=2^{A_m+1}, there is a unique anchor digit

d_m in {0,...,2^{a_{m+1}}-1}

with

R_{m+1}=R_m+d_mM_m.

This turns ordinary-integer realization into an exact extinction theorem:

- one ordinary nonnegative anchor;
- bounded canonical representatives R_m;
- eventual stabilization of R_m;
- eventual d_m=0;
- and R_{m+1}/M_m -> 0

are equivalent.

For bounded valuation alphabets, ordinary anchoring is also equivalent to

R_m/2^{A_m+1}->0.

T2 also completed the boundedness/periodicity equivalence for positive Collatz orbits: a positive orbit is bounded if and only if its shortened source-parity word is eventually periodic. Therefore an exact positive integer realizing a provably aperiodic parity/valuation language is automatically an unbounded orbit and cannot reach 1. A separate quantitative growth-rate theorem is sufficient but not necessary once anchoring and aperiodicity are proved.

The focused literature audit found a strong existing route kill: Sanmin Wang's peer-reviewed E-sequence theorem rules out every irrational mechanical valuation word a_n=floor(n theta)-floor((n-1)theta) as the E-sequence of an odd positive integer. In particular, choices 1<theta<log_2 3 have formally favorable exponential multiplicative growth but no positive-integer anchor.

No general theorem was found ruling out all aperiodic primitive substitutions or morphic valuation words. Those classes survive only under the exact T2 anchor-carry obligation.

No explicit candidate, unbounded orbit, or counterexample was found or claimed.

No compute-budget, metric-catalog, generator/distribution, or GPU authorization changed.

## Historical T2 handover — CDM4-T3 (completed below)

**CDM4-T3 — ANCHOR-CARRY EXTINCTION / RECURSIVE-LANGUAGE REALIZABILITY AUDIT.**

Work theory-first on the exact T2 recurrence.

Primary theorem target:

> For a non-eventually-periodic finite-alphabet recursive valuation/parity language, classify when the exact anchor digits d_m are eventually zero; equivalently classify when the exact canonical start representatives R_m remain bounded and stabilize to one explicit positive integer.

Begin with primitive substitutions and morphic words, using the bounded-alphabet equivalence R_m/2^{A_m+1}->0. Audit whether substitution matrices, return words, carries, automatic-sequence density results, or independently verified parity-density rigidity can force or prohibit carry extinction.

Any use of the López-Stoll 2021 parity-density claim must first be independently verified because that source is a preprint; do not promote a broad automatic/substitution obstruction solely by citation.

Do not enumerate finite words looking for attractive residue rates. Do not optimize finite anchor digits, finite drift, or finite exponent-code scores.

**Scientific starts authorized: NO.**  
**GPU work authorized: NO.**  
**New generator/distribution authorized: NO.**  
**Finite-code ranker campaign authorized: NO.**  
**Theory/structural work authorized: YES.**

## CDM4-T3 closeout — 2026-10-02

**Classification: C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND.**
Authoritative report: `experiments/CDM4_T3_REPORT.md`.

**PROVED:** exact block lift and composition laws, an affine cocycle, and a fixed-dimensional ordered substitution recurrence. Finite arithmetic dimension does not make its growing integer registers finite-state.

**PROVED:** if an aperiodic valuation prefix of length r_j repeats at shift ell_j, with both lengths tending to infinity and

`A_(ell_j) + A_(r_j) - (log_2 3) ell_j - (1/3) log_2(ell_j+1) -> +infinity`,

then no positive integer anchors the word; `R_m -> infinity` and carry is nonzero infinitely often. The proof compares exact-cylinder divisibility with a distinct-orbit height bound. It is related to Wang's prior return-prefix obstruction; no global novelty claim is made.

For primitive substitutions with output mean alpha and specified substitution-prefix return ratio `ell_j/r_j -> K`, the strict inequality `alpha*(1+1/K)>log_2 3` suffices. The single analytically selected Thue-Morse valuation coding `a_(n+1)=1+t_n` is excluded exactly. Aperiodic critical bounded-discrepancy words are also excluded.

**FAILED for promotion:** López-Stoll 2021's density equality. T3 identified an unproved transfer between real and 2-adic limits and an associated prescribed-parity identification. The claim is not disproved, but it cannot support a blanket class exclusion. Bell's published density result yields only a strict exponential-growth requirement for hypothetical aperiodic automatic anchors. General primitive/automatic/morphic cases remain **UNKNOWN**.

Tiny fixed identity checks passed; no scientific starts or scientific trajectories were executed. No explicit candidate, unbounded orbit, or counterexample was found or claimed. Compute budget and metric catalog are unchanged.

## CDM4-T4 closeout — 2026-10-02

**Classification: D — NO QUALIFYING THEOREM FOUND.**  
Authoritative report: `experiments/CDM4_T4_REPORT.md`.

T4 re-derived the exact T3 block, carry, substitution-level, and all-depth anchoring recurrences for primitive constant-length substitutions coded into valuations `{1,2}`.

**PROVED:** equal length-`r` valuation blocks have odd endpoints congruent modulo `3^r`. This is the exact 3-adic endpoint-cylinder dual of T2's 2-adic start cylinder.

**NEGATIVE AUDIT RESULT:** when that endpoint congruence is applied to substitution-scale prefix returns, its height/divisibility exponent reduces to the same strict return inequality already proved in T3. Combining past and future cylinders in a two-sided context also conserves the same exponent budget. These routes therefore do not kill a new residual class.

For any hypothetical aperiodic primitive constant-length `{1,2}` anchor, the mean valuation is rational and must satisfy `1<alpha<log_2 3`; the resulting odd orbit would grow exponentially. This is necessary but not contradictory.

Finite kernels, finite return-word systems, and fixed-modulus endpoint synchronization still do not bound the growing arithmetic registers or the full canonical representative tower. The universal statement “bounded `R_m` implies periodic output” remains **UNKNOWN** for the residual class.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No new scientific compute, generator/distribution, finite-code ranking, or GPU work is justified.

## CDM4-T5 closeout — 2026-10-02

Authoritative report: `experiments/CDM4_T5_REPORT.md`.

**Classification: D — NO QUALIFYING THEOREM FOUND.**

T5 re-derived the exact finite inverse identity

`N = -sum_(j=0)^(m-1) 2^(A_j)/3^(j+1) + (2^(A_m)/3^m)Y_m`

and therefore the exact 2-adic inverse value

`H = -sum_(j>=0) 2^(A_j)/3^(j+1)`.

For a realized positive integer, the remainder tends to zero 2-adically and `H=N`. In the subcritical real regime `alpha<log_2 3`, the same rational partial sums instead converge to a negative real limit, so no real/2-adic rationality transfer is permitted.

For a `k`-automatic `{1,2}` valuation word, `A_n` is `k`-regular but `2^(A_n)` is not: integral `k`-regular sequences have polynomial growth while `2^(A_n)>=2^n`. Thus the naive regular-coefficient Mahler route fails.

T5 nevertheless obtained an exact finite multivariate monomial/Mahler-type recurrence for every uniform-substitution presentation, using prefix Parikh vectors. The inverse value is its 2-adic specialization at letter weights `q_s=2^(v(s))/3`. If every substituted block has the same total valuation `B`, this further reduces to a classical one-variable `k`-Mahler value at `W=2^B/3^k`.

The literature audit found no verified theorem converting either representation into the required 2-adic nonrationality statement. General modern Mahler value theorems audited are complex; published p-adic automatic-number results require automatic canonical p-adic digits of the number being tested; and the closest published p-adic Mahler theorem found uses a pure `p^w` argument plus special functional-equation/Hankel hypotheses.

Writing `V=sum_(j>=0)2^(A_j)` for the shortened parity point, the exact conjugacy gives `H=Phi(V)`. Therefore the full rationality bridge needed by T5 is a restricted instance of Lagarias' open 3x+1 Periodicity Conjecture. Automaticity of the valuation gaps does not automatically make the variable-length parity word automatic in the same base, and Cobham's two-base hypothesis is not present.

No new automatic or primitive constant-length class was killed. No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. López-Stoll remains non-load-bearing. No new compute, generator/distribution, finite-code ranking, or GPU work is justified.

## Authoritative next task — CDM4-T6

**CDM4-T6 — COMPLETION-CORRECT P-ADIC MAHLER VALUE AUDIT.**

Begin with the balanced-block subclass isolated in T5. Let

`G(z)=sum_(n>=0) g_n z^n`

have the finite-valued non-eventually-periodic `k`-automatic coefficient sequence produced by a balanced `k`-uniform Collatz valuation substitution, and let

`W=2^B/3^k`, with `B<k log_2 3`.

Primary theorem target:

> Prove, under fully checked hypotheses in the **2-adic completion**, that `G(W)` is nonrational; or prove that current p-adic Mahler theory does not cover this S-unit argument and identify the exact additional theorem required.

If that subclass is resolved, extend to the generic multivariate T5 value `S(q)` under the monomial incidence transformation. Do not replace the 2-adic value by the complex value of the same formal series.

- **Scientific starts authorized: NO.**
- **GPU work authorized: NO.**
- **New generator/distribution authorized: NO.**
- **Finite-code ranker campaign authorized: NO.**
- **Theory/literature work authorized: YES; tiny exact theorem-support checks only.**


## CDM4-T6 closeout — 2026-10-02

CDM4-T6 is complete. Authoritative report: `experiments/CDM4_T6_REPORT.md`.

**Classification: C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND.**

T6 corrected an important over-broad T5 route obstruction. Bugeaud-Yao's peer-reviewed p-adic first-order Mahler theorem includes a published rational-unit extension from \(p^w\) to \(r p^w/s\) with \(p\nmid rs\). Thus the Collatz argument \(W=2^B/3^k\) is admissible for that theorem when the exact Collatz Mahler series belongs to its first-order class and the Mahler orbit avoids the equation singularities.

T6 then proved that an infinite balanced class does satisfy those hypotheses. For even \(k\), take a primitive complementary binary \(k\)-uniform substitution whose two images are bitwise complements and each contains \(k/2\) zeroes and \(k/2\) ones, with valuation coding \(0\mapsto1,\ 1\mapsto2\). For a non-eventually-periodic fixed point, the exact Collatz coefficient sequence has a two-state \(k\)-kernel and the integer-scaled series \(F_0\) satisfies

\[
F_0(z)=S(z)F_0(z^k)+\frac{(C_0+C_1)P_1(z)}{1-z^k}.
\]

Its exact Collatz point is \(W=2^{3k/2}/3^k=(8/9)^{k/2}\). The determinant and singularities are explicit; \(S(W^{k^m})\neq0\) follows from the rational-root theorem and \(0<W^{k^m}<1\). Nonperiodicity makes the finite-valued coefficient series nonrational, supplying infinitely many nonzero leading Hankel determinants. Bugeaud-Yao therefore gives p-adic transcendence of \(F_0(W)\), hence of the exact inverse-Collatz value \(H=-F_0(W)/3^k\).

Therefore no nonperiodic word in this class has a rational 2-adic anchor. Combining this with T2 gives a new exact implication: bounded canonical representatives \(R_m\) force eventual periodicity for this class.

T6 also proved that naive finite unit-state absorption closes exactly for torsion units, so the actual non-torsion unit \(3^{-k}\) still does not close by scaled copies. Separately, an exact automatic-series construction shows that one rational p-adic value does not generically force a finite-valued automatic generating function to be rational. Extra first-order or Collatz-specific structure is essential.

The generic higher-rank balanced automatic kernel class remains unresolved and still contains a restricted Periodicity-Conjecture problem. Cobham remains unavailable; López-Stoll remains non-load-bearing. No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed. No new scientific compute is authorized.


## CDM4-T7 closeout — 2026-10-02

CDM4-T7 is complete. Authoritative report: experiments/CDM4_T7_REPORT.md.

**Classification: D — NO QUALIFYING THEOREM FOUND.**

T7 derived the exact higher-rank finite-kernel system and proved that every scalar Collatz output satisfies a scalar Mahler equation of order at most the true kernel dimension. It then isolated a natural higher-rank class — balanced finite abelian translation substitutions — for which the complete kernel system Fourier-diagonalizes into first-order character equations.

This does not yet give a new anchor obstruction. In the genuine higher-rank case the exact Collatz output is generally a prescribed sum of several nontrivial character values at the same 2-adic point

\[
W=2^B/3^k.
\]

Separate transcendence of the character values would not exclude rational cancellation. No peer-reviewed p-adic theorem was verified whose checked hypotheses give the needed same-point linear/algebraic independence for this exact system. The Xu–Wang 2004 and Wang 2006 papers remain high-priority sources, but their full theorem hypotheses were not sufficiently exposed in the audited authoritative text to be load-bearing.

Regular-singular structure is not itself a p-adic value theorem. Adamczewski–Faverjon's modern lifting/value results remain archimedean for the values relevant here. Bugeaud–Yao remains load-bearing only after an exact first-order scalar reduction. Cobham remains unavailable and López–Stoll remains non-load-bearing.

No new higher-rank class was ruled out, no new bounded-\(R_m\) periodicity theorem was obtained, no anchored aperiodic word was found, and no candidate, unbounded orbit, or counterexample was found or claimed. No new scientific compute is authorized.

## CDM4-T8 closeout — 2026-10-02

CDM4-T8 is complete. Authoritative report: `experiments/CDM4_T8_REPORT.md`.

**Classification: D — NO QUALIFYING THEOREM FOUND.**

T8 worked theorem-first on balanced elementary-2-group translation kernels. Let \(E\) be the subgroup generated by the digit translations and let

\[
K_C=\{h\in E:C_{x+h}=C_x\text{ for every }x\in E\}.
\]

The exact true k-kernel dimension is now

\[
m=|E/K_C|.
\]

Walsh transform over the reduced quotient gives exact first-order character equations

\[
\widehat F_\chi(z)=S_\chi(z)\widehat F_\chi(z^k),
\qquad
S_\chi(z)=\sum_r\chi(\varepsilon_r)z^r\in\mathbb Z[z],
\]

with exact Fourier support \(\widehat C_\chi\ne0\). The trivial component is rational; nontrivial character projections can themselves be rational if their projected automatic sequence is eventually periodic, so formal character distinctness is not treated as functional independence.

The main new exact theorem is an all-depth 2-adic singularity result. Because \(\varepsilon_0=0\) and \(v_2(W)=B\),

\[
S_\chi(W^{k^j})\equiv1\pmod{2^{Bk^j}}
\]

for every character and every \(j\ge0\). Thus every character factor and the full determinant are nonzero along the entire exact Collatz Mahler orbit. Each supported value has the convergent product representation

\[
\widehat F_\chi(W)=
\widehat C_\chi\prod_{j\ge0}S_\chi(W^{k^j}),
\]

and therefore

\[
v_2(\widehat F_\chi(W))=v_2(\widehat C_\chi).
\]

These identities do not solve rational cancellation. No class-wide valuation separation was proved, and valuation separation alone would not exclude a rational sum. Multiplicative functional relations reduce exactly to rational Mahler coboundaries, but generic functional algebraic independence is not proved.

Bugeaud–Yao remains applicable character-by-character when a supported component is nonrational, yielding separate p-adic transcendence; this does not imply same-point linear independence. Flicker's original 1979 p-adic algebraic-independence theorem was recovered and audited, but its functional-independence/dominance hypotheses were not verified for the stationary Collatz character family. Serious source-level attempts to recover the full Xu–Wang 2004, Wang 2006, and Wang–Xu 2006 theorem statements did not yield hypothesis-checkable full text in the available authoritative sources, so they remain non-load-bearing rather than being inferred from titles or abstracts.

No genuinely multi-character higher-rank class was excluded, no new bounded-\(R_m\) periodicity theorem was proved, and no explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed. Cobham remains unavailable; López–Stoll remains non-load-bearing. No scientific compute is authorized.

## Historical T9 handover — CDM4-T9 (completed below)

**CDM4-T9 — P-ADIC WALSH-PRODUCT SAME-POINT INDEPENDENCE AUDIT.**

Work on the exact T8 reduced family

\[
P_i(z)=S_i(z)P_i(z^k),
\qquad
S_i(z)\in\mathbb Z[z],
\quad
S_i(0)=1,
\]

at

\[
W=2^B/3^k.
\]

First remove zero, rational, duplicate, and rational-coboundary components exactly. Then attack the single missing bridge:

> Under a checkable functional multiplicative/algebraic-independence hypothesis, prove or recover a peer-reviewed **p-adic** theorem implying that
> \[
> 1,P_1(W),\ldots,P_t(W)
> \]
> are linearly independent over algebraic numbers at the same rational non-torsion S-unit point; or derive a Collatz-specific theorem excluding the exact weighted Fourier sum from \(\mathbb Q\).

A theorem of algebraic independence is sufficient but stronger than necessary. Preserve the distinction between functional independence and value independence, and do not use an archimedean value-lifting result as a p-adic theorem.

Do not enumerate substitutions or optimize finite residues/carries/exponent codes.

- **Scientific starts authorized: NO.**
- **GPU work authorized: NO.**
- **New generator/distribution authorized: NO.**
- **Finite-code ranker campaign authorized: NO.**
- **Theory/literature work authorized: YES; tiny exact theorem-support checks only.**


## CDM4-T9 closeout — 2026-10-03

CDM4-T9 is complete. Authoritative report: `experiments/CDM4_T9_REPORT.md`.

**Classification: D — NO QUALIFYING THEOREM FOUND.**

T9 sharpened the exact functional preprocessing of the balanced elementary-2-group Walsh family without generating any scientific Collatz starts.

For the true reachable/output quotient \(G=E/K_C\), each projected character sequence satisfies
\[
f_\chi(kn+r)=f_\chi(n)\chi(\varepsilon_r).
\]
T9 proves directly that an eventually periodic \(\{\pm1\}\)-valued projected sequence is either trivial or, only when \(k\) is odd, the unique alternating sequence \(f(n)=(-1)^n\). Hence the only rational normalized Walsh components are \(1/(1-z)\) and the possible alternating \(1/(1+z)\). Distinct quotient characters also have distinct cocycle polynomials \(S_\chi\).

The main positive structural result is a source-level Kubota criterion: for first-order normalized products
\[
P_i(z)=S_i(z)P_i(z^k),
\]
functional algebraic independence is **equivalent** to multiplicative independence of the cocycles modulo rational Mahler coboundaries
\[
\prod_iS_i(z)^{m_i}=R(z)/R(z^k).
\]
Thus the functional-independence side of the T8/T9 problem is now exact. A divisor equation on \(\mathbb P^1\) gives an exact factor/orbit test for any proposed coboundary relation.

The adjacent Kubota/Nishioka value-lifting theorem recovered in peer-reviewed form is archimedean, not 2-adic. Bugeaud–Yao remains individual only. Xu–Wang 2004, Wang 2006, and Wang–Xu 2006 still lack recoverable theorem text sufficient to certify a simultaneous same-point application. Flicker's theorem genuinely permits p-adic completions but its transformation-limit/dominance package, including the nonarchimedean valuation-separation mechanism, is not established for the stationary unit-valued Walsh family.

No Collatz-specific identity was found that excludes rational cancellation in the prescribed weighted Fourier sum. No genuinely multi-character recursive class was newly ruled out, and no new bounded-\(R_m\)-implies-periodicity theorem was obtained. The generic balanced automatic remainder still meets the restricted Periodicity-Conjecture boundary.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed. No scientific compute, generator/distribution, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

## Authoritative next task — CDM4-T10

**CDM4-T10 — P-ADIC DIAGONAL MAHLER LIFTING / SAME-POINT VALUE THEOREM AUDIT.**

Work only with the exact T9-reduced first-order family
\[
P_i(z)=S_i(z)P_i(z^k)
\]
after zero/rational components and all detected rational Mahler-coboundary relations are accounted for.

Primary theorem target:

> Prove, or recover from complete peer-reviewed theorem text, a characteristic-zero nonarchimedean lifting theorem which at a regular algebraic point \(\alpha\), \(0<|\alpha|_2<1\), transfers functional algebraic (or at minimum functional linear) independence of several stationary first-order \(k\)-Mahler functions to algebraic (or sufficient linear) independence of their values at the **same point**. The theorem must be checked independently for the rational non-torsion S-unit
> \[
> \alpha=W=2^B/3^k.
> \]

If no general theorem is available, attack the exact Collatz weighted relation directly. Do not return to substitution enumeration, finite residues/carries/exponent codes, or numerical singularity checks.

Because CDM4-T10 is the tenth numbered CDM4 theory session, it must also perform the binding **PROGRESS AND CORRECTION AUDIT** required by `AGENTS.md`: re-check scope, hidden assumptions, failed-route memory, theorem-source quality, compute economics, and whether the Mahler route should be killed, narrowed, or continued.

- **Scientific starts authorized: NO.**
- **GPU work authorized: NO.**
- **New generator/distribution authorized: NO.**
- **Finite-code ranker campaign authorized: NO.**
- **Theory/literature work authorized: YES; tiny exact theorem-support checks only.**


## CDM4-T11 closeout — 2026-10-03

CDM4-T11 is complete. Authoritative report: \`experiments/CDM4_T11_REPORT.md\`.

**Classification: C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND.**

The rational-coboundary collision problem is closed for the exact reduced elementary-2 Walsh family. The degree-\((k-1)\) divisor budget forces every nontrivial pairwise coboundary to be a fixed-point cocycle ratio; with \(\pm1\) Walsh coefficients the only distinct possibility is the odd-\(k\) trivial/alternating rational pair already removed by T9/T10.

Therefore every genuine nonrational class is a singleton and every grouped coefficient is exactly its supported Fourier weight, hence nonzero. No genuinely nonperiodic rational exceptional inverse value survives. The ambient inverse value remains a 2-adic integer, but it is transcendental over \(\mathbb Q\), so it is not an ordinary integer or positive-integer anchor.

The same divisor theorem extends the collision exclusion to finite abelian translation kernels after exact rational-character removal. No scientific compute is authorized. The next theory obligation is the higher-dimensional/nonabelian representation boundary.
