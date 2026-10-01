# Compute Budget

Computational ceilings are part of the mathematics and must be frozen before each campaign.

## Ceiling taxonomy

### REPRESENTATION CEILING
Can starts, intermediate integers, exact metrics, cache records, and candidate artifacts be stored and manipulated exactly?

### TRAJECTORY CEILING
Can the intended number of exact steps be evaluated within the declared CPU/wall/memory envelope?

### STRUCTURAL-ANALYSIS CEILING
Can a survivor receive enough exact parity/residue/affine analysis to test a mathematical hypothesis rather than merely extending its trajectory?

### CERTIFICATION CEILING
Is there a plausible exact mechanism to prove indefinitely reproducible growth and exclusion from the `1`-basin? If not, more trajectory steps are not automatically justified.

## CDM0 frozen calibration envelope

This envelope is intentionally tiny and is not a counterexample-search campaign.

| Resource | CDM0 ceiling |
|---|---:|
| starting-value bit length | 8 bits (calibration uses `1..128`) |
| permitted peak bit length | 4096 bits |
| L0 exact steps/candidate | 8 |
| L1 exact steps/candidate | 512 |
| total candidates | 128 |
| wall-clock budget | 30 seconds |
| CPU budget | 30 CPU-seconds |
| memory budget | 256 MiB |
| storage budget | 10 MiB |
| arithmetic | Python arbitrary-precision integers; exact transitions only |
| timeout policy | stop campaign on wall budget; record partial results without promotion |
| L0->L1 promotion quota | at most 32 calibration promotions |
| L1->L2 promotion quota | zero in CDM0 |

A candidate stops on trusted-basin collision, repeated state, peak ceiling, or step ceiling. Repeated states are recorded defensively and do not trigger cycle research.

Any unresolved CDM0 candidate is `DEFERRED_COMPUTE_LIMIT` or `ANOMALOUS_BUT_UNCERTIFIED`; no budget extension is allowed in CDM0.

## Future campaign template

Freeze maximum start bits, peak bits, exact steps, candidate count, wall/CPU budgets, memory/storage, arithmetic implementation, timeout action, stage quotas, and expected information gain before running.
