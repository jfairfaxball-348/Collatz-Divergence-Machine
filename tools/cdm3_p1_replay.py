#!/usr/bin/env python3
import argparse, json, subprocess
MASK=(1<<64)-1
CDM_VERSION='CDM3-P1-v1'
GENERATOR_VERSION='CDM3-P1-gen-v1'

def mix64(x:int)->int:
    x &= MASK
    x ^= x>>30; x=(x*0xbf58476d1ce4e5b9)&MASK
    x ^= x>>27; x=(x*0x94d049bb133111eb)&MASK
    x ^= x>>31
    return x&MASK

def splitmix_next(x:int):
    x=(x+0x9e3779b97f4a7c15)&MASK
    return x,mix64(x)

def make_start(bits:int,arm:str,counter:int)->int:
    nlimbs=(bits+63)//64
    domain=0x43444d3350317631 ^ ((bits&0xffffffff)<<32) ^ (ord(arm)<<24)
    seed=mix64(domain ^ mix64(counter))
    words=[]
    for _ in range(nlimbs):
        seed,w=splitmix_next(seed); words.append(w)
    top=(bits-1)%64
    if top<63: words[-1] &= (1<<(top+1))-1
    words[-1] |= 1<<top
    words[0] |= 1
    n=sum(w<<(64*i) for i,w in enumerate(words))
    assert n.bit_length()==bits and n&1
    return n

def v2(n:int)->int:
    return (n & -n).bit_length()-1

def replay(n:int,max_steps:int,basin_bits:int=71):
    start_bits=n.bit_length(); peak=start_bits; u=0; short=0
    while n >= (1<<basin_bits) and u < max_steps:
        x=3*n+1
        peak=max(peak,(x>>1).bit_length())
        a=v2(x)
        n=x>>a; u+=1; short+=a
    return {'u_steps':u,'shortened_steps':short,'peak_bits':peak,'state_hex':format(n,'x'),'disposition':1 if n<(1<<basin_bits) else 0}

def compare_probe(engine:str,bits:int,arm:str,counter:int,steps:int):
    raw=subprocess.check_output([engine,'--probe',str(bits),arm,str(counter),str(steps)],text=True)
    c=json.loads(raw)
    start=make_start(bits,arm,counter)
    py=replay(start,steps)
    checks={
        'start_hex': c['start_hex']==format(start,'x'),
        'u_steps': c['u_steps']==py['u_steps'],
        'shortened_steps': c['shortened_steps']==py['shortened_steps'],
        'peak_bits': c['peak_bits']==py['peak_bits'],
        'state_hex': c['state_hex']==py['state_hex'],
        'disposition': c['disposition']==py['disposition'],
    }
    return {'bits':bits,'arm':arm,'counter':counter,'steps':steps,'checks':checks,'pass':all(checks.values()),'c':c,'python':py}

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('--engine')
    ap.add_argument('--bits',type=int,choices=[256,512,1024])
    ap.add_argument('--arm',choices=['U','L'])
    ap.add_argument('--counter',type=int,default=0)
    ap.add_argument('--steps',type=int,default=256)
    ap.add_argument('--start')
    ap.add_argument('--selftest',action='store_true')
    args=ap.parse_args()
    if args.selftest:
        if not args.engine: ap.error('--selftest requires --engine')
        cases=[]
        counters=[0,1,17,12345,999999]
        for bits in (256,512,1024):
            for arm in ('U','L'):
                for counter in counters:
                    cases.append(compare_probe(args.engine,bits,arm,counter,args.steps))
        ok=all(x['pass'] for x in cases)
        print(json.dumps({'version':'CDM3-P1-python-replay-v1','cases':len(cases),'pass':ok,'failures':[x for x in cases if not x['pass']]},sort_keys=True))
        raise SystemExit(0 if ok else 1)
    if args.start:
        n=int(args.start,0)
        print(json.dumps(replay(n,args.steps),sort_keys=True)); return
    if args.engine and args.bits and args.arm:
        r=compare_probe(args.engine,args.bits,args.arm,args.counter,args.steps)
        print(json.dumps(r,sort_keys=True)); raise SystemExit(0 if r['pass'] else 1)
    ap.error('provide --selftest --engine, or --start, or --engine --bits --arm')
if __name__=='__main__': main()
