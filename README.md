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

**CDM4-T5 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

T5 derived the exact inverse-Collatz 2-adic series from the finite cylinders and proved an exact finite multivariate monomial/Mahler-type representation for uniform substitutions. For equal substituted-block valuation sums, the inverse value further reduces to a classical one-variable automatic-coefficient Mahler value at `W=2^B/3^k`.

The literature audit found no verified theorem that converts those representations into the required **2-adic** nonrationality statement. General modern Mahler value theorems audited are complex; automatic p-adic number theorems concern the canonical digits of the number being tested, not automatic Collatz valuation gaps. The exact identity `H=Phi(V)` shows that the general missing rationality bridge is a restricted instance of Lagarias' open 3x+1 Periodicity Conjecture.

No new automatic/primitive constant-length class was excluded, no explicit anchored aperiodic word was found, and no positive divergent orbit or counterexample was claimed.

The next authorized action is theory-only CDM4-T6: attack the completion-correct p-adic rationality of the balanced one-variable Mahler subclass before attempting the generic multivariate value problem. No new starts, generator/distribution, finite-code ranking, or GPU work is authorized.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and [the T5 report](experiments/CDM4_T5_REPORT.md) before doing research.
