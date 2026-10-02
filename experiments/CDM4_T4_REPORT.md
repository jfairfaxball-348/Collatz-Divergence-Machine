# CDM4-T4 — Residual uniform-substitution carry rigidity

**Date:** 2026-10-02  
**Entry authority:** `e7cfee5c2e2388c0e0ad12e3eeb887d1dbeccb67`  
**Session type:** theory / structural audit only  
**Scientific starts generated:** **0**  
**Scientific trajectories executed:** **0**  
**GPU / cloud / distributed work:** **NONE**  
**Substitution enumeration or finite carry optimization:** **NONE**  
**Explicit candidate found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## Classification

**D — NO QUALIFYING THEOREM FOUND.**

The primary T4 target remains unresolved:

> For every growing primitive constant-length substitution, prolongable on an initial letter and coded letterwise into valuations `{1,2}`, does boundedness of the exact canonical Collatz representatives force eventual periodicity of the coded output?

T4 neither proves this statement nor disproves it by producing an aperiodic positive-integer anchor.

The strongest result of the session is instead a negative audit result: the most natural missing arithmetic strengthening—the 3-adic endpoint dual of T3's 2-adic start-cylinder return argument—is exact, but for substitution-scale returns it collapses to the **same asymptotic inequality already proved in T3**. It therefore does not kill a new residual class.

No theorem-derived workload follows. `COMPUTE_BUDGET.md` and `METRIC_CATALOG.md` remain unchanged.

---

## 1. Authority and scope

The required governance, audit, basin, metric, T1, T2, and T3 files were read from the repository before mathematical work. The repository state, not conversational memory, was treated as authoritative.

The root objective is unchanged: find one explicit positive integer whose shortened-Collatz orbit is rigorously unbounded and never reaches `1`.

Nontrivial finite-cycle research remains out of scope.

T4 obeyed the explicit restrictions:

- no new scientific start;
- no trajectory campaign;
- no GPU work;
- no cloud, distributed, or volunteer work;
- no new generator or sampling distribution;
- no substitution enumeration;
- no finite exponent-code, carry, or residue optimization;
- no candidate ranking;
- no use of the López-Stoll 2021 density equality as a premise.

No tiny executable fixture was needed. All identities below were derived symbolically.

---

## 2. Re-derivation of the exact T3 block state

Let an accelerated odd Collatz trajectory satisfy

```
x_i = (3 x_{i-1}+1)/2^{a_i},
a_i = v_2(3x_{i-1}+1) >= 1.
```

For a valuation block `w=(b_1,...,b_k)`, put

```
B_j = b_1+...+b_j,  B=B_k,
P_w = 3^k,
Q_w = 2^B,
C_w = sum_{j=0}^{k-1} 3^{k-1-j} 2^{B_j}.
```

Then its formal forward map is

```
F_w(x) = (P_w x + C_w)/Q_w.
```

For chronological concatenation `uv`,

```
P_{uv}=P_u P_v,
Q_{uv}=Q_u Q_v,
C_{uv}=P_v C_u + Q_u C_v.
```

Thus, with

```
K_w = [[P_w,C_w],[0,Q_w]],
```

the chronological block law is

```
K_{uv}=K_v K_u.
```

The reversed matrix order is essential.

For a prefix of length `m`, write

```
A_m = a_1+...+a_m,
C_{m+1}=3C_m+2^{A_m},
M_m=2^{A_m+1}.
```

The exact start cylinder, including the final endpoint-odd condition, has canonical representative

```
R_m = [3^{-m}(2^{A_m}-C_m)] mod M_m.
```

The exact odd endpoint is

```
Y_m = (3^m R_m + C_m)/2^{A_m}.
```

Nested cylinders give the unique one-step carry

```
R_{m+1}=R_m+d_m M_m,
0 <= d_m < 2^{a_{m+1}},
```

and the endpoint recurrence

```
2^{a_{m+1}}Y_{m+1}
 = 3Y_m+1+2d_m3^{m+1}.                 (1)
```

For a whole appended block `w`, whose exact canonical odd start is `r_w` modulo `2Q_w`, the current-state lift is

