# Project Charter

## Name

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

## Root objective

Find an explicit positive integer `n` and a rigorous proof that its shortened-Collatz forward orbit never reaches `1` and is unbounded.

The target is an **UNBOUNDED COLLATZ ORBIT** or **DIVERGENT-ORBIT COUNTEREXAMPLE**. "Infinite orbit" is avoided because the ordinary `1 <-> 2` shortened-map cycle is infinite under iteration but bounded.

## Research philosophy

The project optimises approximately for **mathematical information gained per unit of compute**, not for largest tested starting value.

The motivating counterexample-at-scale hypothesis is permitted only as a heuristic research hypothesis: a useful counterexample, if one exists, may occur far beyond verified ranges and may have detectable arithmetic precursors. The machine must also be capable of producing evidence against that hypothesis.

No assumption may imply that sufficiently large integers diverge; powers of two give arbitrarily large values descending directly to `1`.

## Discovery versus certification

**Discovery** uses bounded computation to locate unusually persistent or structured growth.

**Certification** proves an exact mechanism that forces an explicit orbit to be unbounded and to avoid the `1`-basin forever.

Only certification can satisfy the root objective.
