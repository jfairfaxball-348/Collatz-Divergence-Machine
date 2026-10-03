# Roadmap

Historical stage decisions below retain their original context. The live authorization is the final immediate-next-task section; completed P1/P2 budgets do not authorize new scientific starts.

## CDM0 — SCAFFOLD AND CALIBRATION

**Status: COMPLETE.**

Governance, exact trajectory engine, ledgers, candidate model, cache, metric registry, transparent promotion logic, and a small deterministic end-to-end calibration are in place. No serious search was performed.

## CDM1 — STATE-OF-THE-ART BASELINE

**Status: COMPLETE — 2026-10-01.**

The durable audit is `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`.

CDM1 established the external verification/provenance frontier, divergence-relevant necessary conditions, compute economics, preserved route kills, and the bounded CDM2-E1 calibration design. No high-range counterexample search was performed.

## CDM2 — FILTER, METRIC, AND COMPUTATIONAL-REACH DESIGN

**Status: COMPLETE — CDM2-R3 R3-A ARCHITECTURE FOUND; BOUNDED CDM3-P1 PILOT PATH UNBLOCKED.**

Authoritative E1 report: `experiments/CDM2_E1_REPORT.md`.  
Aggregate result: `experiments/CDM2_E1_RESULT.json`.

CDM2-E1 tested theorem-conditioned length-24 parity-prefix classes against deterministic exact-K-survivor controls matched exactly on `f_K`, entirely inside the externally verified convergent domain.

**COMPUTATIONAL-EVIDENCE / FAILED generator result:** the conditioned construction showed no reproducible post-prefix survival enrichment. Debt magnitude and completed odd-to-odd valuation load also failed to add calibrated information after conditioning.

A bounded exact lemma established that for the declared 60-bit / `K<=24` calibration regime, every-prefix debt positivity is equivalent to exact no-descent through K. This explains why the binary debt predicate cannot rank correctly matched K-survivors.

**CDM2-E1 did not authorize CDM3 by itself. CDM2-R3 subsequently established a separate reach-first R3-A authorization path.**

### CDM2-R1 — NON-TAUTOLOGICAL FILTER REDESIGN AUDIT

**Status: COMPLETE — 2026-10-01.**

Authoritative report: `experiments/CDM2_R1_REPORT.md`.

The affine correction was derived exactly and bounded tightly. At fixed `K,f_K`, `c_K` is an exact encoding of the already observed parity-prefix residue. For lifts `n=r+2^Kq`, the endpoint is `3^{f_K}q+b`; modulo any `2^s`, this is a bijection in `q`, so one fixed prefix admits every possible next length-`s` parity block across lifts.

At the existing `K<=24` scale above the current discovery frontier, the correction satisfies `c_K/n<2^-32`, while its actual contribution to the endpoint/start ratio satisfies `c_K/(2^K n)<2^-56`.

A secondary audit showed that quantitative smaller-preimage/path-merging "clearance" becomes an already-observed endpoint/start magnitude margin once the exact kill event is absent.

**Decision:** no cheap exact non-tautological persistence filter survived the audit. **CDM2-E2 is not authorized. CDM3 remains blocked.**

### CDM2-R2 — LIFT-QUOTIENT CONSTRAINT THEOREM AUDIT

**Status: COMPLETE — 2026-10-01. OUTCOME C — q REMAINS EFFECTIVELY FREE AFTER EXISTING EXACT KILLS.**

Authoritative report: `experiments/CDM2_R2_REPORT.md`.

Conditional least-divergent minimality was derived exactly. For every observed prefix step `j<=K`, the condition `T^j(N)>N` gives either no q restriction when `3^{f_j}>2^j`, or a finite upper interval `q<=Q_j` when `3^{f_j}<2^j`. This is exactly the already-observed no-descent/K-survival condition, not a new post-conditioning signal.

A fixed realizable inverse word gives an exact power-of-3 congruence on q, possibly intersected with a linear interval/half-line. The mod-9 smaller-preimage sieve therefore excludes exactly four classes of `q mod 9` for every fixed prefix, but this is an existing binary kill.

The decisive obstruction is finite inverse-sieve/future-parity orthogonality: beyond a finite threshold, any finite family of such inverse kills is periodic modulo a power of 3. If even one unbounded survivor residue remains, CRT combines it with every residue modulo `2^s`; because each next length-`s` parity word corresponds to one `q mod 2^s`, every finite future parity block remains realizable.

Terras/Everett imply that infinite-stopping quotients have relative density zero inside every fixed prefix progression, but membership in that exceptional set is defined by future orbit behavior and is not a pre-future computable q predicate.

**Decision:** no qualifying q ranker exists. **CDM2-E2 is not authorized. CDM3 remains blocked.**

### CDM2-R3 — HIGH-MAGNITUDE COMPUTATIONAL-REACH AND SEARCH-MACHINERY AUDIT

