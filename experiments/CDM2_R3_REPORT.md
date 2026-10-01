# CDM2-R3 — High-Magnitude Computational-Reach and Search-Machinery Audit

**Date:** 2026-10-01

**Decision:** **R3-A — PRODUCTION-CREDIBLE ARCHITECTURE FOUND**

**Claim boundary:** no divergent orbit was found or claimed; all trajectory evidence in this report is finite.

## 1. Executive result

CDM2-R3 finds that sparse high-magnitude Collatz search is computationally very different from contiguous convergence verification.

The main result is engineering, not mathematical:

> **COMPUTATIONAL-EVIDENCE:** on a one-core AMD EPYC 9V74 benchmark, an exact fixed-limb odd-only engine processed ordinary deterministic starts directly at 128–1024 bits without difficulty. Median throughput was about 187k starts/s at 256 bits, 75k starts/s at 512 bits and 27k starts/s at 1024 bits, stopping only when the exact state entered the externally verified Tier-2 discovery basin n<2^71.

The benchmark executed 12,288 distinct starts across six bit lengths, replayed across ten timing passes. Every start hit the discovery basin; no representation overflow, repeated state, or 16,384-U-step horizon survivor occurred. The maximum observed U-step counts were 733 at 256 bits, 1,428 at 512 bits and 2,872 at 1024 bits.

This does **not** imply that all such starts converge. The tested sample is finite and ordinary. It does show that 256–1024-bit starting magnitude is not itself a serious per-step arithmetic barrier.

The proposed machine is:

deterministic sparse B-bit generator
-> dual-arm exact L0 generation/pruning
-> CPU fixed-limb odd-only exact executor
-> trusted-basin/cache stop
-> exceptional-survivor freeze
-> GMP / independent replay
-> structural extraction
-> certification research.

A GPU can be added later for fixed-width bulk execution, but the CPU architecture alone already changes the reachable magnitude regime by hundreds of decimal orders relative to the contiguous frontier.

**R3 decision:** R3-A. A bounded CDM3 pilot is justified. Full production-scale search remains unauthorized until the pilot implementation validates work partitioning, checksums, basin handling, overflow routing and exceptional-candidate freeze behavior.

## 2. Status vocabulary

- **PROVED:** mathematical theorem or exact logical consequence.
- **FINITE-VERIFIED:** finite exact computation with defined provenance.
- **COMPUTATIONAL-EVIDENCE:** measured implementation result that does not imply a theorem.
- **HEURISTIC:** engineering/search choice supported by plausibility or finite evidence.
- **CONJECTURAL:** unproved hypothesis.
- **FAILED:** audited route rejected for its proposed role.
- **UNKNOWN:** unresolved.

The central counterexample-at-scale hypothesis remains **CONJECTURAL / HEURISTIC** only.

## 3. Current external computational state

### 3.1 David Barina

**FINITE-VERIFIED external / peer-reviewed:** Barina's 2025 Journal of Supercomputing paper reports contiguous verification through 2^71, distributed over thousands of CPU/GPU workers. The paper reports up to 2^31.97 integers/s on CPU and 2^37.68 integers/s on GPU for its contiguous-verification metric, with a 52x best-GPU/best-CPU comparison and 1,335x overall improvement over the project's earliest CPU method.

The live project page audited on 2026-10-01 reports all starts below 2075*2^60 ~= 2^71.02 verified and an average of about 5 seconds per 2^40-integer work unit on modern GPUs.

Primary sources:

- https://link.springer.com/article/10.1007/s11227-025-07337-0
- https://pcbarina.fit.vutbr.cz/
- https://github.com/xbarin02/collatz

The source repository uses count-trailing-zero operations, small powers-of-three lookup tables, 128-bit arithmetic, optional GMP support, GPU/OpenCL workers, checksums and distributed task metadata.

### 3.2 Vigleik Angeltveit

**PROVED algorithms / COMPUTATIONAL-EVIDENCE benchmarks / HEURISTIC projections:** Angeltveit's 2026 preprint gives a recursive low-bit algorithm combining descent pruning, mod-9 preimage pruning, path-merging sieves and precomputed bitvectors. It implements CPU Rust using native 128-bit integers and GPU CUDA/OpenCL using multiple 32-bit limbs.

