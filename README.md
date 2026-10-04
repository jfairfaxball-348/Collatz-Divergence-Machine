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

**CDM4-T26 is complete — C: NEW RELATIVE-ALGEBRAIC PERIODICITY THEOREM AND SPECIAL-FIBRE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T20–T25 remain closed infrastructure.

In the principal-fast splitting
\[
\Gamma_Y\cong\mathbb N\delta\oplus\Gamma_{\rm slow},
\qquad
m=\theta^\delta,
\]
T26 eliminates two residual T25 branches.

Exact prefix self-similarity gives
\[
\kappa(L_R(n))=a\kappa(n),
\qquad
a\ge2.
\]
Since \(\kappa(n)\) is nondecreasing, bounded \(\kappa\) would force \(\kappa\equiv0\), contradicting the existence of the fast generator. Therefore
\[
\boxed{\kappa(n)\to\infty}
\]
automatically in every live principal-fast system.

T26 also proves
\[
\boxed{
d_{\rm rel}=0
\Longrightarrow
\text{eventual periodicity}.
}
\]
The proof specializes the algebraic canonical state functions along a positive-grading toric curve. Bézivin's theorem forces the resulting D-finite series with finitely generated multiplicative coefficients to be rational, and Skolem–Mahler–Lech turns their labelled supports into an eventually periodic state word.

Hence genuine aperiodicity automatically gives
\[
\boxed{d_{\rm rel}>0.}
\]

For the canonical saturated degree-one divisor lattice, semilinear transport is the linear twisted-lattice map
\[
\Phi:\rho^*\mathscr L_1\to\mathscr L_1.
\]
T26 proves
\[
\boxed{
\lambda_m
=
\operatorname{length}_{\mathcal O}\operatorname{coker}\Phi
}
\]
and
\[
\boxed{
\lambda_m=0
\iff
\overline\Phi
\text{ is bijective on the special fibre }m=0.
}
\]

Thus \(\lambda_m>0\) is exactly canonical special-fibre degeneration. Automatic \(\lambda_m=0\) is still open; no valid canonical \(\lambda_m>0\) example was found.

Combining T26 with T25, every genuinely aperiodic principal-fast system with
\[
\lambda_m=0
\]
admits exact mixed-place relation lifting with
\[
Q(\alpha,\mathbf X)=P(\mathbf X)
\]
literally preserved. The inherited T21 completion-sign chain excludes positive-integer anchors throughout this divisor-unramified class.

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
\lambda_m=0,\quad
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}.
\]

The sole residual genuinely aperiodic principal-fast branch is
\[
\boxed{\lambda_m>0.}
\]

The next live theorem is **CDM4-T27 — canonical special-fibre injectivity / divisor-degeneration classification**.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T26_REPORT.md before doing research.
