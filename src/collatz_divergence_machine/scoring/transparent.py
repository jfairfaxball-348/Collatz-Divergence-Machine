"""Transparent demonstration score; never mathematical truth."""

from __future__ import annotations


def calibration_score(*, peak_bit_gain: int, no_first_descent: bool,
                      odd_density_num: int, odd_density_den: int) -> dict:
    components = {
        "peak_bit_gain": int(peak_bit_gain),
        "no_first_descent_bonus": 4 if no_first_descent else 0,
        "odd_density_display": (odd_density_num / odd_density_den) if odd_density_den else 0.0,
    }
    components["score"] = components["peak_bit_gain"] + components["no_first_descent_bonus"]
    components["status"] = "HEURISTIC"
    return components
