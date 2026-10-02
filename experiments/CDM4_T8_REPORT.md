# CDM4-T8 — P-ADIC SAME-POINT NO-CANCELLATION AUDIT

Date: 2026-10-02

Authoritative input commit: f840c70c40727b5d3527c7f7a5baf5bd47b5ac1f

Session type: theory / literature audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue/carry/exponent-code optimization: **NONE**  
CPU/GPU/cloud/distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T8 does **not** prove the required p-adic same-point no-cancellation theorem for a genuinely multi-character higher-rank Collatz automatic system.

It does, however, sharpen the exact elementary-2-group problem substantially.

For every balanced k-uniform translation system on an elementary 2-group, after exact removal of unreachable states and output-identical translations, the true k-kernel is an explicit finite quotient. Walsh/Fourier transform diagonalizes the complete system over the rationals. Every supported character component is an exact first-order homogeneous Mahler product.

The strongest new exact fact is that the entire character singularity problem disappears in this class. If

\[
W=\frac{2^B}{3^k},
\]

then, for every character \(\chi\) and every \(j\ge 0\),

\[
S_\chi(W^{k^j})\equiv 1\pmod {2^{Bk^j}}.
\]

Hence every character factor is a 2-adic unit and is nonzero at every depth. The normalized character values are convergent 2-adic infinite products, and their 2-adic valuations are exactly the valuations of their initial Fourier coefficients.

This is a structural reduction, not a no-cancellation theorem. No class-wide valuation separation was proved; even distinct valuations would not by itself forbid a rational sum. No functional algebraic-independence theorem was proved for the character products. No verified peer-reviewed p-adic theorem was found that transfers the required functional independence to linear or algebraic independence of several values at the same rational S-unit point \(W\).

A serious source-level recovery attempt was made for Xu–Wang 2004, Wang 2006, Wang–Xu 2006, Flicker 1979, Kubota, Loxton–van der Poorten, Nishioka, and related p-adic algebraic-independence work. The original Flicker paper was recovered and audited in detail; its hypotheses were not verified for the exact Collatz family. The official journal pages for Xu–Wang 2004 and Wang 2006 expose bibliographic material and abstracts, but the full theorem statements were not recoverable in sufficiently inspectable authoritative text in this session. They therefore remain non-load-bearing.

Accordingly T8 rules out no new genuinely multi-character higher-rank recursive class. T6's first-order mechanism still applies whenever the exact output reduces, modulo rational components, to a single nonrational character, but that is the already-understood one-dimensional quotient case rather than the missing higher-rank theorem.

No scientific compute is justified.

## 2. Authority, scope, and preserved route kills

Before mathematical work, T8 read the required governance files and the complete T1–T7 theory chain from the authoritative commit.

All prior route kills remain binding. In particular T8 does not use:

- finite survival or finite residue coincidence as evidence of divergence;
- substitution enumeration;
- finite carry or exponent-code optimization;
- López–Stoll's unresolved completion bridge;
- a complex Mahler lifting theorem as a 2-adic theorem;
- higher-order scalarization as an application of Bugeaud–Yao;
- regular singularity as arithmetic-value rigidity;
- separate transcendence as same-point linear independence;
- powers of 2 and 3 as a substitute for Cobham's two-base hypothesis.

The only permitted computation was tiny exact symbolic checking if required. No executable check was necessary: all new identities below follow directly from the exact group and p-adic algebra.

## 3. Exact elementary-2-group translation class

Let

\[
A\cong(\mathbb Z/2\mathbb Z)^d,\qquad d\ge2.
\]

Choose digit translations

\[
\varepsilon_0,\ldots,\varepsilon_{k-1}\in A
\]

and define the k-uniform translation substitution

\[
\sigma(a)_r=a+\varepsilon_r.
\]

For a fixed point prolongable on \(0\), necessarily

\[
\varepsilon_0=0,
\]

and the fixed point satisfies

\[
u_{kn+r}=u_n+\varepsilon_r.
\tag{1}
\]

Let \(v:A\to\mathbb Z_{>0}\) be the accelerated-Collatz valuation coding. T8 assumes exact balance:

\[
\sum_{r=0}^{k-1}v(a+\varepsilon_r)=B
\qquad\text{for every }a\in A.
\tag{2}
\]

For state \(a\), define the chronological prefix valuations

\[
A_{a,0}=0,\qquad
A_{a,j}=\sum_{h=0}^{j-1}v(a+\varepsilon_h),
\]

and the exact integer Collatz block constant

\[
C_a=
\sum_{j=0}^{k-1}
3^{k-1-j}2^{A_{a,j}}.
\tag{3}
\]

The common balance (2) gives the exact one-variable Collatz point

\[
W=\frac{2^B}{3^k},
\qquad
v_2(W)=B>0.
\tag{4}
\]

Define the shifted block-constant series

\[
F_a(z)=\sum_{n\ge0} C_{u_n+a}z^n.
\tag{5}
\]

Equation (1) gives the exact state system

\[
F_a(z)=
\sum_{r=0}^{k-1}z^rF_{a+\varepsilon_r}(z^k).
\tag{6}
\]

With the integer normalization (3), the exact inverse-Collatz value is

\[
H=-\frac{F_0(W)}{3^k}.
\tag{7}
\]

Thus rationality of the ordinary anchor is reduced exactly to rationality of the prescribed value \(F_0(W)\) in \(\mathbb Q_2\).

## 4. Exact true k-kernel dimension

The group presentation can contain unreachable or output-redundant states. T8 removes both exactly.

Let

\[
E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle\le A.
\tag{8}
\]

Every state reached by a finite base-k digit word lies in \(E\), and conversely every element of \(E\) is represented by some finite digit word. Therefore the reachable state group is exactly \(E\).

Restrict \(C:a\mapsto C_a\) to \(E\), and define its translation stabilizer

\[
K_C=
\{h\in E:C_{x+h}=C_x\text{ for every }x\in E\}.
\tag{9}
\]

