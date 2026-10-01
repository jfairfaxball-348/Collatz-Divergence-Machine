"""Exact shortened Collatz transitions."""

from __future__ import annotations


def shortened_step(n: int) -> int:
    """Return one exact step of the shortened Collatz map."""
    if not isinstance(n, int):
        raise TypeError("n must be an int")
    if n <= 0:
        raise ValueError("n must be positive")
    return n // 2 if n % 2 == 0 else (3 * n + 1) // 2


def v2(n: int) -> int:
    """Return the 2-adic valuation of a positive integer."""
    if not isinstance(n, int):
        raise TypeError("n must be an int")
    if n <= 0:
        raise ValueError("n must be positive")
    return (n & -n).bit_length() - 1


def odd_to_odd_step(n: int) -> tuple[int, int]:
    """Accelerate an odd positive n to the next odd value."""
    if not isinstance(n, int):
        raise TypeError("n must be an int")
    if n <= 0 or n % 2 == 0:
        raise ValueError("n must be a positive odd integer")
    m = 3 * n + 1
    a = v2(m)
    return m >> a, a
