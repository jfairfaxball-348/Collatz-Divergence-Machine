# Basin and Cache Policy

Trajectory reuse is permitted only with explicit provenance.

## Cache classes and provenance hierarchy

### Tier 1 — Full mathematical certificate

An independently checkable proof object or exact replay object establishes the asserted basin membership.

**Claim status:** PROVED or certificate-grade FINITE-VERIFIED, according to the object.

**Permitted use:** may resolve candidates mathematically after map/version validation. This is the preferred provenance for any tail used in a certification argument.

### Tier 2 — Reproducible external exact computation

A published finite computation provides a precise algorithm, exact-arithmetic safeguards, sufficiently specified software/version information, and a reproducible finite claim.

**Claim status:** FINITE-VERIFIED external.

**Permitted use:** may suppress redundant discovery search and may populate an explicitly external-coverage layer. It does not silently become a locally certified trajectory.

CDM1 classifies David Barina's peer-reviewed `n<2^71` verification here for discovery coverage.

### Tier 3 — Strong externally asserted verified range

A current official project status page or equivalent source reports a finite verified range with strong provenance, but the newest extension has not itself been independently reproduced or separately audited to Tier 2 in this repository.

**Claim status:** FINITE-VERIFIED as an external report, not locally reproduced.

**Permitted use:** search masking and prioritisation only unless stronger provenance is later obtained.

CDM1 classifies Barina's live 2026-10-01 extension to `n < 2075*2^60` here.

### Tier 4 — Heuristic or unverified claim

A range, trajectory, or basin assertion lacks sufficient provenance for mathematical resolution.

**Claim status:** HEURISTIC or UNKNOWN.

**Permitted use:** candidate-generation hint only. Never resolve a candidate from this layer.

## Locally verified cached trajectories

Entries created by exact local shortened-map computation with a recorded successor chain ending at a trusted terminal (`1` or another locally verified entry) are local finite certificates for that exact path.

## External-coverage record requirements

Every imported external range or tail must record at least:

- provenance tier;
- source identifier and citation;
- source date/version;
- exact range/family claim;
- map convention;
- software/version or certificate identifier when available;
- whether the record may suppress discovery search;
- whether it may resolve a candidate;
- whether independent local replay has occurred.

"Covered externally" must never be serialised as "locally certified."

## Merge rule

If an exact trajectory reaches trusted `m`, resolve the start only to the level justified by the provenance of `m`. If two candidates merge, compute the common tail once where practical.

A path merge into an externally covered range is useful for discovery economics, but a certification argument that depends on that tail must obtain the provenance required by `docs/CERTIFICATION_POLICY.md`.

## CDM1 imported coverage state

**FINITE-VERIFIED as an audit record:** no external range was converted into per-start local basin entries during CDM1.

The audited coverage layers are:

- Tier 2 discovery coverage: peer-reviewed Barina verification for all `n<2^71`;
- Tier 3 discovery coverage: Barina live project report for all `n<2075*2^60` as generated 2026-10-01;
- older independent overlapping computations may be retained as corroborating provenance, not merged into a stronger claim without explicit justification.

## Safety

A cache entry must include provenance. Absence of provenance means it cannot support a basin-resolution claim. Cache hits are valid only under the same Collatz map convention.
