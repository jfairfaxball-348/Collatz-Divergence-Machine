# Compute Budget


## RMI theory-development envelope — 2026-10-05

**Status:** ACTIVE DEFAULT FOR RMI UNLESS A SMALLER SESSION-SPECIFIC ENVELOPE IS FROZEN.

RMI is theory/design first. No scientific trajectory campaign is authorized.

Tiny exact computation is permitted only as theorem-development tooling after the session states the precise proposition, identity, invariant, or finite candidate object the computation can falsify.

| Resource | RMI default ceiling per numbered session |
|---|---:|
| exact toy state / identity / finite-model evaluations | <= 100,000 |
| CPU budget | <= 60 CPU-seconds |
| memory | <= 512 MiB |
| scientific candidate starts | 0 |
| random high-magnitude starts | 0 |
| GPU | not authorized |
| cloud/distributed execution | not authorized |
| open-ended template enumeration | not authorized |
| arithmetic | exact integer/rational/symbolic arithmetic for validity decisions |

Permitted purposes include checking exact identities, falsifying a proposed invariant, validating one regeneration step, exploring a deliberately tiny finite toy model, and confirming symbolic derivations.

A larger compute campaign is not authorized merely because an RMI object survives. It requires a theorem-level mechanism that makes a specific pre-registered prediction about ordinary integers first.


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

**Status:** HISTORICAL FROZEN ENVELOPE — EXECUTED 2026-10-01. CDM2-R3 classified the architecture R3-A and froze this as the cheapest valid next pilot. The production driver was committed, the preflight validation below passed, and the envelope was exhausted exactly; see the P1 closeout below.

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

## CDM3-B1 closeout — 2026-10-01

**Status:** COMPLETE — **B1-A THROUGHPUT REGRESSION RESOLVED.**

The final authoritative four-way replay used 4,096 starts per bit length per pass and five passes. The optimized exact path recovered 102.35%, 101.39% and 99.70% of the side-by-side R3 U-step rate at 256, 512 and 1024 bits.

All correctness gates passed. Benchmark execution used 10.375 wall seconds and 13.955 reported CPU-seconds. No scientific search population was executed.

The selected kernel uses the destructive fixed-limb `mul3add1` directly when the normalized state occupies fewer than 64 limbs. Only an already-full 64-limb state receives a recovery copy before mutation. A failed multiply restores the exact pre-step state and preserves the P1 escape/freeze route.

**GPU execution remains unauthorized.**

## CDM3-P2 frozen bounded CPU campaign

**Status:** PREFLIGHT PASSED / SCIENTIFIC EXECUTION AUTHORIZED. The dedicated `CDM3-P2-v1` engine passed every frozen P2 preflight gate on 2026-10-02 in workflow run `36982432002` / job `110759729097`. No frozen P2 scientific start was executed by preflight. The exact 60,000,000-start CPU campaign may now execute; no enlargement or GPU work is authorized.

### Purpose

Take the smallest scientific scale-up justified by B1: double the completed P1 population while keeping the same scientific distribution and all P1 proof/safety boundaries.

Because B1 more than doubled the non-native P1 hot-path U-step rate in every band, a 2x population is expected to have trajectory-CPU economics comparable to P1 rather than requiring a qualitatively larger compute commitment. This is an engineering estimate, not a guarantee and not evidence for divergence.

### Frozen scientific population

| Item | CDM3-P2 limit |
|---|---:|
| bit lengths | exactly 256, 512, 1024 |
| Arm U generated starts per bit length | exactly 10,000,000 |
| Arm L generated starts per bit length | exactly 10,000,000 |
| generated starts per bit length | exactly 20,000,000 |
| total Arm U generated starts | exactly 30,000,000 |
| total Arm L generated starts | exactly 30,000,000 |
| total generated starts | exactly 60,000,000 |
| worker threads | <= 8 |
| scientific promotions during broad search | exceptional freeze protocol only |

Use the exact P1 counter-based generator algorithm with disjoint counter intervals that cannot overlap P1. Freeze these counter bases unless the P2 implementation proves a collision with prior committed work:

| band / arm | counter base | count |
|---|---:|---:|
| 256 U | 100,000,000 | 10,000,000 |
| 256 L | 112,000,003 | 10,000,000 |
| 512 U | 124,000,006 | 10,000,000 |
| 512 L | 136,000,009 | 10,000,000 |
| 1024 U | 148,000,012 | 10,000,000 |
| 1024 L | 160,000,015 | 10,000,000 |

Before execution the P2 preflight must explicitly verify those intervals are disjoint from every P1 work-unit interval recorded in `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json`.

### Required production path

- dedicated P2 source/version; do not mutate the historical P1 source bundle;
- B1 rare-path recovery-copy kernel;
- `-O3 -march=native` or a documented execution-host equivalent;
- 64-limb / 4096-bit fixed fast path;
- exact odd-only U-step and shortened-step-equivalent accounting;
- Tier-2 discovery-basin stop at `n < 2^71`;
- Arm U has no first-descent-as-convergence shortcut;
- Arm L uses only approved exact binary pruning;
- exact escape/freeze routing and independent GMP/Python replay;
- deterministic work units, checksums and checkpoint/restart.

