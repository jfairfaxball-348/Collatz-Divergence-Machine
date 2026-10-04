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

**CDM4-T24 is complete — D: NO QUALIFYING THEOREM FOUND. No new scientific compute is authorized.**

T20–T22 remain closed infrastructure: exact variable-length scalar transport, algebraic ordinary-prefix limsup and strict positive-integer gap, positive reduced grading, intrinsic reduced multiscale profiles, exact fast-height / slow-contraction asymptotics, scalar-support fullness, and the failure of fixed reweighting to repair genuine active scale separation.

T23 remains the exact zero-theorem input. If the high-growth ideal above the slowest profile is principal,
[
I_{>1}=(m),qquad m=	heta^delta,
]
then every nonzero algebraic-coefficient toric analytic function has only finitely many zeros on the exact dense reduced orbit.

T24 proves that the principal hypothesis is more rigid than previously recorded. Equality of monomial ideals forces every positive character above the slow face to have the same profile as (delta). Thus the principal subclass has exactly two positive growth profiles,
[
g_1<g_delta=g_{m fast}.
]

The pullback of the principal generator has an exact semigroup normal form
[
ho^*m=u_delta m^a	heta^arepsilon,
qquad
arepsilon	ext{ slow or }0,
]
with intrinsic integer
[
a=max{jge1:A_Ydelta-jdeltainGamma_Y}.
]
Consequently
[
operatorname{ord}_I(ho^{n*}m)=a^n.
]
This divisibility order need not equal the full fast valuation profile: an equal-radius Jordan extension can contribute an additional polynomial factor.

Imposing (I)-adic order does not destroy the auxiliary Hilbert space. For simultaneous bounds
[
w_Deltale D,
qquad
operatorname{ord}_Ige P,
]
multiplication by (m^P) gives the exact dimension identity
[
dim V(D,P)=H_{Gamma_Y}(D-Pw_Delta(delta)).
]
Hence a fixed positive (P/D) retains the full Hilbert degree.

The decisive T24 result is a proof-method obstruction. Since
[
I^P=(m^P),
]
the proposed fast local decay is the decay of an actual common algebraic factor. The same factor has global algebraic height on the fast scale. Product-formula / Liouville lower bounds therefore pay for the same contribution, and exact division removes both. The functional relation ideal is already (m)-saturated, so multiplying by a principal boundary factor cannot manufacture a new functional relation.

T24 also separates ordinary deep-tail regularity from boundary regularity: a denominator can be nonzero at every torus orbit point and still have nonzero order along (m=0), so localization may destroy (I)-adic order unless boundary poles are controlled explicitly.

Accordingly, exact relation lifting for genuine active unequal growth remains open. No new class obtains
[
Q(alpha,mathbf X)=P(mathbf X),
]
and no new positive-integer anchor class is excluded.

This does **not** solve the full Periodicity Conjecture. Positive rational noninteger and negative rational boundaries remain as stated in T21–T24.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

The next authorized action is theory-only **CDM4-T25 — divisor-saturated / relative-height exact-lifting audit**. It must factor every forced (m^P) contribution before the Liouville comparison and seek genuine residual fast-scale smallness after that cancellation, while preserving exact specialization.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and `experiments/CDM4_T24_REPORT.md` before doing research.