The preprint reports:

- RTX 3060: 2^60 contiguous verification in 24.4 hours;
- approximately 60x GPU/CPU difference on the author's machine;
- less than 0.02% of integers below 2^72 expected to require explicit checking under the algorithm;
- a projection of roughly 1–8 GPU-years for n<2^72, depending on GPU;
- a longer-term projection that 2^75 or even 2^77 may be feasible with resources comparable to Barina's 2^71 campaign.

It also reports deterministic case splitting and CPU/GPU checksum/spot-check validation.

Primary sources:

- https://arxiv.org/abs/2602.10466
- https://github.com/vigleik0/collatz

### 3.3 Oliveira e Silva

**FINITE-VERIFIED historical computation:** Oliveira e Silva's 1999 Mathematics of Computation paper exhaustively searched record stopping times and maximum excursions through 3*2^53, obtaining contiguous verification as a by-product. The low-bit parity dependence and affine multi-step identity used by later implementations already appear in this lineage.

Primary source:

- https://doi.org/10.1090/S0025-5718-99-01031-5

### 3.4 Eric Roosendaal

**FINITE-VERIFIED external/community implementation facts:** Roosendaal's current technical page describes separate algorithms for convergence/path-record work and class-record work. The convergence code uses a 2^32 sieve, mod-9 preimage exclusions and interlaced congruence-class execution. The page reports that the 2^16 example leaves 1,720 of 65,536 starts and that the current 2^32 sieve skips over 99.2% before the mod-9 exclusions.

Primary sources:

- https://www.ericr.nl/wondrous/
- https://www.ericr.nl/wondrous/techpage.html

### 3.5 Honda–Ito–Nakano GPU work

**FINITE-VERIFIED published benchmark:** the 2017 GPU paper reports 1.31e12 64-bit integers/s on a GTX TITAN X versus 5.25e9/s on an i7-4790 for exhaustive verification, using GPU-oriented sieve/lookup execution. Those figures are for a contiguous-verification objective and are not sparse-trajectory rates.

Primary source:

- https://doi.org/10.15803/ijnc.7.1_69

### 3.6 GPU wide integers

**IMPLEMENTATION FACT:** CUDA has supported software __int128 arithmetic since CUDA 11.5-era toolchains. NVIDIA describes it as four 32-bit quantities with carry-chain operations. This is useful for 128-bit GPU paths, but it does not make 256–1024-bit integers native; those still require explicit multi-limb arithmetic and therefore consume registers/instructions proportionally to limb count.

Primary source:

- https://developer.nvidia.com/blog/implementing-high-precision-decimal-arithmetic-with-cuda-int128/

### 3.7 GMP allocation behavior

**IMPLEMENTATION FACT:** GMP mpz_t values grow automatically, retain allocated storage, and may be preallocated with mpz_init2/mpz_realloc2 to avoid repeated reallocations when a maximum size can be estimated.

Primary source:

- https://gmplib.org/manual/

## 4. Contiguous verification and sparse high-magnitude search are different problems

### 4.1 Contiguous verification

Goal: prove every n<X reaches a previously verified region.

Its strongest economic trick is induction: once a trajectory falls below its start, the lower value has already been handled if starts are processed in a justified contiguous/sieved order. This makes average per-integer work extremely small and lets sieves count vast numbers as verified without individually tracing them.

Barina explicitly defines his integers/second metric to include integers not checked at all because sieves prove them redundant. Angeltveit's algorithm pushes the same principle much further by recursively excluding almost all low-bit classes.

### 4.2 Sparse counterexample hunting

Goal: inspect selected starts with n >> X without verifying everything below n.

For this objective:

- first descent below the start is **not** convergence unless the new state is independently in a trusted basin;
- contiguous integers/second is therefore not the right throughput unit;
- a sparse engine must continue through ordinary descent until a trusted basin/cache hit or another justified stop;
- exact path-merging or smaller-preimage rules remain useful when their logical scope is respected;
- high starting bit length can be cheap if the trajectory quickly drifts into the trusted region.

This distinction is the central engineering correction of R3.

## 5. True cost of one huge start

For an odd B-bit state under

U(n)=(3n+1)/2^v2(3n+1),

one exact step needs:

