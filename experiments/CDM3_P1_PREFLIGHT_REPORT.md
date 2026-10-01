# CDM3-P1 Preflight Validation Report

**Date:** 2026-10-01  
**Status:** FINITE-VERIFIED implementation validation; scientific pilot not yet executed at the time of this report.  
**Implementation baseline:** `f9b05407432c964599bd8a8b3b791dab8932c92b`  
**Production version:** `CDM3-P1-v1`  
**Generator:** `CDM3-P1-gen-v1`  
**Counterexample claim:** NONE.

## Frozen implementation

The committed production engine is C11, CPU-first, exact fixed-limb odd-only arithmetic using 64 reusable 64-bit limbs (4096-bit ordinary fast path). It implements:

- deterministic domain-separated counter generation;
- exactly 256-, 512- and 1024-bit odd starts;
- Arm U with no least-divergent-only prefilter and no first-descent stop;
- Arm L with only the exact mod-9 smaller-preimage kill `n mod 9 in {2,4,5,8}`;
- exact `U(n)=(3n+1)/2^v2(3n+1)` execution;
- exact shortened-step-equivalent accounting;
- exact Tier-2 discovery-basin stop `n<2^71`;
- deterministic work units, counter ranges, checksums and checkpoint files;
- Brent repeated-state safety detection;
- frozen exceptional triggers at 32,768 U-steps, start bit length +512 peak bits, 4096-bit fast-path escape, repetition, invariant failure, or campaign resource pressure;
- no global untrusted high-state DAG/cache.

The production source is split only for auditability; `production/cdm3_p1_engine.c` includes four committed source fragments into one translation unit.

## Exact source identity

The Git blob hashes read back from GitHub matched the locally compiled files exactly:

- `production/cdm3_p1_engine.c`: `ad6a6717482dcfe321dbc545713f7de8dedf7881`
- `production/cdm3_p1_part0.inc`: `0d50d8e0f0ca59b2a9f68c52ce6785ceb99034d1`
- `production/cdm3_p1_part1.inc`: `bfb0f6894f62dece8cc7e962dcb018101ea4f407`
- `production/cdm3_p1_part2.inc`: `001db5b40291f2da38283c106b30b528fc43cfd1`
- `production/cdm3_p1_part3.inc`: `ac965a47421362e0cdec43a533afb12ca76bdd55`
- `tools/cdm3_p1_replay.py`: `e0bfb6bdc263bafce90e196fcec0add18b6eb4b1`

Concatenated production-source SHA-256:
`e0e3d93821659aadbef80d5828afd2ea04285b608cafc70189f88f92cc56491f`

Independent Python replay SHA-256:
`f17830c57a5b7143c84742c26f65b1564253b5dd75881c44545c3814ea833136`

Release executable SHA-256:
`dd44ddc4d3006a48717117768ebbc60ae7ae0b50e64d119b87cbc0dff0ac9031`

## Build provenance

Release compile command:

`gcc -O3 -std=c11 -Wall -Wextra -Werror -pthread production/cdm3_p1_engine.c -lgmp -o cdm3_p1_engine`

Compiler: `gcc (Debian 14.2.0-19) 14.2.0`  
GMP runtime: `libgmp.so.10`  
Architecture: `x86_64`  
CPU: `AMD EPYC 9V74 80-Core Processor`

A separate non-timed sanitizer build used AddressSanitizer and UndefinedBehaviorSanitizer and passed the same complete preflight suite with no sanitizer finding.

## Mandatory gates

### 1. Fixed-limb vs GMP/Python agreement — PASS

The committed C engine checked 49,152 exact fixed-limb odd-only transitions against GMP across all supported bit bands and both generator domains.

Independent Python replay then compared 30 deterministic probe trajectories across 256/512/1024 bits, both arms, and multiple counters. Start integers, U-step counts, shortened-step counts, peak bit lengths, exact endpoint states and dispositions all matched.

### 2. Odd-only vs shortened-map equivalence — PASS

384 deterministic one-U-step cases were expanded through the shortened map. The exact endpoint and the exact shortened-step count equalled `v2(3n+1)` in every case.

### 3. Forced overflow / fast-path escape — PASS

A deterministic 4096-bit all-ones odd state forces `3n+1` beyond the 64-limb fast path.

The production trajectory function returned the fixed escape/freeze disposition before any completed U-step and did not wrap or truncate. A separate committed compiled routing test then reconstructed the escaped odd state with GMP and obtained an exact 4097-bit value.

Result: `production_escape_disposition=5 replay_bits=4097 PASS`.

### 4. Work-unit replay — PASS

The same deterministic 20,000-start work unit was executed twice.

Final digest both times:
`1810e26638535844`

Generated/executed populations, basin dispositions and exact step totals matched.

### 5. Checkpoint / restart — PASS

An 80,000-start deterministic work unit was run uninterrupted and also from a checkpoint containing two completed sub-units.

Semantic final digest:
`6eeaea22aab07ff4`

Generated/executed populations, basin counts and exact U/shortened-step totals matched exactly.

### 6. Multi-thread determinism — PASS

A 120,000-start 512-bit Arm L work unit was run with one and four worker threads.

Final digest:
`804cc931a8b255a9`

All candidate populations and exact aggregate counts matched.

Measured release wall times:
- 1 thread: 2.949677 s
- 4 threads: 1.020248 s
- speedup: 2.891x
- four-thread efficiency: 72.3%

These timing figures are engineering observations only.

### 7. Provenance capture — PASS

The production result schema records repository revision, production source SHA-256, executable SHA-256, compiler version, GMP version, host, thread count, start epoch, generator version, bit band, arm, counter ranges, work-unit counts and deterministic result digests. The command record created at closeout will add the exact invocation, optimization flags, architecture and CPU model.

### 8. Executable-budget agreement — PASS

The committed guards are equal to or stricter than `docs/COMPUTE_BUDGET.md`:

- bit bands: exactly 256 / 512 / 1024;
- Arm ceiling: 5,000,000 generated starts per arm per band;
- band ceiling: 10,000,000;
- total ceiling: 30,000,000;
- worker threads: <=8;
- internal wall guard: 890 s, stricter than 900 s;
- internal CPU guard: 7100 CPU-s, stricter than 7200 CPU-s;
- ordinary fast path: exactly 4096 bits;
- U-step freeze: exactly 32,768;
- peak-excess freeze: exactly +512 bits;
- internal committed-result guard: 190 MiB, stricter than 200 MiB.

Runtime heap allocations are structurally bounded by the fixed work-unit table and fixed deterministic sampling buffers. At the frozen 5,000,000-start group size there are only 50 work-unit records; the explicit engine heap is far below the 1 GiB repository ceiling and there is no unbounded trajectory cache.

## Sanitizer result

The complete self-test suite also passed under:

`-O1 -g -fsanitize=address,undefined -fno-omit-frame-pointer`

No AddressSanitizer or UndefinedBehaviorSanitizer failure occurred.

## Authorization decision

**ALL MANDATORY PREFLIGHT GATES PASS.**

Under the already-frozen `docs/COMPUTE_BUDGET.md` rules, the exact CDM3-P1 scientific pilot is now authorized to execute, but only inside the frozen 30,000,000-generated-start maximum envelope. No larger campaign is authorized by this report.

No candidate trajectory from the scientific pilot had been consumed when this report was written.
