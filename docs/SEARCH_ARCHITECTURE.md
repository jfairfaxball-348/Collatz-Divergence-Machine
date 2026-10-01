# Search Architecture

## L0 — Ultra-cheap screening
Process large populations at minimal cost using justified cheap diagnostics. CDM0 calibrates only a short-prefix rule and makes no claim that it is scientifically useful.

## L1 — Cheap exact trajectory analysis
Compute longer exact prefixes and raw metrics. Most candidates should resolve or die here.

## L2 — Expensive exact trajectory analysis
Rare survivors only. Use larger exact prefixes, deeper parity/residue diagnostics, growth-window analysis, compressed exact representations, and independent replay. Purpose: identify **structure**, not accumulate steps.

## L3 — Structural / symbolic analysis
Convert a finite anomaly into a theorem-supporting object: parity word, affine recurrence, modular family, inverse family, Diophantine constraint, finite-state system, or rigorous inequality.

Central question: **Can finite observed behaviour be converted into a structure that forces further growth?**

If not, longer iteration is not automatically justified.

## L4 — Divergence certification
Produce a proof for an explicit start. See `docs/CERTIFICATION_POLICY.md`.

## Feedback
`explicit anomaly -> structural feature -> symbolic family -> exact constraint -> theorem/obstruction -> explicit search update`