```
D_w = [3^{-m}(r_w-Y_m)/2] mod Q_w,
```

and

```
R' = R_m + M_m D_w.
```

For chronological `uv`,

```
D_{uv}(S)=D_u(S)+Q_u D_v(S_u).
```

The second carry is evaluated at the updated arithmetic state. Hence a finite symbolic return alphabet does not produce a finite arithmetic automaton.

These re-derivations agree with T3 equations (3)–(13).

---

## 3. Substitution-level representatives are not all-depth anchoring

Let `sigma` be a growing primitive constant-length substitution of length `L`, prolongable on `i_0`, and let every letter be coded to one valuation in `{1,2}`.

For every letter `i` and substitution level `j`, the coded block `sigma^j(i)` has exact registers

```
(k_i^{(j)},B_i^{(j)},P_i^{(j)},Q_i^{(j)},C_i^{(j)}).
```

The number of registers is fixed, but their integer sizes and moduli grow without bound.

For the cofinal fixed-point prefixes `sigma^j(i_0)`, define the exact level representative `R_j` as in T3.

Three distinct statements must not be conflated:

1. **substitution-level boundedness:** the cofinal sequence `R_j` is bounded;
2. **all-depth boundedness:** every canonical prefix representative `R_m` is bounded;
3. **sparse normalized decay:** `R_j/2^{A_j+1}` is small or tends to zero only along substitution levels.

Because the exact representatives are nested and nondecreasing as ordinary integers, boundedness on a cofinal sequence of prefix depths is enough to bound all intermediate representatives. Therefore substitution-level **boundedness** is genuinely sufficient.

By contrast, sparse normalized decay is not. Between two substitution levels the modulus grows by an unbounded factor. T2's bounded-alphabet equivalence requires normalized decay at all depths, or T3's stronger cross-level condition

```
R_{j+1}/2^{A_j+1} -> 0.
```

Thus no anchor can be inferred from a visually small residue ratio at sparse substitution depths.

---

## 4. Exact 3-adic endpoint cylinder

T4 examined the natural arithmetic dual of the T2/T3 start cylinder.

For a valuation block `w` of length `r`, total valuation `B`, and affine constant `C_w`,

```
2^B y = 3^r x + C_w.
```

Reducing modulo `3^r` gives

```
y = 2^{-B} C_w  (mod 3^r).                (2)
```

Therefore:

> **Endpoint-cylinder lemma.** Every exact occurrence of the same length-`r` valuation block ends at the same residue modulo `3^r`.

If the same block occurs on intervals ending at orbit indices `p` and `q`, then

```
3^r | (x_q-x_p).                           (3)
```

This is exact and requires no statistical or density assumption.

Likewise, if the same block begins at two orbit indices, T2's start cylinder gives a power-of-two divisor of the difference between the two starting odd states.

These two congruences are genuine past/future arithmetic cylinders. However, they do not by themselves create a new finite-state closure theorem.

---

## 5. Why the 3-adic dual does not improve the T3 return threshold

Suppose a prefix of length `r` repeats after a shift `ell`:

```
a_{ell+i}=a_i,  1<=i<=r.
```

The repeated block has endpoint states `x_r` and `x_{ell+r}`. By (3),

```
3^r | (x_{ell+r}-x_r).                    (4)
```

If the valuation word were realized by a positive integer `N` and were aperiodic, T3's distinct-orbit height bound gives

```
x_m <= N e^{1/3}(m+1)^{1/3} 2^{lambda m-A_m},
lambda=log_2 3.
```

Because the repeat implies

```
A_{ell+r}=A_ell+A_r,
```

division of the height bound by `3^r=2^{lambda r}` gives

```
x_{ell+r}/3^r
 <= N e^{1/3}(ell+r+1)^{1/3}
    2^{lambda ell-A_ell-A_r}.              (5)
```

Also `x_r/3^r -> 0` when `r->infinity`.

Thus (4) contradicts distinctness exactly when

```
A_ell+A_r
-lambda ell
-(1/3)log_2(ell+r+1)
 -> +infinity.                              (6)
```

