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

## CDM1 outcome and frontier revision

**Status:** FINITE-VERIFIED as a project-session record.

No local trajectory experiment was executed in CDM1 after the envelope was frozen. Local trajectory-compute consumption was therefore zero candidates and zero exact Collatz steps.

CDM1 does **not** justify increasing a production search budget. Instead it changes where compute should be spent:

- **REPRESENTATION CEILING:** not the current bottleneck. Python arbitrary-precision arithmetic is adequate for reference work, but representability is not searchability.
- **TRAJECTORY CEILING:** UNKNOWN for production-scale CDM work. CDM0 throughput is not a valid extrapolation to large starts or long unresolved prefixes. A tiny benchmark must precede the CDM2 calibration envelope.
- **STRUCTURAL-ANALYSIS CEILING:** intentionally low. CDM2 should keep survivor counts small enough for exact parity/residue/affine analysis; millions of unexamined survivors would violate the information-per-compute philosophy.
- **CERTIFICATION CEILING:** unchanged. No amount of finite iteration earns L4 without an exact indefinitely extensible mechanism.

### Provisional, not-yet-frozen CDM2-E1 planning ceiling

CDM1 recommends that CDM2 consider, then explicitly freeze before execution:

- parity-prefix length `K=24`;
- at most 2,000,000 recursively visited symbolic nodes;
- at most 4,096 conditioned residue classes and 4,096 matched controls;
- representatives below `2^60`;
- at most 512 exact shortened-map steps per representative, with early stop on first descent;
- peak ceiling 4096 bits;
- zero L2 promotions;
- memory <=512 MiB and storage <=50 MiB;
- an absolute planned wall/CPU ceiling of 180 seconds each, reducible after a tiny benchmark.

These are planning bounds only. CDM2 must freeze its own envelope before running the experiment.


## CDM2-E1 frozen calibration envelope — 2026-10-01

**Status:** FINITE-VERIFIED as a pre-execution resource declaration. This is a calibration in a heavily externally verified convergent domain, not a counterexample search.

**Exact implementation baseline:** `d39edbc238d22507b18c8ac535c182ed27fe4391`.

A tiny pre-freeze implementation benchmark used the same exact prefix machinery at `K=16`. Symbolic enumeration visited 5,808 nodes and produced 2,114 legal leaves in approximately 0.012 wall seconds. A reduced end-to-end `K=16`, 128-per-arm, 128-step calibration completed in approximately 0.093 wall/CPU seconds in the local sandbox. These are engineering observations only and are not extrapolated into mathematical claims.

The benchmark is sufficient to reduce the provisional time ceiling. The frozen CDM2-E1 envelope is:

| Resource | CDM2-E1 frozen ceiling |
|---|---:|
| parity-prefix length | `K=24` |
| recursively visited symbolic nodes | <= 2,000,000 |
| conditioned representatives | <= 4,096 |
| matched controls | <= 4,096 |
| representative bit regime | exactly 60-bit: `2^59 <= n < 2^60` |
| deterministic lift | SHA-256-tagged lift `CDM2-E1-v1`, preserving the exact residue mod `2^24` |
| randomness | none |
| exact L1 horizon | <= 512 shortened-map steps per representative |
| per-representative stopping | stop at first descent below start; also enforce 4096-bit peak ceiling |
| primary checkpoints | `2K=48`, `4K=96`, final horizon 512 |
| L2 promotions | zero |
| wall-clock ceiling | 60 seconds |
| CPU ceiling | 60 CPU-seconds |
| memory ceiling | 512 MiB |
| storage ceiling | 50 MiB |
| arithmetic | Python arbitrary-precision integers; exact transitions and exact integer/rational filter arithmetic |
| committed large datasets | none |

### Generator and matching rule

The conditioned population consists only of length-24 parity classes satisfying every-prefix `D(j)=485*f_j-306*j>0`, surviving exact low-bit descent pruning, and whose deterministic 60-bit representatives survive the exact mod-9 smaller-preimage and path-merging exclusions implemented for CDM2-E1.

Controls are disjoint deterministic exact `K`-survivors drawn from the same 60-bit regime, subjected to the same representative-level smaller-preimage/path-merging exclusions, and matched exactly on `f_K`. The selection reserves enough members in each `f_K` stratum to permit a one-for-one matched control arm.

### Precommitted decision rule

