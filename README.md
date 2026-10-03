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

**CDM4-T16 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

The balanced one-variable finite-kernel branch remains closed by T13. T14–T15 supplied the dominant multivariate regular-tail infrastructure and the singular-incidence stable-image torus. T16 now proves the missing completion bridge for the **primitive dominant affine subclass**.

The new T16 theorem is a mixed-place / bi-admissible exact lifting theorem. For a nonsingular nonnegative monomial map, an algebraic regular point, and algebraic-coefficient Mahler functions:

- the published Adamczewski–Faverjon complex admissibility/vanishing theorem is retained for the same algebraic orbit;
- the input value relation may live in a characteristic-zero nonarchimedean completion;
- local analytic branches are constructed by rigid Hensel theory;
- Tate/Gauss norms replace Cauchy estimates;
- the rigid identity theorem replaces complex analytic continuation;
- local-place Liouville bounds replace the archimedean lower-bound use;
- and the lifted algebraic relation preserves the exact specialization
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X).
  \]

This is sufficient for the T14 primitive dominant class
\[
\det M\ne0,\qquad T=M^T\in\mathcal M,\qquad q\text{ is }T\text{-independent}.
\]
A hypothetical realized positive integer anchor transports to a regular 2-adic tail, lifts with its exact polynomial, and then evaluates in the real completion. Exact reconstruction gives
\[
S^{(\infty)}(q)+3N=0,
\]
contradicting \(S^{(\infty)}(q)>0\) and \(N>0\). Hence no genuinely aperiodic covered system has
\[
H\in\mathbb Z_{>0}.
\]

T14 derives the required real contraction from the existence of that positive integer realized orbit. Therefore primitivity alone does not exclude an abstract positive rational noninteger value. If uniform real subcriticality is independently known for the system, the same T16 lifting/sign argument strengthens the conclusion to \(H\notin\mathbb Q_{>0}\).

By T2, throughout the newly closed primitive dominant class,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
under the exact finite-alphabet anchoring hypotheses.

T16 does **not** close the T15 singular-incidence stable-image torus class. The affine auxiliary-function proof still uses the positive exponent monoid, total-degree truncation at the affine origin, and high-order support displacement. An intrinsic Laurent/toric version must work in a boundary chart rather than force an artificial nonnegative matrix.

Negative rational values are not excluded; positive rational noninteger values are excluded only under independently verified real subcriticality. No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

Brechler arXiv:2607.24877 remains a preprint as of 2026-10-03 and is non-load-bearing. The Adamczewski–Faverjon 2026 Annals addendum was checked and does not supply an arbitrary-place theorem.

The next authorized action is theory-only **CDM4-T17 — intrinsic toric/nonarchimedean lifting at an attracting boundary stratum**. Build a toric/formal/rigid chart for the T15 stable-image tail, replace affine total degree by an intrinsic semigroup/weight filtration, and prove the toric analogue of the exponential support-displacement/Gauss estimate while preserving exact specialization.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T16_REPORT.md before doing research.
