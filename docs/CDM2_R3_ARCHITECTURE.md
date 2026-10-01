# CDM2-R3 Sparse High-Magnitude Search Architecture

**Status:** R3-A architecture specification — production-credible for a bounded pilot; full production campaign still requires pilot validation.

## 1. Objective

Search sparse exact starting values at magnitudes far above contiguous verification while preserving a clean separation between discovery and proof.

The machine is optimized for the root objective:

> find an explicit positive integer whose shortened-Collatz orbit can be rigorously proved unbounded and never reaches 1.

The machine does **not** treat finite survival, large peaks, or compute exhaustion as proof.

## 2. Core design choice

The production core should be **CPU-first, fixed-limb, odd-only, deterministic and embarrassingly parallel**, with optional GPU acceleration later.

The exact odd-only map on odd states is

U(n) = (3n+1) / 2^v2(3n+1).

One U-step corresponds exactly to v2(3n+1) shortened-map steps. Candidate-affecting decisions remain exact.

Why CPU-first:

- the CDM2-R3 benchmark directly measured 128–1024-bit sparse execution on one core;
- 1024-bit starts were not intrinsically difficult on the ordinary sample;
- fixed-limb odd-only arithmetic was roughly 1.8–2.2x faster than scalar shortened stepping and roughly 2x faster than the GMP odd-only reference on the benchmark host;
- GPU contiguous-verification throughput does not transfer directly to sparse trajectories because sparse paths have irregular lengths, warp divergence, and multi-limb pressure;
- CPU work units are trivial to shard, checkpoint, replay, and validate.

## 3. Candidate generation

Use deterministic counter-based generators. A work unit is uniquely identified by

(generator_version, bit_length, arm, shard_id, counter_start, counter_count).

Two discovery arms are required so that exact least-divergent pruning does not silently become an assumption about arbitrary divergent starts.

### Arm U — uniform odd baseline

Generate uniformly distributed odd B-bit integers by a deterministic counter-based PRNG, force bit B-1=1 and bit 0=1, and perform no least-divergent-only modular kill before trajectory execution.

Purpose: preserve sensitivity to an arbitrary divergent start even if it is not the least divergent integer.

### Arm L — least-divergent-targeted exact pruning

Generate the same kind of odd B-bit integers, then apply only exact binary rules that are justified for a least divergent start, beginning with the mod-9 smaller-preimage exclusion n mod 9 in {2,4,5,8}.

Purpose: measure the compute savings from exact pruning while retaining a mathematically interpretable least-divergent-targeted arm.

Do not claim that Arm L has greater divergence probability. R1/R2 explicitly block that inference.

## 4. L0 — generation and exact cheap screens

Input: generator counter.

Representation: fixed 64-bit limbs.

Operations:

- construct exact odd B-bit start;
- compute exact generator checksum;
- Arm L only: exact mod-9 least-divergent kill and any later approved binary inverse/path-merging rules;
- no floating-point candidate decision.

Data retained for ordinary rejects: aggregate counts and work-unit checksum only.

## 5. L1 — fixed-limb odd-only trajectory engine

Primary target bit lengths: 256, 512 and 1024 bits.

Representation:

- reusable fixed-capacity little-endian 64-bit limbs;
- no per-step heap allocation;
- exact multiply-by-3-plus-1 with carry chain;
- trailing-zero count by low-limb scan plus ctz;
- exact right shift by the valuation;
- exact shortened-step equivalent counter.

Stop ordinary processing only on a justified event:

1. exact hit below the Tier-2 external discovery coverage threshold 2^71;
2. exact merge into a provenance-tagged trusted discovery tail;
3. repeated state — freeze defensively and stop that candidate, without turning the project into cycle research;
4. exceptional-candidate trigger;
5. representation escape — route to L2 bigint, never silently discard;
6. campaign resource ceiling.

**Do not treat first descent below the start as convergence.** For a sparse high start, descent to another untrusted large value can still lie on an unbounded orbit. First descent may be recorded as a statistic or used inside an explicitly least-divergent-only branch, but it is not the main sparse-search rejection rule.

## 6. L2 — bigint and exceptional-survivor queue

Representation: preallocated GMP mpz_t or an independently validated arbitrary-precision implementation.

Entry conditions include:

- fixed-limb capacity would be exceeded;
- survivor reaches the precommitted U-step trigger;
- peak growth reaches the precommitted bit-growth trigger;
- another precommitted exceptional criterion fires.

L2 is intentionally low-volume. Ordinary candidates must not be allowed to drift into arbitrary precision merely because the broad-search horizon is poorly chosen.

## 7. Exceptional-candidate triggers

These are discovery triggers, not proof claims.

For the first pilot, freeze a candidate if any of the following occurs before a trusted-basin hit:

- >= 32768 exact U-steps;
- shortened-map peak reaches at least start_bit_length + 512 bits;
- fixed-limb state exceeds 4096 bits;
- repeated state;
- implementation invariant mismatch;
- independently configured resource ceiling would be exceeded.

