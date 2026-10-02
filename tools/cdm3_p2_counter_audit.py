#!/usr/bin/env python3
import argparse, json
from pathlib import Path

P2=[
    {'bits':256,'arm':'U','base':100_000_000,'count':10_000_000},
    {'bits':256,'arm':'L','base':112_000_003,'count':10_000_000},
    {'bits':512,'arm':'U','base':124_000_006,'count':10_000_000},
    {'bits':512,'arm':'L','base':136_000_009,'count':10_000_000},
    {'bits':1024,'arm':'U','base':148_000_012,'count':10_000_000},
    {'bits':1024,'arm':'L','base':160_000_015,'count':10_000_000},
]

def overlap(a,b):
    return a['base'] < b['base']+b['count'] and b['base'] < a['base']+a['count']

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('--manifest',required=True)
    ap.add_argument('--output',required=True)
    a=ap.parse_args()
    m=json.loads(Path(a.manifest).read_text())
    p1=[]
    for g in m['groups']:
        count=int(g['unit_size'])*int(g['unit_count'])
        p1.append({'bits':int(g['bits']),'arm':g['arm'],'base':int(g['counter_base']),'count':count,
                   'end_exclusive':int(g['counter_base'])+count})
    p2=[dict(x,end_exclusive=x['base']+x['count']) for x in P2]
    p2_collisions=[]
    for i,x in enumerate(P2):
        for j in range(i+1,len(P2)):
            if overlap(x,P2[j]): p2_collisions.append([i,j])
    cross=[]
    for i,x in enumerate(P2):
        for j,y in enumerate(p1):
            if overlap(x,y): cross.append([i,j])
    out={'schema':'CDM3-P2-counter-audit-v1','p1_manifest':a.manifest,
         'p1_generator_version':m.get('generator_version'),'p1_intervals':p1,'p2_intervals':p2,
         'p2_pairwise_collisions':p2_collisions,'p1_p2_collisions':cross,
         'p2_pairwise_disjoint':not p2_collisions,'p1_p2_disjoint':not cross,
         'pass':not p2_collisions and not cross}
    Path(a.output).write_text(json.dumps(out,indent=2,sort_keys=True)+'\n')
    print(json.dumps(out,sort_keys=True))
    raise SystemExit(0 if out['pass'] else 1)
if __name__=='__main__': main()
