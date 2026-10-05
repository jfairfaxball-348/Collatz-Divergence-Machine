# CDM4-T29 — CANONICAL STRATUMWISE ALGEBRAIC-MOVING-TARGET ZERO THEOREM / EXACT-DESCENT AUDIT

**Date:** 2026-10-05  
**Authoritative input branch:** cdm4-t28-nonprincipal-multiscale-audit  
**Authoritative input commit:** 257fc07a02a437cb198fd98fa254b031d61d2f6a  
**T28 merged into main at session start:** **NO** — the exact T28 tip exists and main was verified divergent from it, so the T28 tip above was used as authority.  
**Working branch:** cdm4-t29-moving-target-zero-audit

Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. Finite-code search: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T29 proves the missing synchronized zero/nonvanishing theorem for the **actual canonical finite-jet auxiliary class produced by T28**, and this is sufficient to close the nonprincipal T22 multiscale exact-lifting obstruction.

The load-bearing published arithmetic input is Ru–Vojta's moving-hyperplane Subspace Theorem. In the form recorded as Theorem 7.6/7.7 in Vojta's exposition, it applies to a sequence
\[
x(n)\in\mathbf P^N(K)
\]
over one fixed number field, moving hyperplanes with
\[
h(H(n))=o(h(x(n))),
\]
and linear nondegeneracy over the coherent moving-coefficient field.

For the T28 jets all of those hypotheses can be checked exactly.

The main new points are:

1. After choosing a finite basis of a canonical face-prime jet, its coefficients are values of **fixed rational functions on the slower face**, with algebraic constants. Thus the load-bearing targets live in one fixed number field after evaluation. No varying algebraic-number field is needed.

2. Every infinite zero subsequence admits an infinite coherent refinement.

3. After grouping current-profile monomials by cosets of the slower character subgroup, a moving-field linear dependence clears denominators to a fixed nonzero Laurent relation on the T18 reduced torus. T18 finite-hit excludes infinitely many such hits.

4. T22 already gives, inside one positive growth profile,
\[
-\log|\theta^\gamma(q_n)|_2
=
\nu_i(\gamma)g_i(n)+o(g_i(n)),
\qquad
\nu_i(\gamma)>0.
\]
This leading coefficient is used only to identify the analytically dominant finite cluster. It is not a new lattice gauge, a Rees replacement, or an integral-closure filtration.

5. T28 finite jets imply local finiteness of canonical support in the leading coefficient \(\nu_i\). Hence every nonzero current-profile component has a finite dominant cluster of smallest \(\nu_i\), with a strict positive gap to omitted same-profile terms; higher-profile terms are smaller on a faster scale.

6. The dominant cluster is a finite moving hyperplane. Its coefficient height is
\[
O(g_{i-1}(n))=o(g_i(n)).
\]
The zero equation gives a relative 2-adic gap of size
\[
\Delta_\nu g_i(n)+o(g_i(n)).
\]

7. There are two exhaustive projective-height cases.

   - If the projective monomial point has height
     \[
     h(x(n))\asymp g_i(n),
     \]
     then the moving target has small height relative to the point. Coordinate hyperplanes supply the exact \(S\)-unit height baseline and the extra moving-hyperplane proximity contradicts Ru–Vojta.

   - If projective cancellation lowers the point height to
     \[
     h(x(n))=o(g_i(n)),
     \]
     divide by one dominant monomial. The normalized cluster value has algebraic height \(o(g_i(n))\) but 2-adic smallness \(\exp(-\Delta_\nu g_i(n)+o(g_i(n)))\). Ordinary Liouville forces exact zero, and T18 finite-hit then forces the finite cluster to vanish identically.

Thus projective cancellation does not create an unhandled branch.

This proves the canonical stratumwise moving-target zero theorem:
\[
\boxed{
E(q_n)=0\text{ on an infinite subsequence}
\Longrightarrow
\text{the lowest surviving canonical multiscale initial form vanishes identically}.
}
\]

The proof is synchronized: every stratum uses the same exact T18 orbit index \(n\). Iterating through the finite profile flag gives
\[
\boxed{
E(q_n)=0\text{ infinitely often}
\Longrightarrow
E=0
}
\]
for the T28 canonical auxiliary class modulo the already-known exact functional relations.

