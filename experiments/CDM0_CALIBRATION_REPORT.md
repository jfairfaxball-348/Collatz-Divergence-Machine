# CDM0 Calibration Report

**Classification:** FINITE-VERIFIED infrastructure calibration.

**Counterexample claim:** **NONE.** This was deliberately not a serious divergence search.

## Frozen calibration

- Baseline repository commit: `8be91c97ac340b6000335cd0288f84cebe5b6a49`
- Domain: `1..128`
- L0 budget: 8 exact shortened-map steps/candidate
- L1 budget: 512 exact shortened-map steps/candidate
- Peak ceiling: 4096 bits
- L0->L1 quota: 32
- L1->L2 quota: 0
- Randomness: none

## Result

- 128 candidates screened.
- 2 workflow candidates promoted to L1: `27` and `127`, solely to exercise promotion/registry logic.
- 128/128 candidates resolved to the locally verified `1`-basin.
- 0 repeated-state events.
- Largest observed peak bit length: 13.
- Longest exact promoted prefix before a trusted cache merge: 59 steps.
- Strongest peak/start ratio: `4616/27`.
- Local cache ended with 222 exact basin entries.
- Measured sandbox throughput: approximately 50,677 candidates/second for this tiny workload. This figure is environment-specific and is not extrapolated.

The two promoted candidates are ordinary finite calibration cases and have **no divergence significance**.

## Reproduction

From the repository root:

```bash
python -m pip install -e .
python experiments/calibration.py --root . --start 1 --stop 128 --repository-commit 8be91c97ac340b6000335cd0288f84cebe5b6a49
pytest
```

Machine-readable records:

- `state/candidates.jsonl`
- `state/experiments.jsonl`
- `state/compute_ledger.jsonl`

Exact timing varies across machines; candidate identities and exact trajectory/metric results are deterministic.

## Validation covered

The test suite validates known trajectories, an independent transition implementation, arbitrary-precision steps, basin/cache correctness, trajectory merging, exact rational metrics, parity-word affine replay, promotion-state transitions, persistent candidate IDs, and a miniature end-to-end calibration.

No finite result in this report certifies or suggests an unbounded orbit.
