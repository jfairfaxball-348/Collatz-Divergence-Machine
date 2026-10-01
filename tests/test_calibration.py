from experiments.calibration import run


def test_small_calibration_end_to_end(tmp_path):
    report = run(tmp_path, 1, 32, repository_commit="TEST")
    assert report["screened"] == 32
    assert report["counterexample_claimed"] is False
    assert (tmp_path / "state" / "compute_ledger.jsonl").read_text().strip()
    assert (tmp_path / "state" / "experiments.jsonl").read_text().strip()
