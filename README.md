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

**CDM4-T25 is complete — C: NEW RELATIVE DIVISOR-LIFTING SUBCLASS AND MULTIPLICITY OBSTRUCTIONS FOUND. No new scientific compute is authorized.**

T20–T24 remain closed infrastructure.

In the T24 principal-fast splitting
\[
\Gamma_Y\cong\mathbb N\delta\oplus\Gamma_{\rm slow},
\qquad
m=\theta^\delta,
\]
T25 introduces the canonical fast count
\[
\kappa(n)=\sum_{i<n}\kappa_{u_i}.
\]

If
\[
\kappa(n)\to\infty,
\]
every fixed canonical \(m\)-jet coefficient is a finite slow polynomial:
\[
[m^j]F_t\in K[\Gamma_{\rm slow}].
\]

The correct divisor-local coefficient ring is
\[
\mathcal O=K(\Gamma_{\rm slow})[m]_{(m)},
\]
a DVR. Finite-degree relation modules are \(m\)-saturated and free over \(\mathcal O\).

T25 defines the basis-invariant divisor ramification
\[
\lambda_m=\operatorname{ord}_m(\det B_1).
\]
Two-sided divisor-regular relation transport is available exactly when
\[
\lambda_m=0.
\]

Relative Hermite–Padé cancellation over the slow rational field produces genuine principal-divisor multiplicity:
\[
P_{\rm rel}\ge(h(D_X)-1)(D_f+1)
\]
after all common explicit \(m\)-factors are removed.

If
\[
d_{\rm rel}>0
\quad\text{and}\quad
\lambda_m=0,
\]
the T16/T17 mixed-place lifting architecture rebuilds over the divisor-regular lattice and preserves
\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]
exactly. The inherited T21 real-convergence/sign argument excludes genuinely aperiodic positive-integer anchors in this newly closed subclass.

If
\[
d_{\rm rel}=0,
\]
finite-extension valuation theory gives only a linear \(m\)-multiplicity ceiling.

The residual principal-fast cases are: bounded \(\kappa\); relative algebraicity; and positive relative transcendence with \(\lambda_m>0\).

The next live theorem is **CDM4-T26 — canonical divisor-unramifiedness / relative-transcendence completion audit**.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read \`AGENTS.md\`, \`START_HERE.md\`, the required prior reports, and \`experiments/CDM4_T25_REPORT.md\` before doing research.