**Status: COMPLETE — 2026-10-01. OUTCOME R3-A — PRODUCTION-CREDIBLE ARCHITECTURE FOUND.**

Authoritative report: experiments/CDM2_R3_REPORT.md.  
Architecture: docs/CDM2_R3_ARCHITECTURE.md.  
Benchmark result: experiments/CDM2_R3_BENCHMARK_RESULT.json.

R3 distinguished contiguous convergence verification from sparse high-magnitude hunting. Contiguous engines exploit induction after descent into already-covered lower values; a sparse huge start cannot use first descent as convergence unless the descended state is independently trusted.

A bounded exact benchmark executed 12,288 deterministic starts across 128, 192, 256, 384, 512 and 1024 bits, with ten timing replays and exact GMP cross-checks. Every benchmark start reached the Tier-2 discovery basin n<2^71. No overflow, repeat, horizon survivor, exceptional survivor or counterexample occurred.

Median one-core fixed-limb odd-only rates on the R3 AMD EPYC 9V74 VM were approximately:

- 187k starts/s at 256 bits;
- 75k starts/s at 512 bits;
- 27k starts/s at 1024 bits;
- approximately 63–84 million U-steps/s across the measured bands.

Fixed-limb odd-only execution was about 1.8–2.2x faster than scalar shortened stepping and roughly 2x faster than GMP odd-only reference execution on this host.

**COMPUTATIONAL-EVIDENCE conclusion:** starting magnitude through 1024 bits is not the dominant ordinary-candidate cost. The dominant unresolved cost is the survivor-tail distribution and any trajectory growth that leaves the fixed-limb fast path.

**Architecture decision:** CPU-first deterministic fixed-limb odd-only sparse execution, dual uniform/least-divergent-targeted arms, trusted-basin stop, exceptional freeze, GMP escape/replay, then structural/certification analysis. GPU acceleration is optional and requires a dedicated sparse-GPU benchmark rather than importing contiguous integers/second figures.

**Historical R3 authorization:** R3 unblocked only the bounded CDM3-P1 pilot. P1 subsequently passed preflight and completed as P1-B. Larger scientific scaling remains unauthorized pending CDM3-B1.

## CDM3 — CONTROLLED HIGH-MAGNITUDE EXPLICIT SEARCH

**Status: CDM3-P2A COMPLETE — SAME-DISTRIBUTION SCALING NOT JUSTIFIED; STRUCTURE/THEORY PIVOT AUTHORIZED; NO NEW SCIENTIFIC COMPUTE.**

CDM3-P1 is the bounded dual-arm sparse pilot specified by R3:

- bit lengths 256, 512 and 1024;
- up to 10,000,000 generated starts per band;
- equal-sized Arm U uniform and Arm L least-divergent-targeted generator allocations;
- exact fixed-limb odd-only execution;
- Tier-2 discovery basin stop at n<2^71;
- no first-descent-as-convergence shortcut in Arm U;
- exact exceptional-candidate freeze protocol;
- no automatic post-freeze extension.

Before any pilot trajectory campaign, the production driver must pass the preflight gates frozen in docs/COMPUTE_BUDGET.md: fixed-limb/GMP/Python agreement, odd-only/shortened equivalence, forced overflow routing, work-unit replay checksum, checkpoint/restart equality, provenance capture, and executable-budget agreement.

A pilot survivor remains finite evidence only. Any exceptional object is frozen, independently replayed, then transferred to structural/certification mathematics.

CDM3-P1 completed the full frozen 30,000,000-start population after all preflight gates passed. All 23,334,780 executed trajectories reached the Tier-2 basin; no exceptional candidate froze and no counterexample was found or claimed. The survivor-cost tail remained manageable, but production hot-path throughput was materially below the R3 benchmark economics. CDM3-P1 therefore closed P1-B.

CDM3-B1 then isolated and removed that engineering regression. Native compilation materially improved the unchanged P1 path, and moving the recovery copy off the ordinary U-step restored R3-class throughput while preserving exact escape/replay semantics. The optimized path reached 102.35%, 101.39% and 99.70% of the local R3 U-step rate at 256, 512 and 1024 bits. B1 closed B1-A.

CDM3-P2 integration then created the separate `CDM3-P2-v1` engine while preserving the exact `CDM3-P1-gen-v1` generator semantics. Workflow run `36982432002` / job `110759729097` passed fixed-limb/GMP, optimized overflow preservation, odd-only/shortened equivalence, Python replay, ASan/UBSan, work-unit replay, checkpoint/restart, thread-determinism, counter non-overlap, budget-guard and same-host B1/P2 throughput gates.

The exact frozen P2 campaign was then exhausted in workflow run `36984984470`. Exactly 60,000,000 starts were generated; 13,330,798 Arm-L starts were exactly pruned; 46,669,202 exact trajectories were executed and every one reached `n<2^71`. No exceptional freeze, repeated state, bigint escape, invariant failure, or resource stop occurred. No candidate entered structural/certification analysis and no counterexample was found or claimed.

