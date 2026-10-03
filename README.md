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

**CDM4-T11 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T10's arbitrary-place Mahler lifting theorem is now closed infrastructure. T11 solves the exact residual pairwise-collision problem for the reduced elementary-2 Walsh family.

For full-length digit polynomials
\[
S(0)=T(0)=1,
\qquad
\deg S=\deg T=k-1,
\]
T11 proves that a nontrivial Mahler coboundary
\[
\frac{S(z)}{T(z)}
=
\frac{R(z)}{R(z^k)}
\]
forces
\[
S(z)=Q_\beta(z),
\qquad
T(z)=Q_\alpha(z),
\qquad
Q_\gamma(z)=\frac{z^k-\gamma}{z-\gamma},
\]
where \(\alpha\) and \(\beta\) are nonzero fixed points of \(z\mapsto z^k\).

In the elementary-2 Walsh family, the \(\pm1\) coefficient restriction leaves only the odd-\(k\) trivial/alternating pair. Both are rational components already removed by T9/T10. Therefore every genuine nonrational rational-multiple class is a singleton.

The grouped Collatz weights consequently reduce exactly to
\[
A_{\{\chi\}}(W)=\widehat C_\chi\ne0
\]
on exact support. Same-point rational cancellation is impossible for every genuinely nonperiodic covered family.

At the exact Collatz point
\[
W=\frac{2^B}{3^k},
\]
T10 then gives linear independence of the surviving values over algebraic numbers. The inverse-Collatz value is a **transcendental 2-adic integer**: it remains in \(\mathbb Z_2\), but it is not rational and therefore is not an ordinary integer or a positive-integer anchor.

The same divisor theorem extends to balanced finite-abelian translation kernels over the appropriate cyclotomic coefficient field: a distinct pairwise coboundary can occur only between individually rational character products. After rational-character removal, genuine classes are again singletons.

Thus the covered elementary-2 and finite-abelian translation branches are closed as aperiodic positive-anchoring routes. Combining with T2, bounded canonical representatives \(R_m\) imply eventual periodicity throughout these covered classes.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T12 — finite nonabelian translation / higher-dimensional representation audit**. It should derive the irreducible matrix Mahler blocks for balanced finite-group translation systems and classify the rational-function linear/module relations that can affect the prescribed Collatz coordinate at \(W\).

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T11_REPORT.md before doing research.
