"""Provenance-aware local basin cache."""

from __future__ import annotations

from dataclasses import dataclass
from typing import Iterable

from collatz_divergence_machine.core.map import shortened_step


@dataclass(frozen=True)
class BasinEntry:
    distance_to_one: int
    provenance: str


class BasinCache:
    """Cache exact local proofs that values reach 1."""

    def __init__(self) -> None:
        self._entries: dict[int, BasinEntry] = {
            1: BasinEntry(distance_to_one=0, provenance="axiom_terminal")
        }

    def get(self, n: int) -> BasinEntry | None:
        return self._entries.get(n)

    def __contains__(self, n: int) -> bool:
        return n in self._entries

    def __len__(self) -> int:
        return len(self._entries)

    def add_verified_path(self, path: Iterable[int], provenance: str = "local_exact") -> None:
        values = list(path)
        if not values:
            raise ValueError("path must be nonempty")
        terminal = values[-1]
        terminal_entry = self.get(terminal)
        if terminal_entry is None:
            raise ValueError("terminal state is not trusted")
        for a, b in zip(values, values[1:]):
            if shortened_step(a) != b:
                raise ValueError("path contains a non-Collatz transition")
        distance = terminal_entry.distance_to_one
        for n in reversed(values[:-1]):
            distance += 1
            existing = self.get(n)
            if existing is not None and existing.distance_to_one != distance:
                raise ValueError("inconsistent basin distance")
            self._entries[n] = BasinEntry(distance, provenance)

    def snapshot(self) -> dict[int, BasinEntry]:
        return dict(self._entries)
