# Roadmap

## CDM0 — SCAFFOLD AND CALIBRATION

**Status: COMPLETE.**

Governance, exact trajectory engine, ledgers, candidate model, cache, metric registry, transparent promotion logic, and a small deterministic end-to-end calibration are in place. No serious search was performed.

## CDM1 — STATE-OF-THE-ART BASELINE

**Status: COMPLETE — 2026-10-01.**

The durable audit is `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`.

CDM1 established the external verification/provenance frontier, divergence-relevant necessary conditions, compute economics, preserved route kills, and the bounded CDM2-E1 calibration design. No high-range counterexample search was performed.

## CDM2 — FILTER AND METRIC DESIGN

**Status: IN PROGRESS — CDM2-R2 COMPLETE; OUTCOME C; NO E2 AUTHORIZED; NONLOCAL q-INVARIANT THEORY IS NEXT.**

Authoritative E1 report: `experiments/CDM2_E1_REPORT.md`.  
Aggregate result: `experiments/CDM2_E1_RESULT.json`.

CDM2-E1 tested theorem-conditioned length-24 parity-prefix classes against deterministic exact-K-survivor controls matched exactly on `f_K`, entirely inside the externally verified convergent domain.

**COMPUTATIONAL-EVIDENCE / FAILED generator result:** the conditioned construction showed no reproducible post-prefix survival enrichment. Debt magnitude and completed odd-to-odd valuation load also failed to add calibrated information after conditioning.

A bounded exact lemma established that for the declared 60-bit / `K<=24` calibration regime, every-prefix debt positivity is equivalent to exact no-descent through K. This explains why the binary debt predicate cannot rank correctly matched K-survivors.

**CDM3 is blocked. No generator is authorized from CDM2-E1.**

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

### CDM2-R3 — POST-PRUNING SURVIVOR-COMPLEMENT INVARIANT AUDIT

**Status: NEXT — THEORY ONLY.**

Seek an effective nonlocal or recursively closed invariant on the q-set surviving exact K-survival and finite inverse-tree kills, stable under the affine lift transport

`q -> 3^{f_K}q+b_K`,

that couples 2-adic future-block freedom to 3-adic/inverse constraints without reading the future parity block.

Do not respond with larger finite modular feature sets: CDM2-R2 proves that any finite power-of-3 inverse sieve either kills all sufficiently large lifts or still leaves every finite future parity block possible.

## CDM3 — CONTROLLED EXPLICIT SEARCH

**Status: BLOCKED pending CDM2.**

Run a bounded multi-stage explicit search only if a CDM2 filter/generator demonstrates reproducible information gain beyond its conditioning event.

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

Run **CDM2-R3 — Post-Pruning Survivor-Complement Invariant Audit** from `START_HERE.md`.

Do not begin CDM2-E2 or CDM3. Do not respond to the R2 obstruction by increasing K, inverse depth, trajectory length, candidate count, modular feature count, or hardware scale without a new nonlocal mathematical implication theorem.
