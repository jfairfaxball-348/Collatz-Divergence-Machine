# CDM3-B1 Exact Command and Configuration Record

**Date:** 2026-10-01  
**Status:** COMPLETE — authoritative B1-A engineering benchmark recorded.  
**Scientific population increase:** zero.  
**GPU execution:** not authorized.

## Frozen one-thread comparison

Identical deterministic Arm-U starts are used at 256, 512 and 1024 bits.

- starts per bit length per pass: 4,096;
- timing passes per implementation: 5;
- variants: R3 reference, current P1, P1 with `-march=native`, optimized overflow-safe no-full-copy path;
- ordinary stop: Tier-2 discovery basin `n < 2^71`;
- exact P1 disposition, peak and digest accounting retained.

Builds:

```sh
gcc -O3 -std=c11 -Wall -Wextra -Werror -pthread \
  benchmarks/cdm3_b1_hotpath_bench.c -lgmp -o cdm3_b1_base

gcc -O3 -march=native -std=c11 -Wall -Wextra -Werror -pthread \
  benchmarks/cdm3_b1_hotpath_bench.c -lgmp -o cdm3_b1_native

gcc -O1 -g -std=c11 -Wall -Wextra -Werror -pthread \
  -fsanitize=address,undefined -fno-omit-frame-pointer \
  benchmarks/cdm3_b1_hotpath_bench.c -lgmp -o cdm3_b1_san
```

Mandatory benchmark commands:

```sh
./cdm3_b1_native --bench r3 4096 5
./cdm3_b1_base   --bench p1 4096 5
./cdm3_b1_native --bench p1 4096 5
./cdm3_b1_native --bench opt 4096 5
```

The frozen runner executes those commands, checks pass-by-pass exact equality, chooses the fastest production-credible exact path, then measures it at 1, 2, 4 and 8 workers with 16,384 starts per bit length.

## Correctness commands

```sh
gcc -O2 -std=c11 -Wall -Wextra -Werror -pthread \
  tests/cdm3_p1_forced_escape.c -lgmp -o cdm3_p1_escape_test
./cdm3_p1_escape_test

gcc -O2 -std=c11 -Wall -Wextra -Werror -pthread \
  tests/cdm3_b1_opt_escape.c -lgmp -o cdm3_b1_opt_escape_test
./cdm3_b1_opt_escape_test

./cdm3_b1_base --selftest
./cdm3_b1_native --selftest

ASAN_OPTIONS=detect_leaks=1 UBSAN_OPTIONS=halt_on_error=1 \
  ./cdm3_b1_san --selftest

python3 tools/cdm3_p1_replay.py --selftest \
  --engine ./cdm3_b1_native --steps 256
```

## Frozen resource limits

- wall time: <= 300 seconds for benchmark execution;
- reported CPU time: <= 1,200 CPU-seconds;
- memory: <= 1 GiB;
- committed result storage: <= 50 MiB;
- scientific promotions: zero;
- new scientific search population: zero.

## Authoritative run

GitHub Actions workflow run: `36915169530`  
Job: `110547251044`  
PR merge-test commit checked out by the runner: `4d94632e0acfac4fdf52f5edaaf5d5c26386072f`

Host:

- Ubuntu 24.04.5 LTS;
- Linux 6.17.0-1022-azure x86_64;
- AMD EPYC 7763 64-Core Processor;
- 4 logical CPUs / 2 physical cores exposed;
- GCC 13.3.0;
- GMP 6.3.0.

Final timed commands were exactly:

```sh
./cdm3_b1_native --bench r3 4096 5
./cdm3_b1_base   --bench p1 4096 5
./cdm3_b1_native --bench p1 4096 5
./cdm3_b1_native --bench opt 4096 5

./cdm3_b1_native --scale opt 1 16384
./cdm3_b1_native --scale opt 2 16384
./cdm3_b1_native --scale opt 4 16384
./cdm3_b1_native --scale opt 8 16384
```

The runner selected `opt` as the fastest exact production candidate.

## Exact provenance hashes

```text
f9b6151f4218ac914d8e9c4563b72861a296dbf0dc399df92bf48ae6d97781e3  benchmarks/cdm3_b1_hotpath_bench.c
07fc20ebeaa1519e9d8cc4a400ee79332ac4844f4122c331b03a245ae1f4ce04  production/cdm3_p1_engine.c
e892e94a859420f22117f99002c034a47b26dc27777fd47596914b418008bf05  production/cdm3_p1_part0.inc
f8e7343b3bd78ca277b503263516166689d00885e402f22d03fa13f7005b563f  production/cdm3_p1_part1.inc
d5ea642e3785664496fa231ac86a489787f53630cf8e14b865b6652c7d76675c  production/cdm3_p1_part2.inc
bf1b2e5163113b68100abd6e77f3d85fa8a955b594bd93150b775c4939a8f24c  production/cdm3_p1_part3.inc
fbaa6dd120089f552389e3190b45de0efcbf209e917d4cd8cd89a5a7f5911f6d  tools/cdm3_b1_run.py
d8a34f9a4580791a95a7985b6a2db7a62f10601c4cc78b999fc72e2c680930d2  tests/cdm3_b1_opt_escape.c
2b351ee58bc3514b04e0e8f78edb9b5e17506465bb31a81490b3eddfccd380a6  cdm3_b1_base
7d10e2b97a7c189111f1293a722b59891236cc4f52af950022a1bfc89c543974  cdm3_b1_native
0ecf83d94167a263c564e6d00a8efaa5b92df7f687cccb00116b6e9c16b25616  cdm3_b1_san
1c80eeda020b4fd8c6571ef734ac5ed7b450fc37ab161a6e1b97ec2760d169e3  cdm3_p1_escape_test
fe0a93100f0095bcbecc713aeba54570b8c79e092800f449cad33dcc81acd583  cdm3_b1_opt_escape_test
```

Full workflow result SHA-256:

`25d939e3502e58082984e9b154a04ab8c3606122aa0a758cb5f99a6d42948bab`

Workflow artifact ID: `11188962303`  
Artifact archive digest: `sha256:91d23601970230198bd2b4a329f1599bb841142e641866a5abb3cc454e250926`.

## Correctness outcome

All mandatory B1 correctness gates passed. The optimized forced-escape path preserved the exact original full-limb state and GMP reconstructed the escaped next odd state at 4097 bits. Cross-variant trajectory digests were equal, scaling digests were equal, ASan/UBSan passed, and independent Python replay passed 30 cases.

Final classification: **B1-A — THROUGHPUT REGRESSION RESOLVED.**

No scientific population was executed by B1.
