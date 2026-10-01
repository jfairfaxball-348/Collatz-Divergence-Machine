"""Promotion decisions and allowed dispositions."""

from __future__ import annotations

from dataclasses import dataclass

ALLOWED_DISPOSITIONS = {
    "RESOLVED_TO_BASIN", "PROMOTE", "STRUCTURAL_ANALYSIS",
    "DEFERRED_COMPUTE_LIMIT", "UNINTERESTING", "ANOMALOUS_BUT_UNCERTIFIED",
}


@dataclass(frozen=True)
class PromotionDecision:
    promote: bool
    from_stage: str
    to_stage: str | None
    reason: str
    expected_information_gain: str | None
    estimated_next_stage_cost: str


def calibration_l0_decision(promote: bool, reason: str) -> PromotionDecision:
    return PromotionDecision(
        promote=promote,
        from_stage="L0",
        to_stage="L1" if promote else None,
        reason=reason,
        expected_information_gain=(
            "Exercise L1 exact-analysis, registry and cache paths under a tiny fixed budget."
            if promote else None
        ),
        estimated_next_stage_cost="<=512 exact shortened-map steps",
    )
