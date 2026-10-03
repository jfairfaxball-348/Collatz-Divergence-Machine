# CDM4-T20 — Nonuniform morphic scalar-convergence / completion-portability audit

**Date:** 2026-10-03  
**Authoritative input commit:** 73acddd50c3f8a273b619f1bbe0df4e6ff49048d  
Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T20 proves the exact variable-length replacement for the two uniform identities isolated by T19 and closes the primitive growing nonuniform substitutive positive-anchor branch.

Let
\[
\sigma:\Lambda\to\Lambda^+
\]
be nonerasing and prolongable on \(a_0\), with fixed point \(u=\sigma^\infty(a_0)\), positive finite valuation coding \(v:\Lambda\to\mathbb Z_{>0}\), and column-incidence matrix
\[
M_{t,s}=|\sigma(s)|_t.
\]

Define
\[
\ell_J(s)=\mathbf1^TM^Je_s=|\sigma^J(s)|,\qquad
B_J(s)=v^TM^Je_s,
\]
and for the prefix Parikh vector \(c(n)\),
\[
L_J(n)=\mathbf1^TM^Jc(n)
      =\sum_{i<n}\ell_J(u_i).
\]

Then
\[
\boxed{\sigma^J(u_0\cdots u_{n-1})=u_0\cdots u_{L_J(n)-1}}
\]
and
\[
\boxed{A_{L_J(n)}=v^TM^Jc(n)}.
\]

The canonical multivariate system remains stationary. With
\[
F_t(x)=\sum_{n:u_n=t}x^{c(n)},\qquad S(x)=\sum_tF_t(x),
\]
and
\[
\tau(x)_s=\prod_t x_t^{M_{t,s}},
\]
one has
\[
\boxed{\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x))}
\]
where
\[
\mathcal A_{t,s}(x)=
\sum_{\substack{0\le r<|\sigma(s)|\\\sigma(s)_r=t}}
x^{p_{s,r}},
\]
and \(p_{s,r}\) is the Parikh vector of the first \(r\) letters of \(\sigma(s)\).

At
\[
q_s=\frac{2^{v(s)}}3,\qquad q_J=\tau^J(q),
\]
the exact coordinates are
\[
\boxed{q_{J,s}=\frac{2^{B_J(s)}}{3^{\ell_J(s)}}}
\]
and the exact scalar tail is
\[
\boxed{
S(q_J)=\sum_{n\ge0}\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
}
\]
Likewise every \(F_t(q_J)\) is the corresponding positive subseries. No extra letter-dependent prefactor is present.

Therefore a global strict prefix gap
\[
\limsup_{n\to\infty}\frac{A_n}{n}<\lambda,
\qquad \lambda=\log_2 3,
\]
implies absolute ordinary-real convergence of the scalar and every canonical state series at every actual monomial tail. Because the morphism is nonerasing,
\[
L_J(n)\ge n,
\]
so geometric domination is immediate.

For primitive growing variable-length substitutions the ordinary valuation mean exists:
\[
\alpha=\lim_{n\to\infty}\frac{A_n}{n}
      =\frac{v^Tr}{\mathbf1^Tr},
\]
where \(r>0\) is a Perron right eigenvector. The number \(\alpha\) is algebraic. Under a hypothetical genuinely aperiodic positive integer Collatz anchor, T3 gives \(\alpha\le\lambda\). The threshold \(\lambda\) is transcendental: it is irrational by unique factorization, and if it were algebraic irrational then Gelfond-Schneider applied to \(2^\lambda=3\) would make \(3\) transcendental. Hence
\[
\boxed{\alpha<\lambda}.
\]

