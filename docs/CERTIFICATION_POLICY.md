# Certification Policy

## Status vocabulary

`SCREENED`
`PROMOTED`
`EXTREME_TRAJECTORY`
`GROWTH_ANOMALY`
`STRUCTURAL_CANDIDATE`
`DIVERGENCE_CANDIDATE`
`RESOLVED_TO_BASIN`
`DEFERRED_COMPUTE_LIMIT`
`FALSIFIED_SEARCH_HYPOTHESIS`
`RIGOROUS_FINITE_RESULT`
`PROVED_STRUCTURAL_THEOREM`
`CERTIFIED_UNBOUNDED_ORBIT`

## Reserved status

`CERTIFIED_UNBOUNDED_ORBIT` is reserved for an explicit positive integer `n` with a mathematical proof that no iterate reaches `1` and the set of forward iterates is unbounded.

No finite amount of direct iteration qualifies.

## Possible certification mechanisms

Examples, not assumptions: a recursively repeating exact structure forcing larger values; an invariant excluding all descending/basin states while forcing unbounded excursions; an exact symbolic recurrence with provable growth; an indefinitely iterable residue/parity mechanism; or another rigorous theorem implying unboundedness.

## Breakthrough protocol

Before certification: freeze revision/candidate; hash artifacts; independently recompute finite evidence; produce a minimal verifier; write a complete informal proof; hostile-audit implications; audit prior art/novelty; formalise in Lean where feasible; seek independent verification before publicity.
