#!/usr/bin/env python3
import json, sys
from pathlib import Path

P2 = [
    {"bits":256,"arm":"U","start":100_000_000,"count":10_000_000},
    {"bits":256,"arm":"L","start":112_000_003,"count":10_000_000},
    {"bits":512,"arm":"U","start":124_000_006,"count":10_000_000},
    {"bits":512,"arm":"L","start":136_000_009,"count":10_000_000},
    {"bits":1024,"arm":"U","start":148_000_012,"count":10_000_000},
    {"bits":1024,"arm":"L","start":160_000_015,"count":10_000_000},
]
for x in P2: x["end"]=x["start"]+x["count"]

def overlap(a,b):
    return max(a["start"],b["start"]) < min(a["end"],b["end"])

def main():
    src=Path(sys.argv[1] if len(sys.argv)>1 else "experiments/CDM3_P1_WORK_UNIT_DIGESTS.json")
    out=Path(sys.argv[2] if len(sys.argv)>2 else "CDM3_P2_COUNTER_AUDIT.json")
    p1raw=json.loads(src.read_text())
    p1=[]
    for g in p1raw["groups"]:
        count=int(g["unit_size"])*int(g["unit_count"])
        p1.append({"bits":int(g["bits"]),"arm":g["arm"],"start":int(g["counter_base"]),"count":count,"end":int(g["counter_base"])+count})
    pp=[]
    ok=True
    for i,a in enumerate(P2):
        for b in P2[i+1:]:
            ov=overlap(a,b); ok &= not ov
            pp.append({"a":f'{a["bits"]}{a["arm"]}',"b":f'{b["bits"]}{b["arm"]}',"overlap":ov,"gap":max(b["start"]-a["end"],a["start"]-b["end"]) if not ov else None})
    p1p2=[]
    for a in P2:
        for b in p1:
            ov=overlap(a,b); ok &= not ov
            p1p2.append({"p2":f'{a["bits"]}{a["arm"]}',"p1":f'{b["bits"]}{b["arm"]}',"overlap":ov})
    max_p1=max(x["end"] for x in p1)
    min_p2=min(x["start"] for x in P2)
    result={
        "schema":"CDM3-P2-counter-audit-v1",
        "pass":bool(ok),
        "interval_convention":"half-open [start,end)",
        "p1_intervals":sorted(p1,key=lambda x:x["start"]),
        "p2_intervals":P2,
        "p2_pairwise_checks":pp,
        "p1_p2_checks":p1p2,
        "global_separation":{"max_p1_end":max_p1,"min_p2_start":min_p2,"gap":min_p2-max_p1},
    }
    out.write_text(json.dumps(result,indent=2,sort_keys=True)+"\n")
    print(json.dumps({"pass":result["pass"],"max_p1_end":max_p1,"min_p2_start":min_p2,"gap":min_p2-max_p1}))
    raise SystemExit(0 if ok else 2)
if __name__=="__main__": main()