T20 also extends the T17/T18 toric lifting architecture to primitive variable length. If
\[
h^TM=\rho h^T,\qquad h>0,\qquad \rho>1,
\]
then on the stable character lattice
\[
L=\ker_{\mathbb Z}(M^{J_0}),\qquad N=\mathbb Z^m/L,
\]
the Perron weight
\[
\boxed{w_h(\pi(a))=h^Ta}
\]
is well defined and positive on \(\pi(\mathbb N^m)\setminus\{0\}\), with exact expansion
\[
\boxed{w_h(\overline M^n\gamma)=\rho^n w_h(\gamma)}.
\]

After T18 reduction to a dense arithmetic-progression coset \(Y=tH\), every character relation \(\mu\) has \(\mathbf1^TM^{a+Rn}\mu\) constant. Primitive Perron asymptotics then force \(h^T\mu=0\), so the same weight descends through the complete relation lattice.

The T17/T18 proof uses only positivity and finite-codimensionality of the support filtration, exponential support displacement, comparable degree/height/boundary scales, the \(S\)-unit zero theorem, dense étale orbit regularity, rigid local analysis, and exact specialization. In the primitive variable-length case:
\[
|\sigma^J(s)|=\Theta(\rho^J),
\]
ordinary monomial degrees and orbit heights are \(O(\rho^J)\), and every positive-semigroup character contracts 2-adically at \(\exp(-c\rho^J)\). The Perron filtration supplies the exact support factor \(\rho^J\). Thus the T17/T18 argument survives with \(\rho^J\) replacing \(k^J\), including when \(M\) is singular.

Consequently:
\[
\boxed{
\text{every genuinely aperiodic primitive growing nonerasing substitution}
}
\]
\[
\boxed{
\text{with finite positive valuation coding has }H\notin\mathbb Z_{>0}.
}
\]

Under T2's inherited finite-alphabet anchoring hypotheses,
\[
\boxed{R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}}
\]
for this newly closed variable-length class.

The remaining boundary is reducible/nonprimitive variable length. Substituted-block ratios have algebraic residue-class limits in the expanding finite-matrix setting, but ordinary prefixes can cut across blocks of unequal growth. Equal-dominant-radius SCC chains may produce leading \(J^e\rho^J\) terms. T20 does not prove that
\[
\limsup A_n/n
\]
is algebraic or strict, and it does not prove a universal positive expanding toric grading for the reducible singular class.

No scientific compute is justified.

## 2. T19 state inherited

T20 does not reprove:

- T18 orbit-closure reduction to a dense torus coset, scalar-preserving re-minimalization, complete regular tails, exact mixed-place lifting, exact specialization \(Q(\alpha,\mathbf X)=P(\mathbf X)\), or harmless adjoining of \(1\);
- T19's \(k\)-uniform nonprimitive Frobenius theorem;
- T19's rational automatic limsup theorem application;
- T19's exact uniform scalar identity;
- T19's pointwise completion-portability principle.

The positive-rational boundary is inherited: a strict gap derived from a realized positive integer orbit does not automatically exclude an abstract positive rational noninteger value.

## 3. Nonuniform incidence and Frobenius dynamics

There is no common column sum. For each state,
\[
\ell_J(s)=\mathbf1^TM^Je_s,\qquad
B_J(s)=v^TM^Je_s.
\]

Put the reachable incidence graph in Frobenius form and let \(\rho_C\) denote the spectral radius of an SCC \(C\). For a starting state \(s\),
\[
\rho_s=\max\{\rho_C:C\text{ reachable from }s\}.
\]

Unlike T19:

- finality does not determine \(\rho_C\);
- distinct dominant-radius blocks can form a directed chain;
- a chain of \(e+1\) dominant blocks can create \(J^e\rho_s^J\);
- imprimitive dominant blocks create residue-class modulation.

Because \(M\) is integral, \(\ell_J(s)\) and \(B_J(s)\) are algebraic exponential-polynomial sequences. After passage to a common period and to a nonzero leading residue class,
\[
\ell_J(s)
=
J^{e_{s,r}}\rho_s^J(L_{s,r}+O(J^{-1}))
+O(J^E\rho_*^J),
\]
\[
B_J(s)
=
J^{e_{s,r}}\rho_s^J(V_{s,r}+O(J^{-1}))
+O(J^E\rho_*^J),
\]
with \(L_{s,r},V_{s,r}>0\) algebraic and \(\rho_*<\rho_s\).