The k-kernel sections of the coefficient sequence \(C_{u_n}\) are precisely

\[
n\longmapsto C_{u_n+a},
\qquad a\in E.
\]

Two such sections are equal exactly when their shift difference lies in \(K_C\). Hence the exact true k-kernel dimension is

\[
\boxed{m=|E/K_C|.}
\tag{10}
\]

This is not merely the size of the formal state group.

In the faithful reachable case \(E=A\) and \(K_C=\{0\}\),

\[
m=|A|=2^d.
\]

All subsequent Fourier statements may therefore be made on the reduced quotient \(E/K_C\). Characters not descending to that quotient have zero exact output support.

## 5. Exact Walsh/Fourier diagonalization

Every character of an elementary 2-group is rational-valued:

\[
\chi:A\to\{\pm1\}.
\]

Define

\[
\widehat F_\chi(z)=
\sum_{a\in A}\chi(a)F_a(z),
\qquad
\widehat C_\chi=
\sum_{a\in A}\chi(a)C_a,
\tag{11}
\]

and

\[
S_\chi(z)=
\sum_{r=0}^{k-1}\chi(\varepsilon_r)z^r
\in\mathbb Z[z].
\tag{12}
\]

Fourier transform of (6) gives, exactly,

\[
\boxed{
\widehat F_\chi(z)
=
S_\chi(z)\widehat F_\chi(z^k).
}
\tag{13}
\]

The coefficient sequence has an even more explicit form. Reindexing (11),

\[
\sum_{a\in A}\chi(a)C_{u_n+a}
=
\chi(u_n)\widehat C_\chi,
\]

so

\[
\widehat F_\chi(z)
=
\widehat C_\chi
\sum_{n\ge0}\chi(u_n)z^n.
\tag{14}
\]

Consequently:

- if \(\widehat C_\chi=0\), then \(\widehat F_\chi\equiv0\);
- if \(\widehat C_\chi\ne0\), rationality of \(\widehat F_\chi\) is equivalent to eventual periodicity of the projected automatic sequence \(\chi(u_n)\);
- formal character distinctness does not imply that every component is nonrational.

For the trivial character \(1\),

\[
S_1(z)=1+z+\cdots+z^{k-1}
=\frac{1-z^k}{1-z},
\]

and

\[
\widehat F_1(z)=\frac{\widehat C_1}{1-z}.
\tag{15}
\]

Thus the trivial component is rational exactly.

Fourier inversion gives

\[
F_0(z)=\frac1{|A|}\sum_\chi\widehat F_\chi(z).
\tag{16}
\]

The exact Fourier support is

\[
\mathcal S_C=
\{\chi:\widehat C_\chi\ne0\}.
\tag{17}
\]

After reduction to \(E/K_C\), this support lies in the dual of the true quotient. Define

\[
t_{\rm supp}
=
|\mathcal S_C\setminus\{1\}|,
\]

and the genuinely nonrational support

\[
\mathcal I=
\{\chi\ne1:
\widehat C_\chi\ne0,\ 
\chi(u_n)\text{ is not eventually periodic}\},
\qquad
t=|\mathcal I|.
\tag{18}
\]

It is \(t\), not \(2^d-1\), that measures the actual same-point nonrational cancellation problem.

## 6. Determinant and rank

Let \(A_r\) be the permutation matrix for translation by \(\varepsilon_r\). Then

\[
M_A(z)=\sum_{r=0}^{k-1}z^rA_r.
\tag{19}
\]

The Walsh transform diagonalizes every \(A_r\) simultaneously. Therefore

\[
\boxed{
\det M_A(z)=\prod_{\chi\in\widehat A}S_\chi(z).
}
\tag{20}
\]

Because \(\varepsilon_0=0\),

\[
S_\chi(0)=1
\]

for every character. Hence every \(S_\chi\) is a nonzero polynomial, and \(M_A(z)\) has full rank over \(\mathbb Q(z)\).

After exact quotient reduction the determinant is the same product over the quotient characters and the rank is exactly \(m=|E/K_C|\).

Also

\[
M_A(0)=I,
\]

so the system has no singularity at the origin.

## 7. T8 all-depth singularity theorem

This is the strongest new exact theorem of the session.

### Theorem T8.1 — every elementary-2-group character factor is a unit on the Collatz orbit

For every character \(\chi\) and every \(j\ge0\),

\[
S_\chi(W^{k^j})\in\mathbb Z_2^\times.
\]

More precisely,

\[
\boxed{
S_\chi(W^{k^j})
\equiv1\pmod{2^{Bk^j}}.
}
\tag{21}
\]

### Proof

Since \(\varepsilon_0=0\),

\[
S_\chi(z)=
1+\sum_{r=1}^{k-1}\chi(\varepsilon_r)z^r.
\]

Equation (4) gives

\[
v_2(W^{rk^j})=rBk^j\ge Bk^j
\]

for every \(r\ge1\). Hence every nonconstant term lies in \(2^{Bk^j}\mathbb Z_2\), proving (21). A 2-adic number congruent to \(1\) modulo \(2\) is a unit and cannot vanish. QED.

This is stronger and cleaner than the T6 rational-root argument. It is genuinely completion-correct and holds simultaneously for every character and every Mahler depth.

In particular,

\[
\det M_A(W^{k^j})\ne0
\qquad
\text{for every }j\ge0.
\tag{22}
\]

Thus singularity avoidance is **not** the missing T8 theorem in the elementary-2-group class.

## 8. Infinite-product representation and exact valuations

Iterating (13),

\[
\widehat F_\chi(W)
=
\left(
\prod_{j=0}^{J-1}S_\chi(W^{k^j})
\right)
\widehat F_\chi(W^{k^J}).
\]

Since \(W^{k^J}\to0\) 2-adically and \(\widehat F_\chi(0)=\widehat C_\chi\), Theorem T8.1 gives the rigorous convergent product

