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

**CDM4-T27 is complete — C: CANONICAL DIVISOR DEGENERATION CLASSIFIED AND POSITIVE-SLOPE EXACT LIFTING PROVED. No new scientific compute is authorized.**

T20–T26 remain closed infrastructure.

T27 does not prove automatic canonical special-fibre injectivity. The standalone question
\[
\lambda_m=0?
\]
remains open, and no valid canonical principal-fast example with \(\lambda_m>0\) has been found.

What T27 does prove is an exact classification of the defect. If
\[
\mathscr L_1=\mathscr E/\mathscr R
\]
is the saturated degree-one lattice, and
\[
E_0=\mathscr E/m\mathscr E,
\qquad
R_0=(\mathscr R+m\mathscr E)/m\mathscr E,
\]
then for the raw first-fast-cut matrix \(\overline{\mathcal A}\),
\[
\boxed{
\operatorname{coker}\overline\Phi
\cong
E_0/(R_0+\operatorname{im}\overline{\mathcal A}).
}
\]

Thus a special-fibre kernel is exactly a genuine source direction whose first-fast-truncated image becomes a boundary relation. It need not be a rational functional relation in the generic fibre.

If the elementary divisors are
\[
m^{e_1},\ldots,m^{e_r},
\qquad
\mu_m=\max_i e_i,
\]
then degree-\(D\) inverse transport through \(n\) semilinear iterates loses at most
\[
D\mu_m\frac{a^n-1}{a-1}
\]
units of \(m\)-order.

The T25 relative Hermite–Padé multiplicity
\[
P_{\rm rel}\ge(h(D_X)-1)(D_f+1)
\]
dominates this finite slope tax. For fixed \(D_X\), the tax is fixed while \(P_{\rm rel}\) grows without bound in \(D_f\).

Therefore every genuinely aperiodic principal-fast system admits exact mixed-place relation lifting for arbitrary finite \(\lambda_m\), with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
literally preserved on the original canonical lattice.

The inherited T21 completion-sign chain now excludes positive-integer anchors throughout the complete genuinely aperiodic principal-fast class, including any canonical divisor-degenerate system.

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
throughout the full principal-fast class.

The next live theorem is **CDM4-T28 — nonprincipal multiscale filtration / iterated-stratum relative-lifting audit**.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T27_REPORT.md before doing research.
