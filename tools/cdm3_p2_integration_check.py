#!/usr/bin/env python3
import argparse, json, statistics
from pathlib import Path

EXACT_KEYS=['starts','u_steps','shortened_steps','max_u_steps','max_peak_bits','basin_hits','overflow_escapes','repeats','invariant_failures','digest']

def load_jsonl(path):
    return [json.loads(x) for x in Path(path).read_text().splitlines() if x.strip().startswith('{')]

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('--b1',required=True)
    ap.add_argument('--p2',required=True)
    ap.add_argument('--output',required=True)
    ap.add_argument('--min-ratio',type=float,default=0.90)
    a=ap.parse_args()
    b1={(int(x['bits']),int(x['pass'])):x for x in load_jsonl(a.b1) if x.get('record')=='one_thread' and x.get('variant')=='opt'}
    p2={(int(x['bits']),int(x['pass'])):x for x in load_jsonl(a.p2) if x.get('record')=='p2_integration'}
    details={}; passed=True
    for bits in (256,512,1024):
        pairs=sorted(k for k in b1 if k[0]==bits and k in p2)
        exact=[]
        for k in pairs:
            diffs={q:[b1[k].get(q),p2[k].get(q)] for q in EXACT_KEYS if b1[k].get(q)!=p2[k].get(q)}
            exact.append({'pass':k[1],'equal':not diffs,'differences':diffs})
            passed &= not diffs
        b1_rates=[float(b1[k]['u_steps_per_s']) for k in pairs]
        p2_rates=[float(p2[k]['u_steps_per_s']) for k in pairs]
        if not pairs:
            ratio=0.0; passed=False
        else:
            ratio=statistics.median(p2_rates)/statistics.median(b1_rates)
            passed &= ratio>=a.min_ratio
        details[str(bits)]={'passes':len(pairs),'exact_workload_equality':exact,
                            'b1_median_u_steps_per_s':statistics.median(b1_rates) if b1_rates else 0,
                            'p2_median_u_steps_per_s':statistics.median(p2_rates) if p2_rates else 0,
                            'p2_over_b1_ratio':ratio,'minimum_ratio':a.min_ratio,'throughput_pass':ratio>=a.min_ratio}
    out={'schema':'CDM3-P2-integration-check-v1',
         'criterion':'P2 median U-steps/s must be >=90% of same-host B1 optimized path at every band, with exact per-pass workload/digest equality.',
         'details':details,'pass':passed}
    Path(a.output).write_text(json.dumps(out,indent=2,sort_keys=True)+'\n')
    print(json.dumps(out,sort_keys=True))
    raise SystemExit(0 if passed else 1)
if __name__=='__main__': main()