The dominant exponential and polynomial orders agree because
\[
v_{\min}\ell_J(s)\le B_J(s)\le v_{\max}\ell_J(s).
\]
Hence
\[
\boxed{
\frac{B_J(s)}{\ell_J(s)}
\to\theta_{s,r}\in\overline{\mathbb Q}\cap\mathbb R
}
\]
along the stabilized residue classes.

This matches the reducible Perron-Frobenius block-frequency theorem of Lustig-Uyanik after passage to a suitable power.

Since \(\lambda=\log_2 3\) is transcendental,
\[
\theta_{s,r}\ne\lambda.
\]

This is only a state-block theorem. It does not determine arbitrary ordinary fixed-point prefixes.

## 4. Exact prefix endpoint theorem

Let \(c(n)\) be the Parikh vector of \(u_0\cdots u_{n-1}\). Then
\[
L_J(n)=\mathbf1^TM^Jc(n).
\]

Because \(u=\sigma^J(u)\),
\[
\sigma^J(u_{<n})
=
\sigma^J(u_0)\cdots\sigma^J(u_{n-1})
=
u_{<L_J(n)}.
\]
Taking Parikh vectors and valuation sums gives
\[
\boxed{c(L_J(n))=M^Jc(n)}
\]
and
\[
\boxed{A_{L_J(n)}=v^TM^Jc(n)}.
\]

No linearity of \(L_J\) is assumed.

## 5. Exact functional-system derivation

For \(0\le r<|\sigma(s)|\), let \(p_{s,r}\) be the Parikh vector of the prefix of \(\sigma(s)\) of length \(r\).

Every fixed-point position has a unique form
\[
m=L_1(n)+r,\qquad s=u_n,
\]
and then
\[
c(m)=Mc(n)+p_{s,r}.
\]

Grouping canonical terms by the parent state and the offset inside \(\sigma(s)\) yields
\[
\boxed{\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x))}
\]
with the matrix displayed in Section 1.

Thus a variable-length fixed point is still represented by an exact finite stationary multivariate monomial system.

The theorem interface is **morphic/substitutive**, not fixed-base automatic.

## 6. Exact scalar-tail theorem

At \(q_s=2^{v(s)}/3\),
\[
q_{J,s}
=
q^{M^Je_s}
=
\frac{2^{B_J(s)}}{3^{\ell_J(s)}}.
\]

For each canonical monomial,
\[
(q_J)^{c(n)}
=
\frac{2^{v^TM^Jc(n)}}{3^{\mathbf1^TM^Jc(n)}}
=
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
\]

Therefore
\[
\boxed{
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
}
\]

This is the exact nonuniform replacement for \(A_{nk^J}\).

The weakest condition needed at a chosen tail is
\[
\sum_n2^{A_{L_J(n)}-\lambda L_J(n)}<\infty.
\]
A global eventual gap is a stronger sufficient condition and works for every \(J\).

## 7. Algebraic mean and the critical threshold

If ordinary letter frequencies of a morphic word exist, Allouche-Shallit Theorem 8.4.5 implies that they are algebraic. Hence the valuation mean is algebraic.

For a primitive substitution, the frequencies always exist and
\[
\alpha=\frac{v^Tr}{\mathbf1^Tr}\in\overline{\mathbb Q}.
\]

A positive integer Collatz realization gives the T3 bound
\[
\alpha\le\lambda.
\]
Transcendence of \(\lambda\) excludes equality, so \(\alpha<\lambda\).

This proves an eventual uniform prefix gap and hence real scalar convergence at every \(q_J\).

The argument requires transcendence, not merely irrationality.

## 8. Primitive Perron-weight toric portability

