from fractions import Fraction

from collatz_divergence_machine.basin.cache import BasinCache
from collatz_divergence_machine.metrics.registry import compute_metrics
from collatz_divergence_machine.symbolic.affine import compose_parity_word, parity_word
from collatz_divergence_machine.trajectories.engine import evaluate


def test_metrics_exact_ratios():
    r = evaluate(7, max_steps=100, max_peak_bits=100, cache=BasinCache())
    m = compute_metrics(r)
    assert m["max_excursion"] == 26
    assert m["peak_start_ratio"] == Fraction(26, 7)
    assert m["first_descent_time"] == 7
    assert isinstance(m["odd_step_density"], Fraction)


def test_affine_parity_word_matches_replay():
    r = evaluate(7, max_steps=6, max_peak_bits=100, cache=BasinCache())
    word = parity_word(r.states)
    aff = compose_parity_word(word)
    assert aff.apply_if_integral(7) == r.states[-1]
    assert aff.length == len(word)
    assert aff.odd_steps == word.count("1")
