#!/usr/bin/env python3
import argparse, json, subprocess
from pathlib import Path

MASK=(1<<64)-1
CDM_VERSION='CDM3-P2-v1'
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

def freeze_replay(result_path:str,output_path:str,checkpoint_interval:int):
    result=json.loads(Path(result_path).read_text())
    exc=result.get('exceptional_candidate')
    if not exc:
        out={'schema':'CDM3-P2-exceptional-replay-v1','exceptional_candidate':None,'pass':True,'note':'No exceptional candidate in campaign result.'}
        Path(output_path).write_text(json.dumps(out,indent=2,sort_keys=True)+'\n')
        return
    bits=int(exc['bit_length']); arm=exc['arm']; counter=int(exc['counter'])
    n=make_start(bits,arm,counter)
    expected=int(exc['start_hex'],16)
    start_ok=(n==expected)
    start=n; peak=bits; u=0; short=0; checkpoints=[]; valuations={}; seen={n}
    reason=None; escaped_next_odd=None
    while n >= (1<<71):
        if u>=32768:
            reason='FREEZE_U_STEPS'; break
        x=3*n+1
        odd_out_bits=(x>>1).bit_length()
        if odd_out_bits>peak: peak=odd_out_bits
        if odd_out_bits>=bits+512:
            reason='FREEZE_PEAK'
            checkpoints.append({'u_steps':u,'shortened_steps':short,'state_hex':format(n,'x'),'pending_3n1_hex':format(x,'x'),'peak_bits':peak})
            break
        if x.bit_length()>4096:
            a=v2(x); escaped_next_odd=x>>a
            reason='FREEZE_ESCAPE'
            checkpoints.append({'u_steps':u,'shortened_steps':short,'state_hex':format(n,'x'),'escaped_next_odd_hex':format(escaped_next_odd,'x'),'escaped_next_odd_bits':escaped_next_odd.bit_length(),'v2':a})
            break
        a=v2(x); valuations[str(a)]=valuations.get(str(a),0)+1
        n=x>>a; u+=1; short+=a
        if u%checkpoint_interval==0:
            checkpoints.append({'u_steps':u,'shortened_steps':short,'state_hex':format(n,'x'),'state_bits':n.bit_length(),'peak_bits':peak})
        if n in seen:
            reason='FREEZE_REPEAT'; checkpoints.append({'u_steps':u,'shortened_steps':short,'state_hex':format(n,'x'),'state_bits':n.bit_length(),'peak_bits':peak}); break
        seen.add(n)
    if n < (1<<71): reason='TIER2_BASIN'
    expected_reason=exc.get('freeze_reason')
    checks={
        'generator_start_matches':start_ok,
        'u_steps_match':u==int(exc['u_steps']),
        'shortened_steps_match':short==int(exc['shortened_step_equiv']),
        'peak_bits_match':peak==int(exc['peak_bits']),
        'freeze_reason_match':reason==expected_reason,
    }
    out={
        'schema':'CDM3-P2-exceptional-replay-v1','engine_version':CDM_VERSION,'generator_version':GENERATOR_VERSION,
        'bits':bits,'arm':arm,'counter':counter,'start_hex':format(start,'x'),'start_decimal':str(start),
        'u_steps':u,'shortened_steps':short,'peak_bits':peak,'freeze_reason':reason,
        'escaped_next_odd_hex':format(escaped_next_odd,'x') if escaped_next_odd is not None else None,
        'escaped_next_odd_bits':escaped_next_odd.bit_length() if escaped_next_odd is not None else None,
        'valuation_histogram':valuations,'checkpoint_interval_u_steps':checkpoint_interval,'checkpoints':checkpoints,
        'checks':checks,'pass':all(checks.values())
    }
    Path(output_path).write_text(json.dumps(out,indent=2,sort_keys=True)+'\n')
    if not out['pass']: raise SystemExit(1)

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('--engine')
    ap.add_argument('--bits',type=int,choices=[256,512,1024])
    ap.add_argument('--arm',choices=['U','L'])
    ap.add_argument('--counter',type=int,default=0)
    ap.add_argument('--steps',type=int,default=256)
    ap.add_argument('--start')
    ap.add_argument('--selftest',action='store_true')
    ap.add_argument('--freeze-result')
    ap.add_argument('--output')
    ap.add_argument('--checkpoint-interval',type=int,default=256)
    args=ap.parse_args()
    if args.freeze_result:
        if not args.output: ap.error('--freeze-result requires --output')
        freeze_replay(args.freeze_result,args.output,args.checkpoint_interval); return
    if args.selftest:
        if not args.engine: ap.error('--selftest requires --engine')
        cases=[]
        counters=[100000000,100000001,112000003,124000006,148000012]
        for bits in (256,512,1024):
            for arm in ('U','L'):
                for counter in counters:
                    cases.append(compare_probe(args.engine,bits,arm,counter,args.steps))
        ok=all(x['pass'] for x in cases)
        print(json.dumps({'version':'CDM3-P2-python-replay-v1','generator_version':GENERATOR_VERSION,'cases':len(cases),'pass':ok,'failures':[x for x in cases if not x['pass']]},sort_keys=True))
        raise SystemExit(0 if ok else 1)
    if args.start:
        n=int(args.start,0); print(json.dumps(replay(n,args.steps),sort_keys=True)); return
    if args.engine and args.bits and args.arm:
        r=compare_probe(args.engine,args.bits,args.arm,args.counter,args.steps)
        print(json.dumps(r,sort_keys=True)); raise SystemExit(0 if r['pass'] else 1)
    ap.error('provide --selftest --engine, --freeze-result --output, --start, or --engine --bits --arm')
if __name__=='__main__': main()