### Exceptional-candidate rules

Retain the P1 triggers unchanged unless a later separately frozen amendment is justified before execution:

- >= 32,768 exact U-steps;
- peak >= start bit length + 512 bits;
- leaving the 4096-bit fixed path;
- repeated state;
- invariant mismatch;
- resource-ceiling pressure.

An exceptional freeze is not a counterexample. Stop broad processing of that object and transfer it to independent replay and structural/certification analysis.

### Mandatory P2 preflight

Before any of the 60,000,000 scientific starts may execute:

1. fixed-limb vs GMP transition agreement at all three bands;
2. optimized-kernel forced 4096-bit escape with exact original-state preservation;
3. odd-only/shortened-map equivalence;
4. independent Python replay;
5. ASan/UBSan;
6. deterministic work-unit checksum replay;
7. checkpoint/restart equality;
8. one-thread and multi-thread digest equality;
9. P2 counter-interval non-overlap with all P1 work units;
10. source/compiler/executable hashes;
11. internal executable ceilings equal to or stricter than this section;
12. a small integration timing check showing the committed P2 engine has not reintroduced the B1 hot-path regression.

If any gate fails, scientific execution is not authorized.

**Observed 2026-10-02 preflight result: PASS.** Authoritative evidence: `experiments/CDM3_P2_PREFLIGHT_REPORT.md` and `experiments/CDM3_P2_PREFLIGHT_RESULT.json`. P1/P2 counter separation is 64,999,985 counters from the final P1 interval end to the first P2 interval. Same-host P2/B1 OPT median U-step throughput ratios were 98.283%, 99.428%, and 100.091% at 256, 512, and 1024 bits, with exact output equality.

### P2 resource ceilings

| Resource | CDM3-P2 ceiling |
|---|---:|
| wall-clock | <= 15 minutes |
| CPU budget | <= 60 CPU-minutes |
| memory | <= 1 GiB |
| committed result storage | <= 300 MiB |
| GPU execution | not authorized |

These ceilings are deliberately conservative. Do not enlarge P2 because the optimized engine runs quickly.

### P2 post-exhaustion rule

Stop after the exact frozen 60,000,000-start population or earlier on a mandatory campaign-level resource stop. Preserve all valid work-unit results and exceptional freezes. Audit survivor-tail economics and scientific dispositions before authorizing any further CPU population or any GPU benchmark.

A null P2 result does not automatically authorize P3.



## CDM3-P2 closeout — 2026-10-02

**Status:** COMPLETE — **P2-ORDINARY-NULL**.

The exact frozen population was exhausted:

| Item | Observed CDM3-P2 |
|---|---:|
| generated starts | 60,000,000 |
| Arm-L pretrajectory pruned | 13,330,798 |
| exact trajectories executed | 46,669,202 |
| Tier-2 basin hits | 46,669,202 |
| cache hits | 0 |
| exceptional freezes | 0 |
| repeated states | 0 |
| 4096-bit / bigint escapes | 0 |
| invariant failures | 0 |
| campaign resource stops | 0 |
| exact U-steps | 59,293,075,669 |
| shortened-step equivalents | 118,586,359,433 |
| max U-steps | 3,357 |
| max shortened steps | 6,273 |
| max peak bits | 1,053 |
| max peak excess | +29 bits |

Resource accounting:

| Resource | Frozen ceiling | Observed |
|---|---:|---:|
| concurrent worker threads | <=8 | 6 |
| active scientific wall | <=900 s | 437.370285 s |
| CPU | <=3,600 s | 1,081.483885 s |
| memory | <=1 GiB | every group far below ceiling; summed group maxima 15,468 KiB |
| committed result storage | <=300 MiB | closeout artifacts far below ceiling |
| GPU | none | none |

All 600 frozen work units completed. No incomplete work unit contributes to the authoritative counts.

The survivor-cost distribution closely reproduced P1 by corresponding band/arm cell. Doubling the population produced only modest finite increases in maxima and no approach to the exceptional thresholds.

**Post-exhaustion action:** STOP AND AUDIT.

No P3 population, additional CPU scaling, GPU benchmark, new sampling distribution, or new ranking-metric experiment is authorized by this result. A later compute proposal requires a fresh information-gain argument and a separately frozen envelope before execution.

Authoritative artifacts:

- `experiments/CDM3_P2_REPORT.md`;
- `experiments/CDM3_P2_RESULT.json`;
- `experiments/CDM3_P2_WORK_UNIT_DIGESTS.json`.

Authoritative workflow run: `36984984470`. Campaign artifact: `11217427170`, digest `sha256:c70a5c009e019124ac86caf3edd14fcf97f3999287128490094e81f8441b34be`.
