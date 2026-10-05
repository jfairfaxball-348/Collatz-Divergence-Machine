# AGENTS.md — binding project scope and research rules


## CURRENT PROGRAMME AUTHORITY — RMI

**RMI — Root Mechanism Invention Programme is active.**

Authoritative charter: `experiments/RMI_REBOOT_FOUNDATIONAL_INVENTION_CHARTER.md`.

Preserved freezes:

- CDM4 is **FROZEN**; CDM4-T32 is **NOT AUTHORIZED**.
- IRM is **FROZEN**; IRM-2 is **NOT AUTHORIZED**.
- RMI is neither a CDM4 successor nor IRM-2.

RMI selects research by missing **root capability**, not by adjacency to the previous mathematical class.

### FOUNDATIONAL INVENTION PRINCIPLE

Existing mathematical precedent is not required for authorization of a novel structure.

A novel structure may be pursued when:

1. it is derived from a clearly stated root-level obstruction;
2. it has a precise intended proof capability;
3. it preserves ordinary forward-orbit ownership from the start;
4. it is not merely a larger version of a previously failed template;
5. it has a finite falsification or kill condition;
6. success would materially shorten the implication chain to an explicit unbounded orbit.

**Novelty without root leverage is rejected. Root leverage without precedent is permitted.**

### ANTI-OVERCONSERVATISM PRINCIPLE

The absence of prior art is not evidence against a root-derived invention.

"No existing theorem motivates this" is not a sufficient reason to reject a structure specifically designed to solve a demonstrated missing capability.

### ANTI-TEMPLATE-LADDER PRINCIPLE

Failure does not justify increasing expressive power unless the increased power is required by a specifically identified failed capability.

Every RMI object must remain attached to one actual ordinary forward orbit, must state what it is meant to prove that the repository could not previously certify, and must have a finite kill condition.

RMI initial budget: at most **RMI-1 through RMI-6**, hard viability gate after **RMI-3**, absolute audit at **RMI-6**, no automatic RMI-7.


## ROOT OBJECTIVE

Find and rigorously certify an explicit positive integer with an **unbounded Collatz orbit** under the shortened map `T(n)=n/2` for even `n`, `T(n)=(3n+1)/2` for odd `n`, and prove that its forward orbit never reaches `1`.

## OUT OF SCOPE

**NONTRIVIAL FINITE CYCLES ARE OUT OF SCOPE.**

Repeated-state detection is permitted only as a computational safety mechanism. If a repeated state is observed, freeze and record it accurately and stop that candidate. Do not turn this repository into a cycle-search or cycle-exclusion programme without an explicit human decision.

## NON-RESULTS

Long trajectories, large excursions, record stopping times, high odd density, compute exhaustion, failure to find descent, statistical anomaly, or model prediction are not Collatz counterexamples.

## WORKING SEARCH HYPOTHESIS

For discovery strategy, the project may **conditionally assume** that there is a magnitude regime far beyond current verification in which unbounded orbits occur often enough to be discoverable by a sufficiently capable search machine.

This is a HEURISTIC / CONJECTURAL working hypothesis only. It is not admissible as a proof premise.

## SEARCH ARCHITECTURE

The project supports both structure-first and reach-first discovery.

`L0 -> L1 -> L2 -> L3 -> L4`

- L0: ultra-cheap screening.
- L1: cheap exact trajectory analysis.
- L2: expensive exact trajectory analysis.
- L3: structural/symbolic analysis.
- L4: rigorous divergence certification.

## RESOURCE RULE

Every expensive campaign has a finite declared compute envelope. **NO UNBOUNDED WAITING.** Each run must state its budget, stopping condition, expected information gain, and action after exhaustion.

## PROMOTION RULE

More compute requires a declared research reason. Promotion beyond L1 must answer:

> WHY IS ADDITIONAL COMPUTE EXPECTED TO PRODUCE USEFUL DISCOVERY OR MATHEMATICAL INFORMATION?

Two routes are valid:

- **structure-first:** a testable structural/mathematical hypothesis;
- **reach-first:** a bounded search design that materially changes the reachable magnitude regime under the explicit counterexample-at-scale working hypothesis.

"It has not reached 1 yet" is never sufficient by itself. Neither is "the number is large."

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
