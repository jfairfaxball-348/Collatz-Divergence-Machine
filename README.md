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

**CDM4-T13 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T10's arbitrary-place Mahler relation-lifting theorem remains closed infrastructure. T11 closes balanced finite-abelian translations more strongly by transcendence, and T12 closes balanced finite nonabelian translations as positive-anchor routes.

T13 removes the finite-group hypothesis from the positive-anchor obstruction.

For the exact true finite-\(k\)-kernel Collatz coefficient system,
\[
\mathbf F(z)=M(z)\mathbf F(z^k),
\qquad
M(z)=\sum_{r=0}^{k-1}z^rA_r,
\]
the states are the distinct reachable kernel sequences of the exact positive block-constant output. Each \(A_r\) is merely deterministic; it need not be a permutation or belong to a group action.

The constant matrix is
\[
M(0)=A_0.
\]
If the digit-zero map is a permutation, \(A_0\) is a permutation matrix and the complete 2-adic Mahler orbit is regular. If \(A_0\) is singular, that alone is not an intrinsic obstruction.

Let
\[
D(z)=\det M(z).
\]
If \(D\not\equiv0\), only finitely many nonzero Mahler iterates can be singular. If
\[
D\equiv0,
\]
the canonical state series are rational-function linearly dependent.

More generally, choose a \(\mathbb Q(z)\)-basis of the exact state-series span that includes the prescribed root series \(F_0\). The induced minimal system is
\[
\mathbf G(z)=A(z)\mathbf G(z^k),
\qquad
A(z)\in\operatorname{GL}_d(\mathbb Q(z)),
\]
with \(G_1=F_0\). Every such one-variable rational system is regular on a sufficiently deep nonzero Mahler tail
\[
\alpha=W^{k^J},
\qquad
W=\frac{2^B}{3^k}.
\]

Early singular canonical matrices do not need to be inverted. The exact root value is transported forward through their product to the regular tail.

A hypothetical genuinely aperiodic positive anchor forces
\[
\frac Bk<\log_2 3,
\qquad
0<W<1
\]
in the ordinary real absolute value. The transported 2-adic anchor relation at \(\alpha\) is regular, so Adamczewski–Bell–Smertnig Theorem 4.3 lifts it to a functional identity with the exact specialization. Evaluating that identity in the real completion reconstructs the original positive block-constant series
\[
F_0^{(\infty)}(W)>0,
\]
contradicting the sign required by a positive anchor.

Hence **no genuinely nonperiodic balanced one-variable finite-\(k\)-kernel Collatz family has an ordinary positive-integer anchor**, including canonical systems with singular \(A_0\), finitely many early singular iterates, or \(\det M\equiv0\).

Combining with T2,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
throughout the covered balanced finite-kernel class.

T13 does **not** prove universal \(H\notin\mathbb Q\). In a subcritical family, any surviving rational inverse value lies in \(\mathbb Q\cap\mathbb Z_2\) and has negative ordinary real sign; a negative integer remains possible and is not a Collatz counterexample.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T14 — multivariate/unbalanced finite-state Mahler tail-regularity / completion-sign audit**. It should return to the exact T5 multivariate Parikh/monomial system, preserve the exact positive Collatz scalar through any reduction, and determine whether a completion-correct regular-tail plus relation-lifting argument survives beyond the balanced one-variable setting.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T13_REPORT.md before doing research.
