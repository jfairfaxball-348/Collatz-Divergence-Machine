"""Exact bounded parity-prefix arithmetic for CDM2."""
from __future__ import annotations

from dataclasses import dataclass

from collatz_divergence_machine.core.map import shortened_step


DEBT_ODD_INCREMENT = 179
DEBT_EVEN_INCREMENT = -306


@dataclass(frozen=True)
class ParityPrefixState:
    residue: int = 0
    image: int = 0
    length: int = 0
    odd_steps: int = 0
    power3: int = 1


def parity_debt(odd_steps: int, length: int) -> int:
    return 485 * odd_steps - 306 * length


def parity_debt_trace(word: str) -> tuple[int, ...]:
    debt = 0
    out = []
    for ch in word:
        if ch == "1":
            debt += DEBT_ODD_INCREMENT
        elif ch == "0":
            debt += DEBT_EVEN_INCREMENT
        else:
            raise ValueError("word must contain only 0 and 1")
        out.append(debt)
    return tuple(out)


def every_prefix_debt_positive(word: str) -> bool:
    return all(d > 0 for d in parity_debt_trace(word))


def parity_debt_min(word: str) -> int | None:
    trace = parity_debt_trace(word)
    return min(trace) if trace else None


def parity_debt_end(word: str) -> int:
    trace = parity_debt_trace(word)
    return trace[-1] if trace else 0


def extend_prefix(state: ParityPrefixState, source_parity: int) -> ParityPrefixState:
    if source_parity not in (0, 1):
        raise ValueError("source_parity must be 0 or 1")
    add_high_bit = (state.image & 1) ^ source_parity
    residue = state.residue + (add_high_bit << state.length)
    source = state.image + add_high_bit * state.power3
    image = source // 2 if (source & 1) == 0 else (3 * source + 1) // 2
    return ParityPrefixState(
        residue=residue,
        image=image,
        length=state.length + 1,
        odd_steps=state.odd_steps + source_parity,
        power3=state.power3 * (3 if source_parity else 1),
    )


def state_for_parity_word(word: str) -> ParityPrefixState:
    state = ParityPrefixState()
    for ch in word:
        if ch not in "01":
            raise ValueError("word must contain only 0 and 1")
        state = extend_prefix(state, int(ch))
    return state


def residue_for_parity_word(word: str) -> int:
    return state_for_parity_word(word).residue


def validate_parity_word(n: int, word: str) -> bool:
    if n <= 0:
        raise ValueError("n must be positive")
    x = n
    for ch in word:
        if ch not in "01":
            raise ValueError("word must contain only 0 and 1")
        if (x & 1) != int(ch):
            return False
        x = shortened_step(x)
    return True


def canonical_first_descent(word: str) -> int | None:
    state = ParityPrefixState()
    for j, ch in enumerate(word, 1):
        if ch not in "01":
            raise ValueError("word must contain only 0 and 1")
        state = extend_prefix(state, int(ch))
        if state.residue > 0 and state.image < state.residue:
            return j
    return None
