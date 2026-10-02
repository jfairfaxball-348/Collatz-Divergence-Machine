# CDM3-P2 Preflight Validation Report

**Date:** 2026-10-02  
**Status:** FINITE-VERIFIED implementation validation.  
**Scientific P2 population executed by this preflight:** ZERO.  
**Counterexample claim:** NONE.

## Decision

**ALL FROZEN CDM3-P2 PREFLIGHT GATES PASS.**

GitHub Actions workflow run `36982432002`, job `110759729097`, completed successfully on branch head `f9045276b6680489a4b247681944cfdb68b51512`.

The preflight artifact is `cdm3-p2-preflight`, artifact ID `11215666957`, archive digest:

`sha256:09dd90989a0eb1e8a6994b03134c57ed89eb4d431ae16a8dff046c477982e356`.

The ordinary repository test workflow also completed successfully for the same PR head.

## Host and build provenance

- architecture: x86_64;
- CPU: AMD EPYC 9V74 80-Core Processor;
- logical CPUs exposed: 4;
- compiler: GCC 13.3.0;
- GMP: 6.3.0;
- release build: `-O3 -march=native -std=c11 -Wall -Wextra -Werror -pthread`;
- sanitizer build: AddressSanitizer + UndefinedBehaviorSanitizer.

Engine provenance reported:

- engine version: `CDM3-P2-v1`;
- generator version: `CDM3-P1-gen-v1`;
- fixed capacity: 64 limbs / 4096 bits;
- worker ceiling: 8;
- per-group process CPU guard: 590 s;
- wall guard: 890 s;
- generated-total ceiling: 60,000,000.

## Correctness gates

All observed results below are FINITE-VERIFIED implementation evidence.

- dedicated optimized overflow test: PASS; original state preserved; disposition 5; exact GMP replay reached 4097 bits;
- fixed-limb vs GMP: 49,152 transition cases, PASS;
- optimized production transition vs GMP: 49,152 transition cases, PASS;
- odd-only vs shortened-map equivalence: 384 cases, PASS;
- forced optimized escape: 4097-bit replay, state preservation PASS, disposition 5;
- deterministic work-unit replay digest: `8cd1672982f5ff19`, PASS;
- checkpoint/restart digest: `5744783f209cd4e5`, PASS;
- one-thread vs four-thread digest: `609049e609d80bc8`, PASS;
- independent Python replay: 30 cases, 0 failures, PASS;
- ASan/UBSan self-test suite: PASS;
- executable budget constants: PASS.

## Counter non-overlap gate

The committed P1 work-unit manifest has maximum half-open interval end:

`35,000,015`.

The first frozen P2 counter begins at:

`100,000,000`.

Therefore the global separation is:

`64,999,985` counters.

Every P2 interval is pairwise disjoint and every P2 interval is disjoint from every committed P1 interval. Counter audit status: **PASS**.

## Same-host B1-to-P2 integration gate

The committed P2 path was compared directly against the B1 OPT path using identical deterministic Arm-U starts, 4,096 starts per band, five timing passes per path.

Exact trajectory output equality: **PASS**.

Median U-step rates and P2/B1 ratios:

| bits | B1 OPT U-steps/s | P2 U-steps/s | P2 / B1 |
|---:|---:|---:|---:|
| 256 | 82.159M | 80.748M | 98.283% |
| 512 | 78.137M | 77.690M | 99.428% |
| 1024 | 62.274M | 62.331M | 100.091% |

The frozen gate required at least 90% of same-host B1 OPT throughput at every band. All three bands pass.

## Recorded hashes

SHA-256:

- `production/cdm3_p2_engine.c`: `4127892ccaa8c283f70b63f8452e1b93f9554e8931273a467b8cd548f0fdc9ab`;
- `production/cdm3_p2_part0.inc`: `a962e55c59268753028a291a2dc286d84348cfe2743b6da78b7a077bf1ed0702`;
- `production/cdm3_p2_part1.inc`: `6d95945d057cbd603a839edc915a0cd29d3bb2ea67b29b9ef89bb833fe06865e`;
- `production/cdm3_p2_part2.inc`: `d722cc1c1ea0e183fd1a333c9099a15119ce1cb46ff8bf480a93a84ba707dc13`;
- `production/cdm3_p2_part3.inc`: `6b3c3438bd1de2ff0f2638085c86610810892fa3db116856414d5ab4ae3fc20c`;
- release executable: `0f2fa3bf341ed83d13c45aa976dd19664906375c064c15ba95a4709341e8af33`;
- sanitizer executable: `29eb00bccc9c035df542f4f177643953318253b78ae6a6e61766a537ff570fa6`.

## Authorization consequence

The dedicated P2 integration now satisfies the frozen preflight conditions in `docs/COMPUTE_BUDGET.md`.

Therefore, once this integration is merged into the authoritative branch, the next session is authorized to execute **only** the frozen CDM3-P2 CPU campaign:

- exactly 60,000,000 generated starts;
- exactly the six frozen counter intervals;
- 256 / 512 / 1024 bits;
- equal Arm U / Arm L allocations;
- no GPU;
- no enlargement after observing results;
- exceptional freeze protocol unchanged.

This report does not itself execute any P2 scientific start and makes no claim about divergence.
