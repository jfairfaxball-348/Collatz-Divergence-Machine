"""Exact bounded CDM2 filters; none is a divergence certificate."""
from __future__ import annotations

import hashlib
from dataclasses import dataclass

from collatz_divergence_machine.core.map import shortened_step


@dataclass(frozen=True)
class MergeWitness:
    depth: int
    meeting_value: int
    smaller_start: int


def deterministic_lift(
    residue: int, *, k: int, bits: int = 60, tag: str = "CDM2-E1"
) -> int:
    if not (0 <= residue < (1 << k)):
        raise ValueError("residue out of range")
    if bits <= k + 1:
        raise ValueError("bits must exceed k+1")
    span = 1 << (bits - 1 - k)
    h = int.from_bytes(
        hashlib.sha256(f"{tag}:LIFT:{k}:{residue}".encode()).digest()[:8], "big"
    )
    q = span + (h % span)
    n = residue + (q << k)
    assert (1 << (bits - 1)) <= n < (1 << bits)
    assert n % (1 << k) == residue
    return n


def mod9_smaller_preimage(n: int) -> tuple[int, int] | None:
    if n <= 0:
        raise ValueError("n must be positive")
    if n % 3 == 2:
        p, depth = (2 * n - 1) // 3, 1
    elif n % 9 == 4:
        p, depth = (8 * n - 5) // 9, 3
    else:
        return None
    if not (0 < p < n):
        return None
    x = p
    for _ in range(depth):
        x = shortened_step(x)
    if x != n:
        raise AssertionError("invalid smaller-preimage witness")
    return p, depth


def first_path_merge_witness(start: int, *, max_steps: int) -> MergeWitness | None:
    if start <= 0:
        raise ValueError("start must be positive")
    x = start
    for depth in range(1, max_steps + 1):
        x = shortened_step(x)
        if x % 3 == 2:
            p = (2 * x - 1) // 3
            if 0 < p < start and shortened_step(p) == x:
                return MergeWitness(depth, x, p)
    return None


def prefix_states(start: int, steps: int) -> tuple[int, ...]:
    x = start
    out = [x]
    for _ in range(steps):
        x = shortened_step(x)
        out.append(x)
    return tuple(out)


def first_descent_time(
    start: int, *, max_steps: int, peak_bits: int = 4096
) -> tuple[int | None, tuple[int, ...]]:
    x = start
    states = [x]
    for k in range(1, max_steps + 1):
        x = shortened_step(x)
        states.append(x)
        if x.bit_length() > peak_bits:
            raise OverflowError("peak bit ceiling exceeded")
        if x < start:
            return k, tuple(states)
    return None, tuple(states)


def completed_odd_to_odd_valuation_load(word: str) -> tuple[int, int]:
    if any(ch not in "01" for ch in word):
        raise ValueError("word must contain only 0 and 1")
    odd_positions = [i for i, ch in enumerate(word) if ch == "1"]
    gaps = [b - a for a, b in zip(odd_positions, odd_positions[1:])]
    return sum(gaps), len(gaps)