This closes the missing nonvanishing input in the T25/T27/T28 auxiliary-function proof. Relative Hilbert–Samuel Hermite–Padé multiplicity beats the finite Artin–Rees transport tax; the fastest live face supplies local decay and global height on the same \(g_r\)-scale; lower-face coefficient height is \(o(g_r)\); and T29 supplies eventual nonvanishing unless the auxiliary is already a functional relation.

Therefore the inherited T16/T17/T25/T27 relation-matrix argument yields
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
**literally on the original canonical variables for the complete genuinely aperiodic T22 multiscale class.**

No blowup or Rees-chart descent is needed. Exact powers \(\mathfrak p_i^P\) remain primary throughout.

The completion-sign chain therefore runs immediately. Under a hypothetical positive-integer anchor, T21 supplies the strict ordinary-prefix gap and real convergence; append \(1\), port the exact algebraic functional identity to the real completion, reconstruct the positive scalar, and obtain
\[
S^{(\infty)}(q)+3N=0
\]
against
\[
S^{(\infty)}(q)>0,\qquad N>0.
\]

Hence no genuinely aperiodic system in the complete T22 multiscale class has a positive-integer anchor.

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
now holds through the complete T22 multiscale class, strictly beyond the principal-fast class closed at T27.

Positive rational noninteger values remain excluded only when ordinary real subcriticality is independently known. Negative rational values remain unexcluded.

No explicit anchored aperiodic word, candidate, unbounded orbit, or Collatz counterexample was found. No scientific compute is justified.

## 2. Authority and inherited state

The exact T28 commit
\[
\texttt{257fc07a02a437cb198fd98fa254b031d61d2f6a}
\]
was verified at session start. The named T28 branch exists. Comparison with main showed divergent histories rather than T28 already merged into main. T29 therefore branched from the exact T28 tip.

T20–T28 are treated as closed. In particular T29 does not redo:

- the T18 dense reduced torus orbit and finite-hit property;
- T20 exact variable-length scalar transport;
- T21 strict positive-integer real prefix gap and expanding support grading;
- T22 intrinsic finite positive growth profiles and exact height/local-contraction asymptotics;
- T23 slowest-face elimination;
- T25 relative Hermite–Padé architecture;
- T26 aperiodicity \(\Rightarrow\) positive relative transcendence;
- T27 finite canonical inverse-transport tax and exact specialization normalization;
- T28 face-prime local rings, finite canonical jets, Hilbert–Samuel multiplicity, torsion-free local modules, and Artin–Rees transport tax.

## 3. Published moving-target theorem used

Let \(K\) be a number field and \(S\) a finite set of places. Ru–Vojta's theorem concerns moving hyperplanes
\[
H_1(n),\ldots,H_q(n)\subset\mathbf P^N_K
\]
and points
\[
x(n)\in\mathbf P^N(K).
\]

The hypotheses relevant here are:

1. general position of the selected moving hyperplanes;
2. on every infinite coherent subset, linear independence of the point coordinates over the moving coefficient field;
3. small target height
   \[
   h(H_j(n))=o(h(x(n))).
   \]

The conclusion is the moving-target Subspace inequality with coefficient
\[
N+1+\varepsilon.
\]

The stronger placewise-max variant is available, but T29 does not need it after deleting identically zero coefficients.

Every infinite index set contains an infinite coherent subset for a finite family of moving targets. Hence coherence is available rather than assumed.

Later moving-hypersurface variants are not needed: after finite monomial-coordinate embedding, the T29 initial form is linear.

## 4. Canonical finite jets lie over one fixed coefficient field

Fix stratum \(i\). T28 gives
\[
\mathcal O_i=K[\Gamma_Y]_{I_{>i}},
\qquad
\mathfrak p_i=I_{>i}\mathcal O_i,
\]
and
\[
k_i=\mathcal O_i/\mathfrak p_i
=
\operatorname{Frac}K[\Gamma_{\le i}].
\]

For every fixed \(P\),
\[
\mathcal O_i/\mathfrak p_i^P
\]
has finite length over \(k_i\).

Choose a finite \(k_i\)-basis adapted to
\[
\mathfrak p_i^a/\mathfrak p_i^{a+1},
\qquad
0\le a<P.
\]

A canonical state jet contains only finitely many prefix terms. Its coordinates in this basis are finite sums of slower monomials with algebraic constants, hence elements of \(k_i\).

