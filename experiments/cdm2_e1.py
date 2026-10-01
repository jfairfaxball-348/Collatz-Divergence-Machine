#!/usr/bin/env python3
"""CDM2-E1 theorem-conditioned parity-prefix survivor-enrichment calibration.

This is a bounded finite calibration inside a known externally verified domain.
It does not search above the verification frontier and cannot certify divergence.
"""

from __future__ import annotations

import argparse
from collections import Counter, defaultdict
from fractions import Fraction
import hashlib
import json
import math
from pathlib import Path
import platform
import time

from collatz_divergence_machine.filters.cdm2 import (
    completed_odd_to_odd_valuation_load,
    deterministic_lift,
    first_descent_time,
    mod9_smaller_preimage,
    prefix_states,
)
from collatz_divergence_machine.symbolic.parity_prefix import (
    ParityPrefixState,
    extend_prefix,
)


K_DEFAULT = 24
NODE_CEILING = 2_000_000
QUOTA = 4096
HORIZON = 512
PEAK_BITS = 4096
START_BITS = 60
WALL_CEILING = 60.0
CPU_CEILING = 60.0
TAG = "CDM2-E1-v1"


def assert_bounded_debt_multiplier_equivalence(k: int) -> None:
    """Verify the finite K<=24 debt/multiplier threshold equivalence exactly."""
    if k > 24:
        raise ValueError("CDM2-E1 bounded equivalence is only predeclared through K=24")
    for j in range(1, k + 1):
        for f in range(j + 1):
            debt_positive = 485 * f - 306 * j > 0
            multiplier_above_one = 3 ** f > 2 ** j
            if debt_positive != multiplier_above_one:
                raise AssertionError(
                    f"debt/multiplier threshold mismatch at j={j}, f={f}"
                )


def hval(label: str, word: str) -> bytes:
    return hashlib.sha256(f"{TAG}:{label}:{word}".encode()).digest()


def path_merge_from_states(start: int, states: tuple[int, ...]):
    for depth, m in enumerate(states[1:], 1):
        if m % 3 == 2:
            p = (2 * m - 1) // 3
            if 0 < p < start:
                successor = (3 * p + 1) // 2 if p & 1 else p // 2
                if successor == m:
                    return depth, m, p
    return None


def enumerate_symbolic(k: int, node_ceiling: int):
    stats = Counter()
    leaves = []

    def rec(state: ParityPrefixState, debt: int, debt_min: int, word: str):
        if state.length == k:
            stats["legal_leaves"] += 1
            vsum, vmoves = completed_odd_to_odd_valuation_load(word)
            leaves.append(
                (
                    word,
                    state.residue,
                    state.odd_steps,
                    debt_min,
                    debt,
                    vsum,
                    vmoves,
                )
            )
            return

        for bit in (0, 1):
            stats["symbolic_nodes_visited"] += 1
            if stats["symbolic_nodes_visited"] > node_ceiling:
                raise RuntimeError("symbolic node ceiling exceeded")
            next_state = extend_prefix(state, bit)
            next_debt = debt + (179 if bit else -306)
            if next_debt <= 0:
                stats["killed_debt_nonpositive"] += 1
                continue
            if next_state.residue and next_state.image < next_state.residue:
                stats["killed_low_bit_descent"] += 1
                continue
            rec(
                next_state,
                next_debt,
                min(debt_min, next_debt),
                word + str(bit),
            )

    rec(ParityPrefixState(), 0, 10**18, "")
    return leaves, stats


def representative_population(leaves, k: int):
    stats = Counter()
    eligible = []

    for word, residue, f_k, debt_min, debt_end, vsum, vmoves in leaves:
        n = deterministic_lift(residue, k=k, bits=START_BITS, tag=TAG)
        states = prefix_states(n, k)

        realised = "".join(str(x & 1) for x in states[:-1])
        if realised != word:
            raise AssertionError("parity-prefix residue validation failed")

        if any(x < n for x in states[1:]):
            stats["killed_representative_descent"] += 1
            continue

        if mod9_smaller_preimage(n) is not None:
            stats["killed_mod9_smaller_preimage"] += 1
            continue

        if path_merge_from_states(n, states) is not None:
            stats["killed_path_merge"] += 1
            continue

        stats["eligible_representatives"] += 1
        eligible.append(
            (word, residue, n, f_k, debt_min, debt_end, vsum, vmoves)
        )

    return eligible, stats


