from collatz_divergence_machine.core.map import shortened_step, odd_to_odd_step
from collatz_divergence_machine.core.reference import reference_step


def test_known_shortened_trajectory():
    n = 7
    expected = [7, 11, 17, 26, 13, 20, 10, 5, 8, 4, 2, 1]
    got = [n]
    for _ in range(len(expected) - 1):
        n = shortened_step(n)
        got.append(n)
    assert got == expected


def test_independent_step_matches():
    for n in range(1, 1000):
        assert shortened_step(n) == reference_step(n)


def test_odd_to_odd():
    assert odd_to_odd_step(7) == (11, 1)
    assert odd_to_odd_step(5) == (1, 4)


def test_arbitrary_precision():
    n = (1 << 5000) + 1
    out = shortened_step(n)
    assert out == (3 * n + 1) // 2
    assert out.bit_length() > 4999
