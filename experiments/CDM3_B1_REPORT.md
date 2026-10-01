# CDM3-B1 — Production Hot-Path Throughput Regression Report

**Date:** 2026-10-01  
**Claim status:** FINITE-VERIFIED engineering benchmark.  
**Decision:** **B1-A — THROUGHPUT REGRESSION RESOLVED.**  
**Scientific population increase:** **ZERO.**  
**Counterexample found or claimed:** **NO.**

## Executive result

CDM3-B1 reproduced the production regression side-by-side and recovered the lost hot-path throughput without weakening P1 safety semantics.

Every correctness gate passed. The final optimized kernel takes the R3 destructive fast path whenever the fixed-limb state occupies fewer than all 64 limbs. Only a state already occupying all 4096 fixed bits is copied before `3n+1`; if the multiply overflows, the original state is restored exactly and routed with the same P1 escape disposition.

This moves the 64-limb recovery copy off the ordinary 256/512/1024-bit hot path while retaining exact overflow recovery.

The optimized kernel recovered **102.35% / 101.39% / 99.70%** of the side-by-side R3 U-step rate at 256 / 512 / 1024 bits.

## Correctness gates

All gates passed before the final timing result was accepted.

- Existing P1 forced 4096-bit escape: PASS; exact GMP replay was 4097 bits.
- Optimized forced escape preservation: PASS; overflowing full-limb state remained byte-for-byte recoverable; exact replay was 4097 bits.
- Fixed-limb vs GMP: PASS for 49,152 deterministic transitions.
- Odd-only vs shortened-map equivalence: PASS for 384 deterministic cases.
- Optimized transition vs GMP: PASS for 24,576 deterministic transitions at 256/512/1024 bits.
- R3 / P1 / P1-native / OPT exact trajectory equality: PASS for 3,072 representative complete trajectories.
- Independent Python replay: PASS, 30 cases.
- ASan/UBSan: PASS.
- Scaling digest equality across 1/2/4/8 workers: PASS.
- General repository Python tests and calibration smoke run: PASS after changing the CI invocation from `pytest` to `python -m pytest` for pytest-9 import-path compatibility.

No overflow escape, repeat, invariant failure, or differing disposition occurred in the timed ordinary workload.

## Final four-way one-thread benchmark

Each timing pass used the same 4,096 deterministic Arm-U starts at each bit length. Five passes were run per implementation. Values below are medians.

| bits | implementation | wall s | CPU s | starts/s | U-steps/s | shortened-equiv/s | R3 recovery |
|---:|---|---:|---:|---:|---:|---:|---:|
| 256 | R3 | 0.027738 | 0.027738 | 147,665 | 65.929M | 131.957M | 100.00% |
| 256 | P1 | 0.061730 | 0.061721 | 66,353 | 29.625M | 59.295M | 44.93% |
| 256 | P1-native | 0.037653 | 0.037653 | 108,783 | 48.569M | 97.211M | 73.67% |
| 256 | OPT | 0.027102 | 0.027049 | 151,134 | 67.478M | 135.057M | 102.35% |
| 512 | R3 | 0.066779 | 0.066780 | 61,337 | 65.335M | 130.663M | 100.00% |
| 512 | P1 | 0.153639 | 0.153640 | 26,660 | 28.397M | 56.792M | 43.46% |
| 512 | P1-native | 0.093732 | 0.093731 | 43,699 | 46.547M | 93.090M | 71.24% |
| 512 | OPT | 0.065865 | 0.065866 | 62,187 | 66.241M | 132.475M | 101.39% |
| 1024 | R3 | 0.183299 | 0.183268 | 22,346 | 51.492M | 102.931M | 100.00% |
| 1024 | P1 | 0.380439 | 0.380390 | 10,767 | 24.809M | 49.593M | 48.18% |
| 1024 | P1-native | 0.240147 | 0.240120 | 17,056 | 39.303M | 78.565M | 76.33% |
| 1024 | OPT | 0.183845 | 0.183792 | 22,280 | 51.339M | 102.625M | 99.70% |

Exact per-pass workload outputs were equal across all four implementations. At 256/512/1024 bits the common mean U-step counts were 446.4778 / 1065.1765 / 2304.2983; maxima were 780 / 1542 / 2906; maximum peak bits were 268 / 526 / 1037; every one of the 4,096 starts per band hit the Tier-2 basin.

Representative pass-0 digests were `6d6c640cd3b4c9b9`, `5462932480ad6b55`, and `dcc4506bea0fb0df` for 256/512/1024 bits.

## Causal isolation

### `-march=native`

Confirmed material.

P1-native improved U-step throughput over the identical P1 arithmetic by:

- 63.94% at 256 bits;
- 63.91% at 512 bits;
- 58.42% at 1024 bits.

Native compilation alone did not close the gap: it reached 73.67%, 71.24%, and 76.33% of R3.

### Unconditional full-state recovery copy

