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

**CDM4-T29 is complete — C: SYNCHRONIZED MOVING-TARGET ZERO THEOREM AND COMPLETE T22 MULTISCALE EXACT LIFTING PROVED. No new scientific compute is authorized.**

Authoritative theory report: experiments/CDM4_T29_REPORT.md.

T20–T28 remain closed infrastructure.

T29 proves the missing synchronized zero/nonvanishing theorem for the actual T28 canonical finite-jet auxiliary class.

After finite jet expansion:

- moving coefficients are fixed rational functions on the slower face, with height \(o\) of the current-profile scale;
- every infinite zero subsequence admits a coherent refinement;
- T18 finite-hit geometry proves linear nondegeneracy over the moving coefficient field after slower-coset compression;
- T22's exact positive 2-adic leading coefficient identifies a finite dominant current-profile cluster;
- omitted same-profile terms have a strict local gap and higher-profile terms are smaller on a faster scale.

If the projective monomial point retains height \(\Theta(g_i)\), coordinate hyperplanes supply the exact \(S\)-unit baseline and Ru–Vojta gives a contradiction. If projective cancellation lowers the height to \(o(g_i)\), dividing by one dominant monomial gives an algebraic number of height \(o(g_i)\) but 2-adic smallness on the full \(g_i\)-scale, and direct Liouville forces exact zero.

Iterating at one synchronized orbit time gives
\[
\boxed{
E(q_n)=0\text{ infinitely often}
\Longrightarrow
E=0
}
\]
for the canonical T28 auxiliary class modulo exact functional relations.

Combining this with T28's Hilbert–Samuel Hermite–Padé multiplicity and finite Artin–Rees transport tax closes exact relation lifting for the complete genuinely aperiodic T22 multiscale class.

The prescribed specialization survives literally:
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

No normalized blowup, exceptional chart, integral-closure replacement, non-unimodular gauge, deleted scalar direction, or asynchronous orbit time is used.

The inherited T21 completion-sign chain therefore excludes positive-integer anchors throughout the complete T22 multiscale class.

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
now holds through the complete T22 class, strictly beyond the principal-fast class closed by T27.

Positive rational noninteger values remain excluded only when ordinary real subcriticality is independently known. Negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

The next live theorem is **CDM4-T30 — nonexpanding / erasing morphic normalization and anchor-obstruction audit**, also serving as the mandatory thirtieth-session progress/correction audit.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T29_REPORT.md before doing research.
