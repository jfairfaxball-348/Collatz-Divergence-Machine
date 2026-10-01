from itertools import product

from collatz_divergence_machine.filters.cdm2 import (
    MergeWitness,
    completed_odd_to_odd_valuation_load,
    deterministic_lift,
    first_path_merge_witness,
    mod9_smaller_preimage,
)
from collatz_divergence_machine.symbolic.parity_prefix import (
    every_prefix_debt_positive,
    parity_debt_end,
    parity_debt_min,
    parity_debt_trace,
    residue_for_parity_word,
    validate_parity_word,
)


def test_debt_metrics():
    assert parity_debt_trace("110") == (179, 358, 52)
    assert every_prefix_debt_positive("110")
    assert parity_debt_min("110") == 52
    assert parity_debt_end("110") == 52


def test_residue_bijection_and_roundtrip():
    k = 8
    residues = set()
    for bits in product("01", repeat=k):
        word = "".join(bits)
        residue = residue_for_parity_word(word)
        residues.add(residue)
        representative = residue if residue else 1 << k
        assert validate_parity_word(representative, word)
    assert residues == set(range(1 << k))


def test_mod9_smaller_preimage_witnesses():
    for n in [11, 13, 14, 17, 20, 22, 23]:
        if n % 9 in {2, 4, 5, 8}:
            assert mod9_smaller_preimage(n) is not None


def test_path_merge_example():
    witness = first_path_merge_witness(15, max_steps=6)
    assert witness == MergeWitness(6, 20, 13)


def test_deterministic_lift():
    n = deterministic_lift(123456, k=24)
    assert 1 << 59 <= n < 1 << 60
    assert n % (1 << 24) == 123456


def test_completed_valuation_load():
    assert completed_odd_to_odd_valuation_load("1011001") == (6, 3)