### CDM3-P1 closeout

Authoritative report: `experiments/CDM3_P1_REPORT.md`.  
Machine-readable result: `experiments/CDM3_P1_RESULT.json`.

**COMPUTATIONAL-EVIDENCE:** 30,000,000 starts were generated; 6,665,220 Arm-L starts were exactly pruned; 23,334,780 trajectories were executed and all reached `n<2^71`. Maximum U-step counts were 938, 1749 and 3237 at 256, 512 and 1024 bits. No exceptional freeze, repeat, bigint escape or invariant failure occurred.

### CDM3-B1 closeout

Authoritative report: `experiments/CDM3_B1_REPORT.md`.  
Machine-readable result: `experiments/CDM3_B1_RESULT.json`.  
Engineering note: `docs/CDM3_B1_ENGINEERING.md`.

**FINITE-VERIFIED engineering result:** every correctness gate passed. The final optimized exact production candidate reached 67.478M, 66.241M and 51.339M U-steps/s at 256, 512 and 1024 bits, recovering 102.35%, 101.39% and 99.70% of the side-by-side R3 reference. The P1 full-state-copy hypothesis and missing-`-march=native` hypothesis were both confirmed material.

**Decision:** freeze CDM3-P2 as the smallest justified scientific scale-up: exactly 60,000,000 generated CPU starts, double P1, with the same three bands and dual arms. P2 execution is conditional on dedicated production integration and complete preflight. GPU work remains unauthorized.

### CDM3-P2 closeout

Authoritative report: `experiments/CDM3_P2_REPORT.md`.  
Machine-readable result: `experiments/CDM3_P2_RESULT.json`.  
Work-unit provenance: `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`.

**COMPUTATIONAL-EVIDENCE:** the full 60,000,000-start frozen population completed. Arm L pruned 13,330,798 starts before trajectory execution; 46,669,202 exact trajectories executed and all reached the Tier-2 basin. The campaign performed 59,293,075,669 exact U-steps and 118,586,359,433 shortened-step equivalents.

The deterministic survivor-cost tail remained close to P1 at every band/arm cell. Global P2 maxima were 3,357 U-steps, 6,273 shortened steps, 1,053 peak bits and +29 peak bits. These finite maxima did not approach the exceptional thresholds.

All frozen resource ceilings were respected: 437.37 seconds active scientific wall, 1,081.48 process CPU-seconds, at most six concurrent worker threads, and no GPU execution.

**Historical P2 decision:** P2 did not authorize P3, more CPU sampling, GPU benchmarking, a new distribution, or a new ranker. It triggered the no-new-start CDM3-P2A audit, now complete.

### CDM3-P2A post-campaign audit

Authoritative report: `experiments/CDM3_P2A_REPORT.md`.

**Classification: C — STRUCTURE/THEORY PIVOT JUSTIFIED; NO NEW COMPUTE CAMPAIGN AUTHORIZED.**

P2A compared the disjoint P1/P2 populations quantitatively. Per-band/per-arm mean U-step costs and deterministic p50/p90/p99/p99.9 tails were effectively stable under the doubled P2 population. Finite maxima moved only modestly and inconsistently, with no approach to the exceptional triggers and no evidence of a qualitatively different survivor class.

Across P1+P2, Arm L exactly pruned **19,996,018 / 45,000,000 = 44.4356%** of generated least-divergent-targeted starts before trajectory execution. Surviving Arm-L trajectory-cost summaries remained essentially the same as Arm U. The rule is retained as exact binary pruning, not as a divergence predictor or enrichment ranker.

The current 256/512/1024-bit generator has no demonstrated mechanism making a further same-distribution scale-up scientifically informative. CPU throughput has ceased to be the binding research problem, so GPU/cloud/distributed acceleration is also not authorized.

No alternative reach-first distribution presently clears the project's information-gain standard. No compute envelope is frozen and `docs/COMPUTE_BUDGET.md` is unchanged.

The next priority is a theory/structural search for a recursively closed, nonlocal mechanism that can bridge finite description to forced infinite future behavior and escape the finite-depth lift/CRT obstruction proved in CDM2-R1/R2.

No explicit unbounded orbit was found and no counterexample was claimed.

## CDM4 — STRUCTURAL / RECURSIVELY CLOSED DIVERGENCE MECHANISMS

**Status: CDM4-T14 COMPLETE — CLASSIFICATION D: NO QUALIFYING THEOREM FOUND; MULTIVARIATE TAIL REGULARITY SHARPENED; NO NEW SCIENTIFIC COMPUTE.**

Authoritative T1 report: experiments/CDM4_T1_REPORT.md.  
Authoritative T2 report: experiments/CDM4_T2_REPORT.md.

