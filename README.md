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

**CDM4-T12 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

T10's arbitrary-place Mahler lifting theorem and T11's scalar/finite-abelian collision theorem remain closed infrastructure.

T12 treats balanced finite-group translations without assuming commutativity. For the exact Collatz block-constant profile,
\[
K_C=\{h\in E:C(xh)=C(x)\ \forall x\in E\},
\]
and the true reachable/output state space is the right-coset \(E\)-set
\[
X=E/K_C.
\]
The subgroup \(K_C\) need not be normal, so no quotient-group structure is assumed. The exact number of distinct \(k\)-kernel sequences is
\[
[E:K_C].
\]

Over a splitting field,
\[
K[X]\cong\operatorname{Ind}_{K_C}^{E}1
\cong
\bigoplus_\rho V_\rho^{\oplus\dim V_\rho^{K_C}},
\]
with irreducible Mahler blocks
\[
M_\rho(z)=\sum_{r=0}^{k-1}z^r\rho(\varepsilon_r)
\]
up to the explicit inverse/contragredient convention.

Because the fixed-point translation system has \(\varepsilon_0=e\), every block satisfies \(M_\rho(0)=I\). At a place above \(2\), a finite-group-stable integral lattice gives
\[
M_\rho(W^{k^j})\equiv I\pmod{\mathfrak m_v}
\]
for every \(j\ge0\). Thus the entire reduced nonabelian system is regular at the exact Collatz Mahler orbit.

T12 does **not** prove universal rational-gauge rigidity or \(H\notin\mathbb Q\) for every nonabelian matrix system. Instead it obtains a project-sufficient obstruction.

A hypothetical genuinely aperiodic positive anchor forces
\[
\frac Bk<\log_2 3,
\qquad
0<W=\frac{2^B}{3^k}<1.
\]
Its 2-adic anchor relation
\[
F_{K_C}(W)+3^kN=0
\]
is therefore at a regular point. Adamczewski–Bell–Smertnig Theorem 4.3 lifts that relation to an algebraic functional identity with the same specialization. Evaluating the lifted identity in the real completion contradicts positivity of the exact Collatz coefficient series.

Hence **no genuinely nonperiodic balanced finite-group translation family, including the finite nonabelian case, has an ordinary positive-integer anchor**. Combining with T2,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
throughout this covered class.

A rational exceptional nonabelian inverse value is not completely excluded; in the subcritical case it must lie in \(\mathbb Q\cap\mathbb Z_2\) with negative ordinary real sign. No value in \(\mathbb Z_{>0}\) survives.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T13 — generic balanced finite-kernel regularity / completion-sign audit**. It should drop the finite-group translation hypothesis, classify complete Mahler-orbit regularity of the exact reduced finite-\(k\)-kernel system, and apply the T12 sign obstruction wherever regularity holds.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T12_REPORT.md before doing research.