1. multiply by 3 plus 1 across the active limbs;
2. locate the first one bit, beginning in the low limb;
3. right-shift by the valuation;
4. update exact counters/checkpoints and compare against the trusted-basin threshold.

For L 64-bit limbs, the multiply and general shift are O(L). With B<=1024, L<=16 at the starting scale. There is no intrinsically expensive general multiplication: one operand is the small constant 3.

The expensive variable is therefore primarily **how many trajectory steps are required and how large the state grows**, not the decimal magnitude of the starting integer by itself.

A fixed-limb reusable buffer avoids per-step allocation. GMP is a correct fallback and reference, and preallocation can reduce its allocation overhead.

### 5.1 Memory and cache behavior

For a single fixed-limb candidate at up to 4096 bits, the state occupies only hundreds of bytes. This fits comfortably in cache. Broad CPU search should keep one candidate state in registers/cache and avoid global hash lookups on every step.

At larger limb counts, the carry/shift loops and cache footprint grow linearly. The real resource failure mode is a rare candidate whose **trajectory grows** enough to leave the fixed-limb fast path, not merely a 512- or 1024-bit starting value.

## 6. R3 bounded benchmark

The benchmark was frozen in docs/COMPUTE_BUDGET.md before execution.

Durable artifacts:

- benchmarks/cdm2_r3_sparse_bench.c
- experiments/CDM2_R3_BENCHMARK_RESULT.json

### 6.1 Envelope actually used

- deterministic odd starts at 128, 192, 256, 384, 512 and 1024 bits;
- 2,048 distinct starts per bit length = 12,288 distinct starts;
- ten timing replays of the identical start sets to reduce sub-second timing noise;
- one pinned CPU core;
- exact fixed-limb shortened-map kernel;
- exact fixed-limb odd-only kernel;
- exact GMP odd-only reference;
- trusted discovery stop at n<2^71;
- U-step ceiling 16,384;
- peak ceiling 4096 bits;
- 49,920 deterministic transition-validation cases per timing pass;
- all validation passed.

The ten passes consumed about 7.6 seconds of summed timed-kernel execution, within the frozen 60-second CPU/wall envelope.

### 6.2 Median fixed-limb odd-only results

| start bits | starts/s | U-steps/s | avg shortened-step equivalents/start | max U-steps/start | max shortened peak bits |
|---:|---:|---:|---:|---:|---:|
| 128 | ~519,000 | ~74.1 M | ~284 | 381 | 139 |
| 192 | ~263,000 | ~77.9 M | ~591 | 533 | 203 |
| 256 | ~187,000 | ~84.0 M | ~897 | 733 | 267 |
| 384 | ~111,000 | ~84.4 M | ~1,516 | 1,098 | 398 |
| 512 | ~75,000 | ~80.2 M | ~2,126 | 1,428 | 527 |
| 1024 | ~27,000 | ~62.9 M | ~4,603 | 2,872 | 1,039 |

All 12,288 starts entered the Tier-2 discovery basin. No overflow, repeated state or step-limit survivor occurred.

### 6.3 Kernel comparisons

Across the six bands, fixed-limb odd-only execution was approximately 1.8–2.2x faster in wall time than fixed-limb ordinary shortened stepping on the same start sets.

Fixed-limb odd-only was roughly 2.0–2.4x faster than the GMP odd-only reference on this benchmark host.

**Interpretation:** odd-only acceleration is a production-worthy CPU primitive. GMP should remain the reference and escape representation rather than the first-choice fast path for ordinary 256–1024-bit candidates.

### 6.4 Limitations

These rates are **COMPUTATIONAL-EVIDENCE**, not hardware-independent constants.

The sample contains no genuinely exceptional trajectory. A divergent or extraordinarily long candidate invalidates ordinary candidates/second projections because it does not hit the trusted basin. The benchmark also measures one virtualized EPYC core, not a retail workstation or GPU.

## 7. Magnitude versus sample size

Using the median one-core fixed-limb odd-only rates as a simple linear projection for **ordinary** candidates:

| bits | one billion starts on 1 measured core | one billion on 16 cores at 75% scaling | one billion on 128 cores at 70% scaling |
|---:|---:|---:|---:|
| 256 | ~1.48 h | ~7.4 min | ~1.0 min |
| 512 | ~3.68 h | ~18.4 min | ~2.5 min |
| 1024 | ~10.2 h | ~50.9 min | ~6.8 min |

