"""Bounded exact trajectory evaluation."""

from __future__ import annotations

from dataclasses import dataclass
from enum import Enum

from collatz_divergence_machine.basin.cache import BasinCache
from collatz_divergence_machine.core.map import shortened_step


class StopReason(str, Enum):
    TRUSTED_BASIN = "TRUSTED_BASIN"
    STEP_LIMIT = "STEP_LIMIT"
    PEAK_BIT_LIMIT = "PEAK_BIT_LIMIT"
    REPEATED_STATE = "REPEATED_STATE"


@dataclass(frozen=True)
class TrajectoryResult:
    start: int
    states: tuple[int, ...]
    stop_reason: StopReason
    exact_steps: int
    peak: int
    peak_bit_length: int
    basin_hit: int | None
    basin_distance_remaining: int | None
    repeated_state: int | None
    merge_depth: int | None

    @property
    def resolved_to_basin(self) -> bool:
        return self.stop_reason == StopReason.TRUSTED_BASIN


def evaluate(start: int, *, max_steps: int, max_peak_bits: int,
             cache: BasinCache | None = None,
             record_repeats: bool = True) -> TrajectoryResult:
    if start < 1:
        raise ValueError("start must be positive")
    if max_steps < 0:
        raise ValueError("max_steps must be nonnegative")
    if max_peak_bits < 1:
        raise ValueError("max_peak_bits must be positive")

    cache = cache or BasinCache()
    states = [start]
    seen = {start} if record_repeats else set()
    peak = start

    initial_entry = cache.get(start)
    if initial_entry is not None:
        return TrajectoryResult(start, tuple(states), StopReason.TRUSTED_BASIN, 0,
            peak, peak.bit_length(), start, initial_entry.distance_to_one, None, 0)

    for step_index in range(1, max_steps + 1):
        n = shortened_step(states[-1])
        states.append(n)
        peak = max(peak, n)

        if peak.bit_length() > max_peak_bits:
            return TrajectoryResult(start, tuple(states), StopReason.PEAK_BIT_LIMIT,
                step_index, peak, peak.bit_length(), None, None, None, None)

        entry = cache.get(n)
        if entry is not None:
            return TrajectoryResult(start, tuple(states), StopReason.TRUSTED_BASIN,
                step_index, peak, peak.bit_length(), n, entry.distance_to_one, None, step_index)

        if record_repeats:
            if n in seen:
                return TrajectoryResult(start, tuple(states), StopReason.REPEATED_STATE,
                    step_index, peak, peak.bit_length(), None, None, n, None)
            seen.add(n)

    return TrajectoryResult(start, tuple(states), StopReason.STEP_LIMIT, max_steps,
        peak, peak.bit_length(), None, None, None, None)


def cache_resolved_prefix(result: TrajectoryResult, cache: BasinCache) -> None:
    if not result.resolved_to_basin:
        raise ValueError("only basin-resolved results may be cached")
    cache.add_verified_path(result.states, provenance="local_exact")