The R3 benchmark's maximum U-step counts among 2,048 starts per band were 733 at 256 bits, 1,428 at 512 bits and 2,872 at 1024 bits. Therefore 32,768 U-steps is deliberately far outside the observed ordinary sample while remaining finite.

The production engine should also record descriptive rarity measures — peak/start ratio, minimum value, positive log-growth windows, parity statistics, merge status — but none is sufficient alone for proof or unlimited compute.

## 8. Exceptional-candidate freeze protocol

Immediately stop broad processing of that candidate and preserve:

- exact decimal and hexadecimal start;
- bit length;
- generator version, arm, shard and counter;
- repository commit and source hashes;
- executable hash;
- compiler, GMP/CUDA versions and machine details;
- exact U-step and shortened-step-equivalent counts;
- all configured checkpoints;
- exact peak values and peak bit length;
- parity/valuation summary and optional exact compressed parity stream;
- trusted-basin/cache status;
- work-unit checksum.

Then:

1. replay with a separate implementation;
2. build or invoke the minimal exact verifier;
3. compare every recorded checkpoint;
4. rule out overflow/representation bugs;
5. check trusted basin and exact path merges;
6. extract exact parity/residue/affine structure;
7. test for recursively reproducible growth;
8. hand the object to certification mathematics.

## 9. Checkpointing and distributed work units

Broad search should be nearly stateless.

For each work unit retain:

- unique work-unit ID;
- bit band and arm;
- generator counter interval;
- code commit and executable hash;
- candidate counts by disposition;
- aggregate exact step counts;
- deterministic checksum over starts/dispositions/endpoints;
- exceptional-candidate records only;
- timing and hardware metadata.

A work unit should be small enough to retry cheaply and large enough that network overhead is negligible; 10^5 to 10^7 starts per CPU work unit is a plausible initial range, to be tuned by pilot timing.

Duplicate avoidance is by disjoint counter ranges, not by a global visited-start database.

## 10. Cache policy

Do not build a gigantic global DAG for high random states in advance.

For unrelated 256–1024-bit starts, exact collisions at high magnitude are expected to be too rare to justify the memory traffic of a global hash lookup on every step. Shared-tail caching becomes more plausible only after trajectories shrink toward an already-populated trusted region or within the small promoted-survivor set.

Use a provenance-tagged tail cache only where measured hit rate exceeds its lookup cost.

## 11. GPU extension

GPU is an optional accelerator, not a prerequisite for CDM3-P1.

Preferred design:

GPU fixed-width epoch executor -> survivor compaction -> next epoch

rather than one unbounded trajectory per thread.

Key rules:

- process a fixed quota of U-steps per kernel epoch;
- compact surviving lanes between epochs to reduce warp under-utilization;
- keep 128/256-bit common cases entirely on device when possible;
- route 512/1024-bit or overflowing lanes to a CPU queue if register pressure becomes uneconomic;
- use checksums and CPU spot checks;
- never drop an overflow lane;
- persistent kernels are optional only after measured benefit.

CUDA supports software __int128, but 256–1024-bit arithmetic remains explicit multi-limb work. Sparse-GPU economics therefore require a dedicated benchmark and must not be inferred from contiguous-verification integers/second figures.

## 12. Validation strategy

Before a scientific pilot:

- fixed-limb unit tests against GMP on deterministic transitions;
- odd-only/shortened-map equivalence tests with exact shortened-step counts;
- full deterministic work-unit replay equality;
- periodic GMP spot checks during a run;
- independent Python-integer replay for every exceptional candidate;
- compiler sanitizers on non-timed test builds;
- deterministic result checksum;
- checkpoint/restart test;
- deliberately forced fixed-limb overflow test proving correct L2 routing.

## 13. CDM3-P1 bounded pilot design

The cheapest useful pilot is a dual-arm, three-band run:

- bit lengths: 256, 512, 1024;
- 5,000,000 Arm U starts per band;
- 5,000,000 Arm L starts per band;
- 30,000,000 generated starts total;
- exact fixed-limb odd-only execution;
- stop ordinary candidates only on Tier-2 discovery basin hit or trusted cache hit;
- freeze on the exceptional triggers in Section 7;
- no automatic trajectory extension after freeze;
- no claim of divergence from survival.

The pilot is intended to validate end-to-end generation, sharding, checksums, basin handling, exceptional freezing and the empirical cost model. It is not expected to be large enough to test the central magnitude hypothesis decisively.

## 14. Weakest link

The weakest link is no longer arithmetic representation through 1024-bit starts. It is the **unknown tail of the trajectory-cost distribution** and the absence of evidence for the counterexample-at-scale hypothesis.

A genuine divergent orbit, if encountered, defeats the ordinary-cost model by definition because it never reaches the trusted basin. The machine must therefore be designed so that rare long survivors are frozen and escalated rather than allowed to dominate broad-search compute.

## 15. Next engineering step

Implement CDM3-P1 as a deterministic multi-core CPU search engine using the validated fixed-limb odd-only kernel, with exact work-unit checksums, Tier-2 basin handling, forced overflow-to-GMP tests, and independent replay hooks. Run no production-scale campaign until that pilot implementation passes its bounded validation envelope.
