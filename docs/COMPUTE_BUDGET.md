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
