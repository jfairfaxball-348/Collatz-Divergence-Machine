#!/usr/bin/env python3
import json, statistics, sys
from pathlib import Path
BITS=(256,512,1024)
THRESHOLD=0.90
FIELDS=("starts","u_steps","shortened_steps","mean_u_steps","max_u_steps","max_peak_bits","basin_hits","overflow_escapes","repeats","invariant_failures","digest")
def rows(p): return [json.loads(x) for x in Path(p).read_text().splitlines() if x.strip()]
def main():
    if len(sys.argv)!=4: raise SystemExit("usage: B1.jsonl P2.jsonl OUT.json")
    b1=[r for r in rows(sys.argv[1]) if r.get("variant")=="opt"]
    p2=rows(sys.argv[2]); failures=[]; ratios={}; med={}
    for bits in BITS:
        rb=sorted([r for r in b1 if int(r["bits"])==bits],key=lambda r:int(r["pass"]))
        rp=sorted([r for r in p2 if int(r["bits"])==bits],key=lambda r:int(r["pass"]))
        if len(rb)!=len(rp) or not rb: failures.append({"bits":bits,"reason":"row_count"});continue
        for a,b in zip(rb,rp):
            bad={f:[a[f],b[f]] for f in FIELDS if a[f]!=b[f]}
            if bad: failures.append({"bits":bits,"pass":b["pass"],"fields":bad})
        bm=statistics.median(float(r["u_steps_per_s"]) for r in rb)
        pm=statistics.median(float(r["u_steps_per_s"]) for r in rp)
        ratios[str(bits)]=pm/bm;med[str(bits)]={"b1_opt_u_steps_per_s":bm,"p2_u_steps_per_s":pm}
        if pm/bm<THRESHOLD: failures.append({"bits":bits,"reason":"throughput_regression","ratio":pm/bm,"threshold":THRESHOLD})
    result={"schema":"CDM3-P2-integration-check-v1","threshold":THRESHOLD,"pass":not failures,"exact_output_equality":not any("fields" in x for x in failures),"median_rates":med,"p2_over_b1_ratio":ratios,"failures":failures}
    Path(sys.argv[3]).write_text(json.dumps(result,indent=2,sort_keys=True)+"\n")
    print(json.dumps(result,sort_keys=True));raise SystemExit(0 if result["pass"] else 2)
if __name__=="__main__": main()
