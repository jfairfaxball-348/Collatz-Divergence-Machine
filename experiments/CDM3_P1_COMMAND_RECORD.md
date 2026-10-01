# CDM3-P1 Exact Command and Configuration Record

**Date:** 2026-10-01  
**Scientific result:** `experiments/CDM3_P1_RESULT.json`

## Production build

```sh
gcc -O3 -std=c11 -Wall -Wextra -Werror -pthread production/cdm3_p1_engine.c -lgmp -o cdm3_p1_engine
```

Production source-bundle SHA-256:

`e0e3d93821659aadbef80d5828afd2ea04285b608cafc70189f88f92cc56491f`

Production executable SHA-256:

`dd44ddc4d3006a48717117768ebbc60ae7ae0b50e64d119b87cbc0dff0ac9031`

Compiler: `gcc (Debian 14.2.0-19) 14.2.0`  
GMP: `6.3.0`  
Architecture: `x86_64`  
CPU: `AMD EPYC 9V74 80-Core Processor`

## Release preflight

```sh
./cdm3_p1_engine --selftest /tmp/cdm3p1_committed_preflight.chk
python tools/cdm3_p1_replay.py --selftest --engine ./cdm3_p1_engine --steps 256
```

## Sanitizer preflight

```sh
gcc -O1 -g -std=c11 -Wall -Wextra -Werror -pthread \
  -fsanitize=address,undefined -fno-omit-frame-pointer \
  production/cdm3_p1_engine.c -lgmp -o cdm3_p1_engine_san

ASAN_OPTIONS=detect_leaks=1 UBSAN_OPTIONS=halt_on_error=1 \
  ./cdm3_p1_engine_san --selftest /tmp/cdm3p1_san.chk
```

## Production escape-routing test

```sh
gcc -O2 -std=c11 -Wall -Wextra -Werror -pthread \
  tests/cdm3_p1_forced_escape.c -lgmp -o cdm3_p1_escape_test

./cdm3_p1_escape_test
```

Observed:

`production_escape_disposition=5 replay_bits=4097 PASS`

## Initial frozen pilot invocation

Pilot baseline repository commit:

`0d5aeeca93e19de967949ee3ab7ebc2f77c60d3d`

```sh
./cdm3_p1_engine --pilot \
  8 \
  5000000 \
  CDM3_P1_RESULT.json \
  pilot_checkpoints \
  0d5aeeca93e19de967949ee3ab7ebc2f77c60d3d \
  e0e3d93821659aadbef80d5828afd2ea04285b608cafc70189f88f92cc56491f \
  dd44ddc4d3006a48717117768ebbc60ae7ae0b50e64d119b87cbc0dff0ac9031
```

The execution harness imposed a shorter per-call limit than the repository's 15-minute scientific ceiling. Completed checkpoint records remained valid; incomplete in-flight work units were not counted and were replayed.

## Checkpoint-recovery runner

Recovery runner repository commit:

`2642e36c4b809a4a06fde2d092978be8ffea77e7`

Build:

```sh
gcc -O3 -std=c11 -Wall -Wextra -Werror -pthread \
  tools/cdm3_p1_group_runner.c -lgmp -o cdm3_p1_group_runner
```

Runner source SHA-256:

`3eb561493dc4edab8bef2e3a5db69a02feef687ed93c3a5717f7b3dd402df790`

Runner executable SHA-256:

`1143cb45c715ee92b4140d35adc149213ef8a6ab9aafc8d5f84f599317d671ca`

The candidate-affecting production source included by this runner was unchanged.

Logical group commands and frozen counter intervals:

```sh
# 256 U: completed by initial pilot invocation
# counter interval [0, 5,000,000)

# 256 L: checkpoint resume
./cdm3_p1_group_runner --group 256 L 6000003 5000000 8 cdm3p1_256_L.chk 1 group_256_L.json

# 512 U: initial group call, then one checkpoint resume
./cdm3_p1_group_runner --group 512 U 12000006 5000000 8 cdm3p1_512_U.chk 0 group_512_U.json
./cdm3_p1_group_runner --group 512 U 12000006 5000000 8 cdm3p1_512_U.chk 1 group_512_U.json

# 512 L: one complete group call
./cdm3_p1_group_runner --group 512 L 18000009 5000000 8 cdm3p1_512_L.chk 0 group_512_L.json

# 1024 U: initial call plus three checkpoint resumes
./cdm3_p1_group_runner --group 1024 U 24000012 5000000 8 cdm3p1_1024_U.chk 0 group_1024_U.json
./cdm3_p1_group_runner --group 1024 U 24000012 5000000 8 cdm3p1_1024_U.chk 1 group_1024_U.json
./cdm3_p1_group_runner --group 1024 U 24000012 5000000 8 cdm3p1_1024_U.chk 1 group_1024_U.json
./cdm3_p1_group_runner --group 1024 U 24000012 5000000 8 cdm3p1_1024_U.chk 1 group_1024_U.json

# 1024 L: initial call plus one checkpoint resume
./cdm3_p1_group_runner --group 1024 L 30000015 5000000 8 cdm3p1_1024_L.chk 0 group_1024_L.json
./cdm3_p1_group_runner --group 1024 L 30000015 5000000 8 cdm3p1_1024_L.chk 1 group_1024_L.json
```

All six groups finished with 50/50 complete 100,000-counter work units.

## Deterministic complete-sample quantile replay

Because process-local sample buffers are intentionally not checkpointed, complete deterministic quantiles were reconstructed after the frozen population completed.

```sh
./cdm3_p1_group_runner --sample 256 U 0        5000000 sample_256_U.json 97
./cdm3_p1_group_runner --sample 256 L 6000003  5000000 sample_256_L.json 97
./cdm3_p1_group_runner --sample 512 U 12000006 5000000 sample_512_U.json 97
./cdm3_p1_group_runner --sample 512 L 18000009 5000000 sample_512_L.json 97
./cdm3_p1_group_runner --sample 1024 U 24000012 5000000 sample_1024_U.json 97
./cdm3_p1_group_runner --sample 1024 L 30000015 5000000 sample_1024_L.json 97
```

This is deterministic replay of already frozen starts, not an enlargement of the scientific population.

## Frozen counter bases

| band | arm | counter base | generated |
|---:|:---:|---:|---:|
| 256 | U | 0 | 5,000,000 |
| 256 | L | 6,000,003 | 5,000,000 |
| 512 | U | 12,000,006 | 5,000,000 |
| 512 | L | 18,000,009 | 5,000,000 |
| 1024 | U | 24,000,012 | 5,000,000 |
| 1024 | L | 30,000,015 | 5,000,000 |

No counter interval was enlarged after observing results.
