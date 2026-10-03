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

**CDM4-T18 is complete — C: NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND. No new scientific compute is authorized.**

The balanced one-variable finite-kernel branch remains closed by T13, T16 remains the exact mixed-place lifting/completion-sign theorem for the primitive dominant affine multivariate class, and T17 remains the intrinsic toric boundary/lifting infrastructure for the T15 stable image.

T18 closes the residual **algebraic singular-incidence** geometry inside that stable-image framework.

For the T15 stable image,
\[
L=\ker_{\mathbb Z}(M^{J_0}),
\qquad
N=X^*(X)=\mathbb Z^m/L,
\]
the exact Collatz stable orbit consists of \(S\)-unit points lying in a finitely generated multiplicative group. Laurent's torus Mordell–Lang theorem therefore forces every arithmetic-progression orbit closure to be a finite union of torus cosets.

After passing to a further progression of minimal orbit-closure dimension, the exact closure is a single irreducible coset
\[
Y=tH
\]
and the selected progression is Zariski dense in \(Y\). Translating by \(t^{-1}\) gives an étale self-map of \(H\) of the form
\[
\rho(h)=c\,\Psi_H(h),
\]
with \(\Psi_H\) a torus isogeny.

The complete character-relation lattice
\[
R_Y=H^\perp
\]
is saturated. The canonical positive monoid and T17 grading descend:
\[
N_Y=N/R_Y,
\qquad
\Gamma_Y=\pi_Y(\mathbb N^m),
\]
\[
w_Y(\pi_Y(a))=\mathbf1^Ta,
\qquad
w_Y(A_Y^n\gamma)=k^{Rn}w_Y(\gamma).
\]
The reduced tail converges 2-adically to the torus-fixed boundary point of
\[
U_Y=\operatorname{Spec}K[\Gamma_Y].
\]

T18 restricts the **canonical** functional system to \(Y\) before rational-linear minimalization. This avoids inverting old denominators that vanish identically on the smaller closure and retains the exact Collatz scalar
\[
G_{Y,1}=S|_Y.
\]

Because the reduced orbit is Zariski dense and \(\rho\) is étale, Bell–Ghioca–Tucker implies that every proper algebraic zero/pole locus has only finitely many reduced-orbit hits. Combined with Corvaja–Zannier \(S\)-unit trapping, this gives the required toric zero theorem on the reduced coset.

A key correction is that minimal orbit-closure reduction does **not** necessarily remove every root-of-unity eigenvalue of the reduced linear character map. Such a cyclotomic direction may remain only with non-torsion affine translation drift. It is then not an actual character relation and does not obstruct the dense-orbit zero theorem. Thus T18 replaces T17's separate (RI)/(RE) interface by the more intrinsic condition already produced by the reduction: a Zariski-dense orbit under an étale self-map.

The T17 mixed-place auxiliary-function machinery therefore descends to the reduced system while preserving exact specialization:
\[
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

Hence every genuinely aperiodic **primitive** T15 stable-image system now satisfies
\[
H\notin\mathbb Z_{>0},
\]
including the former relative-dependence, cyclotomic, and denominator-trapping cases. By T2, under the inherited finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
\]
throughout the complete primitive stable-image class.

This does **not** solve the full Periodicity Conjecture. The independent nonprimitive ordinary real-contraction problem remains open: the algebraic orbit-closure reduction and exact relation lifting survive, but a universal real positivity/convergence theorem is still missing. Positive rational noninteger values are excluded only when real subcriticality is independently established; negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. Brechler arXiv:2607.24877 remains a preprint in the 2026-10-03 status check and is non-load-bearing.

The next authorized action is theory-only **CDM4-T19 — nonprimitive real-contraction / positive-anchor completion audit**. Its task is to analyze the reachable strongly connected components of a nonprimitive uniform substitution under a hypothetical positive integer anchor and determine whether every component contributing to the reconstructed scalar must be ordinarily real-subcritical.

No substitution enumeration, new starts, generator/distribution work, finite-code ranking, CPU/GPU scaling, cloud, distributed, or volunteer work is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T18_REPORT.md before doing research.
