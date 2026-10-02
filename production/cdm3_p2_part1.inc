static int resource_ok(campaign *c){
    if(atomic_load(&c->stop_flag))return 0;
    double w=clock_s(CLOCK_MONOTONIC)-c->budget_wall_start;
    double cpu=clock_s(CLOCK_PROCESS_CPUTIME_ID)-c->budget_cpu_start;
    if(w>=WALL_LIMIT_SECONDS || cpu>=CPU_LIMIT_SECONDS){ atomic_store(&c->stop_flag,1); return 0; }
    return 1;
}

static void record_exception(campaign *c,int bits,char arm,uint64_t counter,const bigfix *start,traj_result tr){
    pthread_mutex_lock(&c->exception_mu);
    if(!c->have_exception){ c->exception.bits=(uint32_t)bits; c->exception.arm=arm; c->exception.counter=counter; c->exception.start=*start; c->exception.tr=tr; c->have_exception=1; atomic_store(&c->exception_flag,1); atomic_store(&c->stop_flag,1); }
    pthread_mutex_unlock(&c->exception_mu);
}

static uint64_t candidate_digest(uint64_t counter,const bigfix *start,traj_result tr){
    uint64_t h=mix64(counter)^hash_state(start); h=digest_combine(h,(uint64_t)tr.disposition); h=digest_combine(h,tr.u_steps); h=digest_combine(h,tr.shortened_steps); h=digest_combine(h,(uint64_t)(uint32_t)tr.peak_bits); return digest_combine(h,tr.final_hash);
}

static void sample_add(worker_ctx *w,uint32_t v){ if(w->sample_count<w->sample_cap)w->samples[w->sample_count++]=v; }

static void process_unit(worker_ctx *w,uint64_t ui,wu_record *rec){
    campaign *c=w->c; uint64_t start=c->g.counter_base + ui*c->g.work_unit; uint64_t remain=c->g.count-ui*c->g.work_unit; uint64_t cnt=remain<c->g.work_unit?remain:c->g.work_unit;
    memset(rec,0,sizeof(*rec)); rec->bits=(uint32_t)c->g.bits; rec->arm=c->g.arm; rec->counter_start=start; rec->counter_count=cnt; rec->max_peak_bits=0; rec->max_peak_excess=INT32_MIN;
    double w0=clock_s(CLOCK_MONOTONIC),c0=clock_s(CLOCK_THREAD_CPUTIME_ID);
    uint64_t h=mix64(((uint64_t)c->g.bits<<32)^((uint64_t)(unsigned char)c->g.arm<<24)^start^cnt);
    for(uint64_t j=0;j<cnt;j++){
        if((j&1023ULL)==0 && !resource_ok(c)){ rec->resource_stops++; break; }
        uint64_t counter=start+j; bigfix s; make_start(&s,c->g.bits,c->g.arm,counter); rec->generated++;
        uint64_t sh=hash_state(&s); h=digest_combine(h,sh^counter);
        if(c->g.arm=='L' && arm_l_kill(&s)){ rec->pruned++; h=digest_combine(h,0x4c5052554e4539ULL); continue; }
        rec->executed++; traj_result tr=run_u_fixed(&s,c->g.bits); rec->u_steps+=tr.u_steps; rec->shortened_steps+=tr.shortened_steps;
        if(tr.u_steps>rec->max_u_steps) rec->max_u_steps=tr.u_steps;
        if(tr.shortened_steps>rec->max_shortened_steps) rec->max_shortened_steps=tr.shortened_steps;
        if(tr.peak_bits>rec->max_peak_bits) rec->max_peak_bits=tr.peak_bits;
        int excess=tr.peak_bits-c->g.bits;
        if(excess>rec->max_peak_excess) rec->max_peak_excess=excess;
        if(counter%SAMPLE_MOD==0)sample_add(w,(uint32_t)tr.u_steps);
        if(tr.disposition==DISP_BASIN)rec->basin_hits++;
        else { rec->freezes++; if(tr.disposition==DISP_FREEZE_REPEAT)rec->repeats++; if(tr.disposition==DISP_FREEZE_ESCAPE)rec->escapes++; if(tr.disposition==DISP_INVARIANT)rec->invariant_failures++; record_exception(c,c->g.bits,c->g.arm,counter,&s,tr); }
        h=digest_combine(h,candidate_digest(counter,&s,tr));
        if(atomic_load(&c->stop_flag))break;
    }
    rec->digest=h; rec->wall_seconds=clock_s(CLOCK_MONOTONIC)-w0; rec->cpu_seconds=clock_s(CLOCK_THREAD_CPUTIME_ID)-c0; rec->complete=(rec->generated==cnt);
}

