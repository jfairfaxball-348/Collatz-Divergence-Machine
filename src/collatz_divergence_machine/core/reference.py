"""Independent minimal implementation for replay checks."""

from __future__ import annotations


def reference_step(n: int) -> int:
    if type(n) is not int or n < 1:
        raise ValueError("positive int required")
    if (n & 1) == 0:
        return n >> 1
    return (n * 3 + 1) >> 1


def replay(start: int, steps: int) -> list[int]:
    if steps < 0:
        raise ValueError("steps must be nonnegative")
    values = [start]
    n = start
    for _ in range(steps):
        n = reference_step(n)
        values.append(n)
    return values