def select_arms(eligible, quota: int):
    by_f = defaultdict(list)
    for record in eligible:
        by_f[record[3]].append(record)

    capacities = {f_k: len(group) // 2 for f_k, group in by_f.items()}
    conditioned = []
    used = Counter()

    for record in sorted(eligible, key=lambda x: hval("COND", x[0])):
        f_k = record[3]
        if used[f_k] < capacities[f_k]:
            conditioned.append(record)
            used[f_k] += 1
            if len(conditioned) == quota:
                break

    if len(conditioned) < quota:
        raise RuntimeError(
            "insufficient eligible classes for conditioned quota plus exact controls"
        )

    chosen_words = {record[0] for record in conditioned}
    controls = []
    for f_k, target in sorted(used.items()):
        pool = [
            record
            for record in by_f[f_k]
            if record[0] not in chosen_words
        ]
        pool.sort(key=lambda x: hval("CTRL", x[0]))
        if len(pool) < target:
            raise RuntimeError(f"insufficient controls in f_K={f_k}")
        controls.extend(pool[:target])

    assert Counter(r[3] for r in conditioned) == Counter(r[3] for r in controls)
    return conditioned, controls


def evaluate_arm(records, k: int, horizon: int):
    out = []
    for record in records:
        word, residue, n, f_k, debt_min, debt_end, vsum, vmoves = record
        first_descent, states = first_descent_time(
            n,
            max_steps=horizon,
            peak_bits=PEAK_BITS,
        )
        if first_descent is not None and first_descent <= k:
            raise AssertionError("selected K-survivor descended within K")

        peak = max(states)
        merge = path_merge_from_states(n, states)
        out.append(
            {
                "word": word,
                "residue": residue,
                "start": n,
                "f": f_k,
                "debt_min": debt_min,
                "debt_end": debt_end,
                "valuation_sum": vsum,
                "valuation_moves": vmoves,
                "first_descent": first_descent,
                "survive_2k": first_descent is None or first_descent > 2 * k,
                "survive_4k": first_descent is None or first_descent > 4 * k,
                "survive_final": first_descent is None
                or first_descent > horizon,
                "peak_ratio": Fraction(peak, n),
                "merge_depth": merge[0] if merge else None,
            }
        )
    return out


def wilson(successes: int, total: int, z: float = 1.96):
    if total == 0:
        return [None, None]
    p = successes / total
    den = 1 + z * z / total
    center = (p + z * z / (2 * total)) / den
    half = (
        z
        * math.sqrt(p * (1 - p) / total + z * z / (4 * total * total))
        / den
    )
    return [max(0, center - half), min(1, center + half)]


def endpoint_summary(conditioned, controls, key: str):
    x_c = sum(record[key] for record in conditioned)
    x_u = sum(record[key] for record in controls)
    n_c = len(conditioned)
    n_u = len(controls)
    return {
        "conditioned": [x_c, n_c, x_c / n_c],
        "control": [x_u, n_u, x_u / n_u],
        "risk_difference": x_c / n_c - x_u / n_u,
        "conditioned_wilson95": wilson(x_c, n_c),
        "control_wilson95": wilson(x_u, n_u),
    }


def auc(values, labels):
    positive = [v for v, y in zip(values, labels) if y]
    negative = [v for v, y in zip(values, labels) if not y]
    if not positive or not negative:
        return None
    score = 0.0
    for p in positive:
        for n in negative:
            score += 1 if p > n else 0.5 if p == n else 0
    return score / (len(positive) * len(negative))


def stratified_auc(rows, metric: str, label: str, group_keys):
    numerator = 0.0
    denominator = 0
    groups = defaultdict(list)
    for row in rows:
        groups[tuple(row[key] for key in group_keys)].append(row)

    for group in groups.values():
        positive = [r[metric] for r in group if r[label]]
        negative = [r[metric] for r in group if not r[label]]
        for p in positive:
            for n in negative:
                denominator += 1
                numerator += 1 if p > n else 0.5 if p == n else 0

    return None if denominator == 0 else numerator / denominator


def matched_folds(conditioned, controls):
    c_by_f = defaultdict(list)
    u_by_f = defaultdict(list)
    for row in conditioned:
        c_by_f[row["f"]].append(row)
    for row in controls:
        u_by_f[row["f"]].append(row)

    folds = {0: ([], []), 1: ([], [])}
    for f_k in sorted(c_by_f):
        c_rows = sorted(
            c_by_f[f_k],
            key=lambda row: hval("PAIR-C", row["word"]),
        )
        u_rows = sorted(
            u_by_f[f_k],
            key=lambda row: hval("PAIR-U", row["word"]),
        )
        assert len(c_rows) == len(u_rows)
        for c_row, u_row in zip(c_rows, u_rows):
            fold = hval(
                "FOLD",
                c_row["word"] + "|" + u_row["word"],
            )[0] & 1
            folds[fold][0].append(c_row)
            folds[fold][1].append(u_row)
    return folds


def digest_records(records):
    h = hashlib.sha256()
    for record in sorted(records, key=lambda row: row["word"]):
        h.update(f"{record['word']}|{record['start']}\n".encode())
    return h.hexdigest()


def analyze(conditioned, controls, k: int, horizon: int):
    endpoint_keys = {
        "2K": "survive_2k",
        "4K": "survive_4k",
        "final": "survive_final",
    }
    endpoints = {
        name: endpoint_summary(conditioned, controls, key)
        for name, key in endpoint_keys.items()
    }

    folds = matched_folds(conditioned, controls)
    fold_summary = {
        str(fold): {
            name: endpoint_summary(c_rows, u_rows, key)
            for name, key in endpoint_keys.items()
        }
        for fold, (c_rows, u_rows) in folds.items()
    }

    reproducible = (
        all(
            fold_summary[str(fold)][endpoint]["risk_difference"] > 0
            for fold in (0, 1)
            for endpoint in ("2K", "4K")
        )
        and all(
            endpoints[endpoint]["risk_difference"] > 0
            for endpoint in ("2K", "4K")
        )
    )

    metric_information = {}
    for name in ["debt_min", "debt_end", "valuation_sum"]:
        metric_information[name] = {
            "auc_4K_conditioned": auc(
                [row[name] for row in conditioned],
                [row["survive_4k"] for row in conditioned],
            ),
            "auc_4K_within_f": stratified_auc(
                conditioned,
                name,
                "survive_4k",
                ["f"],
            ),
        }

    metric_information["valuation_sum"][
        "auc_4K_within_f_and_debt_min"
    ] = stratified_auc(
        conditioned,
        "valuation_sum",
        "survive_4k",
        ["f", "debt_min"],
    )
    metric_information["odd_step_density"] = {
        "note": (
            "exactly f_K/K and matched exactly on f_K; "
            "no arm-level incremental degrees of freedom"
        )
    }

    by_f = {}
    for f_k in sorted({row["f"] for row in conditioned}):
        c_rows = [row for row in conditioned if row["f"] == f_k]
        u_rows = [row for row in controls if row["f"] == f_k]
        by_f[str(f_k)] = {
            "n_each": len(c_rows),
            "2K": endpoint_summary(c_rows, u_rows, "survive_2k"),
            "4K": endpoint_summary(c_rows, u_rows, "survive_4k"),
            "final": endpoint_summary(c_rows, u_rows, "survive_final"),
        }

    return (
        endpoints,
        fold_summary,
        reproducible,
        metric_information,
        by_f,
    )


def run(
    k: int = K_DEFAULT,
    quota: int = QUOTA,
    horizon: int = HORIZON,
    node_ceiling: int = NODE_CEILING,
):
    if (
        k > K_DEFAULT
        or quota > QUOTA
        or horizon > HORIZON
        or node_ceiling > NODE_CEILING
    ):
        raise ValueError("requested run exceeds frozen planning maxima")

    assert_bounded_debt_multiplier_equivalence(k)

    wall_start = time.perf_counter()
    cpu_start = time.process_time()

    leaves, symbolic_stats = enumerate_symbolic(k, node_ceiling)
    eligible, pruning_stats = representative_population(leaves, k)
    conditioned_raw, control_raw = select_arms(eligible, quota)
    conditioned = evaluate_arm(conditioned_raw, k, horizon)
    controls = evaluate_arm(control_raw, k, horizon)

    (
        endpoints,
        folds,
        reproducible,
        metric_information,
        by_f,
    ) = analyze(conditioned, controls, k, horizon)

    wall = time.perf_counter() - wall_start
    cpu = time.process_time() - cpu_start
    if wall > WALL_CEILING or cpu > CPU_CEILING:
        raise RuntimeError("frozen time ceiling exceeded")

    peak_c = sorted(float(row["peak_ratio"]) for row in conditioned)
    peak_u = sorted(float(row["peak_ratio"]) for row in controls)
    merges = {
        "conditioned": sum(row["merge_depth"] is not None for row in conditioned),
        "control": sum(row["merge_depth"] is not None for row in controls),
    }

    decision = (
        "KEEP_GENERATOR"
        if reproducible
        else "FAILED_AS_RANKER_GENERATOR_RETAIN_AS_EXACT_PRUNING"
    )

    return {
        "experiment": (
            "CDM2-E1 theorem-conditioned parity-prefix "
            "survivor-enrichment calibration"
        ),
        "claim_status": "COMPUTATIONAL-EVIDENCE",
        "search_claim": "NONE",
        "counterexample_claimed": False,
        "precommitted_decision_rule": (
            "generator enrichment requires positive conditioned-minus-control "
            "survival risk difference at both 2K and 4K in both deterministic "
            "matched folds and pooled; final horizon is descriptive"
        ),
        "configuration": {
            "K": k,
            "symbolic_node_ceiling": node_ceiling,
            "quota_each_arm": quota,
            "start_range": [1 << (START_BITS - 1), 1 << START_BITS],
            "lift_tag": TAG,
            "horizon": horizon,
            "peak_bits": PEAK_BITS,
            "wall_seconds_ceiling": WALL_CEILING,
            "cpu_seconds_ceiling": CPU_CEILING,
            "L2_promotions": 0,
        },
        "symbolic_counts": dict(symbolic_stats),
        "representative_pruning_counts": dict(pruning_stats),
        "eligible_population": len(eligible),
        "sample_sizes": {
            "conditioned": len(conditioned),
            "control": len(controls),
        },
        "fK_match": dict(
            sorted(Counter(row["f"] for row in conditioned).items())
        ),
        "sample_digests": {
            "conditioned_sha256": digest_records(conditioned),
            "control_sha256": digest_records(controls),
        },
        "endpoints": endpoints,
        "deterministic_replication_folds": folds,
        "reproducible_enrichment_rule_met": reproducible,
        "stratified_by_fK": by_f,
        "metric_information": metric_information,
        "peak_start_ratio_outcome": {
            "conditioned_median_approx": peak_c[len(peak_c) // 2],
            "control_median_approx": peak_u[len(peak_u) // 2],
            "conditioned_max_approx": max(peak_c),
            "control_max_approx": max(peak_u),
        },
        "trajectory_merge_operational": merges,
        "compute": {
            "wall_seconds": wall,
            "cpu_seconds": cpu,
            "seconds_per_selected_candidate_wall": wall / (2 * quota),
            "seconds_per_legal_symbolic_leaf_wall": (
                wall / max(1, symbolic_stats["legal_leaves"])
            ),
        },
        "decision": decision,
        "limitations": [
            "finite deterministic calibration only",
            (
                "Wilson intervals are descriptive model-based intervals, "
                "not random-sampling guarantees"
            ),
            (
                "all representatives lie below 2^60 in externally verified "
                "convergent territory"
            ),
            "no finite survival result is divergence evidence",
        ],
        "environment": {
            "python": platform.python_version(),
            "platform": platform.platform(),
            "implementation": platform.python_implementation(),
        },
    }


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--k", type=int, default=K_DEFAULT)
    parser.add_argument("--quota", type=int, default=QUOTA)
    parser.add_argument("--horizon", type=int, default=HORIZON)
    parser.add_argument("--node-ceiling", type=int, default=NODE_CEILING)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()

    report = run(
        args.k,
        args.quota,
        args.horizon,
        args.node_ceiling,
    )
    rendered = json.dumps(report, indent=2, sort_keys=True)
    if args.output:
        args.output.write_text(rendered + "\n", encoding="utf-8")
    print(rendered)


if __name__ == "__main__":
    main()
