"""Exact affine representation of a prescribed shortened-map parity word."""

from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True)
class AffineIterate:
    odd_steps: int
    length: int
    constant: int

    @property
    def denominator(self) -> int:
        return 1 << self.length

    @property
    def multiplier(self) -> int:
        return 3 ** self.odd_steps

    def numerator(self, n: int) -> int:
        return self.multiplier * n + self.constant

    def apply_if_integral(self, n: int) -> int:
        num = self.numerator(n)
        den = self.denominator
        if num % den:
            raise ValueError("parity word is not arithmetically realised by this n")
        return num // den


def compose_parity_word(word: str) -> AffineIterate:
    """For a source-parity word, compose T^k(n)=(3^a*n+c)/2^k."""
    c = 0
    a = 0
    k = 0
    for bit in word:
        if bit not in "01":
            raise ValueError("word must contain only 0 and 1")
        if bit == "1":
            c = 3 * c + (1 << k)
            a += 1
        k += 1
    return AffineIterate(a, k, c)


def parity_word(states: list[int] | tuple[int, ...]) -> str:
    if len(states) < 2:
        return ""
    return "".join("1" if n & 1 else "0" for n in states[:-1])