Current authoritative theory report: experiments/CDM4_T14_REPORT.md.

CDM4-T1 proved the eventual-periodic parity obstruction, the whole-arithmetic-progression closure obstruction, and the ordinary-integer anchoring criterion for nested residue towers.

CDM4-T2 then derived the exact accelerated valuation-prefix start cylinder. For A_m=sum a_i and C_{m+1}=3C_m+2^{A_m}, exact realization of a_1,...,a_m is the unique residue

R_m == 3^{-m}(2^{A_m}-C_m)  (mod 2^{A_m+1}).

Successive exact cylinders satisfy

R_{m+1}=R_m+d_m2^{A_m+1},

with one exact anchor digit

0<=d_m<2^{a_{m+1}}.

T2 proved that one ordinary nonnegative anchor is equivalent to bounded canonical representatives, eventual stabilization, eventual d_m=0, and the cross-normalized limit R_{m+1}/2^{A_m+1}->0. For bounded valuation alphabets it is also equivalent to R_m/2^{A_m+1}->0.

T2 additionally completed the boundedness/periodicity equivalence for positive Collatz orbits: a positive orbit is bounded if and only if its shortened source-parity sequence is eventually periodic. Consequently, an explicit positive integer realizing a provably aperiodic parity/valuation language is automatically an unbounded orbit and cannot reach 1. A separate quantitative 3^m/2^{A_m} growth theorem remains sufficient but is no longer logically necessary once exact anchoring and aperiodicity are established.

The focused literature audit also identified a strong existing route kill: Wang's peer-reviewed 2019 E-sequence theorem proves that every irrational mechanical valuation word a_n=floor(n theta)-floor((n-1)theta) fails to be the E-sequence of an odd positive integer. This includes growth-favorable choices 1<theta<log_2 3, demonstrating concretely that exact symbolic growth can coexist with complete failure of the ordinary-integer anchor.

No general theorem was found excluding all aperiodic primitive substitutions or morphic valuation words.

**CDM4-T3 closeout.** Exact block carry composition and a fixed-dimensional ordered substitution recurrence are now proved. A return-prefix/height inequality excludes a broad specified recursive subclass, including the Thue-Morse valuation coding `a_(n+1)=1+t_n`. Critical bounded-discrepancy words are also excluded. The proof is related to Wang's prior return-prefix work; no global novelty claim is made.

The López-Stoll 2021 density equality did not survive independent proof validation for project use: its real-to-2-adic inference lacks the needed bridge. The claim is not disproved, and no global automatic/substitution exclusion is promoted. Bell's theorem gives a strict growth-gap requirement for hypothetical aperiodic automatic anchors, not their impossibility.

**CDM4-T4 closeout.** The residual universal constant-length carry-rigidity theorem was not proved and no anchored aperiodic substitution was found. T4 proved the exact 3-adic endpoint-cylinder identity for repeated valuation blocks, but showed that on substitution-scale returns its height/divisibility exponent is the same threshold already obtained in T3. Two-sided start/end cylinder combinations conserve the same exponent budget and therefore do not supply a new residual class kill.

For a hypothetical aperiodic primitive constant-length `{1,2}` anchor, the mean valuation is rational and necessarily lies strictly between `1` and `log_2 3`; exponential odd-orbit growth follows but is not a contradiction. Finite return-word systems and finite automatic kernels still leave an unbounded arithmetic register and growing moduli.

**CDM4-T5 closeout.** The exact inverse series is now derived from the finite cylinders, and the completion boundary is explicit: a realized positive anchor is the 2-adic limit, while in the subcritical real regime the same rational partial sums converge to a negative real number.

For a `k`-automatic valuation word, `A_n` is `k`-regular but `2^(A_n)` is not `k`-regular, so the naive regular-coefficient Mahler route fails. T5 nevertheless derived an exact finite multivariate monomial/Mahler-type recurrence from uniform-substitution prefix Parikh vectors. In the equal-block-valuation case this collapses to a classical one-variable `k`-Mahler value `H=-(1/3)G(2^B/3^k)`.

No audited peer-reviewed theorem converts these representations into the required 2-adic nonrationality statement. The exact conjugacy identity `H=Phi(V)`, where the 1-positions of `V` are `0,A_1,A_2,...`, shows that the general rationality bridge is a restricted case of Lagarias' open Periodicity Conjecture. Cobham is not applicable without a second automatic presentation of the same relevant sequence, and p-adic automatic-digit transcendence theorems concern the wrong digits.

No new recursive-language obstruction, anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**CDM4-T6 closeout.** The universal balanced automatic p-adic rationality statement remains open, but T6 found and proved a qualifying new obstruction for an infinite exact subclass. The peer-reviewed Bugeaud-Yao first-order p-adic Mahler theorem has an explicit rational-unit extension, so the Collatz evaluation point \(W=2^B/3^k\) is not excluded merely by its factor \(3^{-k}\).