These are **HEURISTIC linear projections**, not benchmarked multicore rates.

A trillion ordinary 512-bit starts would be about 153 one-core days at the measured median; a trillion 1024-bit starts about 424 one-core days. Such scales become plausible only with large parallelism and are not authorized by R3.

### 7.1 Comparison with one more contiguous bit

Angeltveit's 2026 preprint estimates roughly 1–8 GPU-years to verify all n<2^72 on one GPU, depending on GPU, despite its aggressive sieving. By contrast, the R3 measured one-core projection for one billion ordinary sparse 512-bit starts is about 3.7 hours.

This is not an apples-to-apples contest — contiguous verification proves a vastly stronger finite statement — but it answers the R3 economic question:

> **Yes. Sparse sampling at 512 bits can be dramatically cheaper than extending the contiguous frontier by one bit, because sparse search does not pay for every smaller integer.**

That is precisely why a reach-first machine can probe magnitudes hundreds of decimal orders beyond the verified frontier without approaching exhaustive coverage.

## 8. Search-distribution audit

### Uniform random odd B-bit integers

**HEURISTIC baseline; RETAIN.** It is the cleanest test of the counterexample-at-scale hypothesis and avoids overfitting to finite metrics.

### Stratified fixed-bit sampling

**HEURISTIC; RETAIN.** Required for separating magnitude from sample count and for comparing 256/512/1024-bit economics.

### Exact mod-9 / inverse-preimage survivor classes

**PROVED binary pruning for least-divergent candidates; RETAIN AS A SEPARATE ARM.** Do not assume enrichment. Because the root objective accepts any divergent start, a uniform arm should remain alongside least-divergent-targeted pruning so the machine does not silently discard divergent descendants merely because they have a smaller divergent ancestor.

### Exact prefix survivors / high initial odd density / record-like finite growth

**HEURISTIC only.** R1/R2 prove that finite prefix/inverse information does not constrain the next finite parity block across unbounded lift families. These distributions may be used as experimental arms, but they do not deserve exclusive compute or theorem language.

### Adaptive distributions

**HEURISTIC; DEFER until a fixed baseline exists.** Any adaptive sampler must reserve an immutable uniform control arm and cannot use post-hoc finite anomalies as proof.

### Parity-word-generated starts

**Useful for stress testing and engineered finite behavior; weak as a primary discovery prior.** Arbitrarily dramatic finite prefixes can be manufactured.

## 9. Rejection economics

The sparse machine should reject only on events whose scope matches the discovery objective.

### Cheapest valid broad-search stops

- trusted Tier-2/Tier-1 basin hit;
- exact trusted path merge;
- repeated state, recorded defensively;
- campaign resource ceiling;
- exceptional-candidate freeze trigger.

### Least-divergent-targeted arm only

- mod-9 smaller-preimage exclusions;
- exact smaller-preimage/path-merging kills;
- exact first descent if the arm is explicitly framed as searching for the least divergent integer.

### Important non-rejection

A first descent to an untrusted huge value is **not** convergence and should not terminate the uniform arbitrary-divergent search arm. The R3 benchmark deliberately continued until the trajectory entered n<2^71.

## 10. Complete production architecture

The durable specification is docs/CDM2_R3_ARCHITECTURE.md.

The minimum credible architecture is:

deterministic B-bit work-unit generator
-> uniform and least-divergent-targeted arms
-> exact fixed-limb odd-only CPU executor
-> provenance-tagged basin/cache stop
-> exceptional survivor freeze
-> GMP escape/replay queue
-> independent Python/GMP replay
-> exact parity/residue/affine extraction
-> certification research.

### Implementation language

- C17/C++ or Rust for fixed-limb CPU core;
- GMP for bigint reference/escape;
- Python for orchestration, result analysis and independent replay only;
- CUDA C++ optional for later GPU L0/L1 acceleration.

### Storage model

Do not retain ordinary trajectories. Store work-unit metadata, deterministic checksums, aggregate disposition counts and exceptional-candidate records. This keeps storage effectively proportional to work units and survivor count, not total steps.

### Weakest link

