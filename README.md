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

**CDM4-T9 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

T9 continued the exact p-adic same-point no-cancellation problem for the balanced elementary-2-group Walsh family isolated in T8.

The true reachable/output quotient remains

[
G=E/K_C,
qquad
m=|G|.
]

For every reduced character,
[
P_chi(z)=S_chi(z)P_chi(z^k),
qquad
S_chi(z)=sum_rchi(arepsilon_r)z^r,
]
and T8 already proves complete 2-adic regularity along
[
W=2^B/3^k.
]

T9 now classifies the rational character projections exactly. If
[
f_chi(n)=chi(u_n),
]
then
[
f_chi(kn+r)=f_chi(n)chi(arepsilon_r).
]
An eventually periodic ({pm1})-valued projection is necessarily trivial, or, only when (k) is odd, the unique alternating projection
[
f_chi(n)=(-1)^n.
]
Thus after exact quotienting the only rational normalized Walsh components are (1/(1-z)) and at most one (1/(1+z)). Distinct quotient characters also have distinct cocycle polynomials.

The main new structural theorem is a source-level application of Kubota's first-order functional criterion: the surviving normalized products are algebraically independent over the rational-function field **if and only if** their cocycles are multiplicatively independent modulo rational Mahler coboundaries
[
prod_i S_i(z)^{m_i}=R(z)/R(z^k).
]
Hence the functional-independence side is now exact.

The remaining gap is arithmetic specialization. The adjacent Kubota/Nishioka same-point value theorem recovered in peer-reviewed form is archimedean, not 2-adic. Bugeaud–Yao remains an individual first-order theorem. Xu–Wang 2004, Wang 2006, and Wang–Xu 2006 still lack recoverable theorem text sufficient to certify the required simultaneous same-point application. Flicker's theorem genuinely permits p-adic completions, but its transformation-limit/dominance package is not verified for the stationary Walsh family, and the normalized Collatz values all have 2-adic valuation zero.

No Collatz-specific identity was found that excludes rational cancellation in the exact weighted Fourier sum. No genuinely multi-character higher-rank recursive class was newly ruled out, no new bounded-(R_m)-implies-periodicity theorem was obtained, and no explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed.

The next authorized action is theory-only **CDM4-T10 — p-adic diagonal Mahler lifting / same-point value theorem audit**. It must prove or recover a completion-correct nonarchimedean functional-to-value lifting theorem for the exact T9-reduced family at (W), or derive a Collatz-specific additive substitute. Because T10 is the tenth numbered CDM4 theory session, it must also perform the mandatory progress-and-correction audit required by `AGENTS.md`.

No substitution enumeration, new starts, generator/distribution, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and `experiments/CDM4_T9_REPORT.md` before doing research.
