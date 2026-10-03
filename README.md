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

**CDM4-T20 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T18 remains the exact orbit-closure-reduced mixed-place lifting infrastructure and T19 remains the complete \(k\)-uniform scalar-completion theorem.

T20 proves that variable length does not destroy the canonical multivariate functional system. With
\[
\ell_J(s)=\mathbf1^TM^Je_s,
\qquad
L_J(n)=\mathbf1^TM^Jc(n),
\]
the exact fixed-point transport is
\[
\sigma^J(u_{<n})=u_{<L_J(n)},
\qquad
A_{L_J(n)}=v^TM^Jc(n).
\]
At the Collatz point
\[
q_s=2^{v(s)}/3,
\]
the exact nonuniform scalar tail is
\[
\boxed{
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
}
\]
Every canonical state function is the corresponding positive subseries.

Thus any strict global prefix gap
\[
\limsup A_n/n<\log_2 3
\]
gives ordinary-real scalar convergence at every actual monomial tail, with no need to force coordinatewise contraction.

For a primitive growing variable-length substitution, the ordinary valuation mean
\[
\alpha=\frac{v^Tr}{\mathbf1^Tr}
\]
exists and is algebraic. Under a hypothetical genuinely aperiodic positive integer Collatz anchor, T3 gives
\[
\alpha\le\log_2 3.
\]
The threshold \(\log_2 3\) is transcendental by Gelfond-Schneider, so equality is impossible and
\[
\alpha<\log_2 3.
\]

T20 also extends the stable-image toric lifting architecture beyond constant length. If
\[
h^TM=\rho h^T,\qquad h>0,
\]
then
\[
w_h(\pi(a))=h^Ta
\]
is the primitive Perron-weight replacement for T17's uniform total-length grading. It descends through the stable kernel and, after T18 orbit-closure reduction, through the complete relation lattice, with exact expansion
\[
w_h(\overline M^n\gamma)=\rho^nw_h(\gamma).
\]
The weighted support, boundary-contraction, \(S\)-unit zero, regular-tail, rigid-local, and exact-specialization arguments survive with \(\rho^n\) replacing \(k^n\).

Consequently every genuinely aperiodic primitive growing nonerasing substitution with finite positive valuation coding satisfies
\[
H\notin\mathbb Z_{>0},
\]
including singular-incidence systems. Under T2's inherited finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}.
\]

The remaining variable-length boundary is reducible/nonprimitive. Equal-dominant-radius SCC chains can produce leading \(J^e\rho^J\) corrections, and ordinary prefixes can cut through blocks of unequal growth. Although substituted-block valuation/length ratios have algebraic residue-class limits in the expanding finite-matrix setting, T20 does not prove that the global ordinary-prefix limsup
\[
\limsup A_n/n
\]
is algebraic or strictly subcritical. A universal positive expanding toric grading is also not proved for the reducible singular class.

This does **not** solve the full Periodicity Conjecture. Positive rational noninteger values are excluded only when ordinary real subcriticality is independently known; negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. T20 did not recheck Brechler's publication status; T18's 2026-10-03 preprint status remains the inherited non-load-bearing state.

The next authorized action is theory-only **CDM4-T21 — reducible morphic ordinary-prefix limsup / positive-grading audit**.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T20_REPORT.md before doing research.

