#!/usr/bin/env python3
import argparse
import hashlib
import json
import math
import os
import platform
import statistics
import subprocess
import time
from pathlib import Path

VERSION = "CDM3-B1-runner-v1"
BITS = (256, 512, 1024)
ONE_THREAD_STARTS = 4096
ONE_THREAD_PASSES = 5
SCALING_STARTS = 16384
SCALING_WORKERS = (1, 2, 4, 8)
WALL_LIMIT_SECONDS = 300.0
CPU_LIMIT_SECONDS = 1200.0
RECOVERY_THRESHOLD = 0.90
MATERIAL_GAIN_THRESHOLD = 1.10

COMPARE_FIELDS = (
    "starts", "u_steps", "shortened_steps", "mean_u_steps", "max_u_steps",
    "max_peak_bits", "basin_hits", "overflow_escapes", "repeats",
    "invariant_failures", "digest",
)

def sha256(path: str) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()

def run_json_lines(cmd):
    p = subprocess.run(cmd, text=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, check=True)
    rows = []
    for line in p.stdout.splitlines():
        line = line.strip()
        if line:
            rows.append(json.loads(line))
    return rows, p.stderr

def median_by_bits(rows, field):
    out = {}
    for bits in BITS:
        vals = [float(r[field]) for r in rows if int(r["bits"]) == bits]
        if not vals:
            raise RuntimeError(f"missing {field} for bits={bits}")
        out[str(bits)] = statistics.median(vals)
    return out

def geometric_mean(vals):
    return math.exp(sum(math.log(v) for v in vals) / len(vals))

def aggregate_scaling(rows, workers):
    selected = [r for r in rows if int(r["workers"]) == workers]
    if len(selected) != len(BITS):
        raise RuntimeError(f"expected 3 scaling rows for workers={workers}")
    u = sum(int(r["u_steps"]) for r in selected)
    sh = sum(int(r["shortened_steps"]) for r in selected)
    starts = sum(int(r["starts"]) for r in selected)
    wall = sum(float(r["wall_seconds"]) for r in selected)
    cpu = sum(float(r["cpu_seconds"]) for r in selected)
    return {
        "workers": workers,
        "starts": starts,
        "u_steps": u,
        "shortened_steps": sh,
        "wall_seconds": wall,
        "cpu_seconds": cpu,
        "starts_per_s": starts / wall,
        "u_steps_per_s": u / wall,
        "shortened_steps_per_s": sh / wall,
    }

def read_cpu_model():
    try:
        for line in Path("/proc/cpuinfo").read_text().splitlines():
            if line.lower().startswith("model name"):
                return line.split(":", 1)[1].strip()
    except OSError:
        pass
    return platform.processor() or "unknown"

