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

**CDM4-T6 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T6 sharpened the balanced one-variable Mahler route into a genuine 2-adic obstruction for an infinite exact recursive class. The peer-reviewed Bugeaud-Yao first-order p-adic Mahler theorem has an explicit extension from \(p^w\) to rational \(p\)-adic-unit multiples \(r p^w/s\), so the Collatz point \(W=2^B/3^k\) is admissible when the exact Mahler equation has their required first-order form and its orbit avoids singularities.

For non-eventually-periodic balanced complementary binary \(k\)-uniform substitutions with even \(k\), equal half-zero/half-one image counts, and valuation coding \(0\mapsto1,\ 1\mapsto2\), T6 derives an exact two-state automatic-kernel system and a scalar first-order equation. At

\[
W=2^{3k/2}/3^k=(8/9)^{k/2},
\]

all singularity hypotheses are proved exactly. The integer-scaled exact inverse-Collatz value is therefore p-adically transcendental. Hence no nonperiodic word in this class has a rational or positive-integer anchor, and combining with T2 shows that bounded canonical representatives \(R_m\) force eventual periodicity for this class.

T6 also proves that naive finite scaled-unit Mahler closure occurs exactly for torsion units, so the non-torsion unit \(3^{-k}\) still cannot be absorbed that way. Separately, a generic finite-valued positive automatic power series can have a rational value at one algebraic p-adic point while remaining nonrational; automaticity alone is therefore insufficient.

The generic higher-rank balanced automatic kernel class remains open and still contains a restricted Lagarias Periodicity-Conjecture problem. Cobham remains unavailable and López-Stoll remains non-load-bearing. No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T7 — higher-rank p-adic S-unit Mahler-system audit**. Start from balanced exact \(k\)-kernel systems that do not reduce to the T6 first-order class and seek a verified p-adic higher-rank value theorem, a controlled scalar reduction, or an exact obstruction. No substitution enumeration, new starts, generator/distribution, finite-code ranking, CPU/GPU scaling, cloud, or distributed work is authorized.

Read \`AGENTS.md\`, \`START_HERE.md\`, the required prior reports, and [the T6 report](experiments/CDM4_T6_REPORT.md) before doing research.