\[
\boxed{
\widehat F_\chi(W)
=
\widehat C_\chi
\prod_{j\ge0}S_\chi(W^{k^j}).
}
\tag{23}
\]

Every factor in the product is a 2-adic unit, hence

\[
\boxed{
v_2(\widehat F_\chi(W))
=
v_2(\widehat C_\chi)
}
\tag{24}
\]

for every supported character.

Combining (7), (15), (16), and (23) gives the exact anchor formula

\[
\boxed{
H=
-\frac1{3^k|A|}
\left[
\frac{\widehat C_1}{1-W}
+
\sum_{\substack{\chi\ne1\\ \widehat C_\chi\ne0}}
\widehat C_\chi
\prod_{j\ge0}S_\chi(W^{k^j})
\right].
}
\tag{25}
\]

This is the exact T8 same-point no-cancellation problem.

## 9. Collatz block arithmetic and balance

The block constants retain arithmetic information not visible in the transition matrix.

From (3), the \(j=0\) term is \(3^{k-1}\) and every later term is even. Hence

\[
C_a\equiv1\pmod2
\qquad\text{for every }a.
\tag{26}
\]

For every nontrivial character,

\[
\sum_a\chi(a)=0,
\]

so

\[
\boxed{
\widehat C_\chi\equiv0\pmod2.
}
\tag{27}
\]

More precisely, the \(j=0\) Fourier term cancels and

\[
\widehat C_\chi=
\sum_{j=1}^{k-1}
3^{k-1-j}
\sum_{a\in A}
\chi(a)2^{A_{a,j}},
\tag{28}
\]

whose \(j\)-th summand is divisible by \(2^j\).

No class-wide theorem was found forcing the nonzero quantities \(\widehat C_\chi\) to have pairwise distinct valuations, distinct leading residues, a triangular determinant, or a Vandermonde structure.

The balance equation itself has an exact Fourier form. Let

\[
\mu(x)=|\{r:\varepsilon_r=x\}|.
\]

Then (2) says that the group convolution \(v*\mu\) is constant. Therefore for every nontrivial character,

\[
\boxed{
\widehat v_\chi\,S_\chi(1)=0.
}
\tag{29}
\]

If the valuation coding is genuinely nonconstant, at least one nontrivial \(\widehat v_\chi\) is nonzero, so the corresponding \(S_\chi(1)=0\). This is useful exact balance information, but it does not determine \(\widehat C_\chi\), because the chronological prefix exponents in (3) are nonlinear in \(v\).

Thus balance does not collapse the higher-rank output support by itself.

## 10. Why valuation separation does not solve no-cancellation

Equation (24) reduces every component valuation to the finite integer \(\widehat C_\chi\). This is a complete valuation calculation, but not a rationality theorem.

Even if one could prove pairwise distinct values

\[
v_2(\widehat F_{\chi_i}(W)),
\]

the valuation of their sum would simply be the unique minimum. A rational 2-adic number may have any prescribed integer valuation. Distinct valuations therefore prevent cancellation of the lowest-order term, but they do **not** prevent the entire sum from being rational.

The required conclusion is stronger:

\[
1,\widehat F_{\chi_1}(W),\ldots,\widehat F_{\chi_t}(W)
\]

must be linearly independent over \(\overline{\mathbb Q}\), or one needs another theorem directly excluding the exact rational combination (25).

No such result is derived from valuations alone.

## 11. Separate transcendence: exactly what is and is not available

For a supported character, \(\widehat F_\chi(z)\) has integer coefficients and satisfies the exact first-order homogeneous equation (13). T8.1 proves the required orbit nonvanishing of \(S_\chi\).

If the projected sequence \(\chi(u_n)\) is non-eventually-periodic, then (14) is a finite-valued nonperiodic coefficient series and therefore

\[
\widehat F_\chi(z)\notin\mathbb Q(z).
\]

As in T6, Kronecker's Hankel criterion supplies infinitely many nonzero leading Hankel determinants. Bugeaud–Yao Theorem 3.1 and its published rational-unit remark then apply at

\[
W=\frac{2^B}{3^k}
\]

to give transcendence of that **individual** value in \(\mathbb Q_2\).

Thus separate transcendence is available character-by-character for the nonrational supported components whose Bugeaud–Yao hypotheses are met.

This does not prove

\[
\sum_{\chi\in\mathcal I}
\widehat F_\chi(W)\notin\mathbb Q.
\]

Several transcendental numbers can have a rational sum. T8 does not promote separate transcendence into linear or algebraic independence.

If \(t=1\), the rational components can be absorbed into a rational term and the T6 first-order mechanism excludes a rational anchor. T8 does not count this as a new genuinely higher-rank theorem: modulo rational components the arithmetic problem is again one-dimensional.

## 12. Functional relations among character products

Distinct characters need not give functionally independent products.

Repeated character polynomials, quotient-state identifications, periodic character projections, and rational Mahler coboundaries can create relations.

For a supported character define the normalized product

\[
P_\chi(z)=
\frac{\widehat F_\chi(z)}{\widehat C_\chi},
\qquad
P_\chi(0)=1.
\]

Then

\[
P_\chi(z)=S_\chi(z)P_\chi(z^k).
\tag{30}
\]

For integers \(m_\chi\), put

\[
P(z)=\prod_\chi P_\chi(z)^{m_\chi},
\qquad
S(z)=\prod_\chi S_\chi(z)^{m_\chi}.
\]

If \(P(z)\in\mathbb Q(z)^\times\), then necessarily

\[
S(z)=\frac{P(z)}{P(z^k)}.
\tag{31}
\]

Conversely, if there is \(R(z)\in\mathbb Q(z)^\times\), regular and nonzero at \(0\), with

\[
S(z)=\frac{R(z)}{R(z^k)},
\tag{32}
\]

then \(P(z)/R(z)\) is invariant under \(z\mapsto z^k\); analyticity at \(0\) makes it constant. Hence the corresponding product relation is rational.