Evaluating a fixed
\[
a\in k_i
\]
on the exact slower orbit gives values in one fixed number field containing the finitely many algebraic translation constants. Fixed rational-function height estimates give
\[
h(a(q_n))=O(g_i(n))
\]
on the \(i\)-th slower face.

At the next profile,
\[
g_i(n)=o(g_{i+1}(n)).
\]

Thus the canonical moving target has the required small-height shape.

T29 does not claim a new theorem for arbitrary algebraic-cover-valued moving coefficients whose specializations range through unbounded number fields. That extension is unnecessary for the T28 Hermite–Padé auxiliaries.

## 5. Within-profile leading coefficient

For every positive reduced character \(\gamma\) of exact profile \(g_i\), T22 gives
\[
-\log|\theta^\gamma(q_n)|_2
=
\nu_i(\gamma)g_i(n)+o(g_i(n)),
\qquad
\nu_i(\gamma)>0.
\tag{1}
\]

For positive characters of the same profile,
\[
\nu_i(\gamma+\eta)
=
\nu_i(\gamma)+\nu_i(\eta).
\tag{2}
\]

Multiplication by a strictly slower character changes (1) only by \(o(g_i(n))\), so the leading coefficient is well-defined for current-profile transverse monomials modulo slower factors.

This leading coefficient is used only for analytic dominance. It does not replace exact powers by weighted ideals, integral closures, or a slope-normalized lattice.

## 6. Local discreteness of canonical support

Fix a live transition from \(\Gamma_{\le i-1}\) to profile \(g_i\).

There are finitely many reduced letter generators. Among those of current profile, let
\[
\nu_{\min}>0
\]
be the minimum positive leading coefficient.

A canonical prefix term with \(a\) current-or-faster transverse letters has current-profile leading coefficient at least
\[
a\nu_{\min}
\]
unless its profile is already faster.

Hence a bound
\[
\nu_i(\gamma)\le B
\]
bounds the number of current-profile transverse letters.

T28 proves that the transverse prefix count tends to infinity, so only finitely many canonical prefix terms have bounded transverse count. Therefore
\[
\boxed{
\text{for every }B,\text{ only finitely many canonical current-profile terms have }\nu_i(\gamma)\le B.
}
\tag{3}
\]

A nonzero current-profile component has a smallest leading coefficient \(\nu_0\), and local finiteness gives a positive gap
\[
\Delta_\nu>0
\]
to the next occurring value.

All terms with coefficient \(\nu_0\) form a finite dominant cluster.

## 7. Fixed monomial basis over the slower field

Write the dominant cluster as
\[
F_i(x)
=
\sum_{j=1}^M a_j(x_{\rm slow})\theta^{\beta_j}(x),
\tag{4}
\]
with
\[
a_j\in\operatorname{Frac}K[\Gamma_{\le i-1}].
\]

If
\[
\beta_j-\beta_k
\]
lies in the group generated by the slower face, absorb the corresponding slower character into the coefficient and group the terms.

After compression, the \(\beta_j\) lie in distinct cosets modulo the slower character subgroup. Consequently their characters are linearly independent over the slower rational field in the reduced torus function field.

## 8. Theorem T29.1 — linear nondegeneracy over the moving coefficient field

Let \(J\) be any infinite coherent subset of synchronized T18 orbit indices for (4), and put
\[
x(n)
=
[
\theta^{\beta_1}(q_n):
\cdots:
\theta^{\beta_M}(q_n)
].
\]

Let \(R_{J,H}\) be the Ru–Vojta moving coefficient field generated by ratios of the
\[
a_j(q_n).
\]

Then the coordinates of \(x(n)\) are linearly independent over \(R_{J,H}\).

Indeed, a moving-field dependence can be expressed using rational operations on evaluation sequences of fixed slower rational functions. Clearing those fixed denominators converts it into a fixed Laurent relation
\[
\sum_j b_j(x_{\rm slow})\theta^{\beta_j}(x)=0
\]
on infinitely many T18 orbit points.

Because the \(\beta_j\) occupy distinct slower cosets, this Laurent function is nonzero. T18 says a proper algebraic subvariety meets the chosen reduced arithmetic-progression orbit only finitely often. Contradiction.

Thus moving-field linear nondegeneracy holds on every infinite coherent refinement.

## 9. General position

Delete coefficients \(a_j\) that are identically zero as slower rational functions. T18 finite-hit implies every remaining
\[
a_j(q_n)
\]
is nonzero for all but finitely many orbit indices.

