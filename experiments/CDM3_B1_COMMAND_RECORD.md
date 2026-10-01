# CDM3-B1 Exact Command and Configuration Record

**Date:** 2026-10-01  
**Status:** PRE-EXECUTION RECORD — frozen engineering benchmark only.  
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

Source/compiler/executable hashes and measured commands will be appended after the authoritative run.