Let \(h>0\) satisfy
\[
h^TM=\rho h^T.
\]

### Stable kernel

If \(M^{J_0}\ell=0\), then
\[
\rho^{J_0}h^T\ell=h^TM^{J_0}\ell=0.
\]
So \(w_h(\pi(a))=h^Ta\) descends to \(N=\mathbb Z^m/L\).

### Positive semigroup and filtration

On \(\Gamma_0=\pi(\mathbb N^m)\),
\[
w_h(\gamma)>0\quad(\gamma\ne0)
\]
and
\[
w_h(\overline M^n\gamma)=\rho^nw_h(\gamma).
\]

The sets \(w_h(\gamma)<p\) are finite. Because \(\Gamma_0\) spans a finite-rank lattice in a pointed cone, their dimensions grow polynomially in \(p\). The weight is used as an additive support filtration; standard ambient positive-monomial coordinates still provide the rigid analytic norms.

### Boundary contraction

For \(\gamma=\pi(a)\), \(a\ge0\),
\[
|\chi^\gamma(q_J)|_2
=
2^{-v^TM^Ja}
\le
2^{-\mathbf1^TM^Ja}.
\]
Since \(h_i\le h_{\max}\),
\[
\mathbf1^TM^Ja
\ge
\frac{\rho^J}{h_{\max}}h^Ta.
\]
Thus every nonconstant regular character tends to the toric boundary exponentially on the \(\rho^J\) scale.

### Orbit-closure relations

T18's Laurent/Bell-Ghioca-Tucker reduction is unchanged because every \(q_J\) is still a \(\{2,3\}\)-unit point.

If \(\mu\) is constant on the selected progression, unique factorization makes
\[
\mathbf1^TM^{a+Rn}\mu
\]
constant. Primitive Perron asymptotics imply
\[
h^T\mu=0.
\]
Thus \(w_h\) descends through the complete relation lattice.

### Auxiliary-function scales

Primitive PF gives \(|\sigma^J(s)|=\Theta(\rho^J)\). Therefore monomial degree growth, algebraic height growth, boundary contraction, and support displacement all remain comparable to \(\rho^J\). T17's zero theorem and the T16/T17 rigid-local relation-lifting proof therefore carry through after replacing the uniform weight by \(w_h\).

Exact specialization remains
\[
\boxed{Q(\alpha,\mathbf X)=P(\mathbf X)}.
\]

Appending \(1\) remains harmless.

## 9. Completion-sign contradiction

Assume a genuinely aperiodic primitive variable-length system has
\[
H=N\in\mathbb Z_{>0}.
\]

Section 7 gives
\[
A_n\le(\lambda-\varepsilon)n
\]
eventually. Section 6 gives absolute convergence of the canonical scalar and all canonical state series at every actual tail.

Transport
\[
S(q)+3N=0
\]
to a sufficiently deep reduced regular tail, retain \(G_{Y,1}=S|_Y\), append \(1\), and apply the Perron-weight extension of T18.

The lifted algebraic identity has the same specialization polynomial. T19 pointwise completion portability therefore permits ordinary-real evaluation at the same algebraic tail point.

Exact scalar reconstruction gives
\[
S^{(\infty)}(q)+3N=0.
\]
But
\[
S^{(\infty)}(q)>0,\qquad N>0.
\]
Contradiction.

Hence
\[
\boxed{H\notin\mathbb Z_{>0}}.
\]

## 10. Reducible/nonprimitive boundary

The block theorem does not close ordinary prefixes.

A fixed-point prefix can terminate inside substituted blocks of different types and different growth scales. Therefore algebraic limits of
\[
B_J(s)/\ell_J(s)
\]
do not imply existence or algebraicity of
\[
\lim A_n/n
\]
or of
\[
\limsup A_n/n.
\]

Known results checked in T20 give:

- primitive morphic words have ordinary letter frequencies;
- any ordinary morphic letter frequency that exists is algebraic;
- expanding reducible substitutions have convergent normalized substituted-block frequencies after passage to a suitable power;
- morphic logarithmic frequencies exist.

The last two statements do not supply the required ordinary-prefix limsup gap.

Therefore the critical branch
\[
\boxed{\limsup A_n/n=\lambda}
\]
remains open for general reducible variable-length fixed points.

No explicit anchored example realizing it was found.

A second independent issue remains in reducible singular incidence: there need not be one strictly positive expanding left eigenweight that survives all relevant orbit-closure relations. Scalar convergence and algebraic lifting must remain separate theorem obligations.

## 11. Scalar relevance

Finite-occurrence components contribute finitely many terms.

Infinite zero-density components can contribute infinitely many terms and cannot be discarded.

Positive-density components contribute to an ordinary mean when it exists.

Rational minimalization does not define relevance; the canonical positive scalar does.

Under a global strict prefix gap all canonical state subseries are harmless because they are dominated by the same geometric scalar bound.

## 12. Pointwise completion portability

Once an exact algebraic functional identity is available, it may be evaluated at an algebraic point in another completion when:

1. rational coefficients are regular there;
2. all participating canonical series converge absolutely there;
3. finite reconstruction matrices are defined.

No open real polydisc is needed merely for this evaluation.

T20 does not confuse this pointwise statement with a theorem that manufactures an algebraic lift for every reducible nonuniform system.

## 13. Positive rational audit

The primitive strict gap above uses the T3 inequality from a **realized positive integer orbit**. Therefore it does not automatically exclude an arbitrary
\[
H\in\mathbb Q_{>0}.
\]

If the intrinsic primitive mean independently satisfies
\[
\alpha<\lambda,
\]
then the same lifting/sign proof excludes every positive rational \(H\).

Negative rational values remain unexcluded and are not Collatz counterexamples.

## 14. T2 consequence

Under T2's finite-alphabet anchoring hypotheses, bounded \(R_m\) would produce an ordinary positive integer anchor.

The primitive T20 theorem excludes a genuinely aperiodic such anchor.

Thus
\[
\boxed{R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}}
\]
for the newly closed primitive variable-length class.

## 15. Periodicity-Conjecture boundary after T20

| Recursive class | Status |
|---|---|
| Finite abelian translations | Closed by T11 |
| Finite nonabelian translations | Closed by T12 |
| Balanced one-variable finite-kernel systems | Closed by T13 |
| Primitive dominant multivariate systems | Closed by T16 |
| T17 stable-image systems | Closed; subsumed by T18 |
| T18 orbit-closure-reduced \(k\)-uniform stable-image systems | Algebraic lifting closed |
| T19 nonprimitive \(k\)-uniform systems | Positive-anchor route closed |
| Primitive growing variable-length substitutive systems | **NEWLY CLOSED by T20**, including singular incidence |
| Reducible variable-length systems with algebraic mean and separately valid lifting | Scalar convergence closed; sign conclusion conditional on lifting |
| General reducible/nonprimitive variable-length substitutive systems | **OPEN** |
| General multivariate/unbalanced finite-state systems outside the canonical analytic framework | **OPEN** |
| Arbitrary automatic/morphic parity languages | **OPEN** |
| Full Periodicity Conjecture | **OPEN** |

## 16. Cobham, López-Stoll, Brechler

The valuation word is morphic/substitutive in the T20 interface and is not assumed automatic.

**Cobham:** not applicable; no second independent automatic base is supplied.

**López-Stoll:** not load-bearing; completion transfer is through exact algebraic lifting plus pointwise convergence.

**Brechler:** not rechecked in T20. The fresh T18 check on 2026-10-03 found arXiv:2607.24877v1 still a preprint. It is not load-bearing.

## 17. Literature checkpoint

