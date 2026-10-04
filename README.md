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

**CDM4-T23 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

T20–T22 remain closed infrastructure: exact variable-length scalar transport, algebraic ordinary-prefix limsup and strict positive-integer gap, positive reduced grading, intrinsic reduced multiscale profiles, exact fast-height / slow-contraction asymptotics, scalar-support fullness, and the failure of fixed reweighting to repair genuine active scale separation.

T23 proves that the multiscale zero-set problem is not uniformly blocked by the T22 height ratio.

Let
\[
I_{>1}
\]
be the monomial ideal of characters above the slowest T22 growth profile. If an algebraic-coefficient toric analytic function vanishes on an infinite subsequence of the exact T18-reduced dense orbit, its slow boundary restriction
\[
f\bmod I_{>1}
\]
vanishes identically. The faster remainder is smaller than every fixed power of the slow norm, so Corvaja–Zannier Proposition 3 applies after exact projection to the internally balanced slow stratum.

If
\[
I_{>1}=(\theta^\delta)
\]
is principal, exact division can be repeated. Any function with infinitely many orbit zeros then lies in every power of \(I_{>1}\), hence is zero. This gives a genuine unequal-growth dense-orbit analytic zero theorem for the principal-high-ideal subclass.

The canonical Mahler system is filtered exactly in monomial support, but its finite state-function matrix need not split into independent growth blocks. The new zero theorem also does not automatically repair exact relation lifting: T22's auxiliary upper-bound / Liouville lower-bound mismatch remains a separate quantitative step.

The general nonprincipal induction now stops at a sharper point. After the slow face is removed, next-face coefficients are analytic functions of slower variables. Their values need not be algebraic, so known moving-target Subspace Theorems do not apply. Algebraic truncation at next-scale precision costs height on the next scale itself.

Asynchronous times can equalize the separate functions \(k_i^{e_i}\rho_i^{k_i}\), but they do not preserve the exact synchronized Collatz functional orbit or T20 scalar transport.

No direct analytic counterexample to the desired zero theorem was found. No newly lifted unequal-growth class obtains
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]
No new positive-integer anchor class is excluded.

This does **not** solve the full Periodicity Conjecture. Positive rational noninteger and negative rational boundaries remain as stated in T21–T23.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

The next authorized action is theory-only **CDM4-T24 — principal-fast-ideal / \(I\)-adic auxiliary exact-lifting audit**.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T23_REPORT.md before doing research.
