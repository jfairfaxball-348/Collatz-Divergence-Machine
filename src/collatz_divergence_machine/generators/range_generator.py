"""Deterministic finite candidate generators."""

from __future__ import annotations


def integer_range(start: int, stop: int):
    """Yield start..stop inclusive, exactly once and in ascending order."""
    if start < 1 or stop < start:
        raise ValueError("require 1 <= start <= stop")
    yield from range(start, stop + 1)
