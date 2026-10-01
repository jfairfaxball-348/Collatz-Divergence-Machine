# START HERE

## Live repository state

- Repository: `jfairfaxball-348/Collatz-Divergence-Machine`
- Project stage: **CDM1 complete; CDM2 is next**
- Current authoritative handover: this file plus `AGENTS.md`, `ROADMAP.md`, `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`, and the policies under `docs/`
- Latest compute policy: `docs/COMPUTE_BUDGET.md`
- Latest audit: `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`
- Current candidate frontier: calibration-only candidates `CDM-00000001` (27) and `CDM-00000002` (127), both `RESOLVED_TO_BASIN`; no scientific divergence candidate
- Current symbolic frontier: exact parity-word affine composition and odd-to-odd acceleration are scaffolded; CDM1 identified theorem-conditioned parity-prefix residue classes as the first generator to calibrate
- Current external discovery-coverage frontier: Tier 2 through `n<2^71`; Tier 3 live report through `n<2075*2^60` as of 2026-10-01
- Current certification frontier: none; no exact indefinitely extensible divergence mechanism is known in this repository
- Immediate next bounded task: **CDM2-E1 theorem-conditioned parity-prefix survivor-enrichment calibration**
- Forbidden next action: broad/high-range counterexample search

The repository, not conversational memory, is the authoritative research state.

## Read before working

1. `AGENTS.md`
2. `PROJECT_CHARTER.md`
3. `ROADMAP.md`
4. `docs/RESEARCH_PROTOCOL.md`
5. `docs/COMPUTE_BUDGET.md`
6. `docs/PROMOTION_POLICY.md`
7. `docs/CERTIFICATION_POLICY.md`
8. `docs/FAILURE_AND_LESSON_LEDGER.md`
9. `docs/PREVIOUS_WORK_AUDIT.md`
10. `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`
11. `docs/METRIC_CATALOG.md`
12. `docs/BASIN_AND_CACHE_POLICY.md`

## CDM1 frozen conclusions that CDM2 must not silently undo

### Scope

The only root objective is an explicit positive integer whose shortened-Collatz orbit is rigorously proved unbounded and rigorously proved never to reach 1.

Nontrivial finite cycles remain out of scope.

### External coverage

Peer-reviewed exact external computation covers all starts below `2^71` for discovery purposes. A current official live report extends the reported range to `2075*2^60`.

These are external provenance layers, not local basin certificates.

### Necessary least-counterexample structure

If any divergent start exists, a least divergent start exists and never falls below itself.

For a least divergent start above the current frontier, if `f_k` is the number of odd shortened-map source steps in its first `k` steps, the audited Angeltveit descent theorem implies the exact every-prefix condition

`D(k) = 485*f_k - 306*k >= 1`

for every `k>=1`.

This is a necessary condition, not a sufficient condition for divergence.

### Preserved route kills

Do not restore as standalone promotion logic:

- largest numerical starting value;
- finite survival alone;
- peak magnitude;
- peak/start ratio;
- long all-odd or same-parity runs;
- total stopping time/delay;
- GPU/distributed throughput without demonstrated filter value.

The explicit family `2^p-1` manufactures arbitrarily long all-odd initial runs and arbitrarily large finite peak/start ratios.

## Authoritative kickoff prompt

### CDM2 — FILTER AND METRIC DESIGN

Continue the standalone research programme:

**COLLATZ DIVERGENCE MACHINE — Multi-Stage Search for Unbounded Orbits**

Repository:

`jfairfaxball-348/Collatz-Divergence-Machine`

Treat the repository—not conversational memory—as the authoritative research state.

Before doing any research or computation, read and obey the files listed above, especially `docs/CDM1_STATE_OF_THE_ART_AUDIT.md`.

### ROOT OBJECTIVE

The only root objective is:

**FIND AN EXPLICIT POSITIVE INTEGER WHOSE SHORTENED-COLLATZ ORBIT CAN BE RIGOROUSLY PROVED UNBOUNDED AND WHICH NEVER REACHES 1.**

Use

`T(n)=n/2` for even `n`,

`T(n)=(3n+1)/2` for odd `n`.

