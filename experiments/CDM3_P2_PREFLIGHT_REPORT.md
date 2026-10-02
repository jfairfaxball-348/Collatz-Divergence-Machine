# CDM3-P2 PREFLIGHT REPORT

**Date:** 2026-10-02  
**Final status:** PASS — every mandatory P2 gate passed before any frozen P2 scientific start executed.  
**Execution revision:** `be726654744e74a073bd15a3fcee4dfd3937bb48`  
**Engine:** `CDM3-P2-v1` with unchanged generator `CDM3-P1-gen-v1`  
**Claim class:** FINITE-VERIFIED engineering/correctness evidence only.

## Stop-rule event

The first workflow attempt, run `36971912833` at commit `41658f9e786bf4a3949fca947ce8b0686e869e28`, stopped in preflight because the runner did not have `pytest` installed. All engine checks reached before that point had passed, but the workflow correctly skipped sanitizers, integration timing and scientific execution. **Zero frozen P2 scientific starts were consumed.**

The workflow was corrected to use the repository's existing declared Python test environment: `actions/setup-python@v5` with Python 3.12 followed by `python -m pip install -e . pytest`. No scientific setting, counter, generator rule, proof rule or engine arithmetic changed.

The authoritative second attempt was workflow run `36972002017`. It passed every gate below, then and only then entered the frozen campaign.

## Gate results

1. **Fixed-limb vs GMP:** PASS. 49,152 deterministic exact U-transitions across 256/512/1024-bit starts agreed with GMP.
2. **B1 optimized path vs GMP:** PASS. 24,576 transitions through the P2 rare-path-copy kernel agreed exactly with GMP.
3. **4096-bit escape path:** PASS. A forced escape produced a 4,097-bit GMP-reconstructed next odd state. The optimized multiply rejected the fixed-width mutation, preserved the complete pre-step state, and `run_u_fixed` returned the P1-compatible escape disposition with zero completed U/shortened steps.
4. **Odd-only / shortened-map equivalence:** PASS. 384 deterministic cases agreed in endpoint and shortened-step-equivalent count.
5. **Independent Python replay:** PASS. 30 generated validation trajectories agreed in start integer, U-step count, shortened count, peak, endpoint and disposition.
6. **AddressSanitizer / UndefinedBehaviorSanitizer:** PASS. The complete P2 self-test passed under ASan+UBSan.
7. **Work-unit replay:** PASS. Repeated deterministic work unit digest: `8cd1672982f5ff19`.
8. **Checkpoint/restart:** PASS. Interrupted/resumed-equivalent digest: `5744783f209cd4e5`.
9. **Thread determinism:** PASS. One-thread and four-thread scientific aggregates/digest agreed exactly; digest `609049e609d80bc8`.
10. **Counter non-overlap:** PASS. The audit read `experiments/CDM3_P1_WORK_UNIT_DIGESTS.json` and derived all prior P1 intervals. P2 ranges were pairwise disjoint and had zero P1/P2 collisions.
11. **Provenance and historical P1 immutability:** PASS. Every historical P1 source SHA-256 matched the B1-frozen value.
12. **Executable guards:** PASS. P2 constants were 8 workers maximum, 890 s campaign wall guard, 3,500 process-CPU seconds, 1,024 MiB memory ceiling, 290 MiB result-storage ceiling, 4,096-bit fixed path, 32,768 U-step freeze, +512-bit peak freeze, and exactly 60,000,000 generated starts.
13. **Repository test suite:** PASS. 22 pytest tests passed.
14. **Production throughput integration:** PASS. Exact pass-by-pass workload/result digests matched the same-host B1 optimized kernel at all three bands, and the P2 median U-step rate exceeded the frozen 90% integration threshold everywhere.

## Counter audit

The P1 manifest-derived half-open intervals were:

- 256 U: [0, 5,000,000)
- 256 L: [6,000,003, 11,000,003)
- 512 U: [12,000,006, 17,000,006)
- 512 L: [18,000,009, 23,000,009)
- 1024 U: [24,000,012, 29,000,012)
- 1024 L: [30,000,015, 35,000,015)

The frozen P2 half-open intervals were:

- 256 U: [100,000,000, 110,000,000)
- 256 L: [112,000,003, 122,000,003)
- 512 U: [124,000,006, 134,000,006)
- 512 L: [136,000,009, 146,000,009)
- 1024 U: [148,000,012, 158,000,012)
- 1024 L: [160,000,015, 170,000,015)

Thus the maximum P1 endpoint, 35,000,015, is below the minimum P2 start, 100,000,000, and the programmatic audit found no P2/P2 collision.

## Same-host integration timing

Execution host for the authoritative run: Intel Xeon 6973P-C, 4 logical CPUs / 2 physical cores, GCC 13.3.0, GMP 6.3.0.

| bits | B1 optimized median U-steps/s | P2 median U-steps/s | P2 / B1 |
|---:|---:|---:|---:|
| 256 | 92,329,570 | 98,561,269 | 106.75% |
| 512 | 85,199,148 | 92,816,152 | 108.94% |
| 1024 | 73,899,042 | 71,268,826 | 96.44% |

Every one of the nine pass-level workload/result digest comparisons was exact. The B1 throughput recovery therefore survived P2 production integration.

## Provenance

- source-bundle SHA-256: `1244a4af54d3377ad5f51869f63e9fd3668cdb267483bf66fa628f253f03bd7e`
- production executable SHA-256: `10ada7c94ddba90dd4f09a0c2e17a50c04b7d6d6668049dbb782389618c463fa`
- compiler: GCC 13.3.0
- release flags: `-O3 -march=native -std=c11 -Wall -Wextra -Werror -pthread`
- GMP: 6.3.0
- authoritative workflow run: `36972002017`
- run artifact: `11212202312`
- artifact SHA-256: `aece86ec4ffc6f1df8a07d4d8a7f5df7443bdad65787563844a1f35f587f518d`

Machine-readable records are preserved in `CDM3_P2_PREFLIGHT_RESULT.json`, `CDM3_P2_COUNTER_AUDIT.json`, and `CDM3_P2_INTEGRATION_CHECK.json`.
