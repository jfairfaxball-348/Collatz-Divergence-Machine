#!/usr/bin/env python3
import argparse, hashlib, json, re
from pathlib import Path

EXPECTED={(256,"U"):100_000_000,(256,"L"):112_000_003,(512,"U"):124_000_006,(512,"L"):136_000_009,(1024,"U"):148_000_012,(1024,"L"):160_000_015}
COUNT=10_000_000

def sha256(path):
    h=hashlib.sha256()
    with open(path,"rb") as f:
        for c in iter(lambda:f.read(1<<20),b""): h.update(c)
    return h.hexdigest()

def load_json(path, sanitize_nul=False):
    data=Path(path).read_bytes()
    if sanitize_nul: data=data.replace(b"\x00",b"?")
    return json.loads(data.decode())

def maxrss_kib(parent):
    p=parent/"time.txt"
    if not p.exists(): return None
    m=re.search(r"Maximum resident set size \(kbytes\):\s*(\d+)",p.read_text())
    return int(m.group(1)) if m else None

def sum_records(records,key): return sum(int(r[key]) for r in records)
def max_records(records,key): return max((int(r[key]) for r in records),default=0)

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",required=True);ap.add_argument("--out",required=True);ap.add_argument("--manifest",required=True)
    args=ap.parse_args(); root=Path(args.root)
    groups=[]; manifests=[]; prov=[]; missing=[]; observed_cpu=0.0; starts=[]; ends=[]; rss=[]
    for (bits,arm),base in EXPECTED.items():
        tag=f"{bits}-{arm}"
        matches=[p for p in root.rglob("group.json") if tag in str(p.parent)]
        if len(matches)!=1: missing.append({"group":tag,"matches":len(matches)});continue
        p=matches[0]; parent=p.parent; doc=load_json(p); observed=doc["group"]
        if int(observed["bits"])!=bits or observed["arm"]!=arm or int(observed["counter_base"])!=base or int(observed["counter_count"])!=COUNT:
            raise SystemExit(f"frozen group mismatch {tag}: {observed}")
        cp=load_json(parent/"checkpoint.json",sanitize_nul=True)
        records=cp["records"]; complete=[r for r in records if r["complete"]]
        incomplete=[r for r in records if (not r["complete"]) and int(r.get("generated",0))>0]
        generated=sum_records(complete,"generated"); executed=sum_records(complete,"executed")
        g={
          "bits":bits,"arm":arm,"counter_base":base,"planned_count":COUNT,
          "completed_counter_count":generated,"completed_work_units":len(complete),"total_work_units":int(cp["unit_count"]),
          "completed_interval":[base,base+generated],
          "unfinished_interval":[base+generated,base+COUNT] if generated<COUNT else None,
          "interrupted_partial_records":incomplete,
          "pretrajectory_kills":sum_records(complete,"pruned"),"trajectories_executed":executed,
          "basin_hits":sum_records(complete,"basin_hits"),"cache_hits":sum_records(complete,"cache_hits"),
          "frozen_candidates":sum_records(complete,"freezes"),"repeats":sum_records(complete,"repeats"),
          "bigint_escapes":sum_records(complete,"escapes"),"invariant_failures":sum_records(complete,"invariant_failures"),
          "u_steps_total":sum_records(complete,"u_steps"),"shortened_step_equiv_total":sum_records(complete,"shortened_steps"),
          "mean_u_steps_per_executed_trajectory":(sum_records(complete,"u_steps")/executed if executed else 0.0),
          "mean_u_steps_per_generated_start":(sum_records(complete,"u_steps")/generated if generated else 0.0),
          "max_u_steps":max_records(complete,"max_u_steps"),"max_shortened_steps":max_records(complete,"max_shortened_steps"),
          "max_peak_bits":max_records(complete,"max_peak_bits"),"max_peak_excess":max_records(complete,"max_peak_excess"),
          "complete_work_wall_sum":sum(float(r["wall_seconds"]) for r in complete),
          "complete_work_cpu_sum":sum(float(r["cpu_seconds"]) for r in complete),
          "observed_process_wall_seconds":float(observed["wall_seconds"]),"observed_process_cpu_seconds":float(observed["cpu_seconds"]),
          "observed_sample_quantiles_u_steps":observed["sample_quantiles_u_steps"],
          "observed_sample_scope_generated":int(observed["generated"]),
          "observed_sample_exact_for_authoritative_population":bool(generated==int(observed["generated"])),
          "resource_ceiling_stop":bool(doc.get("resource_ceiling_stop",False)),
          "checkpoint_sha256":sha256(parent/"checkpoint.chk"),"config_digest":cp["config_digest"],
        }
        groups.append(g)
        manifests.append({"bits":bits,"arm":arm,"counter_base":base,"checkpoint_sha256":g["checkpoint_sha256"],
                          "config_digest":cp["config_digest"],"unit_size":cp["unit_size"],"unit_count":cp["unit_count"],"records":records})
        q=load_json(parent/"provenance.json");prov.append(q)
        observed_cpu+=float(observed["cpu_seconds"])
        record_epoch=float(doc.get("start_time_epoch",0)) # historical field name; written after group run
        if record_epoch>0:
            starts.append(record_epoch-float(observed["wall_seconds"]));ends.append(record_epoch)
        r=maxrss_kib(parent)
        if r is not None:rss.append(r)
    def S(k): return sum(int(g[k]) for g in groups)
    completed=S("completed_counter_count"); exceptions=sum(int(g["frozen_candidates"]) for g in groups)
    all_complete=(len(groups)==6 and completed==60_000_000 and all(g["completed_work_units"]==g["total_work_units"] for g in groups))
    classification="P2-EXCEPTIONAL-FREEZE" if exceptions else ("P2-ORDINARY-NULL" if all_complete else "P2-RESOURCE-STOP")
    active_wall=(max(ends)-min(starts)) if starts else 0.0
    resource_ok=(observed_cpu<=3600.0 and active_wall<=900.0 and (sum(rss)<=1048576 if rss else True))
    result={
      "schema":"CDM3-P2-result-v2","campaign_id":"CDM3-P2-20261002","claim_status":"COMPUTATIONAL-EVIDENCE",
      "classification":classification,"counterexample_claimed":False,"authoritative_counts_include_complete_work_units_only":True,
      "planned_population":{"generated_total":60_000_000,"generated_per_arm_per_band":COUNT,"counter_bases":{f"{b}{a}":v for (b,a),v in EXPECTED.items()}},
      "completed_population":{"generated_total":completed,"unfinished_total":60_000_000-completed},
      "groups":sorted(groups,key=lambda g:(g["bits"],g["arm"])),
      "summary":{"generated_completed_work_units":completed,"pretrajectory_kills":S("pretrajectory_kills"),
                 "trajectories_executed":S("trajectories_executed"),"basin_hits":S("basin_hits"),"cache_hits":S("cache_hits"),
                 "frozen_candidates":S("frozen_candidates"),"repeats":S("repeats"),"bigint_escapes":S("bigint_escapes"),
                 "invariant_failures":S("invariant_failures"),"u_steps_total":S("u_steps_total"),
                 "shortened_step_equiv_total":S("shortened_step_equiv_total"),
                 "mean_u_steps_per_executed_trajectory":(S("u_steps_total")/S("trajectories_executed") if S("trajectories_executed") else 0.0),
                 "mean_u_steps_per_generated_start":(S("u_steps_total")/completed if completed else 0.0),
                 "max_u_steps":max((g["max_u_steps"] for g in groups),default=0),
                 "max_shortened_steps":max((g["max_shortened_steps"] for g in groups),default=0),
                 "max_peak_bits":max((g["max_peak_bits"] for g in groups),default=0),
                 "max_peak_excess":max((g["max_peak_excess"] for g in groups),default=0)},
      "resource_use":{"active_scientific_wall_seconds_derived":active_wall,"summed_process_cpu_seconds":observed_cpu,
                      "summed_group_max_rss_kib":sum(rss) if rss else None,"wall_ceiling_seconds":900,
                      "cpu_ceiling_seconds":3600,"ram_ceiling_kib":1048576,"within_frozen_envelope":resource_ok},
      "worker_model":{"parallel_group_jobs":6,"worker_threads_per_group":1,"maximum_concurrent_worker_threads":6},
      "provenance_by_group":prov,"missing_groups":missing,"candidate_entered_structural_analysis":bool(exceptions),
      "counterexample_found_or_claimed":False,"further_cpu_scaling_authorized":False,"gpu_benchmark_authorized":False,
      "integrity":{"all_six_group_artifacts_present":len(groups)==6,"all_work_units_complete":all_complete,"work_unit_manifest_groups":len(manifests),
                   "aggregate_counts_exclude_interrupted_incomplete_work_units":True}
    }
    Path(args.out).write_text(json.dumps(result,indent=2,sort_keys=True)+"\n")
    Path(args.manifest).write_text(json.dumps({"schema":"CDM3-P2-work-unit-digest-manifest-v2","generator_version":"CDM3-P1-gen-v1","groups":manifests},indent=2,sort_keys=True)+"\n")
    print(json.dumps({"classification":classification,"completed":completed,"unfinished":60_000_000-completed,"resource_use":result["resource_use"]},sort_keys=True))
    bad=bool(missing) or not resource_ok
    raise SystemExit(2 if bad else 0)
if __name__=="__main__": main()