A successful counterexample requires rigorous proof that:

1. `T^k(n)` never reaches `1`; and
2. `{T^k(n): k>=0}` is unbounded.

Finite survival is not divergence.

### SCOPE

**NONTRIVIAL FINITE CYCLES ARE OUT OF SCOPE.**

Repeated-state detection may remain only as a computational safety mechanism.

Do not restart or extend the earlier cycle-exclusion programme.

### CDM2 OBJECTIVE

This session is **FILTER AND METRIC DESIGN**.

Its primary task is to determine whether theorem-linked cheap filters identify finite trajectories with reproducibly greater post-prefix persistence than matched controls.

CDM2 must calibrate information value before any high-range search.

Do not begin CDM3.

### COMPUTE RULE

Before any experiment:

1. inspect the provisional CDM2-E1 planning ceiling in `docs/COMPUTE_BUDGET.md`;
2. run at most a tiny implementation benchmark if needed to set a realistic wall/CPU ceiling;
3. freeze a finite CDM2 compute envelope in the repository;
4. state generator, domain, seed/lift rule, step and peak ceilings, symbolic-node ceiling, candidate/control quotas, wall/CPU/memory/storage ceilings, stopping conditions, expected information gain, and post-exhaustion action.

No unbounded waiting.

No budget increase because a candidate merely survives.

### REQUIRED IMPLEMENTATION WORK

Implement only the minimal exact machinery needed for CDM2-E1.

At minimum support:

1. **exact parity-prefix debt**
   - `D(k)=485*f_k-306*k`;
   - every-prefix positivity predicate;
   - endpoint and minimum debt diagnostics.

2. **exact parity-word/residue mapping**
   - reuse or extend the existing affine parity-word machinery;
   - construct or verify the unique residue modulo `2^K` for a parity word;
   - test exact realization.

3. **exact redundancy sieves available at bounded K**
   - low-bit descent logic where implemented and validated;
   - mod-9 smaller-preimage exclusions where applicable;
   - exact path-merging logic only when provenance permits it;
   - do not import an external claim as a local basin certificate.

4. **matched-control selection**
   - controls must be comparable in start-bit range and prefix length;
   - where feasible match or stratify by total odd count `f_K`;
   - distinguish "survived K by construction" from "predicts survival beyond K."

Do not build a broad feature factory.

### PRIMARY EXPERIMENT: CDM2-E1

Run a bounded **theorem-conditioned parity-prefix survivor-enrichment calibration** entirely inside a heavily externally verified convergent domain.

The provisional design from CDM1 is:

- target parity-prefix length `K=24`;
- recursively visited symbolic nodes: at most `2,000,000`;
- selected conditioned residue classes: at most `4,096`;
- matched control classes: at most `4,096`;
- representatives below `2^60`;
- one deterministic representative per class under a frozen lift/seed rule;
- exact shortened-map L1 horizon: at most `512` steps per representative;
- stop a representative immediately on first descent;
- peak ceiling: `4096` bits;
- no L2 promotion;
- memory planning ceiling: `512 MiB`;
- storage planning ceiling: `50 MiB`;
- absolute planned wall and CPU ceilings: `180` seconds each, reducible after benchmarking.

These are provisional. CDM2 must freeze the actual envelope before the run and may only reduce it unless a mathematically justified repository update explains a change before execution.

### CONDITIONED ARM

A length-`K` parity word/residue class is eligible only if:

1. every positive prefix has `D(j)>0`;
2. no implemented exact low-bit descent rule already eliminates the class;
3. no implemented exact smaller-preimage/path-merging rule already makes it redundant.

The class is not thereby a divergence candidate. It is only a legal test object for the calibration.

### CONTROL ARM

Construct matched controls that, as far as practical:

- occupy the same starting-value/bit-length regime;
- share the same prefix length;
- have exact no-descent through `K` where possible;
- are matched or stratified on `f_K`, so the experiment tests more than simply selecting higher odd density.

Record any imperfect matching explicitly.

### PRIMARY ENDPOINT

Measure exact additional first-descent survival **after** the conditioning prefix.

Predeclare comparisons at:

- `2K`;
- `4K`;
- the frozen L1 horizon.

