# AGENTS.md — binding project scope and research rules

## ROOT OBJECTIVE

Find and rigorously certify an explicit positive integer with an **unbounded Collatz orbit** under the shortened map `T(n)=n/2` for even `n`, `T(n)=(3n+1)/2` for odd `n`, and prove that its forward orbit never reaches `1`.

## OUT OF SCOPE

**NONTRIVIAL FINITE CYCLES ARE OUT OF SCOPE.**

Repeated-state detection is permitted only as a computational safety mechanism. If a repeated state is observed, freeze and record it accurately and stop that candidate. Do not turn this repository into a cycle-search or cycle-exclusion programme without an explicit human decision.

## NON-RESULTS

Long trajectories, large excursions, record stopping times, high odd density, compute exhaustion, failure to find descent, statistical anomaly, or model prediction are not Collatz counterexamples.

## SEARCH ARCHITECTURE

`L0 -> L1 -> L2 -> L3 -> L4`

- L0: ultra-cheap screening.
- L1: cheap exact trajectory analysis.
- L2: expensive exact trajectory analysis.
- L3: structural/symbolic analysis.
- L4: rigorous divergence certification.

## RESOURCE RULE

Every expensive campaign has a finite declared compute envelope. **NO UNBOUNDED WAITING.** Each run must state its budget, stopping condition, expected information gain, and action after exhaustion.

## PROMOTION RULE

More compute requires a mathematical reason. Promotion beyond L1 must answer:

> WHY IS ADDITIONAL COMPUTE EXPECTED TO PRODUCE MATHEMATICAL INFORMATION?

"It has not reached 1 yet" is never sufficient.

## PROOF RULE

Finite iteration never proves divergence. Discovery and certification are distinct activities.

## FAILURE RULE

Preserve failed routes, invalid assumptions, negative experiments, corrections, and search hypotheses. Do not continue a route merely because effort has already been invested.

Every major claim must be labelled one of:

`PROVED`, `FINITE-VERIFIED`, `COMPUTATIONAL-EVIDENCE`, `HEURISTIC`, `CONJECTURAL`, `FAILED`, `SUPERSEDED`, `UNKNOWN`.

## AUTHORITY RULE

Read `START_HERE.md` before working. The repository is the authoritative research memory; conversational memory is not.

## AUDIT RULE

Every tenth numbered research session is a **PROGRESS AND CORRECTION AUDIT**. Sessions 10, 20, 30, ... must explicitly check scope, compute economics, promotion quality, failed-route memory, hidden assumptions, and whether a strategy should be killed, repaired, or pivoted.

## CLAIM RULE

Never claim Collatz false without rigorous certification satisfying `docs/CERTIFICATION_POLICY.md`.

## Exactness and exceptional-candidate rule

Core transitions use exact integer arithmetic. Floating point is permitted only for displays/statistical summaries where it cannot influence a transition or proof claim.

If an exceptional divergence candidate appears, stop the broad search, freeze repository/candidate/environment artifacts, hash them, independently replay the trajectory, build a minimal verifier, begin structural analysis, and subject every implication to hostile review.