Up to the harmless logarithmic placement, this is the same exponent budget as T3's 2-adic return-prefix obstruction.

For a primitive substitution with mean valuation `alpha` and a return with `ell/r -> K`, (6) again reduces to

```
alpha(1+1/K) > lambda.                      (7)
```

Therefore the 3-adic endpoint cylinder is an exact dual formulation, **not a stronger residual theorem**.

T4 does not count (2)–(7) as a new killed class.

---

## 6. Two-sided contexts also conserve the same exponent budget

A tempting strengthening is to use both cylinders at once.

If two orbit positions have:

- the same length-`s` valuation block immediately before them; and
- the same length-`r` valuation block immediately after them,

then their odd-state difference is divisible by

```
3^s 2^{B_+ + 1},                           (8)
```

where `B_+` is the valuation sum of the common future block.

This looks stronger than either one-sided divisor.

For substitution-scaled repeated factors, however, moving the comparison point inside the repeated factor changes the archimedean height by exactly the corresponding amount. If a repeated factor has total scaled length `H`, shift `ell`, and the comparison point is placed after `s` symbols, then the base-2 logarithm of the divisor gains

```
lambda s + alpha(H-s),
```

while the orbit-height exponent at that position gains

```
(lambda-alpha)s.
```

The `s` dependence cancels. The remaining strict inequality is again

```
alpha H > (lambda-alpha) ell,
```

equivalent to (7).

Hence changing from one-sided to two-sided return cylinders does not defeat the residual low-mean / late-return cases.

This closes the most plausible direct extension of T3's return proof.

---

## 7. Endpoint recurrence and eventual-zero carry

Equation (1) was audited directly.

If the canonical representatives are bounded, then T2 implies `d_m=0` eventually. From that point onward,

```
2^{a_{m+1}}Y_{m+1}=3Y_m+1,                 (9)
```

so the prescribed valuation sequence is the actual accelerated orbit of the stabilized positive integer.

For the T4 alphabet `{1,2}`:

- `a_{m+1}=1` gives `Y_{m+1}=(3Y_m+1)/2`;
- `a_{m+1}=2` gives `Y_{m+1}=(3Y_m+1)/4`.

Fixed-modulus consequences exist. For example, modulo `3`,

```
a_{m+1}=1 => Y_{m+1}=2 (mod 3),
a_{m+1}=2 => Y_{m+1}=1 (mod 3).
```

Longer suffixes determine `Y_m mod 3^r` through (2).

But these are fixed finite projections. The anchor problem requires control of a modulus growing like `2^{A_m}`. No argument was found that upgrades synchronization of every fixed finite projection into boundedness of the full integer register.

In particular:

> finite symbolic state + every fixed finite arithmetic projection  
> does **not** imply a finite arithmetic state.

This is the same finite-versus-growing-register barrier already identified in T3, now checked directly against the endpoint recurrence.

---

## 8. Constant-length automatic consequences

A primitive constant-length substitution has a uniquely ergodic fixed point. Under a letter coding into `{1,2}`, its mean valuation `alpha` exists.

For constant length, the frequency vector may be taken rational; equivalently Bell's automatic-sequence theorem gives a rational limiting/limsup mean in this finite primitive setting.

If the output is genuinely aperiodic and positively anchored, T3's height inequality gives

```
alpha <= lambda.
```

Since `alpha` is rational and `lambda=log_2 3` is irrational, equality is impossible. Therefore any hypothetical T4 anchor has

```
1 < alpha < lambda.                         (10)
```

The lower strict inequality uses primitivity plus genuinely nonconstant `{1,2}` coding: a symbol coded by `2` has positive frequency; if no symbol is coded by `2`, the output is the periodic all-`1` word.

Consequently a hypothetical aperiodic anchor would have exponentially growing odd states:

```
Y_m >= N 2^{(lambda-alpha)m-o(m)}.
```

This is a strong necessary condition, but not a contradiction. Exponential growth is exactly what a divergent anchor would be expected to exhibit.

No valid theorem was found converting automaticity plus (10) into eventual periodicity of the Collatz control word.

---

## 9. Return words and derived substitutions

