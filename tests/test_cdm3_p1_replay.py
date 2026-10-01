from pathlib import Path
import runpy

MODULE = runpy.run_path(
    str(Path(__file__).resolve().parents[1] / "tools" / "cdm3_p1_replay.py"),
    run_name="cdm3_p1_replay_module",
)

def test_generator_vector_256_u():
    n = MODULE["make_start"](256, "U", 12345)
    assert format(n, "x") == "bc87e022fffa5347bcce92403447f1fb371519cf4ac93eed959da0e1de1e29db"

def test_python_replay_vector_256_u():
    n = MODULE["make_start"](256, "U", 12345)
    r = MODULE["replay"](n, 100)
    assert r == {
        "u_steps": 100,
        "shortened_steps": 186,
        "peak_bits": 258,
        "state_hex": "109ee3ea2d1d6b630abbd50b0c3aae6f4cd8b4dc5452a585681a545d15",
        "disposition": 0,
    }

def test_generator_exact_bit_length_and_odd():
    for bits in (256, 512, 1024):
        for arm in ("U", "L"):
            for counter in (0, 1, 17, 12345, 999999):
                n = MODULE["make_start"](bits, arm, counter)
                assert n.bit_length() == bits
                assert n & 1
