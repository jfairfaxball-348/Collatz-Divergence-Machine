"""CDM0-only transparent short-prefix filter."""

from __future__ import annotations

from collatz_divergence_machine.metrics.registry import compute_metrics
from collatz_divergence_machine.trajectories.engine import TrajectoryResult


def calibration_promote_l0(result: TrajectoryResult) -> tuple[bool, str]:
    """Exercise the promotion path; not a scientifically validated filter."""
    if result.resolved_to_basin:
        return False, "resolved_to_trusted_basin"
    metrics = compute_metrics(result)
    if metrics["first_descent_time"] is None:
        return True, "CDM0 calibration: unresolved after 8 steps and no descent below start"
    return False, "descent_observed_within_L0_prefix"
