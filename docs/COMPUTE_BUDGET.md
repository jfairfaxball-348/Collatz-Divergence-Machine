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


## CDM1 frozen audit envelope — 2026-10-01

**Status:** FINITE-VERIFIED as a project resource declaration. CDM1 is an audit/calibration-planning session, not a counterexample-search campaign.

| Resource | CDM1 ceiling |
|---|---:|
| starting-value bit length for any local check | 32 bits |
| permitted peak bit length | 4096 bits |
| exact steps per checked example | 4096 |
| total locally checked starting values | 4096 |
| wall-clock budget for all local computation | 60 seconds |
| CPU budget for all local computation | 60 CPU-seconds |
| memory budget | 512 MiB |
| storage budget | 20 MiB |
| arithmetic | exact integer arithmetic only for state transitions |
| permitted purpose | map-convention validation, tiny published-example reproduction, micro-benchmarking, exact implementation comparison |
| forbidden purpose | broad/high-range counterexample search; random magnitude search beyond published verification; distributed search |
| L0->L1 scientific promotions | zero |
| L1->L2 promotions | zero |
| L2/L3/L4 work | zero |
| timeout action | stop immediately and record partial calibration; do not extend the envelope |

CDM1 may use web/literature research without consuming this local-compute envelope. The envelope applies only to executed trajectory/algorithm checks.

**Expected information gain:** verify that imported algorithm descriptions and map conventions are understood correctly, while preserving essentially all compute for later experiments whose filters have first been justified.

**Post-exhaustion action:** no extension in CDM1. Any unresolved computational question becomes a CDM2 design item.