- J.-P. Allouche and J. Shallit, *Automatic Sequences*, CUP 2003, Theorem 8.4.5: an existing ordinary letter frequency in a morphic sequence is algebraic; in an automatic sequence it is rational.
- M. Lustig and C. Uyanik, “Perron-Frobenius theory and frequency convergence for reducible substitutions,” DCDS 37 (2017), 355-385, DOI 10.3934/dcds.2017015: reducible PF convergence and substituted-block frequencies.
- J. P. Bell, “Logarithmic frequency in morphic sequences,” JTNB 20 (2008), 227-241, DOI 10.5802/jtnb.625: logarithmic frequencies exist, but this is insufficient for the ordinary-prefix scalar gap.
- S. Li, “Letter frequency vs factor frequency in pure morphic words,” Advances in Applied Mathematics 164 (2025), 102834: current checkpoint on ordinary frequency questions.
- Gelfond-Schneider: used only to prove transcendence of \(\log_2 3\).

## 18. Mandatory twentieth-session progress/correction audit

**Scope:** aligned with the root objective; no explicit counterexample was produced.

**Compute economics:** no theorem-derived compute is justified. The remaining obstruction is symbolic ordinary-prefix asymptotics and reducible positive grading.

**Promotion quality:** only exact class theorems are promoted; no finite fixture or heuristic is promoted.

**Failed-route memory:** automaticity outside fixed-base systems, López-Stoll transfer, coordinatewise-contraction necessity, zero-density irrelevance, arbitrary nonnegative lattice conjugacy, and finite search routes remain killed.

**Hidden assumptions:** morphic is kept distinct from automatic; existence of a mean is not assumed in reducible systems; algebraic block ratios are not promoted to a global prefix theorem; pointwise convergence is not called neighborhood convergence; scalar convergence is not called relation lifting.

**Strategy decision:** repair the scalar transport with \(L_J(n)\); repair primitive toric lifting with Perron weight; pivot the next theorem to reducible ordinary-prefix limsup/positive grading. No compute pivot.

## 19. Compute decision

No new scientific starts, substitution enumeration, residue/carry/exponent-code search, CPU campaign, GPU work, cloud work, distributed work, or volunteer computation is authorized.

docs/COMPUTE_BUDGET.md: **UNCHANGED**.  
docs/METRIC_CATALOG.md: **UNCHANGED**.

## 20. Exact next theorem-sized obligation

**CDM4-T21 — reducible morphic ordinary-prefix limsup / positive-grading audit.**

For an expanding reducible nonerasing morphism, classify
\[
\beta=\limsup_{n\to\infty}\frac{A_n}{n}
\]
using the actual return-prefix decomposition, retaining unequal growth scales, equal-radius SCC chains, leading polynomial corrections, and imprimitive modulation.

Primary target: prove that \(\beta\) is algebraic or belongs to a finite algebraic set. If false, isolate the exact mechanism producing a nonalgebraic or critical limsup.

Separately, for every strict-gap subclass, determine whether the reduced stable orbit carries a strictly positive expanding linear weight sufficient for the T17/T18 toric lifting proof.

Do not infer global prefix behavior from substituted-block frequencies alone.

No scientific computation is authorized.

## 21. Deliverable audit

The report contains: inherited T19 state; exact variable-length incidence/length dynamics; SCC and spectral audit; polynomial/Jordan corrections; length and valuation asymptotics; \(B_J(s)/\ell_J(s)\); exact \(L_J(n)\); exact scalar identity; morphic-vs-automatic interface; mean existence/arithmetic; critical-system treatment; reducible treatment; scalar relevance including zero-density infinite components; weakest convergence criterion; pointwise portability; exact lifting status; exact specialization; harmless adjoining of \(1\); real scalar reconstruction; positive-integer exclusion; positive-rational boundary; negative-rational boundary; T2 consequence; Periodicity-Conjecture boundary; Cobham/López-Stoll/Brechler status; explicit-word/candidate/counterexample status; compute decision; mandatory T20 audit; and exact T21 obligation.

C — new recursive-language obstruction found