The theorem-conditioned generator is credited with reproducible post-prefix enrichment only if the conditioned-minus-control survival risk difference is positive at both `2K` and `4K` in the pooled sample **and** in both deterministic matched replication folds. The final 512-step endpoint is reported descriptively because it may be sparse.

Debt magnitude and valuation-load diagnostics are secondary. Thresholds are not to be chosen after viewing outcomes.

### Stopping conditions

Stop the campaign immediately if any frozen wall/CPU/memory/storage/peak/symbolic-node ceiling is reached, if the implementation detects an invariant violation, or when all selected representatives have descended or reached the fixed L1 horizon. No budget extension is permitted because a representative survives.

### Expected information gain

Determine whether theorem-linked parity-prefix conditioning supplies any reproducible information about survival **after** the event it was conditioned to guarantee, after exact matching on prefix length, start-bit regime, and total odd count. Also determine whether debt margin or completed odd-to-odd valuation load adds predictive information among legal survivors.

### Post-exhaustion action

If matching is inadequate or a resource ceiling prevents the declared comparison, mark CDM2-E1 inconclusive and redesign in a later bounded session. If enrichment is absent, retain mathematically proved sieves as pruning only and record the generator/ranker failure. Do not expand compute and do not begin CDM3 automatically.


### CDM2-E1 implementation-guard correction before authoritative replay

**Status:** SUPERSEDED for the first post-freeze full execution; FINITE-VERIFIED for the correction record.

The first full post-freeze execution finished in approximately 16 seconds, below the frozen 60-second wall/CPU ceiling, and produced no filter enrichment. During report audit, the committed driver was found still to encode the earlier provisional 180-second internal guard even though `docs/COMPUTE_BUDGET.md` had frozen 60 seconds. Because executable configuration must match the declared envelope, that execution is not used as the authoritative CDM2-E1 result.

The driver was corrected at commit `2a90b45cd9876c1e039ddf1da91c42b849a1e81d`; the exact K<=24 debt/multiplier threshold invariant was additionally tested at commit `0fb67ff1db89064d33f66f4126d876937a02c34f`. The 60-second envelope, generator, quotas, horizons, lift rule, stopping conditions, and all statistical decision rules are unchanged.

**Authoritative replay baseline:** `0fb67ff1db89064d33f66f4126d876937a02c34f`.

No budget increase is authorized. The rejected execution is preserved here as a process correction rather than silently discarded.


## CDM2-R3 frozen arithmetic benchmark envelope — 2026-10-01

**Status:** FINITE-VERIFIED as a pre-execution resource declaration. This is a small engineering benchmark authorized by CDM2-R3. It is **not** a production counterexample campaign.

### Engineering question

Measure the actual cost of sparse high-magnitude exact trajectory execution, separating starting-value bit length from trajectory length, and determine whether odd-only acceleration materially improves a reusable fixed-limb CPU fast path relative to ordinary shortened-map stepping and a GMP reference.

### Deterministic workload

- exact starting bit lengths: `128, 192, 256, 384, 512, 1024`;
- deterministic fixed-seed odd starts, with the high bit and low bit set so every start has exactly the declared bit length;
- at most **4,096 distinct starts per bit length**;
- the same starts may be replayed by multiple arithmetic kernels for validation and timing; replay does not increase the distinct-start ceiling;
- Tier-2 external discovery basin: stop a benchmark trajectory once its exact state is below `2^71`;
- per-start ceiling: **16,384 odd-only U-steps** or the shortened-map equivalent;
- peak representation ceiling: **4,096 bits**;
- any representation overflow, step-ceiling survivor, repeated state, or invariant failure is recorded and stops that benchmark trajectory; it is never silently discarded.

### Kernels permitted

1. scalar exact shortened-map stepping using reusable fixed-capacity 64-bit limbs;
2. scalar exact odd-only stepping
   `U(n)=(3n+1)/2^v2(3n+1)`
   on odd states, with exact accumulation of the corresponding shortened-step count;
3. reusable preallocated GMP `mpz_t` odd-only reference execution;
4. exact cross-check/self-test code required to validate transitions and result summaries.

No GPU, distributed, SIMD, or production-search kernel is authorized by this envelope.

### Resource ceilings

| Resource | CDM2-R3 benchmark ceiling |
|---|---:|
| distinct starting values | <= 24,576 total (4,096 per bit length) |
| start bit lengths | exactly 128, 192, 256, 384, 512, 1024 |
| odd-only steps/start | <= 16,384 |
| peak bit length | <= 4,096 |
| execution threads | 1 benchmark worker thread |
| wall-clock budget | <= 60 seconds total executed benchmark time |
| CPU budget | <= 60 CPU-seconds |
| memory budget | <= 512 MiB |
| storage budget | <= 20 MiB |
| arithmetic | exact integer arithmetic only |
| randomness | none; fixed deterministic generator/version and seed |
| L1->L2 scientific promotions | zero |
| production candidates | zero |