Therefore multiplicative independence of the normalized character products requires checking independence of the cocycles \(S_\chi\) modulo rational Mahler coboundaries.

T8 does **not** prove that this multiplicative functional independence always holds, and even proving it would still require a completion-correct p-adic value theorem to transfer it to same-point value independence.

This is the sharp functional boundary left by T8.

## 13. Rational-output propagation does not create new relations

Suppose hypothetically

\[
F_0(W)=q\in\mathbb Q.
\]

Let

\[
y_{\chi,J}=
\widehat F_\chi(W^{k^J}).
\]

Iterating (13) gives

\[
\widehat F_\chi(W)
=
\left(
\prod_{h=0}^{J-1}
S_\chi(W^{k^h})
\right)y_{\chi,J}.
\]

Hence for every \(J\),

\[
\sum_\chi
\left(
\prod_{h=0}^{J-1}
S_\chi(W^{k^h})
\right)y_{\chi,J}
=
|A|q.
\tag{33}
\]

All coefficients are rational.

Equation (33) is only the original same-point relation transported along the diagonal Mahler dynamics. T8 found no independent family of algebraic relations at one fixed point and no verified p-adic lifting theorem converting (33) into a forbidden functional relation.

Thus the common dynamics create exact coupling but do not by themselves solve the one-point converse.

## 14. p-adic logarithm route

By positivity of the valuations,

\[
B\ge k\ge2.
\]

Theorem T8.1 therefore places every factor \(S_\chi(W^{k^j})\) in \(1+4\mathbb Z_2\). The standard 2-adic logarithm converges, and

\[
\log P_\chi(W)
=
\sum_{j\ge0}
\log S_\chi(W^{k^j}).
\tag{34}
\]

This is exact.

However, p-adic Baker-type theorems control finite linear forms in logarithms of algebraic numbers. Equation (34) is an infinite sum, and the Collatz anchor is an **additive** linear combination of the corresponding infinite products. No finite reduction satisfying a p-adic logarithm theorem was found.

Complex logarithms are irrelevant to the required 2-adic statement.

## 15. Source-level theorem audit

A theorem is load-bearing only when its actual statement, completion, functional hypotheses, evaluation restrictions, and conclusion can be checked.

### 15.1 Bugeaud–Yao 2017

Reference: Yann Bugeaud and Jia-Yan Yao, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” Annali di Matematica Pura ed Applicata 196 (2017), 929–946, DOI 10.1007/s10231-016-0602-7.

Full theorem text and the remark immediately following the proof were inspected.

- **Mahler base:** one integer \(d\ge2\).
- **Number of functions:** one scalar function.
- **Shared base issue:** not applicable; scalar theorem.
- **Equation:** first-order, possibly inhomogeneous,
  \[
  f(z)=A(z)/B(z)+(C(z)/D(z))f(z^d),
  \]
  with integer-polynomial data.
- **Coefficient field:** integer coefficients for the series/equation.
- **Characteristic:** zero.
- **Completion:** p-adic.
- **Convergence/evaluation:** point has positive p-adic valuation.
- **Point restriction:** theorem is stated at \(p^w\); the published remark explicitly allows \(r p^w/s\) with \(p\nmid rs\).
- **Rational non-torsion unit:** **YES in this first-order theorem**, so \(2^B/3^k\) is admissible.
- **Singularity restriction:** the displayed denominator/numerator factors must remain nonzero along the Mahler orbit.
- **Functional algebraic-independence hypothesis:** none involving multiple functions.
- **Value conclusion:** individual p-adic transcendence under the Hankel/nonrationality conditions; additional hypotheses give irrationality-exponent bounds.
- **Linear independence conclusion:** none for several values.
- **Several values at the same point:** not supplied.
- **Multiplicatively related points:** no simultaneous theorem needed or supplied.
- **Height/dominance:** quantitative Hankel-index conditions are needed for the strongest irrationality-exponent statement, not for T8's basic individual-transcendence use.
- **Exact Collatz applicability:** YES character-by-character when the character function is nonrational; NO for the required multi-character no-cancellation conclusion.

### 15.2 Xu–Wang 2004

Reference: Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930, DOI 10.12386/A2004sxxb0116.

The official journal record and issue record were inspected. They confirm the article, peer-reviewed venue, pagination, DOI, and that the topic is p-adic algebraic-independence measures for values of Mahler-type functions. The site advertises a 401 KB PDF.

A serious attempt was made through the official English and Chinese article pages, DOI/title searches, and alternate indexed records to recover an inspectable full theorem statement. In the available research environment the PDF link did not expose usable theorem text.

Accordingly the following fields are **NOT CERTIFIED FROM THE FULL THEOREM**:

- exact Mahler base and whether all functions share it;
- exact number of functions;
- homogeneous versus inhomogeneous equation class;
- exact coefficient field;
- precise characteristic/completion hypotheses beyond the p-adic subject named by the paper;
- convergence domain;
- evaluation-point restrictions;
- allowance or exclusion of rational non-torsion p-adic units;
- singularity restrictions;
- functional algebraic-independence assumptions;
- value algebraic-independence conclusion in exact form;
- any separate linear-independence conclusion;
- whether several functions may be evaluated at the same point;
- whether multiplicatively related points are allowed;
- height/dominance assumptions.

**T8 disposition:** directly relevant, but non-load-bearing. Applicability to the exact Collatz family remains unverified. No hypothesis is inferred from the title or abstract.

### 15.3 Wang 2006

Reference: Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194, DOI 10.1007/s10114-005-0534-4.

The official journal metadata/abstract were inspected. The abstract states p-adic transcendence and transcendence measures for values of some Mahler-type functions. The advertised full text was not recoverable in inspectable theorem form in this session.

Therefore the exact equation class, coefficient field, shared-base requirements, evaluation-point restrictions, rational-unit allowance, singularity conditions, functional-independence hypotheses, same-point/multiple-value scope, and height assumptions cannot be certified.

