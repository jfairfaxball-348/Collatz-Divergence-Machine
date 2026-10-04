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

**CDM4-T24 is complete — C: NEW PRINCIPAL-I-ADIC STRUCTURAL OBSTRUCTION FOUND. No new scientific compute is authorized.**

T20–T23 remain closed infrastructure: exact variable-length scalar transport, strict real prefix gap and scalar convergence under a hypothetical positive integer anchor, positive reduced grading, intrinsic multiscale profiles, exact fast-height / slow-contraction asymptotics, scalar-support fullness, slowest-face elimination, and the principal-high-ideal dense-orbit analytic zero theorem.

T24 proves that the principal-high hypothesis is much more rigid than previously recorded. If
[
I_{>1}=(m),qquad m=	heta^delta,
]
then there are exactly two positive growth profiles and the reduced positive semigroup splits as
[
Gamma_Ycongmathbb NdeltaoplusGamma_{m slow}.
]
The generator (m) lies on the unique fastest positive profile; intermediate or further faster profiles cannot be hidden in its powers.

Writing
[
A_Ydelta=adelta+eta,
qquad
etainGamma_{m slow},
]
one has
[
ho^*m=u,m^a	heta^eta,
qquad
operatorname{ord}_I(ho^{n*}m)=a^n.
]
The (I)-adic order can still differ from the full growth profile: equal-radius lower-stratum forcing can contribute an extra polynomial factor.

A true factor
[
m^P
]
does evaluate on the exact orbit with fast (2)-adic decay
[
-log|m(q_n)^P|_2=Theta(Pg_{m fast}(n)).
]
The T24 obstruction is the auxiliary construction. Exact divisorial order is relative:
[
mathcal A_Y/I^P
cong
igoplus_{k=0}^{P-1}m^kmathcal A_{m slow},
]
so imposing
[
Ein I^P
]
means killing complete slow analytic coefficient functions. It is not the finite-codimensional point-order condition used in the T16/T17 Mahler auxiliary argument.

Finite slow truncation leaves a slow-scale remainder and restores the T22 fast/slow mismatch. Explicit multiplication by (m^P) consumes ordinary support degree linearly and creates no independent multiplicity amplification. In addition, a denominator may avoid every orbit point while having positive (m)-order, so ordinary regularity does not guarantee divisor-regular relation matrices.

Accordingly T24 does **not** prove new exact relation lifting and does not obtain
[
Q(alpha,mathbf X)=P(mathbf X)
]
for any new unequal-growth class. No new positive-integer anchor class is excluded.

The next live theorem is **CDM4-T25 — relative slow-base multiplicity / divisor-regular Mahler lifting audit**. It must decide whether exact high (m)-adic order can be produced by cancellation over the slow analytic base using algebraic/rational coefficient functions of controlled degree and height, while preserving divisor-regular localization and exact specialization.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and `experiments/CDM4_T24_REPORT.md` before doing research.
