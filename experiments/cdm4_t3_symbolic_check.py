"""CDM4-T3: frozen, tiny exact identity checks; not a scientific search.

Envelope frozen before execution: the blocks (1, 2), (2, 1), their
concatenation, and levels 1, 2, 3 of the single analytically selected
Thue-Morse substitution. At most 32 symbols for the explicit return check.
No starting-integer population, trajectory loop, random input, scoring,
enumeration of words/substitutions, or configurable depth is provided.
The infinite theorems are proved in CDM4_T3_REPORT.md, not by this script.
Run from the repository root: python experiments/cdm4_t3_symbolic_check.py
"""

from fractions import Fraction
import json


def data(word):
    k, B, C = 0, 0, 0
    for b in word:
        assert b >= 1
        C = 3 * C + 2**B
        B += b
        k += 1
    return k, B, 3**k, 2**B, C


def closed_constant(word):
    return sum(3 ** (len(word) - 1 - j) * 2 ** sum(word[:j])
               for j in range(len(word)))


def compose(u, v):
    k, B, P, Q, C = u
    l, D, S, H, E = v
    return k + l, B + D, P * S, Q * H, S * C + Q * E


def matrix_product(a, b):
    return tuple(tuple(sum(a[i][h] * b[h][j] for h in range(2))
                       for j in range(2)) for i in range(2))


def matrix(d):
    return ((d[2], d[4]), (0, d[3]))


def cylinder(d):
    _, _, P, Q, C = d
    R = (pow(P, -1, 2 * Q) * (Q - C)) % (2 * Q)
    assert (P * R + C) % Q == 0
    Y = (P * R + C) // Q
    assert R % 2 == Y % 2 == 1
    return R, Y


def append(prefix, block):
    _, _, p, q, _ = prefix
    _, B, P, Q, C = block
    R, Y = cylinder(prefix)
    r, _ = cylinder(block)
    D = (pow(p, -1, Q) * ((r - Y) // 2)) % Q
    if B:
        alternate = (pow(p * P, -1, Q)
                     * (2 ** (B - 1) - (P * Y + C) // 2)) % Q
        assert D == alternate
    Rnew = R + 2 * q * D
    numerator = P * Y + C + 2 * p * P * D
    assert numerator % Q == 0
    Ynew = numerator // Q
    assert (Rnew, Ynew) == cylinder(compose(prefix, block))
    assert Fraction(Rnew, 2 * q * Q) == (Fraction(R, 2 * q) + D) / Q
    return D


def main():
    u, v = (1, 2), (2, 1)
    e = data(())
    du, dv, duv = data(u), data(v), data(u + v)
    assert duv == compose(du, dv)
    assert matrix(duv) == matrix_product(matrix(dv), matrix(du))
    hu, su = Fraction(-du[4], du[2]), Fraction(du[3], du[2])
    hv, sv = Fraction(-dv[4], dv[2]), Fraction(dv[3], dv[2])
    assert Fraction(-duv[4], duv[2]) == hu + su * hv
    assert Fraction(duv[3], duv[2]) == su * sv
    assert append(e, duv) == append(e, du) + du[3] * append(du, dv)

    level0, level1 = u, v
    d0, d1 = du, dv
    rows = []
    for j in (1, 2, 3):
        L = 2**j
        assert len(level0) == len(level1) == L
        assert data(level0) == d0 and data(level1) == d1
        assert d0[4] == closed_constant(level0)
        assert d1[4] == closed_constant(level1)
        assert d0[2:4] == d1[2:4] == (3**L, 2 ** (3 * L // 2))
        # Independent digit-sum formula checks the selected return, not a search.
        fixed = tuple(1 + (n.bit_count() % 2) for n in range(4 * L))
        assert fixed[:L] == fixed[3 * L:4 * L] == level0
        assert sum(fixed[:L]) == 3 * L // 2
        assert sum(fixed[:3 * L]) == 9 * L // 2
        R, Y = cylinder(d0)
        prefix = e
        carry_sum = 1
        for b in level0:
            D = append(prefix, data((b,)))
            carry_sum += 2 * prefix[3] * D
            prefix = compose(prefix, data((b,)))
        assert carry_sum == R
        rows.append({"level": j, "valuation_length": L, "A": d0[1],
                     "C": d0[4], "R": R, "Y": Y})
        if j < 3:
            # Ordered pair recurrence for the two complementary blocks.
            next0, next1 = compose(d0, d1), compose(d1, d0)
            level0, level1 = level0 + level1, level1 + level0
            append(d0, d1)
            d0, d1 = next0, next1

    assert 27 < 64  # Exact exponential margin in the Thue-Morse proof.
    print(json.dumps({
        "session": "CDM4-T3", "status": "FINITE-VERIFIED",
        "purpose": "fixed symbolic identity fixtures only; no infinite proof by computation",
        "scientific_starts_generated": 0, "scientific_trajectories_executed": 0,
        "substitutions_analyzed": 1, "maximum_substitution_level_checked": 3,
        "maximum_symbol_count_for_return_check": 32,
        "checks": ["closed affine constant", "ordered block matrix product",
                   "inverse affine cocycle", "block lift quotient",
                   "exact odd endpoint", "mixed-radix composition",
                   "normalized representative", "substitution pair recurrence",
                   "specified prefix return", "mixed-radix finite sum"],
        "thue_morse_fixtures": rows,
        "explicit_candidate_found": False, "unbounded_orbit_found": False,
        "counterexample_claimed": False
    }, indent=2, sort_keys=True))


if __name__ == "__main__":
    main()