Bugeaud–Yao cite Wang/Xu work for a p-adic transcendence step, but that citation does not license extrapolation to a simultaneous same-point theorem.

**T8 disposition:** peer reviewed and relevant; exact T8 applicability unverified and non-load-bearing.

### 15.4 Wang–Xu 2006 algebraic-functional-equation work

The Peking University journal record for Tian Qin Wang and Guang Shan Xu's work on p-adic transcendence measures for values satisfying algebraic functional equations of Mahler type was recovered, as was its citation in Bugeaud–Yao.

The accessible record exposes title/abstract-level scope but not enough theorem text to certify a simultaneous same-point algebraic-independence theorem for the present linear character products.

- **Completion:** p-adic by the published topic.
- **Exact equation/base/field/point/singularity/independence/height hypotheses:** not recovered to load-bearing standard.
- **Exact Collatz applicability:** unverified.

No use is made beyond the narrower first-order consequence explicitly exposed by Bugeaud–Yao.

### 15.5 Flicker 1979

Reference: Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” Journal of the Australian Mathematical Society, Series A 27 (1979), 173–188, DOI 10.1017/S144678870001209X.

The original peer-reviewed paper and theorem text were recovered and inspected.

- **Mahler transformations:** sequences of nondegenerate nonnegative integral matrix transformations, with controlled growth and infinitely many changes in the relevant ratio data.
- **Number of functions:** several functions are allowed.
- **Shared transformation structure:** YES; the theorem is built around a common transformation sequence.
- **Equation type:** a sequence of functional systems with algebraic multipliers/coefficients, not merely arbitrary independent scalar stationary equations.
- **Coefficient field:** a number field \(K\), with completion \(K_{\mathfrak p}\).
- **Characteristic:** zero.
- **Completion:** explicitly arbitrary completions, including nonarchimedean/p-adic completions.
- **Analytic domain:** invariant neighbourhood/domain hypotheses and uniform boundedness are required.
- **Evaluation point:** algebraic point satisfying the transformation-domain and valuation/dominance hypotheses.
- **Rational non-torsion unit:** no general T6-style rational-unit permission matching \(2^B/3^k\) was verified as an automatic corollary.
- **Singularity/regularity:** encoded in the functional-system and invariant-domain hypotheses rather than the simple Bugeaud–Yao orbit test.
- **Functional independence:** the limiting functions must satisfy substantial algebraic-independence hypotheses.
- **Value conclusion:** under the full conditions, algebraic independence of several values.
- **Linear independence:** implied by algebraic independence when applicable, but no weaker turnkey same-point criterion matching T8 was isolated.
- **Same-point values:** several functions at one transformed point can occur in the theorem framework.
- **Multiplicatively related points:** not the central formulation audited.
- **Height/dominance:** substantial. The proof uses directional growth and, in its nonarchimedean dominance mechanism, distinct valuation data and rational-independence conditions.
- **Exact Collatz applicability:** **NOT VERIFIED**.

The stationary Collatz character products have unit transport factors at every depth by T8.1, and T8 does not establish Flicker's required limiting-function independence or dominance package. Flicker's own discussion also notes limitations of the p-adic multi-function method in applications where the discrete p-adic valuation prevents the needed dominance separation.

**T8 disposition:** genuine p-adic algebraic-independence machinery, but not an applicable theorem for the present family.

### 15.6 Bundschuh–Nishioka 2004

Reference: Peter Bundschuh and Kumiko Nishioka, “Algebraic independence over \(\mathbb Q_p\),” Journal de Théorie des Nombres de Bordeaux 16 (2004), DOI 10.5802/jtnb.458.

The peer-reviewed theorem text was inspected.

Its principal series has the special sparse form

\[
f(x)=\sum_{n\ge0}\zeta(n)x^{e(n)},
\]

where \(e(n)\) is a strictly increasing linear-recurrence sequence and \(\zeta(n)\) are roots of unity with explicit field-growth hypotheses. It proves algebraic-independence criteria for values at several p-adic points with \(|\alpha|_p<1\), including special \(e(n)=d^n\) families.

- **Completion:** p-adic, characteristic zero.
- **Several values:** YES, under the special sparse-series hypotheses.
- **Same point for several different Collatz functions:** not the theorem class.
- **Exact Collatz applicability:** NO. The Walsh Euler products (23) are not this sparse root-of-unity series family.

This source is useful evidence that strong p-adic value-independence theorems exist for specialized series, but it supplies no transfer to T8.

### 15.7 Kubota, Loxton–van der Poorten, and Nishioka

Kubota's classical algebraic-independence theorems for Mahler functions and values, the Loxton–van der Poorten several-variable work, and Nishioka's monograph were audited through original or authoritative bibliographic/theorem summaries.

They provide the classical functional/value framework used by later Mahler theory. The directly matching readily verified value theorems are archimedean/holomorphic in the relevant applications. No source-level theorem was verified that gives the required \(\mathbb Q_2\) same-point independence at \(W=2^B/3^k\) for the exact character family.

**T8 disposition:** foundational and relevant; no exact p-adic Collatz application verified.

### 15.8 Amou–Väänänen infinite-product theorem

The peer-reviewed work “On algebraic independence of a class of infinite products” is structurally close to (23). Its theorem assumes an **infinite place** and \(0<|\alpha|<1\), and obtains algebraic independence from multiplicative functional independence.

This supplies a close archimedean analogue of the desired statement, not a p-adic theorem.

**T8 disposition:** wrong completion.

### 15.9 Modern Adamczewski–Faverjon / regular-singular work

The T7 audit remains controlling. The modern lifting/value theorems used by Adamczewski–Faverjon for the relevant characteristic-zero Mahler values are complex/archimedean. Faverjon–Poulet regular-singular results classify functional systems and singular structure; they are not p-adic arithmetic-value lifting theorems.

T8.1 also shows that elementary-2-group orbit singularities are already absent, so regular-singular recognition would not solve the remaining arithmetic step.

### 15.10 Positive-characteristic analogues