static int write_checkpoint_record(campaign *c,uint64_t idx,const wu_record *r){
    if(c->checkpoint_fd<0) return 1;
    off_t off=(off_t)sizeof(checkpoint_header)+(off_t)idx*(off_t)sizeof(wu_record);
    ssize_t n=pwrite(c->checkpoint_fd,r,sizeof(*r),off);
    return n==(ssize_t)sizeof(*r);
}

static void *worker_main(void *arg){
    worker_ctx *w=(worker_ctx*)arg; campaign *c=w->c;
    for(;;){
        if(atomic_load(&c->stop_flag))break;
        uint64_t ui=atomic_fetch_add(&c->next_unit,1); if(ui>=c->unit_count)break;
        if(c->records[ui].complete)continue;
        wu_record r; process_unit(w,ui,&r); c->records[ui]=r;
        if(!write_checkpoint_record(c,ui,&r)){ atomic_store(&c->stop_flag,1); break; }
    }
    return NULL;
}

static uint64_t config_digest_for(group_cfg g){ uint64_t h=mix64(0x43444d335032ULL); h=digest_combine(h,g.bits); h=digest_combine(h,(unsigned char)g.arm); h=digest_combine(h,g.count); h=digest_combine(h,g.work_unit); h=digest_combine(h,g.counter_base); h=digest_combine(h,MAX_U_STEPS); h=digest_combine(h,FAST_PATH_BITS); h=digest_combine(h,PEAK_EXCESS_BITS); return h; }

static int checkpoint_open(campaign *c,int resume){
    if(!c->checkpoint_path) return 1;
    int flags=O_RDWR|O_CREAT;
    c->checkpoint_fd=open(c->checkpoint_path,flags,0644);
    if(c->checkpoint_fd<0) return 0;
    checkpoint_header hdr={0}; struct stat st; if(fstat(c->checkpoint_fd,&st)!=0)return 0;
    if(resume && st.st_size>=(off_t)sizeof(hdr)){
        if(pread(c->checkpoint_fd,&hdr,sizeof(hdr),0)!=(ssize_t)sizeof(hdr))return 0;
        if(hdr.magic!=CHECKPOINT_MAGIC||hdr.version!=CHECKPOINT_VERSION||hdr.record_size!=sizeof(wu_record)||hdr.unit_count!=c->unit_count||hdr.config_digest!=c->config_digest)return 0;
        ssize_t want=(ssize_t)(c->unit_count*sizeof(wu_record)); if(pread(c->checkpoint_fd,c->records,want,sizeof(hdr))!=want)return 0;
    } else {
        hdr.magic=CHECKPOINT_MAGIC; hdr.version=CHECKPOINT_VERSION; hdr.record_size=sizeof(wu_record); hdr.unit_count=c->unit_count; hdr.unit_size=c->g.work_unit; hdr.config_digest=c->config_digest; snprintf(hdr.generator_version,sizeof(hdr.generator_version),"%s",GENERATOR_VERSION);
        if(ftruncate(c->checkpoint_fd,(off_t)sizeof(hdr)+(off_t)c->unit_count*(off_t)sizeof(wu_record))!=0)return 0;
        if(pwrite(c->checkpoint_fd,&hdr,sizeof(hdr),0)!=(ssize_t)sizeof(hdr))return 0;
    }
    return 1;
}

static int cmp_u32(const void *a,const void *b){ uint32_t x=*(const uint32_t*)a,y=*(const uint32_t*)b; return (x>y)-(x<y); }
static uint32_t quantile_sample(uint32_t *a,size_t n,double q){ if(!n)return 0; qsort(a,n,sizeof(uint32_t),cmp_u32); size_t i=(size_t)(q*(double)(n-1)+0.5); if(i>=n)i=n-1; return a[i]; }

