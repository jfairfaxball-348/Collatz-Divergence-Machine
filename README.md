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

**CDM4-T22 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

T20 exact variable-length endpoint/scalar transport and T21 ordinary-prefix/scalar-convergence/positive-grading results remain closed.

T22 resolves the geometry of the remaining unequal-growth lifting problem without claiming a universal lift. On a T18-reduced dense arithmetic-progression tail, every reduced character \(\gamma\) has exact normalized length and valuation exponent recurrences
\[
L_\gamma(n)=\mathbf1^TM^a(M^{Rn}-I)\mu,
\qquad
V_\gamma(n)=v^TM^a(M^{Rn}-I)\mu,
\]
independent of the chosen ambient lift \(\mu\). After period refinement, each positive reduced character has an intrinsic exponential-polynomial profile \((\rho,e)\).

These profiles form a finite growth filtration. Positive profile is max-additive, while the T21 increment weight
\[
w_\Delta(\pi_Y(x))=\mathbf1^TM^a(M^R-I)x
\]
remains additive, positive and exponentially expanding. Thus one scalar grading already suffices for finite-dimensional Hilbert truncations and local support displacement; a vector grading is useful bookkeeping but is not the missing theorem.

The decisive T22 result is the exact height/contraction comparison. For positive toric coordinates along the reduced Collatz orbit,
\[
\widehat h(x_n)=\Theta(g_{\rm fast}(n)),
\qquad
-\log\max_i|x_{n,i}|_2=\Theta(g_{\rm slow}(n)).
\]
Corvaja–Zannier Theorem 3 requires
\[
\widehat h(x_n)=O(-\log\max_i|x_{n,i}|_2).
\]
Hence the inherited T17/T18 analytic zero theorem applies exactly in the effective balanced-growth regime. If two active profiles have unequal radii, or equal radius with unequal polynomial degree, the required ratio diverges.

Fixed multigradings, Rees algebras, weighted-projective embeddings and fixed monomial re-embeddings do not change the actual orbit height or slowest local contraction. Nor can a slow direction simply be quotiented out while preserving the Collatz scalar: T22 proves
\[
\left\langle\operatorname{Supp}(S|_Y)\right\rangle_{\mathbb Z}=N_Y.
\]
The scalar prefix support therefore spans the entire reduced character lattice.

The selected T18 orbit is already Zariski dense under an étale map, so there is no further fixed proper orbit closure to pass to. Laurent/Bell–Ghioca–Tucker reduction remains valid; the missing step is a genuinely new multiscale analytic zero/lifting theorem.

The published 2026 Adamczewski–Faverjon paper was rechecked and retains a common-scale admissibility condition. Brechler arXiv:2607.24877 was also rechecked and no journal publication was located; it is not used as a load-bearing closure theorem.

Therefore genuine active unequal-growth reducible variable-length systems remain open for exact specialization
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]
The T21 balanced-growth class remains closed, with pointwise real completion portability and the positive sign contradiction.

This does **not** solve the full Periodicity Conjecture. No new positive-integer anchor class is excluded in T22; positive rational noninteger and negative rational boundaries remain as stated in T21.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

The next authorized action is theory-only **CDM4-T23 — stratified/asynchronous multiscale analytic zero theorem and exact-lifting audit**.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T22_REPORT.md before doing research.