Primitive substitution fixed points are uniformly recurrent and have finite return-word systems for each fixed factor. Derived substitutions and finite kernels therefore give strong finite symbolic organization.

T4 checked whether this can impose an arithmetic identity on

```
(R,Y,3^m,2^{A_m})
```

rather than only on the symbolic word.

The answer obtained is negative:

1. a return word has fixed exact block data `(P,Q,C)`;
2. composing return words obeys the exact affine laws;
3. but the block lift `D_w` depends on the incoming unbounded endpoint `Y` and the growing power `3^m`;
4. the moduli in the exact start and endpoint cylinders grow with return depth;
5. finite derived alphabets do not bound these integer registers.

Thus Durand-style finiteness of derived symbolic systems is not an anchor theorem.

No return-word identity was found that forces `d_m != 0` infinitely often in every residual constant-length case.

---

## 10. Cobham, morphic transduction, and automaticity audit

No Cobham argument was promoted.

Cobham-type theorems require the **same sequence** to possess automatic/substitutive descriptions in multiplicatively independent bases. The appearance of powers of `2` and `3` inside Collatz arithmetic does not give the valuation word two automatic presentations.

Likewise, the variable-length odd-gap coding

```
1 -> 1,
2 -> 10
```

takes the accelerated valuation word to the shortened source-parity word, but it cannot simply be declared automatic in the same base. It is morphic under standard closure statements; stronger automaticity needs a separate hypothesis.

No transduction theorem audited here removes the unbounded arithmetic endpoint/carry register.

---

## 11. López-Stoll remains non-load-bearing

The López-Stoll 2021 parity-density equality remains outside the proof base.

T3 identified an unproved real/2-adic completion bridge and a prescribed-parity/actual-parity identification issue. T4 found no independent repair.

Accordingly, T4 does **not** infer that automatic or primitive-substitutive aperiodic parity words are impossible merely because their frequencies are rational/algebraic.

Only the independently proved strict inequality and growth consequences are retained.

---

## 12. Focused literature consequence

A focused search did not identify a peer-reviewed theorem whose verified hypotheses imply:

> a non-eventually-periodic automatic `{1,2}` valuation word cannot be the exact E-sequence of a positive integer.

Wang's published E-sequence results remain directly relevant, but the residual primitive constant-length class is not covered in full by the hypotheses already accepted in T3.

Mahler/automatic-number transcendence results concern automatic digit expansions or Mahler functions under specific algebraic hypotheses. T4 did not find a justified theorem transporting such a result through the nonlinear Collatz conjugacy to conclude that an ordinary integer anchor is impossible.

This absence is a research-audit result, not a claim that no such theorem exists anywhere.

---

## 13. Primary theorem target: result

### Target

> If the exact canonical representatives `R_m` remain bounded for a growing primitive constant-length substitution coded into `{1,2}`, then the coded output is eventually periodic.

### T4 status

**UNKNOWN.**

The statement was neither proved nor disproved.

What was established is narrower:

- the T3 block, carry, and substitution recurrences re-derive exactly;
- substitution-level boundedness is enough, but sparse normalized decay is not;
- equal past valuation blocks give exact endpoint congruence modulo powers of `3`;
- the endpoint congruence reproduces, rather than improves, the T3 return-prefix asymptotic threshold;
- two-sided start/end cylinders also conserve the same exponent budget on substitution-scaled returns;
- finite return alphabets and finite kernels do not bound the growing arithmetic registers;
- the endpoint recurrence yields fixed-modulus synchronization but no growing-modulus carry-extinction theorem;
- automaticity gives the strict rational mean gap `1<alpha<log_2 3` for any hypothetical aperiodic anchor, but no contradiction.

Therefore no new residual primitive constant-length class is rigorously killed in T4.

---

## 14. Positive branch audit

A negative answer to the T4 conjecture would require:

1. an explicit primitive constant-length substitution;
2. a genuinely non-eventually-periodic `{1,2}` output;
3. an exact proof that `R_m` is bounded at all depths;
4. hence eventual `d_m=0`;
5. an exact stabilized integer `N>1`;
6. hostile certification review under `docs/CERTIFICATION_POLICY.md`.

