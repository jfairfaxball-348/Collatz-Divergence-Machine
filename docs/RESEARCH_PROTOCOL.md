# Research Protocol

## 1. Objective and scope

The root target is an explicit positive integer whose shortened-Collatz orbit is rigorously proved both never to reach `1` and to be unbounded.

Systematic nontrivial-cycle work is out of scope.

## 2. Two activities

**Discovery:** bounded computation searches for candidate orbits. Discovery may be structure-first or reach-first. Reach-first work may deliberately target sparse starts many orders of magnitude above contiguous verification under the repository's explicit counterexample-at-scale working hypothesis.

**Certification:** mathematics proves an indefinitely repeatable mechanism implying unboundedness and avoidance of the `1`-basin.

No finite observation crosses this boundary.

## 3. Three frontiers

The **explicit frontier** contains exactly represented starts and exact finite trajectories inside a declared resource envelope.

The **symbolic frontier** contains rigorously defined compressed families: parity words, affine iterates, residues, inverse families, modular constraints, Diophantine systems, or finite-state objects.

The **computational-reach frontier** records the largest magnitude regimes that the current machinery can sample or analyze credibly without requiring contiguous verification of every smaller start. It must distinguish sparse high-magnitude search from contiguous convergence verification.

Preferred loop:

`explicit anomaly -> structural feature -> symbolic family -> exact arithmetic constraints -> theorem/obstruction -> search update`

## 4. Staged funnel

- **L0:** ultra-cheap filters and short exact prefixes.
- **L1:** longer exact prefixes and cheap metrics.
- **L2:** rare, expensive exact analysis with independent replay.
- **L3:** structural/symbolic conversion.
- **L4:** rigorous divergence certification.

Most candidates should die before L2.

## 5. Campaign declaration

Before execution record generator/domain, exact software commit, seed if random, representation/peak/step/candidate/wall/CPU/memory/storage ceilings, per-stage quotas, stopping conditions, expected information gain, and post-exhaustion action.

"No unbounded waiting" is binding.

## 6. Promotion discipline

Promotion is a resource-allocation decision, not a truth claim. Every promotion past L1 must satisfy either the structure-first or reach-first route defined in `docs/PROMOTION_POLICY.md` and explain why more compute is expected to produce useful discovery or mathematical information.

## 7. Exceptional candidate stop rule

If a candidate appears qualitatively exceptional: stop broad search; freeze revision/candidate/environment; hash artifacts; replay independently; construct a minimal verifier; move to structural mathematics; hostile-review every implication.

## 8. Session discipline

After CDM0, use numbered research sessions. Every tenth session is a progress-and-correction audit. Preserve failures, hypothesis falsifications, route kills, and negative information.
