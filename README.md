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

**CDM4-T15 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

The balanced one-variable finite-kernel branch remains closed as a positive-anchor route by T13. T14 then established the dominant multivariate regular-tail infrastructure. T15 audited the missing completion bridge and the singular-incidence stable-image reduction.

The literature boundary is now exact:

- Adamczewski–Faverjon 2026 gives multivariate Mahler relation lifting with exact specialization in the **complex** setting.
- Adamczewski–Bell–Smertnig 2023 gives exact relation lifting at an **arbitrary place**, but only in **one variable**.
- Flicker 1979 is genuinely multivariate and p-adic, but requires a separate strong limiting-function/growth package and is not a generic lifting theorem for the T14 regular-tail class.
- Brechler arXiv:2607.24877v1 remains a **preprint** as of 2026-10-03. Its Proposition 3.12 proves p-adic multivariate meromorphy; its Theorem 1.2 strengthens the ordinary Adamczewski–Faverjon lifting theorem but is not stated as an arbitrary-place p-adic value-lifting theorem.

A direct nonarchimedean transplant of Adamczewski–Faverjon Theorem 2.3 was not completed. The missing proof package is rigid-analytic: replace complex convergent germs/polydiscs, Cauchy estimates, translated expansions, and analytic continuation while preserving the exact specialization polynomial.

T15 does complete the singular-incidence stable-image algebra.

If \(J_0\) is past rank stabilization and
\[
L=\ker_{\mathbb Z}(M^{J_0}),
\]
then the eventual stable image
\[
X=\operatorname{im}\tau^{J_0}
\]
has character lattice
\[
X^*(X)\cong\mathbb Z^m/L.
\]
The induced monomial map is a surjective torus isogeny. The exact Collatz tail lies in \(X\).

The canonical series restrict analytically to the 2-adic unit-domain of \(X\). Over \(K(X)\), exact rational-linear minimalization gives
\[
\mathbf G(x)=A_X(x)\mathbf G(\tau_X(x)),
\qquad
A_X(x)\in\operatorname{GL}_{r_X}(K(X)),
\]
with the prescribed scalar retained exactly as
\[
G_1=S=\sum_tF_t.
\]
Forward scalar transport from the original ambient system remains exact.

This stable-image meromorphic system is not automatically in the standard affine multivariate Mahler theorem class: an intrinsic lattice basis can introduce negative exponents, and the ambient origin is a toric boundary point rather than a point of the stable-image torus.

T15 therefore does not exclude a new genuinely multivariate/unbalanced positive-anchor class, does not prove a new bounded-\(R_m\Rightarrow\) periodicity theorem, and does not find an explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample.

The next authorized action is theory-only **CDM4-T16 — rigid/nonarchimedean monomial lifting at a regular torus tail**. The target is an exact homogeneous relation-lifting theorem at a nonarchimedean place with
\[
Q(\alpha,\mathbf X)=P(\mathbf X),
\]
at minimum for the T14 dominant \(T\in\mathcal M\), \(T\)-independent regular-tail subclass. A stronger intrinsic torus-isogeny theorem would also absorb the T15 stable-image reduction.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T15_REPORT.md before doing research.
