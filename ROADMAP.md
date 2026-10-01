# Roadmap

## CDM0 — SCAFFOLD AND CALIBRATION

**Status: COMPLETE.**

Governance, exact trajectory engine, ledgers, candidate model, cache, metric registry, transparent promotion logic, and a small deterministic end-to-end calibration are in place. No serious search was performed.

## CDM1 — STATE-OF-THE-ART BASELINE

**Status: COMPLETE — 2026-10-01.**

The durable audit is `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`.

CDM1 established the external verification/provenance frontier, divergence-relevant necessary conditions, compute economics, preserved route kills, and the bounded CDM2-E1 calibration design. No high-range counterexample search was performed.

## CDM2 — FILTER AND METRIC DESIGN

**Status: IN PROGRESS — CDM2-E1 COMPLETE; FILTER REDESIGN REQUIRED.**

Authoritative E1 report: `experiments/CDM2_E1_REPORT.md`.  
Aggregate result: `experiments/CDM2_E1_RESULT.json`.

CDM2-E1 tested theorem-conditioned length-24 parity-prefix classes against deterministic exact-K-survivor controls matched exactly on `f_K`, entirely inside the externally verified convergent domain.

**COMPUTATIONAL-EVIDENCE / FAILED generator result:** the conditioned construction showed no reproducible post-prefix survival enrichment. Debt magnitude and completed odd-to-odd valuation load also failed to add calibrated information after conditioning.

A bounded exact lemma established that for the declared 60-bit / `K<=24` calibration regime, every-prefix debt positivity is equivalent to exact no-descent through K. This explains why the binary debt predicate cannot rank correctly matched K-survivors.

**CDM3 is blocked. No generator is authorized from CDM2-E1.**

### CDM2-R1 — NON-TAUTOLOGICAL FILTER REDESIGN AUDIT

**Status: NEXT.**

Run a theory-first bounded redesign audit. The goal is to identify at most one theorem-linked cheap statistic that is not algebraically determined by exact K-survival and `f_K`, has a mechanism plausibly connected to future no-descent, can be computed without lookahead leakage, and has a predeclared falsification rule.

First audit the exact affine correction/carry term in

`T^K(n)=(3^{f_K}n+c_K)/2^K`

because `3^{f_K}` is already controlled by `f_K`. Determine analytically whether the carry term is too small at relevant scales to carry useful information; kill it if so. Do not turn this into a feature factory.

No production trajectory campaign and no CDM3 search may begin until CDM2-R1 yields a justified bounded calibration design.

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

Run **CDM2-R1 — Non-Tautological Filter Redesign Audit** from `START_HERE.md`.

Do not begin CDM3. Do not respond to the failed E1 generator by increasing K, trajectory length, candidate count, or hardware scale without a new mathematical information hypothesis.
