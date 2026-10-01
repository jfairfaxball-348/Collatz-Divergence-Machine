from collatz_divergence_machine.basin.cache import BasinCache
from collatz_divergence_machine.trajectories.engine import evaluate, cache_resolved_prefix, StopReason


def test_cache_resolution_and_merge():
    cache = BasinCache()
    r7 = evaluate(7, max_steps=100, max_peak_bits=100, cache=cache)
    assert r7.stop_reason == StopReason.TRUSTED_BASIN
    assert r7.basin_hit == 1
    cache_resolved_prefix(r7, cache)
    r14 = evaluate(14, max_steps=10, max_peak_bits=100, cache=cache)
    assert r14.stop_reason == StopReason.TRUSTED_BASIN
    assert r14.basin_hit == 7
    assert r14.merge_depth == 1


def test_step_limit_is_not_divergence():
    cache = BasinCache()
    r = evaluate(27, max_steps=1, max_peak_bits=100, cache=cache)
    assert r.stop_reason == StopReason.STEP_LIMIT
    assert not r.resolved_to_basin


def test_cache_rejects_bad_path():
    cache = BasinCache()
    try:
        cache.add_verified_path([3, 99, 1])
    except ValueError:
        pass
    else:
        raise AssertionError("bad path accepted")