Goto–Tanaka and related work gives algebraic independence for Mahler-type functions in positive-characteristic function fields.

**T8 disposition:** wrong characteristic/completion; not applicable to \(\mathbb Q_2\).

### 15.11 Historical p-adic two-function measures

Nesterenko's survey records earlier Molchanov/Yanchenko p-adic algebraic-independence measures for values of two functions. The cited source is a conference-abstract record and the full theorem statement was not recovered to a peer-reviewed, hypothesis-checkable form.

**T8 disposition:** historical lead only; not load-bearing.

### 15.12 Explicit theorem-hypothesis matrix

For this table, **NR** means that the full theorem statement was not recovered in inspectable authoritative/peer-reviewed text, so T8 deliberately does not infer the field from a title or abstract. “Same point” means several different function values at one common algebraic argument, which is the T8 need.

#### Functional and ambient hypotheses

| Source/theorem | Mahler base | Number of functions | Same/shared base? | Equation type | Coefficient field | Characteristic | Completion | Analytic/convergence domain |
|---|---|---:|---|---|---|---:|---|---|
| Bugeaud–Yao 2017 Thm. 3.1 + remark | one integer \(d\ge2\) | 1 | scalar | first-order inhomogeneous allowed | integer-polynomial data | 0 | p-adic | evaluation inside open p-adic unit disc |
| Xu–Wang 2004 | NR | NR | NR | NR | NR | NR | p-adic subject verified; exact field NR | NR |
| Wang 2006 | NR | NR | NR | “some Mahler type functions” only at abstract level; exact class NR | NR | NR | p-adic subject verified; exact field NR | NR |
| Wang–Xu 2006 algebraic-functional-equation paper | NR | NR | NR | algebraic functional equations of Mahler type at title/abstract level; exact class NR | NR | NR | p-adic subject verified; exact field NR | NR |
| Flicker 1979 Thm. 2 framework | sequence of nonnegative integral matrix transformations | several | common transformation sequence | functional systems with algebraic multipliers/coefficients | number field \(K\), completed at \(\mathfrak p\) | 0 | arbitrary completion, including p-adic | invariant neighbourhood/domain plus uniform boundedness and limiting-function hypotheses |
| Bundschuh–Nishioka 2004 Thm. 1 | exponents from an increasing linear recurrence, not a general stationary Mahler base | one sparse function evaluated at several points | not the T8 multi-function shared-base setup | sparse series \(\sum\zeta(n)x^{e(n)}\) | p-adic number field setting / roots of unity | 0 | \(\mathbb Q_p\)-type | \(|\alpha_\tau|_p<1\) |
| Kubota / Loxton–van der Poorten / Nishioka classical value theorems audited here | classical Mahler transformations | several possible | theorem-dependent | classical Mahler functional systems | algebraic/number fields | 0 | verified readily matching value statements are archimedean | complex neighbourhood / \(|\alpha|<1\)-type hypotheses |
| Amou–Väänänen infinite-product theorem | common integer power \(r\) | several products | YES | first-order product/Mahler equations | number field | 0 | explicitly an infinite place in the evaluated theorem | \(0<|\alpha|_v<1\) plus regularity/height bound |
| Adamczewski–Faverjon value lifting audited in T7/T8 | integer/matrix Mahler transformations | several | common system | linear Mahler systems | \(\overline{\mathbb Q}\)/number fields | 0 | relevant audited value theorem is complex | regular/admissible algebraic point in complex domain |
| Goto–Tanaka 2018 | power transformation relatively prime to field characteristic | several | common transformation | Mahler-type functional equations | function field | positive characteristic | function-field setting | theorem-specific positive-characteristic analytic domain |

#### Evaluation-point and conclusion hypotheses

| Source/theorem | Evaluation-point restrictions | Rational non-torsion p-adic unit permitted? | Singularity restrictions | Functional algebraic-independence assumption | Value algebraic-independence conclusion | Linear-independence conclusion | Several values at same point? | Multiplicatively related points? | Height/dominance assumptions | Exact Collatz character family? |
|---|---|---|---|---|---|---|---|---|---|---|
| Bugeaud–Yao 2017 | \(p^w\), with published extension to \(rp^w/s,\ p\nmid rs\) | **YES** in this theorem | equation factors nonzero along full Mahler orbit | none for multiple functions | individual transcendence | no multi-value result | NO | not a simultaneous-points theorem | Hankel conditions; stronger gap control for irrationality exponent | **YES individually**, NO for no-cancellation |
| Xu–Wang 2004 | NR | NR | NR | NR | title says algebraic-independence measures, exact conclusion NR | NR | NR | NR | NR | **UNVERIFIED** |
| Wang 2006 | NR | NR | NR | NR | abstract says transcendence/measures for some functions, exact conclusion NR | NR | NR | NR | NR | **UNVERIFIED** |
| Wang–Xu 2006 | NR | NR | NR | NR | abstract/title-level transcendence measures, exact conclusion NR | NR | NR | NR | NR | **UNVERIFIED** |
| Flicker 1979 | algebraic point satisfying domain/transformation/dominance conditions | no T6-style blanket allowance verified | embedded in functional-system/domain hypotheses | substantial limiting-function algebraic independence | algebraic independence of several values under full hypotheses | implied if theorem applies | YES within framework | not the central audited formulation | substantial transformation growth, direction, valuation/dominance conditions | **NO application verified** |
| Bundschuh–Nishioka 2004 | distinct nonzero p-adic \(\alpha_\tau\) with \(|\alpha_\tau|_p<1\) plus recurrence-dependence criterion | theorem is not phrased around the Collatz S-unit issue | sparse-series hypotheses replace Mahler-orbit singularity test | encoded through recurrence/point dependence and root-of-unity field hypotheses | YES for qualifying value sets | implied when algebraic independence holds | not several different T8 functions at one common point | allowed/forbidden according to the paper's \(e(n)\)-dependence criterion | theorem-specific recurrence and field-growth hypotheses | NO |
| Classical Kubota/LvP/Nishioka value theorems used as comparison | algebraic points in complex Mahler domain | not a verified p-adic allowance in the theorem application audited | regularity/non-pole conditions | theorem-dependent, often functional independence | YES in classical complex scope | sometimes as consequence | YES in classical scope where hypotheses match | theorem-dependent | classical Mahler height/zero-estimate hypotheses | NO p-adic T8 application verified |
| Amou–Väänänen | algebraic \(\alpha\) at an infinite place, \(0<|\alpha|_v<1\), plus height condition | NOT APPLICABLE: evaluated theorem is archimedean | all product equation factors nonzero along orbit | multiplicative independence modulo the defined rational-function group | YES | implied | YES for several products | theorem formulated at same \(\alpha\); other point relations not the T8 issue | explicit height ratio bound \(\lambda(\alpha)\) and quantitative estimates | NO, wrong completion |
| Adamczewski–Faverjon | regular/admissible algebraic complex point | NOT A p-adic statement in the audited value theorem | regular point required | functional relation/lifting hypotheses | YES in complex setting | corresponding complex linear-relation lifting results | YES in complex setting | theorem-dependent | admissibility/regularity and Mahler-system conditions | NO, wrong completion |
| Goto–Tanaka 2018 | nonzero algebraic points in positive-characteristic function-field setting | NOT APPLICABLE | theorem-specific | functional algebraic-independence criterion | YES in positive characteristic | consequence where applicable | YES within its own setting | theorem-dependent | positive-characteristic Mahler hypotheses | NO, wrong characteristic |