**UNKNOWN:** the extreme tail of trajectory cost and the truth of the counterexample-at-scale hypothesis.

Arithmetic through 1024-bit starts is no longer the dominant unknown.

## 11. GPU and SIMD assessment

### SIMD / CPU vector lanes

Straight SIMD across complete independent trajectories suffers from lane divergence because each candidate takes a different number of U-steps and different valuation shifts. SIMD is more promising for:

- generation/modular filters;
- fixed-count block transforms;
- batched low-bit table lookups;
- survivor compaction.

The scalar fixed-limb U-kernel is already fast enough that SIMD should be benchmark-driven, not assumed.

### GPU

Published GPU results prove that Collatz arithmetic and residue sieves can map extremely well to GPUs for contiguous verification. Angeltveit also reports that his GPU implementation avoided the CPU's 16-step lookup-table approach in favor of Barina-style arithmetic, indicating that memory-table economics differ between CPU and GPU.

For sparse search, the likely design is fixed-quota kernel epochs plus survivor compaction, with overflow/large-limb escape lanes to CPU. A dedicated sparse-GPU benchmark is required before assigning production rates.

**HEURISTIC planning conclusion:** a high-end GPU could plausibly multiply the measured one-core sparse rate for 128–512-bit fast paths, but no audited R3 source directly benchmarks this workload. This report intentionally does not convert contiguous integers/second into a fake sparse rate.

## 12. Distributed architecture

Sparse work is naturally shardable because candidate generation is counter-based and trajectories are independent until a trusted cache hit.

A small cluster needs only:

- deterministic disjoint counter ranges;
- per-work-unit checksums;
- retry semantics;
- survivor upload;
- result de-duplication by work-unit ID.

Network traffic is tiny relative to arithmetic if ordinary trajectories are not uploaded.

Linear CPU projections with 70–75% efficiency show that even a modest cluster can inspect billions of 512–1024-bit starts quickly. These remain projections until measured on real multi-core hardware.

A volunteer/cloud-scale design is technically straightforward but not currently necessary or authorized. Its value is scale, not new proof power.

## 13. Compressed trajectory DAGs and caching

**HEURISTIC negative engineering conclusion:** a global hash/DAG over high sparse states is unlikely to pay for itself at the beginning of a 256–1024-bit trajectory because unrelated random states have a vast state space and memory traffic would be incurred every step.

Shared-tail caching becomes attractive only as values shrink toward a much smaller trusted region or among a tiny set of promoted survivors. The machine should measure merge-hit rate before expanding the cache.

## 14. Exceptional-survivor definition

The production search needs precommitted discovery triggers.

For the first pilot, freeze on any of:

- at least 32,768 U-steps without trusted-basin hit;
- shortened-map peak at least start bit length +512 bits;
- state exceeding 4096 bits and therefore leaving the ordinary fixed-limb fast path;
- repeated state;
- invariant/checksum mismatch;
- imminent campaign resource ceiling.

These thresholds do not imply divergence. Their role is to stop broad-search economics from being dominated by a rare object and to preserve that object for exact replay and structural analysis.

## 15. Pilot authorization

### CDM3-P1

**AUTHORIZED IN PRINCIPLE / NOT EXECUTED IN R3.**

The bounded pilot design is:

- 256, 512 and 1024-bit bands;
- 10,000,000 generated starts per band;
- split 5,000,000 uniform-arm + 5,000,000 least-divergent-targeted-arm starts per band;
- 30,000,000 generated starts total;
- exact fixed-limb odd-only core;
- Tier-2 discovery basin stop at n<2^71;
- exceptional freeze triggers above;
- zero automatic extension after freeze;
- independent replay for every frozen object;
- explicit wall/CPU/memory/storage ceilings in docs/COMPUTE_BUDGET.md before execution.

The pilot validates the complete machine. It is not a production-scale test of the central high-magnitude hypothesis.

## 16. Decision against R3-B and R3-C

R3-C is rejected because the measured CPU kernel directly reaches 1024-bit starts at meaningful sample rates.

R3-B is also too conservative: the key uncertainty posed by R3 — whether huge starting magnitude itself makes sparse search impractical — has been measured and answered for 128–1024 bits. The remaining engineering tasks are productionization and scaling, not proof that the architecture can reach the regime.

