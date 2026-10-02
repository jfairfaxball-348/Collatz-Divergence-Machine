# CDM3-P2 Integration Session Closeout — 2026-10-02

**Status:** P2 INTEGRATION COMPLETE; ALL FROZEN PREFLIGHT GATES PASS; SCIENTIFIC EXECUTION NOT YET RUN.

**Claim boundary:** this session executed zero frozen P2 scientific starts. No counterexample was found or claimed.

## Completed integration

A dedicated `CDM3-P2-v1` production engine was created without modifying the historical P1 source bundle.

The exact P1 generator semantics remain frozen as `CDM3-P1-gen-v1`, so P2 changes the engine and counter ranges but does not silently change the scientific sampling distribution.

The B1-selected hot path is integrated exactly:

- destructive `mul3add1` while the normalized state occupies fewer than 64 limbs;
- recovery copy only when the input already occupies all 64 limbs;
- exact original-state restoration and `DISP_FREEZE_ESCAPE` routing if fixed capacity is exceeded.

The scientific interface hard-codes exactly 10,000,000 starts in each frozen band/arm interval:

| bits | arm | counter base | half-open interval |
|---:|:---:|---:|---|
| 256 | U | 100,000,000 | [100,000,000, 110,000,000) |
| 256 | L | 112,000,003 | [112,000,003, 122,000,003) |
| 512 | U | 124,000,006 | [124,000,006, 134,000,006) |
| 512 | L | 136,000,009 | [136,000,009, 146,000,009) |
| 1024 | U | 148,000,012 | [148,000,012, 158,000,012) |
| 1024 | L | 160,000,015 | [160,000,015, 170,000,015) |

## Preflight result

**FINITE-VERIFIED:** GitHub Actions run `36982432002`, job `110759729097`, completed successfully.

All required gates passed:

- fixed-limb vs GMP;
- optimized-kernel vs GMP;
- odd-only vs shortened-map equivalence;
- exact forced 4096-bit overflow preservation;
- independent Python replay;
- ASan/UBSan;
- deterministic work-unit replay;
- checkpoint/restart equality;
- one-thread/four-thread digest equality;
- P2/P1 counter non-overlap;
- executable budget guards;
- same-host B1-to-P2 throughput/digest comparison.

The P1/P2 counter audit proved a 64,999,985-counter gap between the final committed P1 interval and the first P2 interval.

Same-host median P2/B1 OPT U-step throughput ratios were:

- 256 bits: 98.283%;
- 512 bits: 99.428%;
- 1024 bits: 100.091%.

Exact output equality passed at all three bands.

Authoritative preflight details are preserved in:

- `experiments/CDM3_P2_PREFLIGHT_REPORT.md`;
- `experiments/CDM3_P2_PREFLIGHT_RESULT.json`.

## Frozen execution boundary for the next session

After this integration is merged into `main`, the next session may execute **only** the already-frozen P2 population:

- 60,000,000 generated starts exactly;
- 30,000,000 Arm U and 30,000,000 Arm L;
- exactly 256 / 512 / 1024 bits;
- the six frozen counter intervals above;
- <=8 workers;
- <=15 minutes wall;
- <=60 CPU-minutes;
- <=1 GiB RAM;
- <=300 MiB committed result storage;
- no GPU.

Do not enlarge the population after observing results.

If an exceptional candidate freezes, stop broad processing of that object, preserve exact provenance, independently replay it, and transfer it to structural/certification analysis. A freeze is finite evidence only.

## Next-session task

Execute the frozen 60M campaign only from the merged, preflight-passed P2 implementation. Preserve work-unit/checkpoint integrity and exact resource accounting. Close out with exact generated/executed/pruned/basin/freeze counts, U-step and shortened-step totals, survivor-tail statistics, source/compiler/executable hashes, every exceptional object, whether any candidate entered structural analysis, and whether any counterexample was found or claimed.

A null result does not authorize P3 or GPU work.