The matrix is intentionally asymmetric: a field marked NR is a **failed source-recovery item**, not a negative theorem hypothesis. T8 therefore neither claims that Xu–Wang/Wang exclude the Collatz family nor claims that they apply to it.

## 16. The exact missing theorem

After T8's reductions, the missing theorem can be stated sharply.

Let

\[
P_i(z)=S_i(z)P_i(z^k),
\qquad
P_i(0)=1,
\qquad
S_i(z)\in\mathbb Z[z],
\qquad
S_i(0)=1,
\tag{35}
\]

for finitely many \(i\), and let

\[
W=\frac{2^B}{3^k},
\qquad B>0.
\]

Assume:

1. every \(S_i(W^{k^j})\ne0\), which T8 proves automatically for the elementary-2-group Collatz class;
2. the functions are genuinely nonrational;
3. every rational multiplicative relation among the \(P_i\) has been removed, equivalently the cocycles \(S_i\) are independent modulo rational coboundaries of the form \(R(z)/R(z^k)\);
4. the rational non-torsion unit \(3^{-k}\) in \(W\) is permitted.

The required arithmetic conclusion is at least

\[
1,P_1(W),\ldots,P_t(W)
\quad\text{linearly independent over }\overline{\mathbb Q},
\tag{36}
\]

or any verified statement strong enough to exclude the exact rational weighted combination (25).

A theorem giving algebraic independence would be stronger than necessary.

No verified peer-reviewed p-adic theorem with this exact combination of stationary Mahler products, same evaluation point, rational non-torsion unit, and functional-to-value independence was established in T8.

This is now the exact next theorem-sized obligation.

## 17. Consequences for bounded canonical representatives

T2 remains authoritative: bounded canonical representatives \(R_m\) correspond to an ordinary integer anchor in the bounded valuation setting.

T8 proves no new irrationality theorem for a genuinely multi-character class. Therefore it gives no new implication

\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
\]

beyond the one-dimensional quotient classes already covered by T6/Bugeaud–Yao.

The residual higher-rank balanced automatic class remains open.

For the generic automatic remainder, rationality of the inverse-conjugacy value still lies inside the restricted Lagarias Periodicity-Conjecture boundary identified in T5.

## 18. Cobham and López–Stoll

### Cobham

No second automatic representation in a multiplicatively independent base has been established for the same relevant sequence.

The factors \(2^B\) and \(3^k\) in \(W\) do not instantiate Cobham's hypotheses.

**Applicable in T8:** NO.

### López–Stoll

T8 does not repair the real/2-adic completion issue or prescribed-parity/actual-parity issue identified in T3.

**Load-bearing in T8:** NO.

## 19. Positive branch

T8 did not produce a higher-rank system with

\[
H\in\mathbb Q\cap\mathbb Z_2.
\]

Therefore there is no rational anchor to test for ordinary integrality, positivity, or compatibility with the intended valuation word.

The hostile certification protocol is not triggered.

No explicit candidate, unbounded orbit, or Collatz counterexample was found or claimed.

## 20. Compute and promotion decision

No theorem-derived scientific workload was established.

- **New scientific starts:** not justified.
- **Candidate trajectories:** not justified.
- **Substitution enumeration:** not justified.
- **Finite residue/carry/exponent-code search:** not justified.
- **New generator/distribution:** not justified.
- **CPU/GPU/cloud/distributed scaling:** not justified.
- **COMPUTE_BUDGET.md:** unchanged.
- **METRIC_CATALOG.md:** unchanged.

The next action remains theory/literature work only.

## 21. Deliverable answers

