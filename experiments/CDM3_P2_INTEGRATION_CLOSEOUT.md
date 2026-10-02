# CDM3-P2 Integration Session Closeout — 2026-10-02

**Status:** IMPLEMENTATION PREPARED; SCIENTIFIC EXECUTION NOT YET AUTHORIZED.

**Claim boundary:** no CDM3-P2 scientific population was executed in this session. No counterexample was found or claimed.

## What this session completed

A dedicated P2 implementation was created on branch `cdm3-p2-20261002` without modifying the historical P1 production bundle.

The P2 implementation deliberately preserves the exact P1 generator mapping and generator version `CDM3-P1-gen-v1` so the frozen P2 counter bases select the intended scientific population rather than a silently changed distribution.

The dedicated engine version is `CDM3-P2-v1`.

The B1-selected production hot path is integrated:

- destructive `mul3add1` on the ordinary path while the normalized state occupies fewer than 64 limbs;
- full-state recovery copy only when the input already occupies all 64 limbs;
- exact original-state restoration and `DISP_FREEZE_ESCAPE` routing on fixed-capacity overflow;
- exact odd-only and shortened-step-equivalent accounting retained.

The P2 scientific group interface hard-codes the frozen 10,000,000-start counter intervals:

| bits | arm | counter base | half-open interval |
|---:|:---:|---:|---|
| 256 | U | 100,000,000 | [100,000,000, 110,000,000) |
| 256 | L | 112,000,003 | [112,000,003, 122,000,003) |
| 512 | U | 124,000,006 | [124,000,006, 134,000,006) |
| 512 | L | 136,000,009 | [136,000,009, 146,000,009) |
| 1024 | U | 148,000,012 | [148,000,012, 158,000,012) |
| 1024 | L | 160,000,015 | [160,000,015, 170,000,015) |

The command-line scientific interface therefore cannot substitute an arbitrary production counter base or count.

Internal P2 guards are equal to or stricter than the frozen campaign envelope:

- <=8 worker threads;
- <=890 seconds wall per process;
- <=590 process CPU-seconds per scientific group, so six groups have a structural aggregate cap of <=3540 CPU-seconds < 3600;
- 4096-bit fixed path;
- 32,768 U-step exceptional trigger;
- +512-bit peak exceptional trigger;
- <=290 MiB result-storage guard.

Supporting validation/replay tools were added for:

- optimized fixed-limb vs GMP agreement;
- odd-only vs shortened-map equivalence;
- exact forced 4096-bit overflow preservation;
- deterministic work-unit replay;
- checkpoint/restart equality;
- one-thread/four-thread digest equality;
- independent Python big-integer replay;
- exact P1/P2 counter-interval non-overlap;
- same-host B1 OPT vs committed P2 integration timing and exact digest equality;
- checkpoint/work-unit manifest extraction;
- P2 campaign aggregation.

A dedicated GitHub Actions preflight workflow was added. It is engineering-only and does not execute any frozen P2 scientific counter interval.

## What remains unverified

This session does **not** claim that the new P2 source is preflight-passed merely because it was written.

Before any P2 scientific start is executed, the dedicated preflight workflow must complete successfully and its artifacts must be audited. In particular the repository still requires observed evidence for:

1. compilation under `-O3 -march=native`;
2. fixed-limb/GMP agreement;
3. optimized overflow preservation;
4. odd-only/shortened-map equivalence;
5. independent Python replay;
6. ASan/UBSan;
7. work-unit replay;
8. checkpoint/restart equality;
9. one-thread/multi-thread digest equality;
10. exact non-overlap with every committed P1 interval;
11. source/compiler/executable hashes;
12. same-host B1-vs-P2 integration timing with no material hot-path regression.

If any gate fails, the 60,000,000-start scientific campaign remains unauthorized.

## Next session

The next session should begin by treating the repository and the P2 preflight evidence as authoritative. It should repair any preflight failure before scientific execution. Only if every frozen gate passes may it run the exact 60,000,000-start campaign.

No GPU work, P3 enlargement, new ranking metric, altered counter range, or post-hoc population extension is authorized.