For \(M\ge2\), use the \(M\) coordinate hyperplanes
\[
X_j=0
\]
and the moving hyperplane
\[
H(n):\quad
\sum_j a_j(q_n)X_j=0.
\]

In \(\mathbf P^{M-1}\) these \(M+1\) hyperplanes are in general position whenever every moving coefficient is nonzero.

If \(M=1\), projective height is zero and the direct Liouville branch of Section 10 applies; Ru–Vojta is unnecessary.

## 10. Small value: projective-height dichotomy

All normalized monomial coordinates
\[
\theta^{\beta_j}(q_n)
\]
are \(S\)-units for one fixed finite \(S\) containing the 2-adic and Archimedean places.

All \(\beta_j\) are in the same profile and same minimal leading-coefficient cluster:
\[
\log\max_j|\theta^{\beta_j}(q_n)|_2
=
-\nu_0g_i(n)+o(g_i(n)).
\tag{5}
\]

The omitted same-profile terms have leading coefficient at least
\[
\nu_0+\Delta_\nu,
\]
and every higher-profile term is smaller than
\[
\exp(-B g_i(n))
\]
for every fixed \(B\).

If the full analytic expression vanishes at \(q_n\), then
\[
|F_i(q_n)|_2
\le
\exp\left(
-(\nu_0+\Delta_\nu)g_i(n)+o(g_i(n))
\right).
\tag{6}
\]

Normalize the moving hyperplane by one nonzero coefficient. The 2-adic Weil function satisfies
\[
\lambda_{H(n),2}(x(n))
\ge
\Delta_\nu g_i(n)+o(g_i(n)).
\tag{7}
\]

Now split.

### Case A — full projective height

Suppose
\[
h(x(n))\asymp g_i(n)
\]
on an infinite subsequence.

Then
\[
h(H(n))=O(g_{i-1}(n))=o(h(x(n))),
\]
and (7) gives
\[
\lambda_{H(n),2}(x(n))
\ge
\delta h(x(n))
\]
for some \(\delta>0\).

For the coordinate hyperplanes \(H_1,\ldots,H_M\), the \(S\)-unit product formula gives
\[
\frac1{[K:\mathbf Q]}
\sum_{v\in S}
\sum_{j=1}^M
\lambda_{H_j,v}(x(n))
=
M h(x(n))+O(1).
\tag{8}
\]

The moving hyperplane adds the positive \(\delta h(x(n))\) excess, while Ru–Vojta in projective dimension \(M-1\) gives at most
\[
(M+\varepsilon)h(x(n))+O(1).
\]

Taking \(0<\varepsilon<\delta\) is impossible.

### Case B — collapsed projective height

Suppose instead
\[
h(x(n))=o(g_i(n))
\]
on an infinite subsequence.

Divide the cluster by one dominant monomial:
\[
G_n
=
\frac{F_i(q_n)}{\theta^{\beta_1}(q_n)}.
\]

This lies in the fixed number field. Standard height inequalities give
\[
h(G_n)
=
O(h(x(n))+g_{i-1}(n))
=
o(g_i(n)).
\tag{9}
\]

But (5)–(6) give
\[
-\log|G_n|_2
\ge
\Delta_\nu g_i(n)+o(g_i(n)).
\tag{10}
\]

For a nonzero element of a fixed number field, the product formula gives a Liouville bound
\[
-\log|G_n|_2
\le
C h(G_n)+O(1)
=
o(g_i(n)),
\]
contradicting (10).

Hence \(G_n=0\) eventually on the subsequence, so
\[
F_i(q_n)=0
\]
infinitely often. The finite cluster is a fixed rational function on the reduced torus; after clearing its fixed denominator, T18 finite-hit forces it to vanish identically.

Thus both projective-height branches force the dominant cluster to vanish identically.

## 11. Theorem T29.2 — canonical stratumwise zero theorem

Let \(E\) be a canonical analytic expression of the class used in the T28 lifting construction: it is generated by the canonical state functions and fixed algebraic/rational toric coefficient functions, and every required face-prime jet is the finite canonical jet of T28.

Suppose
\[
E(q_n)=0
\]
on an infinite synchronized orbit subsequence.

Then the lowest surviving growth-profile component of \(E\) vanishes identically modulo the exact functional relation ideal.

For the slowest profile, T23 already supplies slowest-face elimination.