### Validation and stopping rules

- Before timing, the fixed-limb implementation must pass exact transition checks against GMP on deterministic cases.
- Timed kernels must process identical deterministic start sets for comparable modes.
- Timing output must include hardware/compiler/library provenance and report starts, exact map operations, shortened-step equivalents, basin hits, step-ceiling survivors, representation overflows, and a deterministic result digest.
- Stop the complete benchmark immediately if wall/CPU/memory/storage limits are reached or if any validation mismatch occurs.
- A trajectory that survives the benchmark horizon is **not** evidence of divergence. If its behavior is sufficiently exceptional under the project rules, freeze it under the exceptional-candidate protocol rather than extending the benchmark budget.

### Expected information gain

Resolve the immediate R3 engineering uncertainty: whether 128–1024-bit sparse starts are expensive because of number size itself or primarily because of the number of exact trajectory steps, and establish a measured one-core baseline for projecting a fixed-width / bigint sparse-search architecture.

### Post-exhaustion action

Do not expand into production search. Use the measurements only to classify CDM2-R3 and, if warranted, define the smallest next CPU/GPU implementation benchmark or bounded CDM3 pilot. Any further campaign requires a separate frozen envelope.


## CDM3-P1 provisional frozen pilot envelope — 2026-10-01

**Status:** AUTHORIZED DESIGN / EXECUTION NOT YET AUTHORIZED. CDM2-R3 classified the architecture R3-A and freezes this as the cheapest valid next pilot. The pilot may execute only after the production driver is committed, its executable ceilings match this declaration, and the preflight validation below passes.

### Purpose

Validate the complete sparse high-magnitude search machine — deterministic generation, work-unit partitioning, exact fixed-limb odd-only execution, Tier-2 basin handling, checksums, forced overflow routing, exceptional-candidate freeze and independent replay — at a scientifically nontrivial but bounded sample size.

This is not a production-scale test of the counterexample-at-scale hypothesis and cannot certify divergence.

### Population

| Item | CDM3-P1 ceiling |
|---|---:|
| bit lengths | exactly 256, 512, 1024 |
| generated starts per bit length | <= 10,000,000 |
| total generated starts | <= 30,000,000 |
| uniform Arm U per bit length | <= 5,000,000 |
| least-divergent-targeted Arm L per bit length | <= 5,000,000 |
| generator | deterministic counter-based, versioned and domain-separated by band/arm |
| ordinary stop | exact Tier-2 discovery basin hit n<2^71 or exact trusted cache hit |
| first descent above trusted basin | record only; do not treat as convergence in Arm U |

### Exact execution

- primary arithmetic: reusable fixed-capacity 64-bit limbs;
- map: odd-only U(n)=(3n+1)/2^v2(3n+1), with exact shortened-step-equivalent accounting;
- Arm L may apply exact least-divergent binary pruning such as the mod-9 smaller-preimage exclusion;
- Arm U applies no least-divergent-only prefilter;
- floating point may not affect generation, transition, rejection, promotion or freeze decisions.

### Exceptional freeze triggers

Freeze and stop broad processing of a candidate immediately if, before trusted-basin resolution:

- U-step count reaches 32,768;
- shortened-map peak reaches start_bit_length + 512 bits;
- state exceeds the ordinary 4096-bit fixed-limb fast path;
- a repeated state is detected;
- an invariant/checksum mismatch occurs;
- another campaign resource ceiling would be exceeded.

A freeze is a discovery event only. It is not evidence of divergence by itself.

### Resource ceilings

| Resource | CDM3-P1 ceiling |
|---|---:|
| worker threads | <= 8 |
| wall-clock | <= 15 minutes |
| CPU budget | <= 120 CPU-minutes |
| memory | <= 1 GiB |
| committed result storage | <= 200 MiB |
| per-candidate U-step broad-search ceiling | 32,768 before freeze |
| ordinary fixed-limb capacity | 4096 bits |
| automatic post-freeze extension | zero |
| scientific L2 promotions | only frozen exceptional objects |
| production scaling beyond pilot | forbidden without pilot audit |

### Required preflight before execution

