# COLLATZ DIVERGENCE MACHINE
## Multi-Stage Search for Unbounded Orbits

**Root objective:** find an explicit positive integer whose orbit under the shortened Collatz map

T(n) = n/2 if n is even, and T(n) = (3n+1)/2 if n is odd,

can be **rigorously proved unbounded** and can be rigorously proved never to reach 1.

The project studies the divergent/unbounded-orbit failure mode only. Systematic research on nontrivial finite cycles is out of scope.

## What counts as success

A root success is an explicit positive integer n plus a mathematical proof that:

1. \(T^k(n)\ne1\) for every \(k\ge0\); and
2. \(\{T^k(n):k\ge0\}\) is unbounded.

It is not necessary to prove \(T^k(n)\to\infty\); unboundedness suffices.

Finite computation is discovery evidence, never certification.

## Architecture

The machine is a bounded funnel:

L0 ultra-cheap screening -> L1 cheap exact analysis -> L2 expensive exact analysis -> L3 structural/symbolic analysis -> L4 divergence certification.

## Current status

**POSTIRM1-B — IRM FROZEN / NO JUSTIFIED CONTINUATION FOUND.**

Authoritative post-IRM1 audit: experiments/POST_IRM1_ROOT_BRIDGE_AUTHORIZATION_AUDIT.md.  
Authoritative IRM-1 report: experiments/IRM_1_EXACT_INTEGER_RETURN_CERTIFICATE_AUDIT.md.  
Authoritative post-CDM4 pivot: experiments/POST_CDM4_PIVOT_ROOT_BRIDGE_AUDIT.md.

CDM4 remains frozen after T31 and there is no CDM4-T32.

IRM-1 proved, without enumeration, that a positive-length exact shortened-Collatz return to the same nonconstant affine embedding F(q) = a q + b forces parameter slope

    u = 3^s / 2^r,

which cannot be an integer for any r >= 1. Depth zero forces the identity return and cannot grow.

The post-IRM1 authorization audit found zero independently motivated continuation directions that satisfy all root-distance and governance gates. In particular:

- rational-affine return maps are tautological as a general language because the identity embedding reproduces the original Collatz branches exactly;
- finite multi-state integer-affine recurrent positive-depth return systems are ruled out by a cycle-slope telescoping obstruction;
- strongly sufficient residue sets constrain where divergent orbits must pass but do not construct one;
- stopping-time/parity-residue theory gives exact finite-prefix structure but no new persistence theorem;
- 2-adic/conjugacy routes retain the ordinary-integer realization bridge.

**IRM-2 is not authorized. IRM is frozen after its single executed mechanism session, IRM-1.**

No scientific trajectory compute or enlarged certificate search is authorized. Reopening requires genuinely new external or theorem-level evidence: for example, a new exact ordinary-integer closure identity, an explicit family with a new self-regeneration property, a theorem-derived candidate mechanism, or an independently discovered positive near-certificate.

### Previous CDM4 closeout


**CDM4-T31 is complete — C: FREEZE CDM4 / PIVOT. Comparative failure-mode verdict: MOSTLY YES.**

Authoritative strategic audit: `experiments/CDM4_T31_PROGRAMME_FAILURE_MODE_AUDIT.md`.  
Last mathematical CDM4 theorem report: `experiments/CDM4_T30_REPORT.md`.

T31 concludes that the pure-morphic / recursive-language anchor-obstruction programme is no longer a rational default route to the root objective. T1–T30 contain genuine mathematical results and are not demoted by this strategic decision, but the line has repeatedly converted one internal boundary into another while producing no explicit anchored aperiodic word, no scientific candidate integer, no unbounded orbit, and no positive anchor-construction mechanism.

The T30 pushy bounded-letter / neutral-growth class remains a mathematically natural residual inside morphic combinatorics. It is **not** independently justified as a likely Collatz-counterexample class by theorem, arithmetic evidence, probabilistic argument, empirical evidence, or a candidate-generation mechanism.

CDM4 is therefore frozen as a completed research record. There is no CDM4-T32 target. Do not automatically continue from pure morphic to pushy morphic, S-adic, or broader symbolic hierarchies, and do not extend Mahler/toric/moving-target machinery merely because an adjacent theorem is available.

A future theoretical reopening must change the root bridge itself: it must offer direct positive-integer anchor construction/recognition or actual-integer arithmetic with a falsifiable route to explicit candidates. A broader recursive-language class alone is not a pivot.

No substitution enumeration, new scientific starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized by T31.

Read `AGENTS.md`, `START_HERE.md`, `ROADMAP.md`, the failure ledger, and the T31 audit before proposing further work.
