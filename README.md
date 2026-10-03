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

**CDM4-T17 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

The balanced one-variable finite-kernel branch remains closed by T13, and T16 remains the exact mixed-place lifting/completion-sign theorem for the primitive dominant affine multivariate class.

T17 extends the obstruction into a genuinely singular-incidence stable-image subclass without forcing an arbitrary Laurent basis into a nonnegative affine matrix.

For the T15 stable image, put
\[
L=\ker_{\mathbb Z}(M^{J_0}),\qquad
N=\mathbb Z^m/L,
\qquad
\Gamma_0=\pi(\mathbb N^m).
\]
Uniformity of the substitution makes
\[
w(\pi(a))=\mathbf1^Ta
\]
a well-defined positive grading on the regular-character semigroup, and the stable isogeny satisfies the exact expansion law
\[
\boxed{w(\overline M^n\gamma)=k^nw(\gamma).}
\]

The canonical affine toric chart
\[
U_0=\operatorname{Spec}K[\Gamma_0]
\]
has a torus-fixed boundary point \(o\), and the exact 2-adic stable Collatz tail converges to \(o\). Weighted toric Tate algebras give the required Gauss coefficient estimate and exponential high-weight-tail bound. Local translation at a deep torus point uses ordinary rigid parameters; negative lattice exponents are harmless there because the generalized integer binomial series converges on strict unit discs.

T17 does not apply Adamczewski–Faverjon Theorem 6.4 blindly in Laurent coordinates. Instead, under relative independence modulo \(L\) and absence of root-of-unity eigenvalues of \(\overline M\), Corvaja–Zannier \(S\)-unit trapping together with the inherited T15 dynamical Mordell–Lang dichotomy gives the required toric zero-set theorem. The remainder of T16's algebraic/global and rigid-local lifting architecture survives in the semigroup presentation.

The resulting semigroup-admissible toric lifting theorem preserves the original specialization polynomial exactly:
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

Hence every genuinely aperiodic **primitive** stable-image system with a complete regular tail, relative independence modulo \(L\), and no root-of-unity eigenvalue satisfies
\[
H\notin\mathbb Z_{>0}.
\]
By T2, bounded canonical representatives force eventual periodicity throughout this newly closed class.

This is a subclass theorem, not a closure of all singular incidence. Cyclotomic factors, relative-dependence, and general invariant bad-locus/orbit-closure reduction remain open. Nonprimitive ordinary real contraction remains a separate gap. Positive rational noninteger values are excluded only when real subcriticality is independently established; negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. Brechler arXiv:2607.24877 remains a preprint in the 2026-10-03 status check and is non-load-bearing.

The next authorized action is theory-only **CDM4-T18 — stable-orbit-closure / cyclotomic-factor reduction and regular-tail completion**. The target is to descend failed-(RI)/(RE) arithmetic-progression tails and persistent denominator traps to their minimal invariant torus/coset while preserving the exact scalar, then test whether the resulting system enters the T17 toric lifting class.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T17_REPORT.md before doing research.