1. deterministic unit tests against GMP/Python on all supported bit bands;
2. exact odd-only/shortened-map equivalence tests;
3. forced fixed-limb overflow test proving the candidate is frozen/routed rather than discarded;
4. deterministic work-unit checksum replay;
5. checkpoint/restart replay with identical result digest;
6. compiler/runtime provenance recorded;
7. executable internal limits verified to equal or tighten this file.

If any preflight fails, the pilot is not authorized to run.

### Expected ordinary runtime

CDM2-R3 measured one-core median rates of approximately 187k, 75k and 27k starts/s at 256, 512 and 1024 bits on an AMD EPYC 9V74 VM. Those are engineering observations only. The 15-minute wall ceiling deliberately allows substantial orchestration/checksum/validation overhead and does not authorize extension if the pilot runs slower.

### Post-exhaustion action

Stop. Preserve partial work-unit results if valid. Audit throughput, disposition counts, checksum/replay behavior, exceptional objects and the empirical survivor-cost tail. Do not enlarge the sample merely because no counterexample was found.
\n\n## CDM3-P1 closeout — 2026-10-01\n\n**Status:** COMPLETE — P1-B MACHINE VALIDATED; ENGINEERING BOTTLENECK FOUND.\n\nThe frozen P1 scientific population was exhausted without any exceptional survivor: 30,000,000 generated starts, 6,665,220 exact Arm-L pre-trajectory kills, 23,334,780 executed trajectories, and 23,334,780 Tier-2 basin hits. No repeat, 4096-bit escape, invariant failure, exceptional freeze or counterexample occurred.\n\nThe active execution wall time is conservatively bounded above by 407.6 seconds and completed-work-unit CPU time is 1035.487 seconds. Even the conservative eight-thread CPU upper bound is 3260.8 CPU-seconds, below the frozen 7200 CPU-second ceiling.\n\n**Larger scientific search remains forbidden.** The next authorized compute is engineering-only CDM3-B1 below.\n\n## CDM3-B1 frozen engineering benchmark\n\n**Purpose:** isolate the production hot-path throughput regression observed in P1 without enlarging the scientific search population. This is an engineering benchmark, not a counterexample search.\n\n### Frozen comparison\n\nUse identical deterministic odd starts at exactly 256, 512 and 1024 bits and require identical endpoint/disposition/step digests across every exact implementation variant. Compare side-by-side in the same host session:\n\n1. the CDM2-R3 fixed-limb odd-only reference kernel;\n2. the current CDM3-P1 production U-step path;\n3. the current P1 path compiled with `-march=native`;\n4. an exact overflow-safe production path that avoids copying the full 64-limb state on every ordinary U-step, compiled with `-march=native`.\n\nThe optimized path must preserve the exact 4096-bit escape/freeze semantics. No safety check may be removed merely for speed.\n\n### Benchmark population and passes\n\n| Item | CDM3-B1 ceiling |\n|---|---:|\n| bit lengths | exactly 256, 512, 1024 |\n| deterministic starts per bit length per timing pass | <= 8,192 |\n| timing passes per one-thread variant | <= 5 |\n| implementation variants | <= 4 |\n| scaling worker counts | exactly 1, 2, 4, 8 on the best exact candidate path only |\n| scaling starts per bit length per worker-count measurement | <= 32,768 |\n| scientific candidate promotions | zero |\n| new scientific population | zero |\n\n### Resource ceilings\n\n| Resource | CDM3-B1 ceiling |\n|---|---:|\n| wall-clock | <= 5 minutes |\n| CPU budget | <= 20 CPU-minutes |\n| memory | <= 1 GiB |\n| committed result storage | <= 50 MiB |\n| GPU execution | not authorized |\n\n### Mandatory correctness gates\n\n- identical deterministic starts across compared kernels;\n- exact state/disposition/U-step/shortened-step digest equality;\n- forced 4096-bit escape routing still passes;\n- GMP/Python spot replay still passes;\n- sanitizer build passes for any modified production kernel;\n- source/compiler/executable hashes recorded.\n\n### Decision rule\n\nCDM3-B1 must explain the P1/R3 throughput gap well enough to make the next campaign economics auditable. If the optimized exact production path remains materially slower than the side-by-side R3 reference, larger search remains blocked and the bottleneck must be localized further. If parity is substantially recovered without weakening correctness, a later session may freeze the smallest justified CPU scale-up or sparse-GPU benchmark. CDM3-B1 itself may not execute that later campaign.\n