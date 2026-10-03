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

**CDM4-T19 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T18 remains the exact stable-orbit-closure reduction and mixed-place lifting theorem. T19 closes the independent nonprimitive ordinary-real completion gap for positive integer anchors in the exact \(k\)-uniform T18 framework.

For a \(k\)-uniform substitution incidence matrix,
\[
\mathbf1^TM=k\mathbf1^T.
\]
A strongly connected Frobenius block has spectral radius \(k\) exactly when it is final. Every nonfinal block has spectral radius \(<k\). Hence distinct \(k\)-spectral blocks cannot form a chain and the canonical nonnegative Parikh dynamics has no \(j^ek^j\), \(e>0\), correction.

After scaling \(P=M/k\), the final SCCs are the recurrent classes of a finite rational Markov chain. Along a common period \(D\),
\[
B_j(s)
=
k^jb_{s,j\bmod D}
+
O(j^E\rho_*^j),
\qquad
b_{s,r}\in\mathbb Q,\quad \rho_*<k.
\]
Thus imprimitive modulation is explicit and exact critical equality with \(\log_2 3\) is impossible.

The key T19 correction is that T18 does not require every real monomial coordinate to enter the unit polydisc.

Let
\[
A_n=\sum_{i<n}v(u_i).
\]
The finite-valued valuation word of a uniform substitution is \(k\)-automatic. Under a hypothetical genuinely aperiodic positive integer Collatz anchor, T3's exact height inequality plus Bell's rational automatic limsup theorem gives
\[
\limsup_{n\to\infty}\frac{A_n}{n}<\log_2 3.
\]

For the canonical positive scalar,
\[
S(x)=\sum_nx^{c(n)},
\]
one has the exact fixed-point identity
\[
S(\tau^Jq)
=
\sum_{n\ge0}
\frac{2^{A_{nk^J}}}{3^{nk^J}}.
\]
Therefore the scalar and every canonical state subseries converge absolutely in the ordinary real completion at every actual monomial-orbit point needed by T18, even if some individual coordinates exceed \(1\).

T18 exact lifting still preserves
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]
Evaluating the lifted algebraic identity at the same real algebraic tail point and reconstructing the canonical scalar gives
\[
S^{(\infty)}(q)+3N=0,
\]
which contradicts positivity for \(N>0\).

Hence every genuinely aperiodic nonprimitive T18-admissible \(k\)-uniform system satisfies
\[
H\notin\mathbb Z_{>0}.
\]
Together with T18, primitivity is no longer needed for the positive-anchor conclusion inside the complete T18 framework. Under T2's finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
throughout the newly closed class.

This does **not** solve the full Periodicity Conjecture. General nonuniform morphic/substitutive recursive languages and general systems outside the exact T5/T15/T18 analytic framework remain open. Positive rational noninteger values are excluded only when ordinary real subcriticality is independently known; negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. T19 did not recheck Brechler's publication status; T18's 2026-10-03 preprint status remains the inherited non-load-bearing state.

The next authorized action is theory-only **CDM4-T20 — nonuniform morphic scalar-convergence / completion-portability audit**.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T19_REPORT.md before doing research.
