# Basin and Cache Policy

Trajectory reuse is permitted only with explicit provenance.

## Cache classes

### Locally verified cached trajectories
Entries created by exact local shortened-map computation with a recorded successor chain ending at a trusted terminal (`1` or another locally verified entry).

### Externally inherited verified ranges
Ranges/tables produced elsewhere with certificate-grade provenance. None are imported during CDM0; CDM1 must audit them first.

### Heuristic cache information
Unverified hints or imported claims without sufficient certificate. They may guide discovery but may not resolve a candidate mathematically.

### Full mathematical certificates
Objects independently checkable whose theorem/provenance proves asserted basin membership.

## Merge rule

If an exact trajectory reaches trusted `m`, resolve the start by exact concatenation and cache the prefix. If two candidates merge, compute the common tail once where practical.

## Safety

A cache entry must include provenance. Absence of provenance means it cannot support a basin-resolution claim. Cache hits are valid only under the same shortened-map convention.