At a later profile \(g_i\), all lower profiles have already been removed. Sections 5–6 select the finite dominant current-profile cluster. Sections 7–9 verify the fixed monomial basis, coherence, general position where needed, and moving-field linear nondegeneracy. Section 10 forces the cluster to vanish identically, by Ru–Vojta in Case A or direct Liouville in Case B.

Remove the identically vanishing cluster and repeat through the locally finite leading-coefficient support. If every finite cluster vanishes, separatedness/uniqueness of the canonical toric analytic expansion makes the whole current-profile component zero.

No asynchronous orbit index is introduced.

## 12. Corollary T29.3 — full synchronized finite-flag zero theorem

There are only finitely many T22 positive profiles
\[
g_1<\cdots<g_r.
\]

Applying Theorem T29.2 successively at the same exact orbit index gives
\[
\boxed{
E(q_n)=0\text{ infinitely often}
\Longrightarrow
E=0
}
\]
in the canonical analytic algebra modulo the exact functional relation ideal.

Equivalently, every nonzero canonical expression in the T28 auxiliary class has only finitely many zeros on the synchronized T18 reduced orbit.

## 13. Interface with relative Hermite–Padé and Artin–Rees

T29 does not redo T28's Hilbert–Samuel count.

For face-prime height \(c_i\), T28 gives
\[
\frac{P_{\rm rel,i}}{D_f}
\gtrsim
h(D_X)^{1/c_i}-1.
\]

Genuine aperiodicity gives
\[
h(D_X)\to\infty.
\]

T28 also gives degree-\(D_X\) inverse-transport loss
\[
D_XC_{\rm AR}\frac{a_i^n-1}{a_i-1}.
\]

Choose \(D_X\) so the relative multiplicity ratio dominates the fixed Liouville and Artin–Rees constants; then choose \(D_f\) and \(P\); then transport and evaluate at the same synchronized orbit time.

At the fastest live face:

- local decay is on the \(g_r(n)\)-scale;
- global point height is on the same \(g_r(n)\)-scale;
- residue-field coefficient height is
  \[
  O(g_{r-1}(n))=o(g_r(n)).
  \]

If transported auxiliary evaluations vanish infinitely often, T29.3 makes the auxiliary a functional relation. Otherwise T29.3 gives eventual nonvanishing, and the inherited local upper bound contradicts the Liouville lower bound once the relative multiplicity has been chosen above the fixed transport/height constants.

Thus the auxiliary must lie in the exact functional relation ideal.

## 14. Theorem T29.4 — complete T22 nonprincipal exact relation lifting

Assume a T18-reduced T22 multiscale system is genuinely aperiodic.

Then every prescribed homogeneous algebraic value relation
\[
P(\mathbf G(\alpha))=0
\]
in the chosen nonarchimedean completion lifts to an algebraic functional relation
\[
Q(x,\mathbf G(x))=0
\]
on the original canonical variables with
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

The proof uses:

- T28 finite canonical jets and unbounded relative multiplicity at the fastest face;
- T28 finite Artin–Rees inverse-transport loss on the original relation module;
- T29.3 eventual nonvanishing for every nonzero transported auxiliary;
- matched fastest-face local/global scale;
- inherited T16/T17 local estimates, product-formula Liouville, relation-matrix construction and final normalization.

No quotient of scalar support, non-unimodular gauge, associated-graded replacement, or asynchronous orbit time is used.

If an intermediate constant unit \(u\in\overline{\mathbf Q}^{\times}\) occurs in normalization, replacing \(\widetilde Q\) by \(u^{-1}\widetilde Q\) preserves the functional identity and restores the prescribed specialization exactly. Thus the exact-specialization rule is satisfied literally.

## 15. Rees/blowup exact-descent audit

T29 does **not** need the blowup route.

Accordingly:

- no semilinear lift to a normalized blowup is used;
- no eventual single-chart theorem is required;
- no exceptional-coordinate height estimate is used;
- no overlap gluing theorem is required;
- no exceptional denominator is introduced;
- no relation is first constructed only upstairs.

All multiplicity remains in exact powers
\[
\mathfrak p_i^P.
\]

Rees valuations retain their T28 interpretation only:
\[
f\in\overline{I^P}
\]
is an integral-closure statement and is not substituted for
\[
f\in I^P.
\]

Hence
\[
\boxed{
\text{new Rees/blowup descent theorem: NOT NEEDED AND NOT CLAIMED.}
}
\]

