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

**CDM4-T30 is complete — C: EXACT MORPHIC NORMALIZATION EXTENSION PROVED; PUSHY BOUNDED-LETTER / NEUTRAL-FACE OBSTRUCTION FOUND. No new scientific compute is authorized.**

Authoritative theory report: experiments/CDM4_T30_REPORT.md.

T20–T29 remain closed infrastructure.

T30 moves the first surviving single-morphism boundary beyond “erasing morphisms”:

- every morphic word has an exact one-sided representation as a coding of a nonerasing fixed point;
- the coding uses no shift, so output indices, letter order, every ordinary valuation-prefix sum (A_n), T2 exact cylinders, the canonical inverse-Collatz scalar, and the positive-integer anchoring condition are preserved literally;
- mortal-letter deletion is harmless only through that complete exact output normalization, not by naively identifying intermediate presentation indices;
- non-growing pure presentations with uniformly bounded non-growing-letter factors are substitutive in the growing sense and therefore normalize into the T21/T29 closed class;
- every uniformly recurrent morphic word is primitive substitutive and likewise falls into the closed class.

Universal reduction to T21 is false. The positive-valuation pure morphism
[
1mapsto112,qquad 2mapsto2
]
has arbitrarily long bounded-letter runs and quadratic factor complexity. It cannot be represented as a coding of a growing endomorphism. Thus the first genuine residual is the **pushy bounded-letter class**. Genuinely polynomial-growth aperiodic pure morphisms survive inside the same neutral-direction boundary.

For every exact growing-normalizable word, a hypothetical positive-integer anchor gives
[
limsup A_n/nlelog_2 3
]
by the inherited T3 inequality, while T21 makes the limsup algebraic. Gelfond–Schneider therefore makes the inequality strict, T20/T21 supplies real convergence, and T29 excludes the anchor.

Under the inherited T2 finite-alphabet hypotheses,
[
oxed{
R_m	ext{ bounded}
Longrightarrow
	ext{eventual periodicity}
}
]
now holds throughout the exact growing-normalizable morphic class, including erasing/non-growing presentations of such a word.

The pushy residual is not yet closed. T30 did not prove algebraicity of the ordinary-prefix limsup throughout that class, and bounded periodic letters create zero increment directions. Hence the T21 positive grading becomes only nonnegative and the T22/T29 positive-profile machinery cannot be reused without a new neutral-letter reduction.

Positive rational noninteger values remain excluded only when ordinary real subcriticality is independently known. Negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found.

No substitution enumeration, new starts, candidate trajectories, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

The next live theorem is **CDM4-T31 — pushy bounded-letter resummation / ordinary-prefix limsup / neutral-face audit**.

Read AGENTS.md, START_HERE.md, the required prior reports, and experiments/CDM4_T30_REPORT.md before doing research.
