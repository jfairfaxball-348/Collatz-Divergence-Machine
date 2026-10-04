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

**CDM4-T21 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T20 exact variable-length endpoint/scalar transport and the T16–T18 mixed-place/orbit-closure lifting infrastructure remain closed.

T21 closes the ordinary-prefix asymptotic obstruction for every expanding nonerasing pure-morphic fixed point in scope. Every ordinary prefix has the exact Dumont–Thomas decomposition
\[
u_{<n}
=
\sigma^k(p_k)\sigma^{k-1}(p_{k-1})\cdots p_0.
\]
The most significant digit \(p_k\) is a nonempty prefix of
\[
\sigma(a_0)=a_0w,
\]
so it contains \(a_0\). Thus the leading substituted block already carries the maximal reachable Frobenius/Jordan scale
\[
k^e\rho^k.
\]

Unequal lower growth classes are negligible after normalization. Equal-radius SCC chains and their leading polynomial factors are retained, but the common \(k^e\) factor cancels in the projective prefix ratio. Imprimitive modulation is handled by a finite phase.

The prefix-mean problem therefore becomes a finite-state discounted ratio problem with algebraic rewards and discount \(\rho^{-1}\). Its extremal values are attained by deterministic stationary policies, giving a finite algebraic set \(\mathcal E\) such that
\[
\boxed{
\liminf_{n\to\infty}\frac{A_n}{n}
=
\min\mathcal E,
\qquad
\limsup_{n\to\infty}\frac{A_n}{n}
=
\max\mathcal E.
}
\]
The full accumulation set is the interval between these two algebraic endpoints. The ordinary mean need not exist.

Consequently, under a hypothetical genuinely aperiodic positive integer Collatz anchor, the inherited T3 bound
\[
\beta:=\limsup A_n/n\le\log_2 3
\]
is strict because \(\beta\) is algebraic while \(\log_2 3\) is transcendental:
\[
\boxed{\beta<\log_2 3.}
\]
Combined with the T20 exact scalar identity
\[
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}},
\]
this proves absolute real convergence of the canonical scalar and all canonical state subseries at every actual tail throughout the expanding reducible T21 class.

T21 separately proves a universal positive expanding grading after T18 orbit-closure reduction. On a sufficiently deep period-refined tail,
\[
d^T=\mathbf1^TM^a(M^R-I)
\]
annihilates the complete character-relation lattice and is positive on every reachable positive generator. Hence
\[
w_\Delta(\pi_Y(x))=d^Tx
\]
is a well-defined positive integral grading with
\[
w_\Delta(A_Y^n\gamma)
\ge
C\kappa^n w_\Delta(\gamma)
\]
for some \(\kappa>1\). A single global reducible Perron vector is not required.

Scalar convergence and grading are still kept separate from algebraic relation lifting. T21 closes the exact lifting/sign contradiction for the **balanced-growth reducible subclass**, where all surviving reduced generators have one comparable exponential-polynomial growth scale. Every genuinely aperiodic member of that subclass has
\[
H\notin\mathbb Z_{>0},
\]
and under T2's inherited finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}.
\]

The remaining variable-length boundary is now narrower: in a T18-reduced reducible system with genuinely unequal surviving growth scales, scalar convergence and positive grading are proved, but the global \(S\)-unit height-versus-boundary-contraction step of the exact mixed-place lifting theorem has not yet been established in multiscale form.

This does **not** solve the full Periodicity Conjecture. Positive rational noninteger values are excluded only when ordinary real subcriticality is independently known; negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. Brechler's 2026 multivariate Mahler work was rechecked in T21 and remains a non-load-bearing preprint.

The next authorized action is theory-only **CDM4-T22 — multiscale reducible toric relation-lifting / height-filtration audit**.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read \`AGENTS.md\`, \`START_HERE.md\`, the required prior reports, and \`experiments/CDM4_T21_REPORT.md\` before doing research.
