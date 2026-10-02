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

**Status: CDM4-T4 COMPLETE — CLASSIFICATION D: NO QUALIFYING THEOREM FOUND.**

Authoritative T1 report: experiments/CDM4_T1_REPORT.md.  
Authoritative T2 report: experiments/CDM4_T2_REPORT.md.

Current authoritative theory report: experiments/CDM4_T4_REPORT.md.

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

**Next theory substage: CDM4-T5.** Audit automatic/Mahler and p-adic rationality/transcendence theorems against the exact inverse-Collatz series for a non-eventually-periodic automatic `{1,2}` valuation word. The target is to rule out an ordinary positive integer inverse-Collatz value under verified hypotheses, or to prove that the available theorem machinery does not supply that implication.

No scientific starts, finite exponent-code ranker campaign, new generator/distribution, or GPU work are authorized.

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

**CDM4-T5 — automatic inverse-Collatz rationality audit, theory only.**

Let `a_n in {1,2}` be a non-eventually-periodic `k`-automatic valuation sequence with mean `alpha<log_2 3`, put `A_j=sum_{i<=j}a_i`, and consider the exact 2-adic inverse-Collatz series

`H=-sum_{j>=0}2^{A_j}/3^{j+1}`.

Single theorem target:

> Prove, under explicitly verified automatic/Mahler/p-adic hypotheses, that `H` cannot be an ordinary positive integer unless the valuation word is eventually periodic; or prove that the available theorems do not imply this.

Begin from T4's negative result: return-prefix, endpoint-cylinder, two-sided-cylinder, finite-kernel, and finite-return-alphabet arguments do not by themselves control the growing representative tower.

Audit Mahler functional equations, automatic/regular weighted sums, p-adic automatic-number transcendence, rationality criteria, Cobham hypotheses, and the exact relation between the valuation word, its variable-length shortened-parity coding, and the Collatz conjugacy. Do not identify the anchor's binary digits with its parity vector. Do not use the López-Stoll 2021 density equality unless its missing bridge is independently repaired.

No substitution enumeration, finite residue/carry optimization, candidate trajectories, or new scientific starts. P3, further same-distribution CPU scaling, GPU/cloud/volunteer work, and new generators/distributions remain unauthorized.
