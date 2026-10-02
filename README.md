# COLLATZ DIVERGENCE MACHINE
## Multi-Stage Search for Unbounded Orbits

**Root objective:** find an explicit positive integer whose orbit under the shortened Collatz map

`T(n) = n/2` if `n` is even, and `T(n) = (3n+1)/2` if `n` is odd,

can be **rigorously proved unbounded** and can be rigorously proved never to reach `1`.

The project studies the divergent/unbounded-orbit failure mode only. Systematic research on nontrivial finite cycles is out of scope.

## What counts as success

A root success is an explicit positive integer `n` plus a mathematical proof that:

1. `T^k(n) != 1` for every `k >= 0`; and
2. the set `{T^k(n): k >= 0}` is unbounded.

It is **not** necessary to prove `T^k(n) -> infinity`; unboundedness suffices.

Finite computation is discovery evidence, never certification. Long survival, extreme peaks, record stopping time, compute exhaustion, or an LLM/statistical prediction do not establish divergence.

## Architecture

The machine is a bounded funnel:

`L0 ultra-cheap screening -> L1 cheap exact analysis -> L2 expensive exact analysis -> L3 structural/symbolic analysis -> L4 divergence certification`

Two frontiers interact:

- **Explicit frontier:** exactly represented starting integers and exact finite trajectories.
- **Symbolic frontier:** rigorously defined compressed families such as parity prefixes, affine iterates, residue classes, inverse families, and finite-state descriptions.

The intended feedback loop is:

`explicit anomaly -> structural feature -> symbolic family -> exact constraints -> proof or obstruction -> improved search`

## Current status

**CDM4-T3 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

The sparse-search machine is parked after the ordinary-null CDM3-P2 campaign and P2A audit. T3 derived exact block carry and substitution recurrences, proved a return-prefix obstruction that excludes a substantial recursive subclass including the Thue-Morse valuation coding, and rejected promotion of an unverified parity-density shortcut. General automatic and primitive substitutive realization remain unresolved.

No explicit positive divergent orbit was found and no counterexample was claimed. The next authorized action is theory-only CDM4-T4 on residual primitive constant-length substitution carry rigidity; no new starts, generator/distribution, or GPU work.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and [the T3 report](experiments/CDM4_T3_REPORT.md) before doing research.
