# Metric Catalog

Metrics are modular search diagnostics. They are not proof unless a separate theorem gives them proof significance.

| Metric | Exact definition | Exact? | Complexity | Why potentially informative |
|---|---|---|---|---|
| `first_descent_time` | least `k>=1` with `T^k(n)<n`, else null in prefix | yes | O(s) | persistence above start |
| `max_excursion` | max state in finite prefix | yes | O(s) | finite growth magnitude |
| `peak_bit_length` | bit length of maximum | yes | O(s) | arithmetic resource pressure |
| `peak_start_ratio` | exact rational maximum/start | yes | O(s) | normalized finite excursion |
| `odd_step_density` | odd-source transitions / transitions | yes rational | O(s) | parity balance diagnostic |
| `max_parity_run` | longest identical source-parity run | yes | O(s) | detects parity blocks |
| `window_log_growth` | display-only `log2(end/start)/steps` | approximate | O(s) | finite local growth comparison |
| `trajectory_merge_depth` | first step hitting trusted tail | yes | O(s) with hash lookup | reuse/resolution depth |
| `residue_mod_3_8` | source-state counts mod 3 and mod 8 | yes | O(s) | cheap modular diagnostic |

`s` is the number of computed transitions.

Implementations live in `src/collatz_divergence_machine/metrics/registry.py`. Do not create a huge arbitrary feature set without an empirical or mathematical reason.
