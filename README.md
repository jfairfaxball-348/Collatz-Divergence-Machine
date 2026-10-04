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

**CDM4-T25 is complete — C: NEW RELATIVE DIVISOR-LIFTING SUBCLASS AND MULTIPLICITY OBSTRUCTIONS FOUND. No new scientific compute is authorized.**

T20–T24 remain closed infrastructure. In particular, T24 gives the two-profile principal splitting
[
Gamma_Ycongmathbb NdeltaoplusGamma_{m slow},
qquad
m=	heta^delta,
]
the exact pullback
[
ho^*m=c,m^a,
]
and the warning that the unrestricted analytic quotient modulo (m^P) is infinite dimensional over the algebraic coefficient field.

T25 refines that warning at the level of the **canonical** state series. If the prefix fast count
[
kappa(n)=sum_{i<n}kappa_{u_i}
]
tends to infinity, every fixed canonical (m)-jet is a finite slow polynomial:
[
F_t|_Yin K[Gamma_{m slow}][[m]].
]

The exact divisor-local ring is
[
mathcal O=K(Gamma_{m slow})[m]_{(m)},
]
a DVR. Finite-degree contractions of the original functional relation ideal are (m)-saturated, so their quotients are free over (mathcal O).

T25 identifies a new divisor ramification invariant
[
lambda_m=operatorname{ord}_m(det B_1).
]
Inverse relation transport is divisor regular exactly when
[
lambda_m=0.
]

In the unbounded-fast-count branch, relative Hermite–Padé cancellation over
[
K(Gamma_{m slow})
]
produces genuine exact divisor multiplicity. If
[
h(D_X)=dim_{K(Gamma_{m slow})(m)}
K(Gamma_{m slow})(m)[mathbf X]_{le D_X}/J_{le D_X},
]
then after every common explicit (m)-factor is removed,
[
P_{m rel}ge(h(D_X)-1)(D_f+1).
]

Consequently the subclass
[
kappa(n)	oinfty,qquad
d_{m rel}>0,qquad
lambda_m=0
]
admits a divisor-regular rebuild of the T16/T17 mixed-place lifting proof. The resulting relation lies in the original functional relation ideal and preserves
[
Q(alpha,mathbf X)=P(mathbf X)
]
exactly. The inherited T21 real-convergence and positivity argument then excludes genuinely aperiodic positive-integer anchors in this new subclass.

If instead
[
d_{m rel}=0,
]
finite-extension valuation theory gives
[
operatorname{ord}_m(E)le C(D_f+D_X+1),
]
so the relative-algebraic branch has no independently enlargable Hermite–Padé multiplicity parameter.

The residual principal cases are: bounded fast count; relative algebraicity; and positive relative transcendence with (lambda_m>0).

The next live theorem is **CDM4-T26 — canonical divisor-unramifiedness / relative-transcendence completion audit**.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and `experiments/CDM4_T25_REPORT.md` before doing research.
