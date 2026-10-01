import json

from collatz_divergence_machine.promotion.policy import calibration_l0_decision
from collatz_divergence_machine.registry.candidates import append_candidate, next_candidate_id


def test_promotion_reason_is_explicit():
    d = calibration_l0_decision(True, "test reason")
    assert d.promote
    assert d.to_stage == "L1"
    assert d.expected_information_gain


def test_candidate_ids_persist(tmp_path):
    p = tmp_path / "candidates.jsonl"
    assert next_candidate_id(p) == "CDM-00000001"
    append_candidate(p, {"candidate_id": "CDM-00000001", "starting_integer": "7"})
    assert next_candidate_id(p) == "CDM-00000002"
    row = json.loads(p.read_text().strip())
    assert row["starting_integer"] == "7"
