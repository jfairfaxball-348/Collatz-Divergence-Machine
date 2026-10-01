#!/usr/bin/env python3
"""CDM0 deterministic end-to-end calibration.

Infrastructure calibration only; not a serious counterexample search.
"""

from __future__ import annotations

import argparse
from fractions import Fraction
import hashlib
import json
import platform
from pathlib import Path
import time

from collatz_divergence_machine.basin.cache import BasinCache
from collatz_divergence_machine.filters.l0 import calibration_promote_l0
from collatz_divergence_machine.generators.range_generator import integer_range
from collatz_divergence_machine.metrics.registry import compute_metrics, json_ready
from collatz_divergence_machine.promotion.policy import calibration_l0_decision
from collatz_divergence_machine.registry.candidates import append_candidate, next_candidate_id
from collatz_divergence_machine.registry.ledgers import append_jsonl
from collatz_divergence_machine.trajectories.engine import evaluate, cache_resolved_prefix


def magnitude_estimate(n: int) -> int:
    return len(str(n)) - 1


def run(root: Path, start: int = 1, stop: int = 128, repository_commit: str = "UNRECORDED") -> dict:
    if stop > 255:
        raise ValueError("CDM0 calibration may not exceed 255")
    state = root / "state"
    state.mkdir(parents=True, exist_ok=True)
    candidates_path = state / "candidates.jsonl"
    experiments_path = state / "experiments.jsonl"
    ledger_path = state / "compute_ledger.jsonl"

    for path in (candidates_path, experiments_path, ledger_path):
        path.write_text("", encoding="utf-8")

    cache = BasinCache()
    screened = promoted = resolved = repeated = 0
    largest_start_bits = largest_peak_bits = longest_prefix = 0
    strongest_ratio = Fraction(0, 1)
    promoted_ids = []
    t0 = time.perf_counter()

    for n in integer_range(start, stop):
        screened += 1
        largest_start_bits = max(largest_start_bits, n.bit_length())
        l0 = evaluate(n, max_steps=8, max_peak_bits=4096, cache=cache)
        m0 = compute_metrics(l0)
        largest_peak_bits = max(largest_peak_bits, l0.peak_bit_length)
        longest_prefix = max(longest_prefix, l0.exact_steps)
        strongest_ratio = max(strongest_ratio, m0["peak_start_ratio"])

        if l0.resolved_to_basin:
            cache_resolved_prefix(l0, cache)
            resolved += 1
            continue
        if l0.repeated_state is not None:
            repeated += 1
            continue

        promote, why = calibration_promote_l0(l0)
        decision = calibration_l0_decision(promote, why)
        if not promote or promoted >= 32:
            continue

        promoted += 1
        cid = next_candidate_id(candidates_path)
        promoted_ids.append(cid)

        l1 = evaluate(n, max_steps=512, max_peak_bits=4096, cache=cache)
        m1 = compute_metrics(l1)
        largest_peak_bits = max(largest_peak_bits, l1.peak_bit_length)
        longest_prefix = max(longest_prefix, l1.exact_steps)
        strongest_ratio = max(strongest_ratio, m1["peak_start_ratio"])
        if l1.resolved_to_basin:
            cache_resolved_prefix(l1, cache)
            resolved += 1

        append_candidate(candidates_path, {
            "candidate_id": cid,
            "starting_integer": str(n),
            "starting_bit_length": n.bit_length(),
            "decimal_magnitude_estimate": magnitude_estimate(n),
            "generation_method": f"deterministic integer range {start}..{stop}",
            "stage_entered": "L1",
            "reason_for_promotion": decision.reason,
            "expected_information_gain": decision.expected_information_gain,
            "exact_steps_computed": l1.exact_steps,
            "peak_value": str(l1.peak),
            "peak_bit_length": l1.peak_bit_length,
            "peak_start_ratio": json_ready({"r": m1["peak_start_ratio"]})["r"],
            "first_descent_information": m1["first_descent_time"],
            "odd_even_statistics": {
                "odd_step_density": json_ready({"r": m1["odd_step_density"]})["r"],
                "max_parity_run": m1["max_parity_run"],
            },
            "growth_window_statistics": {
                "full_prefix_log2_growth_per_step_approx": m1["window_log_growth"],
                "classification": "approximate_display_only",
            },
            "relevant_residue_information": m1["residue_mod_3_8"],
            "basin_status": "RESOLVED_TO_BASIN" if l1.resolved_to_basin else l1.stop_reason.value,
            "trajectory_merge_status": {"merge_depth": l1.merge_depth, "basin_hit": l1.basin_hit},
            "estimated_next_stage_cost": decision.estimated_next_stage_cost,
            "independent_replay_status": "not_required_for_calibration_candidate",
            "final_disposition": "RESOLVED_TO_BASIN" if l1.resolved_to_basin else "DEFERRED_COMPUTE_LIMIT",
            "scientific_significance": "none; CDM0 workflow calibration only",
        })

    elapsed = time.perf_counter() - t0
    report = {
        "experiment": "CDM0 deterministic end-to-end calibration",
        "search_claim": "NONE",
        "counterexample_claimed": False,
        "domain": [start, stop],
        "screened": screened,
        "promoted": promoted,
        "resolved": resolved,
        "repeated_state_events": repeated,
        "cache_entries": len(cache),
        "largest_start_bit_length": largest_start_bits,
        "largest_observed_peak_bit_length": largest_peak_bits,
        "longest_exact_prefix_steps": longest_prefix,
        "strongest_peak_start_ratio": {"numerator": strongest_ratio.numerator, "denominator": strongest_ratio.denominator},
        "wall_seconds": elapsed,
        "throughput_candidates_per_second": screened / elapsed if elapsed else None,
        "promoted_candidates": promoted_ids,
        "statement": "Calibration only. No counterexample search result is claimed.",
    }

    environment = {
        "python": platform.python_version(),
        "platform": platform.platform(),
        "implementation": platform.python_implementation(),
    }
    campaign_id = hashlib.sha256(json.dumps({"domain": [start, stop], "kind": "CDM0"}, sort_keys=True).encode()).hexdigest()[:16]

    append_jsonl(experiments_path, {
        "campaign_id": campaign_id,
        "project_stage": "CDM0",
        "generator": "deterministic_integer_range",
        "search_domain": [start, stop],
        "random_seed": None,
        "compute_envelope": {"start_bits": 8, "peak_bits": 4096, "l0_steps": 8, "l1_steps": 512, "candidate_budget": 128, "promotion_quota": 32},
        "result": report,
        "claim_status": "FINITE-VERIFIED",
    })

    append_jsonl(ledger_path, {
        "campaign_id": campaign_id,
        "repository_commit": repository_commit,
        "software_environment": environment,
        "hardware_environment_description": "connector/local sandbox calibration environment",
        "candidate_generator": "deterministic integer range",
        "search_domain": [start, stop],
        "random_seed": None,
        "compute_envelope": {"wall_seconds": 30, "cpu_seconds": 30, "memory_mib": 256, "storage_mib": 10, "peak_bits": 4096, "l0_steps": 8, "l1_steps": 512},
        "number_screened": screened,
        "number_promoted": promoted,
        "number_resolved": resolved,
        "cpu_wall_time_seconds_measured": elapsed,
        "peak_memory": "not instrumented; bounded by campaign policy",
        "storage_used": "small JSONL/report files under 10 MiB",
        "largest_starting_bit_length": largest_start_bits,
        "largest_observed_peak_bit_length": largest_peak_bits,
        "longest_trajectory_prefix": longest_prefix,
        "strongest_excursion": report["strongest_peak_start_ratio"],
        "promoted_candidates": promoted_ids,
        "useful_structural_discoveries": [],
        "cost_per_promotion_seconds": elapsed / promoted if promoted else None,
        "cost_per_mathematically_useful_result": None,
        "note": "CDM0 infrastructure calibration only; no mathematically useful divergence result claimed.",
    })
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--start", type=int, default=1)
    parser.add_argument("--stop", type=int, default=128)
    parser.add_argument("--repository-commit", default="UNRECORDED")
    args = parser.parse_args()
    report = run(args.root, args.start, args.stop, args.repository_commit)
    print(json.dumps(report, indent=2, sort_keys=True))


if __name__ == "__main__":
    main()
