# Project Charter

## Name

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

## Root objective

Find an explicit positive integer `n` and a rigorous proof that its shortened-Collatz forward orbit never reaches `1` and is unbounded.

The target is an **UNBOUNDED COLLATZ ORBIT** or **DIVERGENT-ORBIT COUNTEREXAMPLE**. "Infinite orbit" is avoided because the ordinary `1 <-> 2` shortened-map cycle is infinite under iteration but bounded.

## Research philosophy

The project optimises approximately for **probability of discovering and certifying a genuine counterexample per unit of compute and research effort**.

Mathematical information per unit of compute remains important, but it is not the sole objective. The project is explicitly permitted to invest in computational reach, algorithm engineering, hardware-aware search, distributed/GPU methods, compressed state representations, sieving, batching, checkpointing, and other machinery when these plausibly move the searchable magnitude frontier by orders of magnitude.

## Counterexample-at-scale working hypothesis

The project's central **working search hypothesis** is deliberately stronger than current evidence:

> There exists a magnitude regime far beyond the presently verified Collatz frontier in which positive integers with unbounded orbits are not merely a single isolated exception but occur often enough that a sufficiently capable search machine has a realistic chance of encountering one.

For search-design purposes, sessions may reason **conditionally as though this hypothesis is true**. In particular, the project should ask what machinery would be required to reach magnitude regimes many orders of magnitude beyond current contiguous verification, and how to recognize and preserve candidates once encountered.

This is a **HEURISTIC / CONJECTURAL search premise, not a proved mathematical claim**. It must never be used inside a proof of divergence, and negative computational evidence is allowed to weaken or falsify it as a research strategy.

The hypothesis also does **not** mean that all sufficiently large integers diverge. Arbitrarily large convergent starts exist trivially, for example powers of two.

## Discovery strategy

The project has two complementary discovery modes.

### Structure-first discovery

Use exact parity, residue, inverse-tree, affine, or other mathematics to reduce the search space or expose a mechanism capable of later certification.

### Reach-first discovery

Develop and test genuinely plausible computational methods that can inspect starts at magnitudes far beyond the current verified frontier, even when no theorem-linked ranker is yet available.

A reach-first campaign is legitimate when it has:

- a precisely defined target magnitude regime;
- a reason the new method materially changes reachable scale rather than merely repeating known contiguous verification;
- explicit compute, memory, storage, and checkpoint budgets;
- a strategy for cheaply rejecting ordinary convergent behavior;
- exact arithmetic or rigorously controlled representations for all candidate-affecting decisions;
- an exceptional-candidate freeze/replay path;
- and a credible route from an encountered extreme survivor to structural analysis and certification work.

Blindly extending one unresolved trajectory remains weak evidence. Building machinery that changes the reachable search regime is a different research activity and is explicitly in scope.

## Discovery versus certification

**Discovery** may use bounded high-magnitude computation, exact or rigorously controlled search machinery, and heuristic prioritisation to locate candidate orbits.

**Certification** proves an exact mechanism that forces an explicit orbit to be unbounded and to avoid the `1`-basin forever.

Only certification can satisfy the root objective. No search hypothesis, finite trajectory, record excursion, or compute exhaustion is itself a counterexample.