Therefore the correct classification is **R3-A**.

## 17. What changed scientifically

No evidence for a Collatz counterexample was obtained.

What changed is the computational frontier:

- **before R3:** sparse 128–1024-bit search economics were UNKNOWN;
- **after R3:** exact 128–1024-bit ordinary trajectories are directly benchmarked and cheap enough to justify a bounded pilot;
- the bottleneck has moved from arithmetic representation to survivor-tail economics, validation and the unknown truth/frequency of divergent orbits.

## 18. Source ledger

1. David Barina, Improved verification limit for the convergence of the Collatz conjecture, Journal of Supercomputing 81, 810 (2025). https://doi.org/10.1007/s11227-025-07337-0
2. Barina live verification project. https://pcbarina.fit.vutbr.cz/ — audited 2026-10-01.
3. Barina source repository. https://github.com/xbarin02/collatz
4. Vigleik Angeltveit, An improved algorithm for checking the Collatz Conjecture for all n<2^N, arXiv:2602.10466v1 (2026). https://arxiv.org/abs/2602.10466
5. Angeltveit source repository. https://github.com/vigleik0/collatz
6. Tomás Oliveira e Silva, Maximum Excursion and Stopping Time Record-Holders for the 3x+1 Problem: Computational Results, Math. Comp. 68 (1999), 371–384. https://doi.org/10.1090/S0025-5718-99-01031-5
7. Eric Roosendaal, On The 3x+1 Problem and technical page. https://www.ericr.nl/wondrous/ and https://www.ericr.nl/wondrous/techpage.html
8. Takumi Honda, Yasuaki Ito, Koji Nakano, GPU-accelerated Exhaustive Verification of the Collatz Conjecture, Int. J. Netw. Comput. 7(1) (2017), 69–85. https://doi.org/10.15803/ijnc.7.1_69
9. NVIDIA, Implementing High-Precision Decimal Arithmetic with CUDA int128 (2022). https://developer.nvidia.com/blog/implementing-high-precision-decimal-arithmetic-with-cuda-int128/
10. GNU MP 6.3.0 manual. https://gmplib.org/manual/
11. Repository prior mathematics: experiments/CDM2_R1_REPORT.md and experiments/CDM2_R2_REPORT.md.
12. R3 benchmark: benchmarks/cdm2_r3_sparse_bench.c and experiments/CDM2_R3_BENCHMARK_RESULT.json.

## 19. Session closeout

**Best computational architecture:** deterministic dual-arm sparse generator -> fixed-limb CPU odd-only exact execution -> trusted-basin/cache stop -> survivor freeze -> GMP/independent replay -> structural extraction -> certification.

**Highest magnitude regime plausibly reached:** 1024-bit starts are directly measured; architecture can fall back to arbitrary precision above this, but 256–1024 bits are the current production target.

**Estimated sample scale:** one measured core projects roughly 187k ordinary 256-bit, 75k 512-bit and 27k 1024-bit starts/s. A billion ordinary starts projects to ~1.5 h, ~3.7 h and ~10.2 h respectively on that one core. Multicore/cluster figures are projections only.

**Expected throughput:** about 63–84 million U-steps/s across 128–1024 bits on the measured core.

**Primary technical bottleneck:** survivor-tail distribution and production validation, not initial 256–1024-bit representation.

**Benchmark run:** yes; bounded and completed inside the frozen envelope.

**Pilot authorized:** yes, a bounded CDM3-P1 pilot is authorized in principle and must use its own frozen execution envelope.

**CDM3 unblocked:** yes, for the bounded pilot path. Full production scaling remains gated on pilot validation.

**Actual high-magnitude candidates searched:** no scientific/production candidate campaign. R3 executed 12,288 deterministic 128–1024-bit benchmark starts solely for engineering calibration.

**Exceptional survivor found:** no.

**Counterexample found or claimed:** no.

**Exact next step:** implement the deterministic multi-core CDM3-P1 CPU search engine around the validated fixed-limb odd-only kernel, including work-unit checksums, trusted-basin handling, forced overflow-to-GMP tests and exceptional-candidate freeze/replay; then run the separately frozen pilot and audit its result before any larger campaign.

No progress toward falsifying Collatz is claimed merely from increased speed or magnitude reach.