Confirmed material.

Replacing the ordinary per-U-step 64-limb recovery copy with a rare-path copy only when `n == MAX_LIMBS` improved OPT over P1-native by:

- 38.93% at 256 bits;
- 42.31% at 512 bits;
- 30.62% at 1024 bits.

That change recovered essentially complete R3 parity while preserving exact escape recovery.

An initial pre-mutation 4096-bit threshold predictor passed correctness but was slower because the full-width overflow-prediction logic polluted the ordinary hot path. It was rejected and replaced by the rare-path recovery design. The final four-way result was rerun from scratch after that replacement.

## Scaling of the best exact path

The authoritative runner exposed 4 logical CPUs corresponding to 2 physical cores. Therefore 1- and 2-worker results are the clean in-capacity scaling measurements; 4 and 8 workers deliberately show saturation/oversubscription on this host.

| workers | aggregate U-steps/s | speedup | efficiency |
|---:|---:|---:|---:|
| 1 | 56.144M | 1.000x | 100.0% |
| 2 | 112.593M | 2.005x | 100.3% |
| 4 | 122.530M | 2.182x | 54.6% |
| 8 | 122.306M | 2.178x | 27.2% |

The 1/2/4/8 measurements each processed 49,152 starts total: 16,384 at each bit length. Exact aggregate trajectory outputs and per-band digests were identical across worker counts.

The 4/8-worker flattening is consistent with the runner exposing only two physical cores and must not be interpreted as evidence that the engine intrinsically stops scaling beyond two physical workers.

## Provenance

Authoritative workflow run: `36915169530`; job `110547251044`.

Host: Ubuntu 24.04.5 LTS, x86_64, AMD EPYC 7763 64-Core Processor, 4 logical CPUs / 2 observed physical cores. Compiler: GCC 13.3.0. GMP: 6.3.0.

Source SHA-256:

- benchmark: `f9b6151f4218ac914d8e9c4563b72861a296dbf0dc399df92bf48ae6d97781e3`;
- P1 engine: `07fc20ebeaa1519e9d8cc4a400ee79332ac4844f4122c331b03a245ae1f4ce04`;
- runner: `fbaa6dd120089f552389e3190b45de0efcbf209e917d4cd8cd89a5a7f5911f6d`;
- optimized escape test: `d8a34f9a4580791a95a7985b6a2db7a62f10601c4cc78b999fc72e2c680930d2`.

Executable SHA-256:

- base: `2b351ee58bc3514b04e0e8f78edb9b5e17506465bb31a81490b3eddfccd380a6`;
- native: `7d10e2b97a7c189111f1293a722b59891236cc4f52af950022a1bfc89c543974`;
- ASan/UBSan: `0ecf83d94167a263c564e6d00a8efaa5b92df7f687cccb00116b6e9c16b25616`.

The complete raw workflow result had SHA-256 `25d939e3502e58082984e9b154a04ab8c3606122aa0a758cb5f99a6d42948bab` and was preserved as workflow artifact `11188962303`. The committed machine-readable result preserves the authoritative aggregate measurements and provenance.

## Workflow replay hygiene

During pull-request documentation updates, the initially installed B1 workflow also replayed automatically on synchronization events. Those later CI invocations were validation duplicates, not additional scientific search and not aggregated into the authoritative timing set. The authoritative benchmark remains workflow run `36915169530`, whose four frozen variant labels each have exactly five timing passes in the recorded result.

The B1 workflow has now been frozen to manual dispatch only so documentation updates cannot silently create further timing datasets.

## Resource use

Final authoritative benchmark runner consumption:

- benchmark wall elapsed: 10.375 seconds;
- summed reported CPU time: 13.955 CPU-seconds;
- no GPU execution;
- zero new scientific search starts;
- zero scientific promotions.

This is far inside the frozen B1 wall/CPU/resource envelope.

## B1 classification and next action

**B1-A — THROUGHPUT REGRESSION RESOLVED.**

Both visible P1 hypotheses were confirmed material. Native compilation explains a large fraction of the gap, and the unconditional full-state recovery copy explains the remaining ordinary-path penalty. The rare-path-copy kernel restores R3-class throughput with exact P1 overflow/replay semantics.

A bounded larger CPU campaign is now justified. CDM3-B1 does **not** execute it.

The separately frozen next action is **CDM3-P2**: double the P1 population to 60,000,000 generated starts while retaining the same 256/512/1024-bit bands, equal Arm-U/Arm-L allocations, exact pruning, trusted-basin stop, exceptional-candidate rules, replay discipline, and a dedicated production engine using native compilation plus the B1 rare-path-copy kernel. Execution remains gated on a committed P2 production integration passing the complete preflight.

A GPU benchmark remains **not authorized**. CPU economics are now good enough that the smallest justified next step is the bounded CPU campaign rather than another accelerator project.

No scientific candidate was produced by B1 and no counterexample was found or claimed.