For every non-eventually-periodic balanced complementary binary \(k\)-uniform fixed point in the T6 class (even \(k\), complementary images with \(k/2\) zeroes and \(k/2\) ones, valuation coding \(0\mapsto1,\ 1\mapsto2\)), the exact Collatz coefficient series has a two-state kernel system and an integer-scaled first-order equation

\[
F_0(z)=S(z)F_0(z^k)+\frac{(C_0+C_1)P_1(z)}{1-z^k}.
\]

The exact point is \(W=2^{3k/2}/3^k=(8/9)^{k/2}\). T6 verifies all singularity conditions exactly and applies Bugeaud-Yao to prove \(F_0(W)\), hence the inverse-Collatz value \(H\), transcendental in \(\mathbb Q_2\). Therefore this entire nonperiodic recursive class has no rational or positive-integer anchor. Combining with T2, bounded \(R_m\) forces eventual periodicity for this class.

T6 also proves that finite scaled-unit closure occurs exactly for torsion units; \(3^{-k}\) is non-torsion and has an infinite exponentiation orbit. Separately, a generic automatic/Mahler one-point converse is false: a finite-valued positive nonperiodic automatic power series can be constructed with a rational value at a prescribed algebraic p-adic point. Hence higher-rank progress requires additional functional or Collatz-specific arithmetic structure, not automaticity alone.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**CDM4-T7 closeout.** T7 proves that every finite true \(k\)-kernel output admits a scalar Mahler equation of order at most the kernel dimension, but this does not place order \(>1\) under Bugeaud–Yao. A natural balanced finite-abelian translation class Fourier-diagonalizes exactly into first-order character equations. In genuine higher rank, however, the exact Collatz output is a prescribed sum of several character values at the same 2-adic point

\[
W=2^B/3^k.
\]

Separate transcendence of those components does not exclude rational cancellation.

No peer-reviewed p-adic theorem was verified whose checked hypotheses give the required same-point linear/algebraic independence for this exact Collatz system. Xu–Wang 2004 and Wang 2006 remain high-priority sources but were not load-bearing because their full theorem hypotheses were not sufficiently exposed in the audited text. Regular-singular theory remains structural rather than an arithmetic-value theorem. No new recursive class was excluded and no new bounded-\(R_m\) implication was proved.

No anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**CDM4-T8 closeout.** T8 reduces the balanced elementary-\(2\)-group translation class exactly to its reachable output quotient. If \(E\) is generated by the digit translations and \(K_C\) is the translation stabilizer of the exact Collatz block constants, the true \(k\)-kernel dimension is

\[
m=|E/K_C|.
\]

Walsh transform over the reduced quotient gives

\[
\widehat F_\chi(z)=S_\chi(z)\widehat F_\chi(z^k),
\qquad
S_\chi(z)\in\mathbb Z[z],
\]

with exact support \(\widehat C_\chi\ne0\). T8 proves the all-depth p-adic unit identity

\[
S_\chi(W^{k^j})\equiv1\pmod{2^{Bk^j}},
\qquad
W=2^B/3^k,
\]

for every character and every \(j\ge0\). Hence the complete elementary-\(2\)-group character system is nonsingular along the exact Collatz Mahler orbit, and every supported value has the convergent product and valuation formulae

\[
\widehat F_\chi(W)
=
\widehat C_\chi\prod_{j\ge0}S_\chi(W^{k^j}),
\qquad
v_2(\widehat F_\chi(W))=v_2(\widehat C_\chi).
\]

This still does not exclude rational cancellation among several nonrational same-point values. No class-wide valuation separation or Collatz-specific additive identity solves it, and valuation separation alone would not prove nonrationality.

Bugeaud–Yao remains sufficient character-by-character for nonrational first-order components and therefore gives separate transcendence, not simultaneous independence. Flicker's original p-adic algebraic-independence theorem was recovered and audited, but its functional-independence/dominance hypotheses were not verified for this stationary character family. Full hypothesis-checkable theorem text for Xu–Wang 2004, Wang 2006, and Wang–Xu 2006 was not recovered from the accessible authoritative sources, so no applicability claim is promoted from titles or abstracts.

No genuinely multi-character higher-rank recursive class is newly excluded, and no new bounded-\(R_m\) periodicity theorem follows. No anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**Next theory substage: CDM4-T9.** Attack the completion-correct p-adic value-independence bridge for the reduced normalized Walsh products after zero, rational, duplicate, and rational-coboundary components have been removed. The sufficient target is linear independence over algebraic numbers of

\[
1,P_1(W),\ldots,P_t(W)
\]

at the same rational non-torsion S-unit point \(W=2^B/3^k\), under a checkable functional-independence hypothesis; a Collatz-specific weighted no-cancellation theorem is an acceptable substitute.