- **Exact theorem proved or failed:** exact elementary-2-group Fourier/product/singularity/valuation structure is proved; the same-point no-cancellation theorem is not proved.
- **Precise class covered:** balanced k-uniform translation substitutions on elementary 2-groups, reduced exactly to their reachable output quotient \(E/K_C\).
- **Exact true k-kernel dimension:** \(m=|E/K_C|\).
- **Exact Fourier decomposition:** equations (11)–(18).
- **Every character equation:** \(\widehat F_\chi(z)=S_\chi(z)\widehat F_\chi(z^k)\).
- **Determinant/rank:** equation (20); full rank over \(\mathbb Q(z)\), reduced rank \(m\).
- **Singularity structure:** all character factors and the determinant are nonzero along every \(W^{k^j}\) by (21)–(22).
- **Coefficient fields:** \(\mathbb Z[z]\) for character polynomials; rational/integer Fourier coefficients; no cyclotomic extension is required.
- **Mahler base:** \(k\).
- **Exact 2-adic point:** \(W=2^B/3^k\), \(v_2(W)=B\).
- **Exact Fourier support:** \(\widehat C_\chi\ne0\), with the genuinely nonrational subset defined by (18).
- **External p-adic independence theorems audited:** Section 15.
- **Full theorem hypotheses recovered:** yes for Bugeaud–Yao, Flicker, and Bundschuh–Nishioka; not to load-bearing standard for Xu–Wang 2004, Wang 2006, or Wang–Xu 2006.
- **Same-point several-value theorem verified:** NO for the exact Collatz family.
- **Rational non-torsion p-adic units allowed:** verified YES for Bugeaud–Yao's first-order scalar theorem; not transferred to unrelated higher-rank theorems.
- **Functional independence proved:** NO generically; the exact coboundary boundary is isolated in (31)–(32).
- **Value linear independence proved:** NO.
- **Value algebraic independence proved:** NO.
- **Separate transcendence available:** YES conditionally, character-by-character, for nonrational components satisfying Bugeaud–Yao.
- **Rational cancellation excluded:** NO in genuine multi-character rank.
- **Xu–Wang 2004 applies:** NOT VERIFIED.
- **Wang 2006 applies:** NOT VERIFIED.
- **Flicker applies:** NO application verified; required independence/dominance hypotheses are not established.
- **Collatz-specific no-cancellation identity found:** NO.
- **2-adic valuation separation available:** exact valuation formula (24) is available; class-wide pairwise separation is not proved, and would not alone solve rationality.
- **New higher-rank automatic class ruled out:** NO genuinely multi-character class.
- **Bounded \(R_m\) implies periodicity for a new class:** NO beyond the already-understood one-dimensional quotient mechanism.
- **Residual primitive constant-length class further reduced:** YES structurally to a nonsingular finite family of same-point Walsh Euler products, but not arithmetically excluded.
- **Remaining problem still a restricted Periodicity-Conjecture problem:** YES for the generic balanced automatic remainder.
- **Cobham applicable:** NO.
- **López–Stoll load-bearing:** NO.
- **Explicit anchored aperiodic word:** NONE.
- **Candidate or unbounded orbit found:** NO.
- **Counterexample claimed:** NO.
- **Future compute justified:** NO.
- **Exact next theorem-sized obligation:** prove or recover a completion-correct p-adic functional-to-value independence theorem of the form (35)–(36), with rational S-unit points allowed, or derive a Collatz-specific additive no-cancellation theorem for the exact Fourier weights \(\widehat C_\chi\).

## 22. Source ledger

1. Yann Bugeaud and Jia-Yan Yao, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” Annali di Matematica Pura ed Applicata 196 (2017), 929–946. DOI: https://doi.org/10.1007/s10231-016-0602-7.
2. Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” Journal of the Australian Mathematical Society, Series A 27 (1979), 173–188. DOI: https://doi.org/10.1017/S144678870001209X.
3. Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930. DOI: https://doi.org/10.12386/A2004sxxb0116.
4. Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194. DOI: https://doi.org/10.1007/s10114-005-0534-4.
5. Tian Qin Wang and Guang Shan Xu, p-adic transcendence-measure work for values satisfying algebraic functional equations of Mahler type, Advances in Mathematics (China) 35 (2006); bibliographic pagination appears as 463–475 in Bugeaud–Yao.
6. Peter Bundschuh and Kumiko Nishioka, “Algebraic independence over Q_p,” Journal de Théorie des Nombres de Bordeaux 16 (2004). DOI: https://doi.org/10.5802/jtnb.458.
7. Kumiko Nishioka, Mahler Functions and Transcendence, Lecture Notes in Mathematics 1631, Springer, 1996. DOI: https://doi.org/10.1007/BFb0093672.
8. J. H. Loxton and A. J. van der Poorten, “Arithmetic properties of certain functions in several variables,” Journal of Number Theory 9 (1977), 87–106. DOI: https://doi.org/10.1016/0022-314X(77)90053-1.
9. Peter Bundschuh and Keijo Väänänen, “Algebraic independence of certain Mahler functions and of their values,” Journal of the Australian Mathematical Society 98 (2015), 289–310.
10. Keijo Väänänen and collaborators' infinite-product Mahler work was consulted only as an archimedean analogue; its evaluated theorem is stated at an infinite place and is not used p-adically.
11. Akinari Goto and Taka-aki Tanaka, “Algebraic independence of the values of functions satisfying Mahler type functional equations under the transformation represented by a power relatively prime to the characteristic of the base field,” Journal of Number Theory 184 (2018), 384–410. DOI: https://doi.org/10.1016/j.jnt.2017.08.026. Positive-characteristic analogue; non-applicable to Q_2.

## 23. Permanent lesson and next theorem-sized obligation

T8 removes two false suspects from the higher-rank bottleneck.

First, in the elementary-2-group class, singularities are not the obstruction: every character factor is automatically a 2-adic unit at every point of the exact Collatz Mahler orbit.

Second, the valuations of all supported character values are explicit: they are exactly the valuations of finite Fourier transforms of the block constants.

What remains is genuinely arithmetic and simultaneous.

The next theorem-sized obligation is:

> Establish, for a finite family of nonrational normalized products \(P_i(z)=S_i(z)P_i(z^k)\) with \(S_i\in\mathbb Z[z]\), \(S_i(0)=1\), and no rational multiplicative relation modulo Mahler coboundaries, a p-adic same-point value theorem at \(W=2^B/3^k\) that makes \(1,P_1(W),\ldots,P_t(W)\) linearly independent over algebraic numbers; or prove an exact Collatz-specific substitute for the weighted sum (25).

Until that bridge is supplied, Fourier diagonalization plus separate transcendence does not certify nonrationality of the higher-rank Collatz anchor.

D — no qualifying theorem found