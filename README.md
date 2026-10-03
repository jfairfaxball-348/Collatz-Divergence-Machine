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

**CDM4-T14 is complete — D: NO QUALIFYING THEOREM FOUND. Multivariate tail regularity is substantially sharpened, but no new scientific compute is authorized.**

T10's arbitrary-place one-variable Mahler relation-lifting theorem remains closed infrastructure. T11 closes balanced finite-abelian translations, T12 closes balanced finite-nonabelian translations as positive-anchor routes, and T13 closes the complete balanced one-variable finite-\(k\)-kernel branch as a positive-anchor route.

T14 returns to the exact unbalanced T5 system. For a \(k\)-uniform substitution with prefix Parikh vector \(c(n)\), incidence matrix \(M\), and prefix maps \(p_r\),

\[
c(kn+r)=Mc(n)+p_r(u_n).
\]

With

\[
F_t(x)=\sum_{n:u_n=t}x^{c(n)},
\qquad
\tau(x)_s=\prod_t x_t^{M_{t,s}},
\]

the exact finite system is

\[
\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x)),
\]

and at

\[
q_s=\frac{2^{v(s)}}3
\]

the exact inverse value is

\[
H=-\frac13\sum_tF_t(q).
\]

T14 first removes unreachable and output-equivalent states exactly. It then separates finite-state minimality from rational-function linear minimality. When \(\det M\ne0\), the monomial map is dominant and an exact rational-linear basis may be chosen with the prescribed Collatz scalar

\[
S(x)=\sum_tF_t(x)
\]

as a basis coordinate; the induced minimal system is invertible over \(\mathbb Q(x)\). When \(\det M=0\), naive full-field rational minimalization is not automatically legitimate because rational denominators can vanish identically on the lower-dimensional monomial image.

The exact monomial orbit is

\[
q_{j,s}=\frac{2^{B_j(s)}}{3^{k^j}},
\qquad
B_j(s)=v^TM^je_s.
\]

It is pairwise distinct and tends coordinatewise to \(0\) 2-adically. T14 derives the exact \(T\)-independence criterion and proves a dynamical Mordell–Lang dichotomy: after passage to the stable image torus, every algebraic singular variety is hit either finitely often or along an arithmetic-progression suborbit.

For the dominant Adamczewski–Faverjon admissible subclass—\(T=M^T\) in their class \(\mathcal M\) and the exact Collatz point \(T\)-independent—the orbit is Zariski dense. Hence every proper singular variety is hit only finitely often and every invertible rational minimal system has a sufficiently deep regular tail.

T14 also proves the needed real-tail statement for primitive substitutions. A hypothetical genuinely aperiodic positive anchor forces the Perron–Frobenius mean valuation

\[
\alpha<\log_2 3,
\]

which implies uniform coordinatewise convergence of the deep real monomial orbit to \(0\). Forward transport preserves the exact positive scalar, so the real sign side of the T13 mechanism survives.

The remaining load-bearing gap is completion-specific. Adamczewski–Faverjon, *Annals of Mathematics* 204 (2026), provides a multivariate lifting theorem with exact specialization for **complex** values. It does not lift the required 2-adic anchor relation. The 2026 Brechler work explicitly targeting multivariate \(p\)-adic meromorphy/lifting remains a preprint and is non-load-bearing.

Therefore T14 does not exclude a new genuinely multivariate/unbalanced positive-anchor class, does not prove a new bounded-\(R_m\Rightarrow\) periodicity theorem, and does not justify new computation.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T15 — nonarchimedean multivariate Mahler lifting / stable-image completion audit**. The primary obligation is to recover or prove a peer-reviewed-quality characteristic-zero arbitrary-place multivariate/monomial relation-lifting theorem with exact specialization for the T14 regular/admissible tail class. The secondary obligation is an exact scalar-preserving stable-image reduction for singular incidence matrices.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T14_REPORT.md before doing research.
