"""Finite replay certificate helpers; never divergence certificates."""

from __future__ import annotations

import hashlib
import json

from collatz_divergence_machine.core.reference import replay


def finite_prefix_certificate(start: int, steps: int) -> dict:
    states = replay(start, steps)
    payload = json.dumps(states, separators=(",", ":")).encode()
    return {
        "status": "RIGOROUS_FINITE_RESULT",
        "start": start,
        "steps": steps,
        "final": states[-1],
        "peak": max(states),
        "sha256_states_json": hashlib.sha256(payload).hexdigest(),
        "disclaimer": "Finite prefix only; not a divergence certificate.",
    }
