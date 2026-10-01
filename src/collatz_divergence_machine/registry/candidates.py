"""Append-only JSONL candidate registry."""

from __future__ import annotations

import json
from pathlib import Path
from typing import Any


def _existing_ids(path: Path) -> list[int]:
    if not path.exists():
        return []
    ids = []
    for line in path.read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        obj = json.loads(line)
        ident = obj.get("candidate_id", "")
        if ident.startswith("CDM-"):
            ids.append(int(ident.split("-")[1]))
    return ids


def next_candidate_id(path: str | Path) -> str:
    path = Path(path)
    values = _existing_ids(path)
    return f"CDM-{(max(values, default=0)+1):08d}"


def append_candidate(path: str | Path, record: dict[str, Any]) -> None:
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("a", encoding="utf-8") as f:
        f.write(json.dumps(record, sort_keys=True) + "\n")