Exact descent is algebraic because the proof never leaves the original canonical relation module.

## 16. Completion-sign consequence

Assume for contradiction that a genuinely aperiodic system in the complete T22 multiscale class has a positive integer anchor
\[
N>0.
\]

Append the constant function \(1\) and use the exact anchor relation. Theorem T29.4 gives a functional identity with the original specialization polynomial exactly preserved.

T21 gives
\[
\limsup_{n\to\infty}\frac{A_n}{n}<\log_2 3
\]
under the positive-integer anchor hypothesis, so the canonical scalar and state tails converge in the ordinary real completion at every actual algebraic tail point.

Port the algebraic identity to the real completion and reconstruct the original scalar:
\[
S^{(\infty)}(q)+3N=0.
\]

But
\[
S^{(\infty)}(q)>0,
\qquad
N>0.
\]

Contradiction.

Therefore
\[
\boxed{
\text{no genuinely aperiodic T22 multiscale system has a positive-integer anchor.}
}
\]

## 17. Consequence for bounded canonical representatives

Under the inherited T2 finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}
\]
produces an ordinary positive-integer anchor.

T29 excludes such an anchor for every genuinely aperiodic system in the complete T22 class.

Hence
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
through the complete T22 multiscale class.

This strictly extends the T27 principal-fast result.

## 18. Positive and negative rational values

The completion-sign contradiction above uses the T21 strict real prefix gap derived from a **realized positive integer Collatz anchor**.

T29 therefore does not promote a universal exclusion of every abstract
\[
H\in\mathbf Q_{>0}.
\]

If ordinary real subcriticality
\[
\limsup A_n/n<\log_2 3
\]
is independently known for a T29-lifted system, the same exact functional identity excludes a positive rational value.

Without that independent real hypothesis, positive rational noninteger status is unchanged.

Negative rational values remain unexcluded and are not Collatz counterexamples.

## 19. Literature audit

### Ru–Vojta

Min Ru and Paul Vojta, “Schmidt's subspace theorem with moving targets,” *Inventiones Mathematicae* 127 (1997), 51–65, DOI 10.1007/s002220050114.

Load-bearing facts:

- moving hyperplanes over a fixed number field;
- coherent subsequences and the moving coefficient field;
- linear nondegeneracy over that field;
- target-height hypothesis
  \[
  h(H(n))=o(h(x(n)));
  \]
- projective Subspace bound
  \[
  (N+1+\varepsilon)h(x(n)).
  \]

Vojta's later exposition records these as Theorems 7.6 and 7.7.

### Moving hypersurfaces

Later moving-hypersurface theorems preserve the same coherence/small-height/nondegeneracy architecture. They are not needed here because the canonical finite-jet initial form is linear after monomial-coordinate embedding.

### Adamczewski–Faverjon 2026

The published multivariate Mahler lifting architecture remains inherited and load-bearing for the algebraic relation-matrix and exact-normalization stages. It is not treated as the T29 moving-target theorem.

### Brechler 2026

Enzo Brechler, arXiv:2607.24877v1, “Transcendence of multivariate Mahler functions and algebraic relations between their values.”

Rechecked on 2026-10-05: arXiv still lists version 1; current indexing located in this audit still classifies it as a preprint; no journal publication was located. It remains non-load-bearing.

## 20. Required deliverable answers

- **Do the T28 finite algebraic jets satisfy a published moving-target theorem?**  
  **YES for the actual canonical jet class used by Hermite–Padé.** After finite basis expansion the moving coefficients are fixed slower rational functions evaluated in one number field; Ru–Vojta applies in the full-projective-height branch, with direct Liouville covering projective-height collapse.

- **Coherence proved?**  
  **YES.** Every infinite zero subsequence admits an infinite coherent refinement.

- **Algebraic/linear nondegeneracy proved?**  
  **YES.** After slower-coset compression, any moving-field dependence would give a fixed Laurent relation with infinitely many T18 orbit hits.

- **Small value forces exact vanishing of the next-stratum initial form?**  
  **YES for the canonical class.** The within-profile 2-adic leading coefficient produces a finite dominant cluster and a positive local gap; Ru–Vojta or direct Liouville forces exact vanishing.

- **Does induction through all growth strata work at one synchronized orbit time?**  
  **YES.**

- **New Rees/blowup descent theorem?**  
  **NO; unnecessary.**

- **Do local chart relations glue and descend?**  
  **NOT USED.** No chartwise relation is constructed.