No substitution enumeration, finite residue/carry optimization, candidate trajectories, new scientific starts, new generator/distribution, or GPU/cloud/distributed work are authorized.

**CDM4-T9 closeout.** T9 completes the theorem-first preprocessing of the elementary-2-group Walsh-product family as far as current verified functional theory permits. On the exact quotient \(G=E/K_C\), the only eventually periodic projected characters are the trivial character and, for odd \(k\), at most one alternating character with \(\chi(\varepsilon_r)=(-1)^r\). Distinct quotient characters have distinct \(S_\chi\).

A peer-reviewed restatement of Kubota gives an exact functional theorem: for
\[
P_i(z)=S_i(z)P_i(z^k),
\]
the products are algebraically independent over the rational-function field if and only if the cocycles \(S_i\) are multiplicatively independent modulo rational Mahler coboundaries. Hence the functional algebraic-independence criterion is now exact; a divisor equation on \(\mathbb P^1\) gives a symbolic test for a proposed coboundary.

The corresponding same-point Kubota/Nishioka value theorem recovered in the same source is archimedean. No checked p-adic analogue was recovered that handles several stationary first-order functions at the same \(W=2^B/3^k\). Bugeaud–Yao remains individual; Xu–Wang 2004, Wang 2006, and Wang–Xu 2006 remain non-load-bearing for simultaneous use; Flicker's p-adic theorem does not have its transformation-limit/dominance hypotheses verified for the unit-valued stationary Walsh family.

No Collatz-specific weighted no-cancellation identity was found, no genuinely higher-rank class was newly excluded, and no scientific compute is authorized.


**CDM4-T10 closeout.** T10 completed the mandatory tenth-session progress/correction audit and recovered the missing completion-correct same-point lifting theorem.

The load-bearing source is Adamczewski–Bell–Smertnig, Journal of the European Mathematical Society 25 (2023), Theorems 4.2–4.3. Their one-variable linear Mahler specialization theorem is explicitly valid for an arbitrary place of a number field. For a regular algebraic point \(\alpha\) with \(0<|\alpha|_v<1\), functional transcendence degree is preserved at the values, and every homogeneous value relation lifts to a homogeneous functional relation.

For the exact T9 Walsh products
\[
P_i(z)=S_i(z)P_i(z^k),
\]
the diagonal system matrix is \(A(z)=\operatorname{diag}(S_i(z))\). The exact Collatz point
\[
W=2^B/3^k
\]
is rational with \(0<|W|_2<1\), and T8 already proves every \(S_i(W^{k^j})\) is a nonzero 2-adic unit. Therefore \(W\) is regular and the JEMS theorem applies without any pure-power or torsion restriction on the rational unit \(3^{-k}\).

Consequently,
\[
\Lambda=0
\Longrightarrow
P_1(W),\ldots,P_t(W)
\]
are algebraically independent over \(\overline{\mathbb Q}\).

T10 also proved the weaker additive criterion actually needed by Collatz. Adjoin \(P_0=1\). A finite family of first-order products is linearly independent over \(\overline{\mathbb Q}(z)\) exactly when no two members have rational quotient. Thus, after grouping the genuine nonrational components by
\[
i\sim j
\Longleftrightarrow
P_i/P_j\in\mathbb Q(z)^\times
\Longleftrightarrow
e_i-e_j\in\Lambda,
\]
one representative from each class together with \(1\) is functionally linearly independent. The JEMS relation-lifting theorem makes the corresponding same-point values linearly independent over \(\overline{\mathbb Q}\).

If \(P_i=R_iP_{r(C)}\) inside class \(C\), define
\[
A_C(W)=\sum_{i\in C}\widehat C_iR_i(W).
\]
Then the exact higher-rank Fourier value is algebraic/rational if and only if every nonrational class has \(A_C(W)=0\). If at least one grouped coefficient is nonzero, the inverse-Collatz value is 2-adically transcendental.

In particular, when no two genuine nonrational components are rational-function multiples, same-point rational cancellation is impossible automatically. This yields a genuinely higher-rank recursive-language obstruction and a new class for which bounded \(R_m\) forces eventual periodicity.

The mandatory correction is that the T9 literature conclusion was incomplete: modern nonarchimedean Mahler lifting was already present in the 2023 JEMS paper. Xu–Wang 2004, Wang 2006, Wang–Xu 2006, and Flicker are no longer needed for the bridge.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**Next theory substage: CDM4-T11.** Classify rational-coboundary collision classes exactly and determine whether the grouped Collatz coefficients \(A_C(W)\) can vanish simultaneously for every nonrational class. Prove universal nonvanishing, or classify the exact exceptional rational-value families and pass only those to ordinary-integrality/positivity analysis.

No substitution enumeration, finite residue/carry/exponent-code optimization, candidate trajectories, new starts, generator/distribution work, CPU/GPU scaling, cloud, distributed, or volunteer work are authorized.


