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

**CDM4-T10 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T10 completed the mandatory tenth-session progress/correction audit and recovered the missing completion-correct same-point Mahler lifting theorem.

Adamczewski–Bell–Smertnig, JEMS 25 (2023), Theorems 4.2–4.3, treat one-variable linear Mahler systems at an arbitrary place of a number field. At a regular algebraic point \(\alpha\) with \(0<|\alpha|_v<1\), functional transcendence degree is preserved at the values and homogeneous value relations lift to functional relations.

This applies directly to the exact T9 Walsh products
\[
P_i(z)=S_i(z)P_i(z^k)
\]
at
\[
W=2^B/3^k
\]
in the 2-adic completion. T8 already proves
\[
S_i(W^{k^j})\ne0
\]
for every \(i,j\), so \(W\) is regular. The rational non-torsion unit \(3^{-k}\) requires no special absorption or torsion hypothesis.

Therefore the T9 coboundary condition
\[
\Lambda=0
\]
now implies algebraic independence of
\[
P_1(W),\ldots,P_t(W)
\]
over algebraic numbers.

For the additive Collatz sum, T10 proves a sharper linear statement. After removing zero and rational components, define
\[
i\sim j
\Longleftrightarrow
P_i/P_j\in\mathbb Q(z)^\times,
\]
equivalently \(e_i-e_j\in\Lambda\). Representatives of distinct classes, together with \(1\), are functionally linearly independent and hence have linearly independent values at \(W\).

Writing
\[
P_i(z)=R_i(z)P_{r(C)}(z)
\]
inside each rational-multiple class \(C\), define
\[
A_C(W)=\sum_{i\in C}\widehat C_iR_i(W).
\]

Then the exact higher-rank Fourier value is algebraic/rational **if and only if every nonrational class has \(A_C(W)=0\)**. If at least one grouped coefficient is nonzero, the exact inverse-Collatz value is 2-adically transcendental and cannot be a positive-integer anchor.

In particular, if no two genuine nonrational Walsh products are rational-function multiples, same-point rational cancellation is impossible automatically. This gives a genuinely higher-rank recursive-language obstruction and a new class for which bounded canonical representatives \(R_m\) force eventual periodicity.

The mandatory T10 correction is that the T9 literature conclusion was incomplete: the required nonarchimedean lifting theorem was already present in the 2023 JEMS paper. Xu–Wang 2004, Wang 2006, Wang–Xu 2006, and Flicker are no longer needed to close this bridge.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T11 — rational-coboundary collision / grouped-weight cancellation audit**. It must classify the exact rational-multiple classes and prove that at least one \(A_C(W)\) is always nonzero, or classify the exact exceptional rational-value families and pass only those to ordinary-integrality/positivity analysis.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T10_REPORT.md before doing research.