- **Are exact powers retained rather than integral closures?**  
  **YES.**

- **Does relative Hermite–Padé / Artin–Rees plug into the zero theorem?**  
  **YES.**

- **New exact relation-lifting theorem obtained?**  
  **YES — complete genuinely aperiodic T22 multiscale class.**

- **Does**
  \[
  Q(\alpha,\mathbf X)=P(\mathbf X)
  \]
  **survive literally?**  
  **YES.**

- **Completion-sign contradiction applies?**  
  **YES for positive-integer anchors.**

- **New positive-integer anchor class excluded?**  
  **YES — the remaining genuinely aperiodic nonprincipal T22 multiscale class.**

- **Does**
  \[
  R_m\text{ bounded}\Longrightarrow\text{eventual periodicity}
  \]
  **extend beyond principal-fast?**  
  **YES — through the complete T22 multiscale class under the inherited T2 anchoring hypotheses.**

- **Positive rational noninteger values?**  
  **UNCHANGED in general; excluded when independent real subcriticality is known.**

- **Negative rational values?**  
  **UNCHANGED / UNEXCLUDED.**

- **Explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample found?**  
  **NONE.**

- **Scientific compute justified?**  
  **NO.**

## 21. Permanent T29 lessons

### T29-L1 — canonical “algebraic moving coefficients” are fixed-field rational targets after jet expansion

For the actual T28 auxiliaries, no varying-number-field theorem is required.

### T29-L2 — coherence is cheap; nondegeneracy is substantive

Coherence comes from the standard extraction lemma. T18 finite-hit geometry proves the needed moving-field nondegeneracy.

### T29-L3 — exact ideal order and analytic dominance are different but compatible

The algebraic proof keeps exact powers \(\mathfrak p_i^P\). The local leading coefficient \(\nu_i\) only identifies the analytically dominant finite cluster inside those exact jets.

### T29-L4 — projective-height collapse is a Liouville gain, not a new obstruction

If the dominant monomial point retains the current scale, Ru–Vojta applies. If common current-scale growth cancels projectively, the normalized algebraic value has smaller global height while retaining a full current-scale local gap, so direct Liouville is stronger.

### T29-L5 — the nonprincipal obstruction is removed without a blowup

No exceptional chart, integral closure, or gluing theorem is needed.

### T29-L6 — the full T22 multiscale class is exact-lifting closed

The remaining single-morphism boundary lies outside T21's expanding nonerasing hypothesis, not inside unequal-growth toric lifting.

## 22. Next surviving recursive class

T21–T29 close the expanding nonerasing pure-morphic class in scope, including reducible systems with arbitrary finite T22 multiscale growth flags.

The first surviving **single-morphism** class is therefore the non-expanding / erasing boundary: morphic presentations for which the exact fixed-point dynamics cannot yet be placed in the T21 expanding nonerasing framework with exact preservation of the valuation word, prefix cylinders, and canonical scalar specialization.

More general finite-directive \(S\)-adic systems lie beyond that boundary.

## 23. Exact next theorem-sized obligation

**CDM4-T30 — NONEXPANDING / ERASING MORPHIC NORMALIZATION AND ANCHOR-OBSTRUCTION AUDIT.**

T30 is also the mandatory thirtieth-session progress/correction audit.

Primary theorem-sized target:

> Let a finite positive valuation word be generated by a pure morphic presentation outside the T21 expanding nonerasing hypotheses. Prove that every genuinely aperiodic such presentation can be transformed, with exact preservation of the valuation word and the T2 prefix-cylinder/anchor scalar, into an expanding nonerasing morphic system already covered by T29; or identify the first irreducible non-growing/erasing class for which such a normalization is impossible.

If a residual class survives, derive its exact prefix/scalar transport and determine whether a hypothetical positive integer anchor still forces the strict real prefix gap and a finite toric growth filtration sufficient for the T29 moving-target mechanism.

Do not reopen T22–T29 multiscale lifting.

No substitution enumeration, candidate trajectories, scientific starts, finite-code search, CPU/GPU/cloud/distributed work, or new generator/distribution is authorized.

## 24. Classification

\[
\boxed{
\textbf{C — SYNCHRONIZED MOVING-TARGET ZERO THEOREM AND COMPLETE T22 MULTISCALE EXACT LIFTING PROVED.}
\]

No Collatz counterexample is claimed.
