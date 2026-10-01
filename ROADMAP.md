# Roadmap

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

**Authorization:** CDM3-P1 is unblocked as a bounded pilot path. Its design/resource envelope is frozen in docs/COMPUTE_BUDGET.md, but execution remains gated on a committed production driver passing all preflight validation. Larger production scaling remains unauthorized.

## CDM3 — CONTROLLED HIGH-MAGNITUDE EXPLICIT SEARCH

**Status: UNBLOCKED FOR CDM3-P1 IMPLEMENTATION/PREFLIGHT; PILOT EXECUTION CONDITIONAL; PRODUCTION SCALING BLOCKED.**

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

Production scaling beyond CDM3-P1 requires a post-pilot audit and is not authorized merely because the pilot returns no counterexample.

## CDM4 — STRUCTURAL EXTRACTION

Take informative growth anomalies and search for exact parity/residue/affine structures explaining them.

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

Implement the CDM3-P1 deterministic multi-core CPU search engine from docs/CDM2_R3_ARCHITECTURE.md, pass every frozen preflight gate, and only then execute the bounded CDM3-P1 pilot if all gates pass.

Do not enlarge the pilot after observing results. Do not convert finite survival into a divergence claim. Do not begin GPU/cloud/volunteer production scaling before the CDM3-P1 audit.
