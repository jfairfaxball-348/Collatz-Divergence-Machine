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

**CDM4-T29 is complete — C: SYNCHRONIZED MOVING-TARGET ZERO THEOREM AND COMPLETE T22 MULTISCALE EXACT LIFTING PROVED. No new scientific compute is authorized.**

Authoritative T29 report: `experiments/CDM4_T29_REPORT.md`.

T20–T28 remain closed infrastructure.

T29 verifies that the actual canonical finite-jet targets produced by T28 satisfy Ru–Vojta's moving-hyperplane Subspace Theorem after one exact reduction:

- canonical jet coefficients are fixed rational functions on the slower face, so their evaluated heights are (o) of the current-stratum point height;
- every infinite zero subsequence admits a coherent refinement;
- after grouping current-stratum monomials by slower-face cosets, T18's finite-hit theorem forces linear nondegeneracy over the moving coefficient field;
- T22's exact 2-adic leading coefficient inside one growth profile identifies a finite dominant cluster, while omitted same-profile terms have a strict local gap and higher-profile terms are smaller on a faster scale;
- coordinate hyperplanes supply the exact (S)-unit projective-height baseline, so the extra moving-hyperplane proximity contradicts Ru–Vojta unless the current initial form vanishes identically.

Iterating at one synchronized orbit time gives the canonical finite-flag zero theorem. Combined with T28's Hilbert–Samuel Hermite–Padé multiplicity and finite Artin–Rees transport tax, this closes exact relation lifting for the complete genuinely aperiodic T22 multiscale class.

The prescribed specialization survives literally:

[
oxed{
Q(alpha,mathbf X)=P(mathbf X).
}
]

No normalized blowup, exceptional chart, integral-closure replacement, non-unimodular gauge, deleted scalar direction, or asynchronous orbit time is used.

The inherited T21 completion-sign chain therefore excludes positive-integer anchors throughout the complete T22 multiscale class.

Under the inherited T2 finite-alphabet anchoring hypotheses,

[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]

now holds through the complete T22 class, strictly beyond the principal-fast class closed by T27.

Positive rational noninteger values remain excluded only when ordinary real subcriticality is independently known. Negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

The next live theorem is **CDM4-T30 — nonexpanding / erasing morphic normalization and anchor-obstruction audit**, also serving as the mandatory thirtieth-session progress/correction audit.

Read `AGENTS.md`, `START_HERE.md`, the required prior reports, and `experiments/CDM4_T29_REPORT.md` before doing research.