No such object was found.

No finite residue pattern, sparse normalized decay, or finite zero-carry run was treated as evidence for such an object.

---

## 15. Compute and search decision

### Scientific starts

**NOT JUSTIFIED.**

T4 produced no candidate family whose finite enumeration would answer the infinite carry-rigidity question.

### New generator/distribution

**NOT JUSTIFIED.**

### GPU / cloud / distributed work

**NOT JUSTIFIED.**

### Finite substitution enumeration

**NOT JUSTIFIED.**

Enumerating constant-length substitutions for small residues or long zero-carry runs would violate the theorem-first restriction and would not solve the growing-modulus problem.

### Metric catalog

**UNCHANGED.**

The endpoint residue and substitution-level carry remain theorem objects, not promoted search metrics.

### Compute budget

**UNCHANGED.**

---

## 16. Exact next theorem-sized obligation

The direct return/cocycle route is now exhausted at its present strength.

The next theorem-sized obligation should attack the **automatic/rationality bridge itself**:

> Let `a_n in {1,2}` be a non-eventually-periodic `k`-automatic valuation sequence with mean `alpha<log_2 3`. Study the exact inverse-Collatz series
>
> ```
> H = -sum_{j>=0} 2^{A_j}/3^{j+1} in Z_2.
> ```
>
> Prove, under explicitly verified hypotheses, that `H` cannot be an ordinary positive integer; or prove that existing automatic/Mahler/transcendence theorems do not supply that implication.

This is deliberately narrower than “solve all morphic words”. Constant-length substitutions naturally produce automatic sequences, and the exact positive-anchor question is precisely whether their Collatz inverse-conjugacy value can land in `Z_{>0}`.

The next session must audit p-adic Mahler/automatic-number theorems at their exact hypotheses. It must not identify automaticity of the valuation word with automaticity of the binary expansion of the anchor, and it must not reuse the López-Stoll cross-completion inference.

---

## 17. Required deliverable questions

- **Exact theorem proved or failed:** the universal uniform-substitution carry-rigidity theorem remains **UNKNOWN**; no qualifying replacement theorem was proved.
- **Precise substitution class covered:** growing primitive constant-length substitutions, prolongable on an initial letter, with one-letter coding into `{1,2}`; the audit focuses on genuinely aperiodic outputs with mean below `log_2 3`.
- **Does bounded `R_m` imply periodicity in that class?** **UNKNOWN.**
- **Any newly killed class?** **NO qualifying new class.** The exact 3-adic endpoint formulation reproduces T3's return threshold.
- **Any class survives?** **YES.** Residual aperiodic primitive constant-length outputs with `1<alpha<log_2 3` outside T3's return and critical-discrepancy exclusions survive.
- **López-Stoll load-bearing?** **NO.**
- **Explicit anchored aperiodic word?** **NO.**
- **Candidate or unbounded orbit found?** **NO.**
- **Counterexample claimed?** **NO.**
- **Future compute justified?** **NO.**
- **Exact next obligation:** automatic/Mahler rationality of the inverse-Collatz 2-adic series, with every p-adic and automatic-sequence hypothesis verified.

---

## 18. Permanent lesson

The residual problem is not a shortage of symbolic finiteness.

Primitive constant-length substitutions already provide:

- finite alphabets;
- finite kernels;
- finite return-word systems;
- exact rational frequencies;
- fixed-dimensional block recurrences;
- exact 2-adic start cylinders;
- exact 3-adic endpoint cylinders.

What is missing is a theorem that controls a **growing arithmetic modulus** strongly enough to force or forbid finite support in the anchor-carry expansion.

T4 shows that simply adding the dual 3-adic cylinder does not create that theorem: on the natural substitution-scale returns, its gain is exactly paid for by the corresponding archimedean height.

The next useful advance must therefore be qualitatively different—most plausibly a rationality/transcendence theorem for the automatic inverse-Collatz series, or another arithmetic rigidity result that genuinely sees the whole growing tower.

**Final classification: D — NO QUALIFYING THEOREM FOUND.**
