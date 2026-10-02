# CDM3-P2 COMMAND AND PROVENANCE RECORD

**Date:** 2026-10-02  
**Authoritative scientific workflow run:** `36972002017`  
**Scientific execution commit:** `be726654744e74a073bd15a3fcee4dfd3937bb48`

## Historical failed preflight attempt

Run `36971912833`, commit `41658f9e786bf4a3949fca947ce8b0686e869e28`, stopped before scientific execution because `pytest` was absent from the runner environment. The workflow stop rule worked; no P2 scientific start executed. The subsequent change only installed the repository-declared test environment.

## Authoritative host

- OS: Ubuntu 24.04 GitHub Actions runner
- CPU: Intel Xeon 6973P-C
- logical CPUs: 4
- physical cores exposed: 2
- architecture: x86_64
- GCC: 13.3.0
- GMP: 6.3.0
- production workers selected by the workflow: 4

## Exact production build

```bash
gcc -O3 -march=native -std=c11 -Wall -Wextra -Werror -pthread \
  production/cdm3_p2_engine.c -lgmp -o cdm3_p2_engine
```

Sanitizer build:

```bash
gcc -O1 -g -std=c11 -Wall -Wextra -Werror -pthread \
  -fsanitize=address,undefined -fno-omit-frame-pointer \
  production/cdm3_p2_engine.c -lgmp -o cdm3_p2_engine_san
```

Same-host B1 reference:

```bash
gcc -O3 -march=native -std=c11 -Wall -Wextra -Werror -pthread \
  benchmarks/cdm3_b1_hotpath_bench.c -lgmp -o cdm3_b1_native
```

## Preflight commands

```bash
./cdm3_p2_engine --selftest /tmp/cdm3p2_release_preflight.chk
./cdm3_p2_escape_test
python tools/cdm3_p2_replay.py --selftest --engine ./cdm3_p2_engine --steps 256
python tools/cdm3_p2_counter_audit.py \
  --manifest experiments/CDM3_P1_WORK_UNIT_DIGESTS.json \
  --output p2_artifacts/counter_audit.json
python -m pytest -q
ASAN_OPTIONS=detect_leaks=1 UBSAN_OPTIONS=halt_on_error=1 \
  ./cdm3_p2_engine_san --selftest /tmp/cdm3p2_sanitizer_preflight.chk
./cdm3_b1_native --bench opt 4096 3
./cdm3_p2_engine --bench 4096 3
python tools/cdm3_p2_integration_check.py \
  --b1 p2_artifacts/b1_opt_same_host.jsonl \
  --p2 p2_artifacts/p2_integration.jsonl \
  --min-ratio 0.90 \
  --output p2_artifacts/integration_check.json
```

No frozen P2 scientific counter was used by generated preflight probes.

## Scientific command

With `THREADS=4`:

```bash
./cdm3_p2_engine --pilot 4 \
  experiments/CDM3_P2_RESULT.json \
  p2_checkpoints \
  be726654744e74a073bd15a3fcee4dfd3937bb48 \
  1244a4af54d3377ad5f51869f63e9fd3668cdb267483bf66fa628f253f03bd7e \
  10ada7c94ddba90dd4f09a0c2e17a50c04b7d6d6668049dbb782389618c463fa
```

Campaign exit code: `0`.

Independent exceptional replay command was still run against the result file; it returned a null exceptional object because no candidate froze.

## Hashes

Source bundle:

`1244a4af54d3377ad5f51869f63e9fd3668cdb267483bf66fa628f253f03bd7e`

Production executable:

`10ada7c94ddba90dd4f09a0c2e17a50c04b7d6d6668049dbb782389618c463fa`

Machine-readable result files:

- `CDM3_P2_RESULT.json`: `49c891421ef1eabc6871a94e768e13abffe9b45fde666efadebee97b590fe7f1`
- `CDM3_P2_WORK_UNIT_DIGESTS.json`: `c16bafec6531ae0ad0a3fb00ca8465c996b02ec3e413e2c13ca6fb8985a6d143`
- `CDM3_P2_PREFLIGHT_RESULT.json`: `ee5f2c3505f1d51ea970d5e2b3d7505e41da5fa535e5785e91b68db6381c87d5`
- `CDM3_P2_EXCEPTIONAL_REPLAY.json`: `65856f5ea60130335454c01cc29bdeedd892ba7b2bc612b912e607a4558d3f90`

Checkpoint files:

- 256 U: `62c891633bcc6baaa41039653b1da4e9a3cda138a9f4274e7c7cbd1ee33550d9`
- 256 L: `6928d9f6b0b4ee82e3598ca109a00d1b786480cce75101b0437788f4d6d9dd33`
- 512 U: `50fb530979fdd966d09495d7d0627cd3752068d015cad256fdbbf549bec5bef7`
- 512 L: `a38719055bee2a9f25963fbbfa2353becbed5b3a78f5db83e8399c88b0a220bc`
- 1024 U: `7343c39be1110ac58d312f23398ebb0f5dd29e358007221f6b715c7597b133d2`
- 1024 L: `3d69d32cf7107614ebf688ed2fb41038e5102d7c9a54ca10bc9e50ef5368ed96`

All 600 work units were complete.

## Artifact preservation

- authoritative run artifact ID: `11212202312`
- artifact ZIP SHA-256: `aece86ec4ffc6f1df8a07d4d8a7f5df7443bdad65787563844a1f35f587f518d`
- publication workflow run: `36972745038`
- exact execution-record publication commit: `20ed2de5b374b7443ebeb2ddb8b549811607ec4b`

The publication workflow copied the exact successful run files; it performed no scientific computation.