**CDM4-T11 closeout.** T11 closes the residual rational-coboundary collision problem for the reduced elementary-2 Walsh family. A divisor \(L^1\)-degree argument proves that any nontrivial full-length coboundary
\[
S(z)/T(z)=R(z)/R(z^k),
\qquad
S(0)=T(0)=1,\quad \deg S=\deg T=k-1,
\]
forces \(S\) and \(T\) to be fixed-point cocycles \(Q_\gamma(z)=(z^k-\gamma)/(z-\gamma)\). In the elementary-2 case the only distinct possibility is the odd-\(k\) trivial/alternating pair, and both components are already rational.

After rational-component removal every genuine class is therefore a singleton, so
\[
A_{\{\chi\}}(W)=\widehat C_\chi\ne0
\]
on exact support. Same-point rational cancellation is impossible for every genuinely nonperiodic covered family. The inverse value remains a 2-adic integer but is transcendental over \(\mathbb Q\), so it is not an ordinary positive-integer anchor.

The same divisor theorem extends to balanced finite-abelian translation kernels: any distinct pairwise coboundary occurs only between individually rational character products. After rational-character removal, genuine classes are singletons there as well.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**CDM4-T12 closeout.** T12 closes balanced finite nonabelian translation systems as aperiodic positive-integer anchoring routes.

For the exact Collatz output profile, define
\[
K_C=\{h\in E:C(xh)=C(x)\ \forall x\in E\}.
\]
The true reachable/output state space is the coset \(E\)-set
\[
X=E/K_C,
\]
with exact kernel cardinality \([E:K_C]\); normality is not assumed. Over a splitting field,
\[
K[X]\cong\operatorname{Ind}_{K_C}^{E}1
\cong\bigoplus_\rho V_\rho^{\oplus \dim V_\rho^{K_C}},
\]
and the irreducible Mahler blocks are \(M_\rho(z)=\sum_rz^r\rho(\varepsilon_r)\), up to the explicit inverse/contragredient convention.

Because \(\varepsilon_0=e\), every block has constant term \(I\). A finite-group-stable lattice at every place above \(2\) gives
\[
M_\rho(W^{k^j})\equiv I\pmod{\mathfrak m_v}
\]
for all \(j\ge0\), so the complete reduced system is regular at the entire Mahler orbit.

The stronger higher-dimensional rational-gauge problem remains open: rational module morphisms satisfy
\[
A_\rho(z)R(z^k)=R(z)A_\sigma(z),
\]
and determinant coboundaries are necessary but not sufficient. T12 does not claim universal \(H\notin\mathbb Q\) for nonabelian blocks.

For the project objective, that unresolved module classification is not load-bearing. A hypothetical aperiodic positive anchor forces \(B/k<\log_2 3\), hence \(0<W<1\). Adamczewski–Bell–Smertnig Theorem 4.3 lifts the 2-adic anchor relation to a functional identity with the same specialization. Evaluating that identity in the real completion contradicts positivity of the exact Collatz coefficient series.

Therefore no genuinely nonperiodic balanced finite-group translation family has an ordinary positive-integer anchor, and T2 yields
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
for this enlarged class.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**CDM4-T13 closeout.** T13 closes the complete balanced one-variable finite-\(k\)-kernel class as aperiodic positive-integer anchoring routes.

For the exact true kernel system
\[
\mathbf F(z)=M(z)\mathbf F(z^k),
\qquad
M(z)=\sum_rz^rA_r,
\]
\(M(0)=A_0\) is the functional matrix of the digit-zero map. If \(A_0\) is a permutation, all Mahler iterates are 2-adically regular. If \(\det M\not\equiv0\), only finitely many nonzero iterates can be singular.

If
\[
\det M\equiv0,
\]
the canonical state functions are rational-function linearly dependent. More generally, choose a \(\mathbb Q(z)\)-basis from the exact kernel state series with \(G_1=F_0\). The induced minimal system
\[
\mathbf G(z)=A(z)\mathbf G(z^k)
\]
has
\[
A(z)\in\operatorname{GL}_d(\mathbb Q(z)).
\]
Every such rational system is regular on a sufficiently deep nonzero Mahler tail.

Early singular canonical matrices do not need to be inverted: the exact root value is transported forward by their product to the regular tail. A hypothetical aperiodic positive anchor forces \(0<W<1\), so Adamczewski–Bell–Smertnig relation lifting at the tail produces a functional identity whose real specialization reconstructs \(F_0^{(\infty)}(W)>0\) and contradicts the positive anchor relation.

Therefore no genuinely nonperiodic balanced one-variable finite-kernel family has an ordinary positive-integer anchor, including canonical systems with singular \(A_0\), finitely many early singular iterates, or identically singular determinant. By T2,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
throughout this class.