The core question is:

> AFTER MATCHING ON WHAT THE FILTER GUARANTEES, DOES THE CONDITIONED GENERATOR PREDICT ANY ADDITIONAL PERSISTENCE?

### SECONDARY METRICS

Keep the secondary set small:

- `parity_debt_min`;
- `parity_debt_end`;
- exact odd-step density;
- odd-to-odd valuation load if implemented cleanly;
- peak/start ratio as an outcome only;
- trajectory merge depth as an operational quantity.

Known finite record trajectories may be included as reference controls, not as divergence evidence.

### FALSIFICATION AND KILL RULES

Precommit to the following:

1. If conditioned classes show no reproducible enrichment in post-prefix survival versus matched `K`-survivors, mark the parity-prefix construction **FAILED as a ranker/generator** and retain it only as exact hard pruning.
2. If debt magnitude among legal survivors adds no predictive information, demote it to a binary necessary-condition screen.
3. If odd-to-odd valuation load adds no information beyond parity debt, demote it.
4. If the filter merely rediscoveres large peaks, long parity runs, or high odd count without longer post-prefix survival, do not promote it.
5. If matching is too poor to identify filter value, mark the experiment inconclusive and redesign within a new bounded session rather than expanding compute.
6. Negative results must be appended to `docs/FAILURE_AND_LESSON_LEDGER.md`.

### ANALYSIS REQUIREMENTS

Report, with exact counts and reproducible data:

- number of symbolic nodes visited;
- number killed by each exact rule;
- conditioned/control sample sizes;
- matching diagnostics;
- first-descent survival curves or fixed-horizon survival proportions;
- effect sizes with uncertainty appropriate to the deterministic sampling design;
- whether apparent enrichment survives stratification by `f_K`;
- incremental information of each proposed metric;
- exact compute cost per candidate/class and per useful finding;
- whether the proposed filter should be kept, demoted, killed, or redesigned.

Do not use model-selected thresholds after viewing outcomes without labeling them exploratory.

### CLAIM STATUS

Every material conclusion must use one of:

`PROVED`, `FINITE-VERIFIED`, `COMPUTATIONAL-EVIDENCE`, `HEURISTIC`, `CONJECTURAL`, `FAILED`, `SUPERSEDED`, `UNKNOWN`.

Do not strengthen a finite calibration result into divergence evidence.

### REQUIRED REPOSITORY OUTPUTS

At minimum:

- a durable CDM2 experiment/design report;
- exact implementation/tests for any new filters/metrics;
- frozen CDM2 compute envelope;
- experiment and compute-ledger entries;
- updated `docs/METRIC_CATALOG.md`;
- updated `docs/FAILURE_AND_LESSON_LEDGER.md` for material negative results;
- updated `ROADMAP.md`;
- updated `START_HERE.md` with the next authoritative bounded task.

Do not create paper packaging, substantial Lean work, or large committed datasets.

### CDM2 END-OF-SESSION DECISION

Finish by answering:

**WHICH, IF ANY, CHEAP FILTERS OR METRICS HAVE DEMONSTRATED REPRODUCIBLE INFORMATION VALUE BEYOND THEIR CONDITIONING EVENT, AND WHAT EXACT BOUNDED GENERATOR SHOULD CDM3 USE?**

If no filter demonstrates such value, say so and do not advance a weak generator merely to keep the project moving.

Then write the authoritative kickoff prompt for the next session.

Do not start CDM3 during CDM2.

### PERMANENT PHILOSOPHY

> SEARCH FOR SUSTAINED GROWTH.  
> COMPUTE IN STAGES.  
> RESPECT PHYSICAL COMPUTE LIMITS.  
> PROMOTE VERY RARELY.  
> TURN NUMERICAL ANOMALIES INTO STRUCTURE.  
> TURN STRUCTURE INTO MATHEMATICS.  
> FINITE SURVIVAL IS NOT DIVERGENCE.  
> NONTRIVIAL CYCLES ARE NOT THIS PROJECT.  
> PRESERVE EVERY IMPORTANT FAILURE.  
> NEVER CLAIM MORE THAN HAS BEEN PROVED.
