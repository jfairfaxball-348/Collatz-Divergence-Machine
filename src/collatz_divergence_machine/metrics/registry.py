"""Small, explicit metric registry."""

from __future__ import annotations

from dataclasses import dataclass
from fractions import Fraction
import math
from typing import Any, Callable

from collatz_divergence_machine.trajectories.engine import TrajectoryResult


@dataclass(frozen=True)
class MetricSpec:
    name: str
    exact: bool
    complexity: str
    rationale: str
    compute: Callable[[TrajectoryResult], Any]


def _first_descent(r: TrajectoryResult):
    for k, value in enumerate(r.states[1:], 1):
        if value < r.start:
            return k
    return None


def _peak_ratio(r: TrajectoryResult):
    return Fraction(r.peak, r.start)


def _odd_density(r: TrajectoryResult):
    sources = r.states[:-1]
    if not sources:
        return Fraction(0, 1)
    return Fraction(sum(v & 1 for v in sources), len(sources))


def _max_parity_run(r: TrajectoryResult):
    sources = r.states[:-1]
    if not sources:
        return 0
    best = current = 1
    prev = sources[0] & 1
    for v in sources[1:]:
        bit = v & 1
        if bit == prev:
            current += 1
            best = max(best, current)
        else:
            current = 1
            prev = bit
    return best


def _window_log_growth(r: TrajectoryResult):
    if len(r.states) < 2:
        return None
    return math.log2(r.states[-1] / r.states[0]) / (len(r.states) - 1)


def _residue_counts(r: TrajectoryResult):
    sources = r.states[:-1]
    mod3 = [0, 0, 0]
    mod8 = [0] * 8
    for v in sources:
        mod3[v % 3] += 1
        mod8[v % 8] += 1
    return {"mod3": mod3, "mod8": mod8}


REGISTRY = {
    "first_descent_time": MetricSpec("first_descent_time", True, "O(s)", "Persistence above the start.", _first_descent),
    "max_excursion": MetricSpec("max_excursion", True, "O(1) after trajectory", "Finite growth magnitude.", lambda r: r.peak),
    "peak_bit_length": MetricSpec("peak_bit_length", True, "O(1) after trajectory", "Arithmetic resource pressure.", lambda r: r.peak_bit_length),
    "peak_start_ratio": MetricSpec("peak_start_ratio", True, "O(1) after trajectory", "Normalized finite excursion.", _peak_ratio),
    "odd_step_density": MetricSpec("odd_step_density", True, "O(s)", "Parity balance diagnostic.", _odd_density),
    "max_parity_run": MetricSpec("max_parity_run", True, "O(s)", "Detects unusually long parity blocks.", _max_parity_run),
    "window_log_growth": MetricSpec("window_log_growth", False, "O(1) for full-prefix window", "Display-only local growth summary.", _window_log_growth),
    "trajectory_merge_depth": MetricSpec("trajectory_merge_depth", True, "O(1) after trajectory", "Measures trusted-tail reuse.", lambda r: r.merge_depth),
    "residue_mod_3_8": MetricSpec("residue_mod_3_8", True, "O(s)", "Cheap modular diagnostic without theorem status.", _residue_counts),
}


def compute_metrics(result: TrajectoryResult) -> dict[str, Any]:
    return {name: spec.compute(result) for name, spec in REGISTRY.items()}


def json_ready(metrics: dict[str, Any]) -> dict[str, Any]:
    def conv(value):
        if isinstance(value, Fraction):
            return {"numerator": value.numerator, "denominator": value.denominator, "exact": True}
        if isinstance(value, dict):
            return {k: conv(v) for k, v in value.items()}
        if isinstance(value, list):
            return [conv(v) for v in value]
        return value
    return {k: conv(v) for k, v in metrics.items()}