Universal \(H\notin\mathbb Q\) is not proved. In a subcritical family, any rational exception is a negative element of \(\mathbb Q\cap\mathbb Z_2\). No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found. No scientific compute is authorized.

**CDM4-T14 closeout.** T14 reconstructs the exact T5 multivariate/unbalanced finite-state Mahler system and classifies the principal obstruction to extending T13.

For the exact quotient substitution,
\[
\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x)),
\qquad
\tau(x)_s=\prod_t x_t^{M_{t,s}},
\]
with Collatz point
\[
q_s=2^{v(s)}/3,
\qquad
H=-\frac13\sum_tF_t(q).
\]

Reachability and output equivalence are removed exactly before functional analysis. Finite-state minimality remains distinct from rational-function linear minimality. If \(\det M\ne0\), the monomial map is dominant, rational-linear minimalization over \(\mathbb Q(x)\) is legitimate, the prescribed scalar \(S=\sum_tF_t\) can be retained as a basis coordinate, and the induced minimal system is invertible. If \(\det M=0\), naive full-field rational minimalization is not automatically legitimate because the monomial image is lower-dimensional.

The exact orbit
\[
q_{j,s}=2^{B_j(s)}/3^{k^j},
\qquad
B_j(s)=v^TM^je_s,
\]
is pairwise distinct and tends to the origin 2-adically.

T14 proves an exact multivariate singular-hit dichotomy. After passage to the stable image torus, the monomial map is an étale isogeny, so Bell–Ghioca–Tucker dynamical Mordell–Lang implies that every algebraic singular variety is hit either finitely often or along a complete arithmetic-progression suborbit.

For the dominant Adamczewski–Faverjon admissible subclass, \(T=M^T\in\mathcal M\) with the exact Collatz point \(T\)-independent, Laurent's torus Mordell–Lang theorem plus Bell–Ghioca–Tucker imply Zariski density of the orbit. Therefore every proper singular variety is hit only finitely often and every invertible rational minimal system has a sufficiently deep regular tail.

T14 also proves that in the primitive case a hypothetical genuinely aperiodic positive anchor forces the Perron–Frobenius mean valuation
\[
\alpha<\log_2 3,
\]
which yields uniform coordinatewise contraction of the deep monomial orbit in the ordinary real completion. Forward transport preserves the exact positive scalar.

The completion-sign route nevertheless stops one theorem short. Adamczewski–Faverjon, *Annals of Mathematics* 204 (2026), supplies multivariate relation lifting with exact specialization in the complex setting. It is not a nonarchimedean theorem. Brechler's 2026 work explicitly addressing multivariate \(p\)-adic meromorphy/lifting remains a preprint and is non-load-bearing.

Therefore no new genuinely multivariate/unbalanced positive-anchor class is excluded, no new bounded-\(R_m\) periodicity implication is promoted, no explicit anchored aperiodic word or counterexample is found, and no scientific compute is authorized.

## CDM5 — SYMBOLIC DIVERGENCE SEARCH

Investigate structured families beyond direct brute-force reach with the objective of finding indefinitely reproducible growth mechanisms.

## CDM6 — ADAPTIVE SEARCH

Feed mathematical lessons from failed and successful structural candidates back into candidate generation and promotion.

## CDM7+ — ITERATE AS JUSTIFIED

Continue bounded research cycles. Kill unproductive routes rather than extending them automatically.

## CDM10, CDM20, CDM30, ...

Mandatory progress-and-correction audits.

## CDM-CERT — DIVERGENCE CERTIFICATION

Triggered only when a candidate has a plausible exact mechanism capable of proving unboundedness.

## Immediate next task

**CDM4-T15 — nonarchimedean multivariate Mahler lifting / stable-image completion audit, theory only.**

Treat the balanced one-variable finite-kernel branch as closed for positive anchoring and retain T14's multivariate regular-tail theorem as structural infrastructure.

Primary obligation:

1. recover a peer-reviewed characteristic-zero arbitrary-place multivariate/monomial Mahler relation-lifting theorem with exact specialization whose hypotheses cover the T14 regular/admissible tail
   \[
   T=M^T\in\mathcal M,\qquad q\text{ is }T\text{-independent};
   \]
2. if none is available, prove the required nonarchimedean lift for this restricted monomial class or isolate the exact obstruction;
3. if the lift is obtained, combine it immediately with T14's regular-tail theorem, primitive real contraction, exact forward scalar transport, and positivity to test the completion-sign contradiction;
4. in parallel, for singular incidence matrices, formalize descent to the stable-image torus and determine when the exact canonical system admits a dominant rational minimalization preserving \(S=\sum_tF_t\).

Do not reopen balanced finite-kernel regularity, finite-group translation representation analysis, Walsh-product coboundaries, generic one-variable p-adic lifting, substitution enumeration, finite residue/carry/exponent-code optimization, or scientific trajectory search.

No new scientific compute is authorized.
