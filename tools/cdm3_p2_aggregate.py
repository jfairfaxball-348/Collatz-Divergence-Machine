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

def find_all(root,name):
    return sorted(Path(root).rglob(name))

def load_one(parent,name):
    p=parent/name
    return json.loads(p.read_text()) if p.exists() else None

def maxrss_kib(parent):
    p=parent/"time.txt"
    if not p.exists(): return None
    m=re.search(r"Maximum resident set size \(kbytes\):\s*(\d+)",p.read_text())
    return int(m.group(1)) if m else None

def main():
    ap=argparse.ArgumentParser();ap.add_argument("--root",required=True);ap.add_argument("--out",required=True);ap.add_argument("--manifest",required=True);args=ap.parse_args()
    groups=[];wgroups=[];prov=[];missing=[]
    for key,base in EXPECTED.items():
        bits,arm=key;tag=f"{bits}_{arm}"
        matches=[p for p in find_all(args.root,"group.json") if tag in str(p.parent)]
        if len(matches)!=1: missing.append({"group":tag,"matches":len(matches)});continue
        p=matches[0];doc=json.loads(p.read_text());g=doc["group"];g["_artifact_dir"]=str(p.parent)
        if int(g["bits"])!=bits or g["arm"]!=arm or int(g["counter_base"])!=base or int(g["counter_count"])!=COUNT:
            raise SystemExit(f"frozen group mismatch {tag}: {g}")
        groups.append((doc,g,p.parent))
        d=load_one(p.parent,"checkpoint.json")
        if d: wgroups.append({"bits":bits,"arm":arm,"counter_base":base,"checkpoint_sha256":sha256(p.parent/"checkpoint.chk"),"config_digest":d["config_digest"],"unit_size":d["unit_size"],"unit_count":d["unit_count"],"records":d["records"]})
        q=load_one(p.parent,"provenance.json")
        if q: prov.append(q)
    def S(k): return sum(int(g[k]) for _,g,_ in groups)
    exceptions=[doc["exceptional_candidate"] for doc,_,_ in groups if doc.get("exceptional_candidate")]
    all_complete=(len(groups)==6 and all(int(g["complete_work_units"])==int(g["total_work_units"]) for _,g,_ in groups))
    generated=S("generated") if groups else 0
    cpu=sum(float(g["cpu_seconds"]) for _,g,_ in groups)
    starts=[float(doc.get("start_time_epoch",0)) for doc,_,_ in groups]
    ends=[float(doc.get("start_time_epoch",0))+float(g["wall_seconds"]) for doc,g,_ in groups]
    active_wall=(max(ends)-min(starts)) if starts else 0.0
    rss=[maxrss_kib(p) for _,_,p in groups];rss=[x for x in rss if x is not None]
    if exceptions: classification="P2-EXCEPTIONAL-FREEZE"
    elif not all_complete or generated!=60_000_000: classification="P2-RESOURCE-STOP"
    else: classification="P2-ORDINARY-NULL"
    resource_ok=(cpu<=3600.0 and active_wall<=900.0 and (sum(rss)<=1048576 if rss else True))
    result={
      "schema":"CDM3-P2-result-v1","campaign_id":"CDM3-P2-20261002","claim_status":"COMPUTATIONAL-EVIDENCE",
      "classification":classification,"counterexample_claimed":False,"gpu_execution":False,
      "frozen_population":{"bits":[256,512,1024],"generated_per_arm_per_band":COUNT,"generated_total":60_000_000,"counter_bases":{f"{b}{a}":v for (b,a),v in EXPECTED.items()}},
      "groups":[g for _,g,_ in sorted(groups,key=lambda x:(int(x[1]["bits"]),x[1]["arm"]))],
      "summary":{"generated":generated,"pretrajectory_kills":S("pretrajectory_kills") if groups else 0,"trajectories_executed":S("trajectories_executed") if groups else 0,
                 "basin_hits":S("basin_hits") if groups else 0,"cache_hits":S("cache_hits") if groups else 0,"frozen_candidates":S("frozen_candidates") if groups else 0,
                 "repeats":S("repeats") if groups else 0,"bigint_escapes":S("bigint_escapes") if groups else 0,"invariant_failures":S("invariant_failures") if groups else 0,
                 "resource_stops":S("resource_stops") if groups else 0,"u_steps_total":S("u_steps_total") if groups else 0,"shortened_step_equiv_total":S("shortened_step_equiv_total") if groups else 0},
      "resource_use":{"active_scientific_wall_seconds":active_wall,"summed_process_cpu_seconds":cpu,"summed_group_max_rss_kib":sum(rss) if rss else None,
                      "wall_ceiling_seconds":900,"cpu_ceiling_seconds":3600,"ram_ceiling_kib":1048576,"within_frozen_envelope":resource_ok},
      "worker_model":{"parallel_group_jobs":6,"worker_threads_per_group":1,"maximum_concurrent_worker_threads":6},
      "exceptional_candidates":exceptions,"candidate_entered_structural_analysis":bool(exceptions),
      "counterexample_found_or_claimed":False,"further_cpu_scaling_authorized":False,"gpu_benchmark_authorized":False,
      "provenance_by_group":prov,"missing_groups":missing,
      "integrity":{"all_six_groups_present":len(groups)==6,"all_work_units_complete":all_complete,"work_unit_manifest_groups":len(wgroups)}
    }
    Path(args.out).write_text(json.dumps(result,indent=2,sort_keys=True)+"\n")
    manifest={"schema":"CDM3-P2-work-unit-digest-manifest-v1","generator_version":"CDM3-P1-gen-v1","groups":wgroups}
    Path(args.manifest).write_text(json.dumps(manifest,indent=2,sort_keys=True)+"\n")
    print(json.dumps({"classification":classification,"summary":result["summary"],"resource_use":result["resource_use"],"exceptions":len(exceptions)},sort_keys=True))
    bad=bool(missing) or not resource_ok
    raise SystemExit(2 if bad else 0)
if __name__=="__main__": main()