def git_head():
    try:
        return subprocess.check_output(["git", "rev-parse", "HEAD"], text=True).strip()
    except Exception:
        return ""

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--base", required=True)
    ap.add_argument("--native", required=True)
    ap.add_argument("--output", required=True)
    args = ap.parse_args()

    t0 = time.monotonic()
    commands = []
    stderr_log = []

    variants = [
        ("r3", args.native, "r3"),
        ("p1", args.base, "p1"),
        ("p1-native", args.native, "p1"),
        ("opt", args.native, "opt"),
    ]
    raw = {}
    for label, exe, kernel in variants:
        cmd = [exe, "--bench", kernel, str(ONE_THREAD_STARTS), str(ONE_THREAD_PASSES)]
        commands.append(cmd)
        rows, err = run_json_lines(cmd)
        if len(rows) != len(BITS) * ONE_THREAD_PASSES:
            raise RuntimeError(f"{label}: unexpected row count {len(rows)}")
        for r in rows:
            r["implementation"] = label
        raw[label] = rows
        stderr_log.append({"implementation": label, "stderr": err})

    # Exact equality gate across all four implementations, pass-by-pass.
    ref = {(int(r["bits"]), int(r["pass"])): r for r in raw["r3"]}
    equality_failures = []
    for label in ("p1", "p1-native", "opt"):
        for r in raw[label]:
            key = (int(r["bits"]), int(r["pass"]))
            q = ref[key]
            bad = {f: (q[f], r[f]) for f in COMPARE_FIELDS if q[f] != r[f]}
            if bad:
                equality_failures.append({"implementation": label, "bits": key[0], "pass": key[1], "fields": bad})
    if equality_failures:
        raise RuntimeError("digest/output equality failed: " + json.dumps(equality_failures[:3]))

    medians = {}
    for label in raw:
        medians[label] = {
            "u_steps_per_s": median_by_bits(raw[label], "u_steps_per_s"),
            "starts_per_s": median_by_bits(raw[label], "starts_per_s"),
            "shortened_steps_per_s": median_by_bits(raw[label], "shortened_steps_per_s"),
            "wall_seconds": median_by_bits(raw[label], "wall_seconds"),
            "cpu_seconds": median_by_bits(raw[label], "cpu_seconds"),
        }

    recovery = {}
    native_gain = {}
    no_copy_gain = {}
    for bits in BITS:
        b = str(bits)
        r3 = medians["r3"]["u_steps_per_s"][b]
        recovery[b] = {
            "p1": medians["p1"]["u_steps_per_s"][b] / r3,
            "p1-native": medians["p1-native"]["u_steps_per_s"][b] / r3,
            "opt": medians["opt"]["u_steps_per_s"][b] / r3,
        }
        native_gain[b] = medians["p1-native"]["u_steps_per_s"][b] / medians["p1"]["u_steps_per_s"][b]
        no_copy_gain[b] = medians["opt"]["u_steps_per_s"][b] / medians["p1-native"]["u_steps_per_s"][b]

    safe_labels = ("p1", "p1-native", "opt")
    safe_scores = {}
    for label in safe_labels:
        safe_scores[label] = geometric_mean([medians[label]["u_steps_per_s"][str(b)] for b in BITS])
    best = max(safe_scores, key=safe_scores.get)

    scale_exe = args.base if best == "p1" else args.native
    scale_kernel = "opt" if best == "opt" else "p1"
    scale_rows = []
    for workers in SCALING_WORKERS:
        cmd = [scale_exe, "--scale", scale_kernel, str(workers), str(SCALING_STARTS)]
        commands.append(cmd)
        rows, err = run_json_lines(cmd)
        if len(rows) != len(BITS):
            raise RuntimeError(f"scaling workers={workers}: unexpected row count")
        for r in rows:
            r["implementation"] = best
        scale_rows.extend(rows)
        stderr_log.append({"scaling_workers": workers, "stderr": err})

    # Scaling equality gate.
    scale_ref = {int(r["bits"]): r for r in scale_rows if int(r["workers"]) == 1}
    scale_failures = []
    for r in scale_rows:
        q = scale_ref[int(r["bits"])]
        for f in ("starts", "u_steps", "shortened_steps", "max_u_steps", "max_peak_bits",
                  "basin_hits", "overflow_escapes", "repeats", "invariant_failures", "digest"):
            if q[f] != r[f]:
                scale_failures.append({"workers": r["workers"], "bits": r["bits"], "field": f, "ref": q[f], "got": r[f]})
    if scale_failures:
        raise RuntimeError("scaling output mismatch: " + json.dumps(scale_failures[:3]))

    scaling = [aggregate_scaling(scale_rows, w) for w in SCALING_WORKERS]
    base_rate = scaling[0]["u_steps_per_s"]
    for x in scaling:
        x["speedup_vs_1"] = x["u_steps_per_s"] / base_rate
        x["parallel_efficiency"] = x["speedup_vs_1"] / x["workers"]

    opt_recovery = [recovery[str(b)]["opt"] for b in BITS]
    classification = "B1-A" if min(opt_recovery) >= RECOVERY_THRESHOLD else "B1-B"
    native_material = geometric_mean([native_gain[str(b)] for b in BITS]) >= MATERIAL_GAIN_THRESHOLD
    copy_material = geometric_mean([no_copy_gain[str(b)] for b in BITS]) >= MATERIAL_GAIN_THRESHOLD

    cpu_total = 0.0
    for label in raw:
        cpu_total += sum(float(r["cpu_seconds"]) for r in raw[label])
    cpu_total += sum(float(r["cpu_seconds"]) for r in scale_rows)
    wall_elapsed = time.monotonic() - t0
    if cpu_total > CPU_LIMIT_SECONDS:
        raise RuntimeError(f"CPU budget exceeded: {cpu_total:.3f}s")
    if wall_elapsed > WALL_LIMIT_SECONDS:
        raise RuntimeError(f"wall budget exceeded: {wall_elapsed:.3f}s")

    prov_rows, prov_err = run_json_lines([args.native, "--provenance"])
    provenance = prov_rows[0]
    provenance.update({
        "git_head": git_head(),
        "platform": platform.platform(),
        "machine": platform.machine(),
        "cpu_model": read_cpu_model(),
        "logical_cpu_count": os.cpu_count(),
        "benchmark_source_sha256": sha256("benchmarks/cdm3_b1_hotpath_bench.c"),
        "p1_engine_sha256": sha256("production/cdm3_p1_engine.c"),
        "p1_part0_sha256": sha256("production/cdm3_p1_part0.inc"),
        "p1_part1_sha256": sha256("production/cdm3_p1_part1.inc"),
        "p1_part2_sha256": sha256("production/cdm3_p1_part2.inc"),
        "p1_part3_sha256": sha256("production/cdm3_p1_part3.inc"),
        "runner_sha256": sha256("tools/cdm3_b1_run.py"),
        "base_executable_sha256": sha256(args.base),
        "native_executable_sha256": sha256(args.native),
    })
    if prov_err:
        stderr_log.append({"provenance_stderr": prov_err})

    result = {
        "version": VERSION,
        "date": "2026-10-01",
        "claim_status": "FINITE-VERIFIED engineering benchmark; no scientific promotion",
        "counterexample_claimed": False,
        "new_scientific_population": 0,
        "gpu_execution": False,
        "frozen_envelope": {
            "bit_lengths": list(BITS),
            "one_thread_starts_per_bit_length_per_pass": ONE_THREAD_STARTS,
            "one_thread_passes": ONE_THREAD_PASSES,
            "implementation_variants": 4,
            "scaling_workers": list(SCALING_WORKERS),
            "scaling_starts_per_bit_length": SCALING_STARTS,
            "wall_limit_seconds": WALL_LIMIT_SECONDS,
            "cpu_limit_seconds": CPU_LIMIT_SECONDS,
        },
        "provenance": provenance,
        "correctness": {
            "cross_variant_exact_equality": True,
            "scaling_exact_equality": True,
            "external_workflow_gates_required": [
                "P1 forced 4096-bit escape",
                "fixed-limb/GMP",
                "odd-only/shortened-map equivalence",
                "optimized forced-overflow preservation",
                "ASan/UBSan",
                "Python replay",
            ],
        },
        "one_thread_raw": raw,
        "one_thread_medians": medians,
        "r3_recovery_ratio": recovery,
        "native_gain_ratio_p1_native_over_p1": native_gain,
        "no_full_copy_gain_ratio_opt_over_p1_native": no_copy_gain,
        "best_exact_production_candidate": best,
        "safe_variant_geomean_u_steps_per_s": safe_scores,
        "scaling_raw": scale_rows,
        "scaling_combined": scaling,
        "hypothesis_assessment": {
            "full_state_copy": "CONFIRMED_MATERIAL" if copy_material else "NOT_MATERIAL_AT_10_PERCENT_THRESHOLD",
            "march_native": "MATERIAL" if native_material else "NOT_MATERIAL_AT_10_PERCENT_THRESHOLD",
            "material_gain_threshold": MATERIAL_GAIN_THRESHOLD,
        },
        "classification": classification,
        "classification_rule": f"B1-A iff OPT median U-step throughput is at least {RECOVERY_THRESHOLD:.0%} of side-by-side R3 at all three bit lengths; otherwise B1-B pending localization.",
        "larger_scientific_search_authorized_by_b1": classification == "B1-A",
        "gpu_benchmark_authorized_by_b1": False,
        "resource_use": {
            "benchmark_wall_elapsed_seconds": wall_elapsed,
            "summed_reported_cpu_seconds": cpu_total,
        },
        "commands": commands,
        "stderr": stderr_log,
    }

    Path(args.output).write_text(json.dumps(result, indent=2, sort_keys=True) + "\n")
    print(json.dumps({
        "classification": classification,
        "best_exact_production_candidate": best,
        "resource_use": result["resource_use"],
        "r3_recovery_ratio": recovery,
        "native_gain": native_gain,
        "no_copy_gain": no_copy_gain,
        "scaling_combined": scaling,
    }, sort_keys=True))

if __name__ == "__main__":
    main()
