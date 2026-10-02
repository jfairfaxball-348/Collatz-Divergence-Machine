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

**CDM4-T7 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

T7 audited the higher-rank balanced automatic Mahler system at the exact 2-adic Collatz point

\[
W=2^B/3^k.
\]

For a true \(m\)-state \(k\)-kernel, the exact system is

\[
\mathbf G(z)=M(z)\mathbf G(z^k),
\]

with \(M(z)\in M_m(\mathbb Z[z])\). T7 proves that every rational linear Collatz output satisfies a scalar Mahler equation of order at most \(m\). This is a structural reduction only: order \(>1\) is not covered by the first-order Bugeaud–Yao theorem used in T6, and scalar elimination can introduce additional singularities.

T7 also isolates a natural genuine higher-rank class with exact finite Fourier diagonalization. For balanced finite abelian translation substitutions, the character components satisfy first-order equations

\[
\widehat F_\chi(z)=S_\chi(z)\widehat F_\chi(z^k).
\]

The trivial character is rational. The T6 binary complementary case has only one nontrivial character and therefore reduces to a single first-order nonrational component. In higher rank, however, the exact Collatz output is generally a prescribed sum of several nontrivial character values at the same \(W\). Even separate transcendence of every component would not exclude rational cancellation.

No peer-reviewed p-adic theorem was verified whose checked hypotheses supply the required same-point linear/algebraic independence for this exact system. Xu–Wang 2004 and Wang 2006 are directly relevant and are the next source-level targets, but T7 did not promote them because their full theorem hypotheses were not sufficiently exposed in the audited authoritative text. Regular-singular Mahler theory remains functional structure, not by itself a p-adic arithmetic-value theorem. Modern Adamczewski–Faverjon lifting/value results audited here remain archimedean for the values relevant to this project.

No new higher-rank recursive class was ruled out, no new bounded-\(R_m\) periodicity theorem was obtained, and no explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed. The generic balanced remainder still contains a restricted Lagarias Periodicity-Conjecture problem. Cobham remains unavailable and López–Stoll remains non-load-bearing.

The next authorized action is theory-only **CDM4-T8 — p-adic same-point no-cancellation audit**. Begin with balanced finite abelian translation kernels, preferably elementary \(2\)-groups, and either verify a peer-reviewed p-adic theorem strong enough to forbid cancellation among the character values at \(W\), prove a Collatz-specific no-cancellation identity, or isolate the exact missing theorem. No substitution enumeration, new starts, generator/distribution, finite-code ranking, CPU/GPU scaling, cloud, or distributed work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and the T7 report before doing research.
