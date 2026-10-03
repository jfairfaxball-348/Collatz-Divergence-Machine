# CDM4-T10 — P-adic diagonal Mahler lifting / same-point value theorem audit

Date: 2026-10-03

Authoritative input commit: d7087f7d18358fea2d706f384533b3c82f65ea5a

Session type: mandatory tenth-session progress/correction audit plus theorem/literature audit

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue/carry/exponent-code optimization: **NONE**  
CPU/GPU/cloud/distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T10 finds the missing completion-correct same-point lifting theorem.

The decisive source is:

Boris Adamczewski, Jason Bell, Daniel Smertnig, “A height gap theorem for coefficients of Mahler functions,” Journal of the European Mathematical Society 25 (2023), 2525–2571, DOI 10.4171/JEMS/1244.

Section 4 is explicitly formulated at an arbitrary place \(v\) of a number field. For a linear \(k\)-Mahler system

\[
\mathbf f(z)=A(z)\mathbf f(z^k),
\qquad
A(z)\in \mathrm{GL}_d(\overline{\mathbb Q}(z)),
\]

and an algebraic regular point \(\alpha\) with

\[
0<|\alpha|_v<1,
\]

Theorem 4.2 preserves transcendence degree between the functions and their values. Theorem 4.3 lifts every homogeneous algebraic relation among the values to a homogeneous functional relation. Consequently, functional algebraic independence gives algebraic independence of the values, and functional linear independence gives linear independence of the values at every regular algebraic point.

This is exactly the T9/T10 bridge in the nonarchimedean completion.

For the reduced Walsh family,

\[
P_i(z)=S_i(z)P_i(z^k),
\qquad
P_i(0)=1,
\]

take

\[
A(z)=\operatorname{diag}(S_1(z),\ldots,S_t(z)).
\]

The coefficient field is \(\mathbb Q\), the Mahler base is \(k\), and

\[
W=\frac{2^B}{3^k}\in\mathbb Q,
\qquad
0<|W|_2=2^{-B}<1.
\]

T8 already proves

\[
S_i(W^{k^j})\neq0
\]

for every \(i,j\), so \(W\) is regular for this diagonal system. The rational non-torsion unit \(3^{-k}\) requires no extra absorption or torsion hypothesis: the JEMS theorem only requires algebraicity, \(0<|\alpha|_v<1\), and regularity.

Therefore:

\[
\Lambda=0
\Longrightarrow
P_1(W),\ldots,P_t(W)
\text{ are algebraically independent over }\overline{\mathbb Q}.
\]

T10 also proves a weaker and more directly useful additive statement. After rational components are removed, define

\[
i\sim j
\Longleftrightarrow
\frac{P_i(z)}{P_j(z)}\in\mathbb Q(z)^\times.
\]

Equivalently, by T9,

\[
i\sim j
\Longleftrightarrow
e_i-e_j\in\Lambda,
\]

or equivalently the cocycle quotient is a rational Mahler coboundary.

Choose one representative from each equivalence class. Then

\[
1,\quad P_{r_1}(z),\ldots,P_{r_s}(z)
\]

are linearly independent over \(\overline{\mathbb Q}(z)\), and Adamczewski–Bell–Smertnig Theorem 4.3 gives

\[
1,\quad P_{r_1}(W),\ldots,P_{r_s}(W)
\]

linearly independent over \(\overline{\mathbb Q}\).

Thus the higher-rank same-point additive problem is reduced exactly to finite rational-coboundary grouping. If no two genuine components are rational-function multiples, the exact Collatz weighted sum is automatically transcendental in \(\mathbb Q_2\). More generally, rationality is possible only if the exact grouped coefficient of every rational-multiple class vanishes at \(W\).

This is a genuinely new higher-rank recursive-language obstruction.

No scientific compute follows.

## 2. Mandatory T10 progress and correction audit

### 2.1 Alignment with the root objective

CDM4 remains aligned with the root objective only insofar as it proves that recursively specified aperiodic valuation words cannot be anchored by ordinary positive integers.

T2 supplies the project bridge:

\[
R_m\text{ bounded}
\Longleftrightarrow
\text{an ordinary anchor exists}
\]

for the bounded valuation alphabets under study. If an aperiodic recursive word cannot have a rational 2-adic inverse-Collatz value, then it cannot have a positive integer anchor and therefore cannot supply the desired counterexample.

T10 preserves that connection explicitly.

### 2.2 Has the Mahler programme genuinely narrowed the problem?

Yes, but the audit finds one important correction.

T5 converted the residual automatic anchoring problem into an exact 2-adic Mahler value problem. T6 proved a real one-dimensional obstruction. T7 and T8 reduced the higher-rank elementary-2-group class to exact first-order Walsh components and solved all-depth singularity. T9 solved the functional relation problem through rational Mahler coboundaries and Kubota.

Those are genuine reductions.

However, T9's literature conclusion that the relevant modern lifting theory remained archimedean was incomplete. Adamczewski–Bell–Smertnig 2023, Section 4, explicitly extends Nishioka/Adamczewski–Faverjon style Mahler specialization to every absolute value associated with a place of a number field.

That omission is the principal T10 correction.

### 2.3 Hidden assumptions inherited from T5–T9

T10 checked the following load-bearing assumptions.

- The completion is genuinely 2-adic, not complex.
- The same algebraic formal series is evaluated in \(\mathbb C_2\).
- The system has one common integer Mahler base \(k\ge2\).
- The functions have algebraic, in fact rational, coefficients.
- The system matrix is invertible over the rational-function field.
- The evaluation point is algebraic and nonzero.
- The point lies in the open 2-adic unit disc.
- Both \(A\) and \(A^{-1}\) are defined at every Mahler iterate of the point.
- Zero Fourier components are removed exactly.
- Trivial and possible odd-\(k\) alternating rational components are absorbed into the rational part.
- Functional algebraic independence is not confused with value independence; T10 now supplies the missing theorem.
- Multiplicative independence is not confused with additive independence.
- Individual transcendence is not used as a substitute for simultaneous independence.
- A rational 2-adic value is not identified with an ordinary integer.

Every one of these conditions is either inherited as an exact T8/T9 theorem or checked below against the JEMS theorem.

### 2.4 FAILED and UNKNOWN routes

No previously FAILED route is revived.

In particular, T10 does not revive finite residue ranking, finite carry optimization, substitution enumeration, López–Stoll density transfer, complex-to-p-adic transfer, Cobham without a second base, valuation separation, or separate-transcendence no-cancellation.

The correction is narrower: the p-adic functional-to-value bridge was not actually absent from the peer-reviewed literature.

### 2.5 Source quality

The new load-bearing theorem is peer reviewed, published in JEMS, open access through EMS Press, and its actual theorem text was inspected.

The EMS record gives JEMS 25 (2023), 2525–2571, DOI 10.4171/JEMS/1244. Theorem 4.2 and Theorem 4.3 were checked directly in the article PDF.

Xu–Wang 2004 and Wang 2006 remain non-load-bearing because their complete theorem statements were still not recovered from an inspectable authoritative full text. They are no longer needed for the T10 conclusion.

### 2.6 Is theorem effort still more informative than renewed explicit search?

Yes.

T10 closes the generic same-point lifting gap for the exact diagonal system and turns the remaining higher-rank problem into a finite symbolic rational-coboundary grouping question. A new explicit-search campaign would not answer that question.

### 2.7 Progress/correction decision

The Mahler route should **NARROW**, not pause or be killed.

The broad literature-search phase is finished. The completion-correct lifting theorem is now available.

Future Mahler work should address only the exact residual issue:

> rational-function-multiple character classes and the possibility that their exact Collatz weights cancel at \(W\).

No further generic search for a p-adic Mahler lifting theorem is justified unless a new residual hypothesis requires one.

## 3. Exact T9 reduced class retained

Let

\[
E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle,
\qquad
\varepsilon_0=0,
\]

and let

\[
K_C=
\{h\in E:C_{x+h}=C_x\text{ for every }x\in E\}.
\]

The exact reachable/output quotient is

\[
G=E/K_C,
\]

and the exact true \(k\)-kernel dimension is

\[
\boxed{m=|G|=|E/K_C|}.
\]

For \(\chi\in\widehat G\),

\[
\widehat C_\chi
=
\sum_{a\in G}\chi(a)C_a,
\]

\[
S_\chi(z)
=
\sum_{r=0}^{k-1}\chi(\varepsilon_r)z^r,
\]

and

\[
\widehat F_\chi(z)
=
S_\chi(z)\widehat F_\chi(z^k).
\]

The exact Fourier support is

\[
\mathcal S_C
=
\{\chi:\widehat C_\chi\ne0\}.
\]

The only rational normalized character products after exact quotienting are

\[
P_1(z)=\frac1{1-z}
\]

and, only when \(k\) is odd and the alternating character exists,

\[
P_{\rm alt}(z)=\frac1{1+z}.
\]

Thus the genuinely nonrational support is

\[
\mathcal I
=
\mathcal S_C
\setminus
\left(
\{1\}
\cup
\{\chi_{\rm alt}\text{ if present}\}
\right).
\]

For \(\chi\in\mathcal I\),

\[
P_\chi(z)
=
\frac{\widehat F_\chi(z)}{\widehat C_\chi},
\qquad
P_\chi(0)=1,
\]

and

\[
P_\chi(z)=S_\chi(z)P_\chi(z^k).
\]

No numerical value of \(m\) or \(|\mathcal I|\) is universal; these exact formulas are the correct family-level quantities.

## 4. Exact functional relation state

For the surviving normalized products \(P_1,\ldots,P_t\), T9 defines

\[
\Lambda
=
\left\{
m\in\mathbb Z^t:
\prod_iS_i(z)^{m_i}
=
\frac{R(z)}{R(z^k)}
\text{ for some }R\in\mathbb Q(z)^\times
\right\}.
\]

T9 proves

\[
m\in\Lambda
\Longleftrightarrow
\prod_iP_i(z)^{m_i}\in\mathbb Q(z)^\times.
\]

The divisor criterion

\[
\operatorname{div}\left(\prod_iS_i^{m_i}\right)
=
D-\phi^*D,
\qquad
\phi(z)=z^k,
\]

is the exact symbolic test.

Kubota's first-order criterion gives

\[
\boxed{
\Lambda=\{0\}
\Longleftrightarrow
P_1,\ldots,P_t
\text{ are algebraically independent over }\overline{\mathbb Q}(z).
}
\]

The extension from \(\mathbb Q(z)\) to \(\overline{\mathbb Q}(z)\) does not change algebraic independence because \(\overline{\mathbb Q}(z)/\mathbb Q(z)\) is algebraic.

## 5. The load-bearing p-adic lifting theorem

Adamczewski–Bell–Smertnig consider

\[
\mathbf f(z)
=
A(z)\mathbf f(z^k),
\]

with

\[
A(z)\in\mathrm{GL}_d(\overline{\mathbb Q}(z)),
\qquad
\mathbf f(z)\in\overline{\mathbb Q}[[z]]^d.
\]

They choose a number field of definition \(K\), a place \(v\), its completion \(K_v\), the completion \(C_v\) of an algebraic closure, and the algebraic closure of \(K\) inside \(C_v\).

A point \(\alpha\) is regular precisely when, for every \(n\ge0\),

\[
A(\alpha^{k^n})
\quad\text{and}\quad
A^{-1}(\alpha^{k^n})
\]

are both defined.

### Theorem 4.2 — transcendence-degree preservation

At an algebraic regular point satisfying

\[
0<|\alpha|_v<1,
\]

the transcendence degree of the specialized values over the algebraic coefficient field equals the functional transcendence degree.

Therefore functional algebraic independence lifts to algebraic independence of the values.

### Theorem 4.3 — relation lifting

Every homogeneous algebraic relation among the specialized values at a regular algebraic point lifts to a homogeneous functional relation specializing to it.

Degree one therefore gives the exact linear lifting required by the additive Collatz sum.

### Why this is completion-correct

The article explicitly states that the usual-complex case is Nishioka's classical theorem and then explains that Philippon's algebraic-independence criterion applies to any absolute value associated with a place of a number field.

No ordinary absolute value is silently replaced by the 2-adic absolute value.

## 6. Exact Collatz hypothesis check

For the T9 family take

\[
A(z)
=
\operatorname{diag}(S_1(z),\ldots,S_t(z)).
\]

Then:

- coefficient field: \(\mathbb Q\);
- characteristic: \(0\);
- Mahler base: \(k\);
- number of functions: arbitrary finite \(t\);
- equation type: homogeneous first-order diagonal linear Mahler system;
- same-point evaluation: explicitly permitted;
- evaluation point:
  \[
  W=2^B/3^k\in\mathbb Q;
  \]
- completion:
  \[
  v=v_2;
  \]
- convergence:
  \[
  0<|W|_2=2^{-B}<1;
  \]
- rational-unit factor:
  \[
  3^{-k}\in\mathbb Z_2^\times
  \]
  is allowed automatically because no pure-\(2\)-power hypothesis exists;
- singularity:
  T8 proves
  \[
  S_i(W^{k^j})\equiv1\pmod{2^{Bk^j}},
  \]
  so \(S_i(W^{k^j})\ne0\) for every \(i,j\);
- poles of \(A\): none, since every \(S_i\) is a polynomial;
- poles of \(A^{-1}\): exactly zeros of the \(S_i\), none occur on the orbit;
- regular point: **YES**;
- height/dominance assumptions: **NONE beyond the theorem's Mahler-system and regular-point hypotheses**.

Thus the theorem applies exactly.

## 7. Strong algebraic-independence branch

If

\[
\Lambda=\{0\},
\]

then Kubota gives functional algebraic independence and Adamczewski–Bell–Smertnig Theorem 4.2 gives

\[
\boxed{
P_1(W),\ldots,P_t(W)
\text{ are algebraically independent over }\overline{\mathbb Q}.
}
\]

This directly closes the primary T10 theorem target.

The exact rational part of the Collatz Fourier sum consists of the trivial component and, when it exists, the alternating component. It is rational at rational \(W\).

Therefore any nonzero rational linear combination of the \(P_i(W)\) cannot be rational.

## 8. T10 linear-independence lemma

The additive Collatz output does not require full algebraic independence.

Adjoin

\[
P_0(z)=1,
\qquad
S_0(z)=1.
\]

### Lemma T10.1

For first-order units

\[
P_i(z)=S_i(z)P_i(z^k),
\]

a finite subfamily \(P_i\) is linearly independent over \(\overline{\mathbb Q}(z)\) if and only if no quotient \(P_i/P_j\) of two distinct members is rational.

### Proof

One direction is immediate: if \(P_i/P_j=R(z)\) is rational, then

\[
P_i-RP_j=0
\]

is a linear relation.

Conversely, assume a linear relation with minimal support:

\[
\sum_{i\in J}r_i(z)P_i(z)=0,
\qquad
r_i\in\overline{\mathbb Q}(z)^\times.
\]

Apply \(z\mapsto z^k\) and use

\[
P_i(z^k)=P_i(z)/S_i(z).
\]

This gives a second relation on the same minimal support. Two nonproportional relations would eliminate one term and contradict minimality, so the two relations are proportional. Hence, for every \(i,j\in J\),

\[
\frac{(r_i/r_j)(z^k)}{(r_i/r_j)(z)}
=
\frac{S_i(z)}{S_j(z)}.
\]

Therefore \(P_i/P_j\) is rational.

QED.

Because \(P_i/P_j\in\mathbb Q[[z]]\), rationality over \(\overline{\mathbb Q}(z)\) is the same as rationality over \(\mathbb Q(z)\): Galois conjugation fixes its rational Taylor coefficients.

Thus T9's exact coboundary test decides the linear dependence relation pairwise.

## 9. Exact rational-multiple grouping

Define

\[
i\sim j
\Longleftrightarrow
P_i/P_j\in\mathbb Q(z)^\times
\Longleftrightarrow
e_i-e_j\in\Lambda.
\]

Let \(\mathcal C\) be the set of equivalence classes.

Choose a representative \(r(C)\) in each class and write

\[
P_i(z)
=
R_i(z)P_{r(C)}(z),
\qquad
R_i(z)\in\mathbb Q(z)^\times.
\]

For the exact Collatz nonrational part,

\[
N(z)
=
\sum_{i=1}^t
\widehat C_iP_i(z),
\]

define the grouped rational coefficient

\[
A_C(z)
=
\sum_{i\in C}
\widehat C_iR_i(z).
\]

Then

\[
N(W)
=
\sum_{C\in\mathcal C}
A_C(W)P_{r(C)}(W).
\]

The representative functions, together with \(1\), are functionally linearly independent by Lemma T10.1. Theorem 4.3 therefore gives

\[
1,\ P_{r(C_1)}(W),\ldots,P_{r(C_s)}(W)
\]

linearly independent over \(\overline{\mathbb Q}\).

Hence:

\[
\boxed{
F_0(W)\in\overline{\mathbb Q}
\Longleftrightarrow
A_C(W)=0
\text{ for every nonrational class }C.
}
\]

When those coefficients vanish, the value reduces to the already separated rational Fourier part and is rational.

If at least one \(A_C(W)\neq0\), then \(F_0(W)\) is not merely irrational but transcendental over \(\mathbb Q\) in \(\mathbb C_2\).

This is the exact same-point no-cancellation theorem obtained in T10.

### Important special case

If no two genuine nonrational components are rational-function multiples, every class is a singleton and

\[
A_{\{i\}}(W)=\widehat C_i\ne0.
\]

Therefore

\[
\boxed{
F_0(W)\text{ is transcendental.}
}
\]

No full-lattice condition \(\Lambda=0\) is needed for this additive conclusion. Higher multiplicative relations involving three or more components do not create linear value cancellation.

## 10. Concrete genuinely higher-rank instance

T10 records one exact rank-four Walsh system to show that the new criterion is nonempty.

Let

\[
G=(\mathbb Z/2\mathbb Z)^2
=
\{0,a,b,a+b\},
\]

take \(k=4\), and order the digit translations as

\[
\varepsilon_0=0,\quad
\varepsilon_1=a,\quad
\varepsilon_2=b,\quad
\varepsilon_3=a+b.
\]

Thus

\[
\sigma(x)
=
(x,\ x+a,\ x+b,\ x+a+b).
\]

Use the Collatz valuation coding

\[
v(0)=2,
\qquad
v(a)=v(b)=v(a+b)=1.
\]

Every substituted block visits every group element exactly once, so the balance is

\[
B=5
\]

and

\[
W=\frac{32}{81}.
\]

The four chronological valuation blocks and exact block constants are

\[
[2,1,1,1]\mapsto103,
\]

\[
[1,2,1,1]\mapsto85,
\]

\[
[1,1,2,1]\mapsto73,
\]

\[
[1,1,1,2]\mapsto65.
\]

All four constants are distinct, so

\[
K_C=\{0\},
\qquad
m=4.
\]

The Walsh coefficients are

\[
\widehat C_1=326,
\qquad
\widehat C_a=26,
\qquad
\widehat C_b=50,
\qquad
\widehat C_{a+b}=10.
\]

Thus every character is supported.

For the three nontrivial characters the cocycles are

\[
S_a(z)=1-z+z^2-z^3=(1-z)(1+z^2),
\]

\[
S_b(z)=1+z-z^2-z^3=(1-z)(1+z)^2,
\]

\[
S_{a+b}(z)=1-z-z^2+z^3=(1-z)^2(1+z).
\]

Because \(k=4\) is even, T9's alternating rational exception does not exist.

No two of these three products are rational-function multiples.

For \(S_a/S_{a+b}\) and \(S_b/S_{a+b}\), the order at the fixed point \(z=1\) is nonzero. But every coboundary \(R(z)/R(z^4)\) has order zero at \(z=1\).

For

\[
S_a/S_b
=
\frac{1+z^2}{(1+z)^2},
\]

suppose it were \(R(z)/R(z^4)\), and write \(d_\xi=\operatorname{ord}_\xi R\). Infinite backward fourth-root chains force \(d_i=d_{-1}=0\). Since both \(i\) and \(-1\) map to \(1\),

\[
1
=
\operatorname{ord}_i(S_a/S_b)
=
-d_1,
\]

while

\[
-2
=
\operatorname{ord}_{-1}(S_a/S_b)
=
-d_1,
\]

a contradiction.

Therefore

\[
1,\ P_a(z),P_b(z),P_{a+b}(z)
\]

are functionally linearly independent, hence

\[
1,\ P_a(W),P_b(W),P_{a+b}(W)
\]

are linearly independent over \(\overline{\mathbb Q}\).

The exact Fourier value is

\[
F_0(W)
=
\frac14
\left[
\frac{326}{1-W}
+
26P_a(W)
+
50P_b(W)
+
10P_{a+b}(W)
\right].
\]

Therefore \(F_0(W)\) is transcendental in \(\mathbb Q_2\), and so is

\[
H=-\frac{F_0(W)}{3^4}.
\]

This is a genuine three-nonrational-character higher-rank application of the T10 theorem.

## 11. Consequence back to T2

For every balanced reduced Walsh family satisfying

\[
A_C(W)\ne0
\]

for at least one genuine rational-multiple class, T10 proves

\[
H\notin\mathbb Q.
\]

Therefore \(H\) is not an ordinary positive integer.

T2 then gives the project-level recursive-language obstruction:

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for this newly covered class.

In the pairwise-rationally-inequivalent higher-rank case, the condition is automatic because every \(\widehat C_i\) in the exact support is nonzero.

Thus T10 newly reduces the restricted Periodicity-Conjecture boundary.

The residual Walsh boundary is no longer “same-point p-adic independence.” It is the exact finite condition

\[
A_C(W)=0
\]

simultaneously for every nonrational rational-multiple class.

## 12. Alternating component

When \(k\) is odd and the unique alternating character exists,

\[
P_{\rm alt}(z)=\frac1{1+z}.
\]

At rational \(W\), its value is rational and is absorbed into the rational Fourier part before applying the T10 theorem.

It does not count toward the higher-rank transcendental dimension.

## 13. Rational non-torsion unit

The Collatz point is

\[
W=2^B3^{-k}.
\]

The factor \(3^{-k}\) is a rational, non-torsion 2-adic unit.

For the Adamczewski–Bell–Smertnig theorem this creates no special hypothesis. The point is an algebraic element of \(\mathbb Q\) satisfying

\[
0<|W|_2<1.
\]

There is no requirement that \(W\) be a pure \(2\)-power, that its unit factor be torsion, or that scaled copies close after finitely many iterations.

The T6 finite scaled-copy obstruction remains correct but irrelevant to this theorem.

## 14. Kubota audit

Kubota remains load-bearing for the functional first-order algebraic-independence criterion used in T9.

T10 did not verify that Kubota's original 1977 value proof itself was written in a nonarchimedean form, and it does not silently replace an ordinary absolute value by \(|\cdot|_2\).

Instead the p-adic specialization is supplied independently by Adamczewski–Bell–Smertnig 2023. Their proof explicitly identifies the archimedean Nishioka theorem and then invokes Philippon's algebraic-independence criterion in a form valid for every place of a number field.

Therefore:

- Kubota functional criterion: **YES, retained**;
- verified p-adic adaptation of Kubota's own value proof: **NOT NEEDED / NOT PROMOTED**;
- verified nonarchimedean functional-to-value lifting theorem: **YES, via Adamczewski–Bell–Smertnig**.

## 15. Flicker stationary specialization audit

Flicker 1979 is genuinely formulated over arbitrary completions.

For the stationary one-variable Walsh setting, the natural transformation geometry is

\[
z\mapsto z^{k^j},
\]

so the cumulative transformation matrices are the one-dimensional scalars

\[
T_j=[k^j].
\]

The natural limiting functions would be the stationary Walsh products themselves. Functional algebraic independence is available when the relevant coboundary classes are independent. The one-dimensional direction at the Collatz point is governed by

\[
-\log|W|_2>0,
\]

and the transformation growth is exponential in \(j\).

However Flicker's general theorem is built around a sequence of transformed functions, limiting functions, auxiliary relations, growth hypotheses, and nonarchimedean valuation/direction conditions. Those hypotheses are not consequences merely of

\[
P_i(z)=S_i(z)P_i(z^k).
\]

His own p-adic applications also record valuation-group restrictions that obstruct the broad simultaneous conclusion available in the complex case.

T10 therefore does not promote Flicker as an application.

This is now harmless: the JEMS theorem directly matches the stationary linear Mahler system and makes Flicker unnecessary for the T10 bridge.

## 16. Xu–Wang, Wang, and Wang–Xu source audit

### Xu–Wang 2004

Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930, DOI 10.12386/A2004sxxb0116.

The official journal record and Chinese abstract were recovered. The official page advertises a PDF, but the accessible crawl still did not expose inspectable theorem text.

Exact hypotheses for common base, same-point evaluation, number of functions, rational-unit factors, singularities, and functional independence therefore remain uncertified.

**T10 status: NON-LOAD-BEARING.**

### Wang 2006

Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194, DOI 10.1007/s10114-005-0534-4.

The official abstract states only that p-adic transcendence and measures are proved for values of some Mahler-type functions. The full theorem text remained inaccessible in authoritative inspectable form.

**T10 status: NON-LOAD-BEARING for simultaneous use.**

### Wang–Xu 2006

T.-Q. Wang and G.-S. Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” Advances in Mathematics (China) 35 (2006), 463–475.

Bugeaud–Yao cite this work inside a scalar p-adic transcendence argument. That does not certify a simultaneous same-point theorem.

**T10 status: NON-LOAD-BEARING for simultaneous use.**

These sources are no longer required for the higher-rank theorem because the JEMS theorem supplies the exact bridge.

## 17. Other p-adic sources audited in T10

### Molchanov 1983

S. M. Molchanov, “On the p-adic transcendence measure of the values of functions satisfying some functional equations,” Vestnik Moskovskogo Universiteta, 1983, no. 2, 31–37.

The actual PDF was inspected. Its theorem concerns one scalar function satisfying a Mahler-type functional equation and gives a p-adic transcendence measure for one value. It is not the needed several-function lifting theorem.

### Molchanov–Yanchenko 1983

Nesterenko's 1987 survey states that Molchanov and Yanchenko obtained a p-adic algebraic-independence measure for values of two functions. The cited item is a short 1983 conference contribution. T10 did not recover enough theorem text to verify exact hypotheses.

**Status: historical evidence only, NON-LOAD-BEARING.**

### Bazhenova 2010

O. Yu. Bazhenova, “Algebraic independence over \(Q_p\) of the values of analytic functions at points from \(C_p\),” Chebyshevskii Sbornik 11:1 (2010), 15–19.

The full PDF was inspected. The theorem uses specially constructed p-adic points and determinant/approximation conditions. It is not a Mahler functional-to-value lifting theorem for the Collatz point.

### Bundschuh–Nishioka and related special series

These give genuine p-adic algebraic independence for special sparse or recurrence-defined series, not the stationary first-order Walsh products at issue.

### Väänänen–Wallisser and related \(q\)-difference/Poincaré work

These give p-adic linear independence for different functional-equation classes, not the power substitution \(z\mapsto z^k\).

### Positive-characteristic analogues

These remain the wrong characteristic.

## 18. Why T9's archimedean conclusion was incomplete

Adamczewski–Faverjon 2017 and the Kubota/Nishioka statements directly audited in T9 are indeed archimedean value theorems.

The error was to treat that as evidence that the needed nonarchimedean lifting principle was unavailable.

Adamczewski–Bell–Smertnig 2023 explicitly inserted the arbitrary-place extension into Section 4 as background needed for their height-gap work. The theorem is easy to miss because the paper's title and main theorem concern coefficient heights rather than p-adic Mahler values.

T10 records this as a literature-audit correction, not as a contradiction of the earlier functional mathematics.

## 19. p-adic Padé/zero-estimate route

Bugeaud–Yao, Molchanov, Xu–Wang, and Wang show that p-adic Padé and zero-estimate machinery can prove scalar or special-family results.

T10 no longer needs to build a simultaneous Padé construction.

The direct JEMS lifting theorem is both stronger and exactly adapted to a finite linear Mahler system at one regular algebraic point.

No new Padé computation or symbolic approximation workload is justified.

## 20. Collatz-specific additive coupling after T10

The exact output is

\[
F_0(W)
=
\frac1{|G|}
\left[
\text{rational components}
+
\sum_{i=1}^t
\widehat C_iP_i(W)
\right].
\]

T10 does not prove a new universal identity among the weights \(\widehat C_i\).

Instead it shows that a Collatz-specific additive identity is unnecessary unless two components are already rational-function multiples.

After grouping those exact pairwise coboundary classes, the only remaining way for the nonrational part to vanish is

\[
A_C(W)=0
\]

for every class.

This is strictly sharper than valuation separation, Fourier orthogonality, or separate transcendence.

## 21. Positive branch

If every grouped nonrational coefficient vanishes at \(W\), then T10 permits

\[
F_0(W)\in\mathbb Q_2
\]

and in fact the value reduces to the rational Fourier part, hence lies in \(\mathbb Q\).

That is still not a Collatz candidate.

One must then distinguish:

\[
H\in\mathbb Q_2,
\qquad
H\in\mathbb Q,
\qquad
H\in\mathbb Z_2,
\qquad
H\in\mathbb Z,
\qquad
H>0.
\]

Only an ordinary positive integer compatible with the exact valuation word would enter hostile certification.

T10 finds no such exceptional system and performs no enumeration for one.

## 22. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

**Applicable:** NO.

### López–Stoll

T10 does not repair or use the completion-transfer issue identified in T3.

**Load-bearing:** NO.

## 23. Restricted Periodicity-Conjecture boundary

T5 identified the generic automatic anchoring question as a restricted form of the 3x+1 Periodicity Conjecture.

T10 reduces that boundary for the balanced elementary-2-group translation family.

For the exact T9 Walsh family, a rational higher-rank inverse value can survive only through rational-function-multiple classes whose exact grouped coefficients all vanish at the Collatz point.

Thus the residual question is no longer generic same-point p-adic cancellation.

It is a finite exact rational-coboundary/weight-cancellation problem.

## 24. Compute and promotion decision

No theorem-derived scientific workload is established.

- new scientific starts: **NOT JUSTIFIED**;
- candidate trajectories: **NOT JUSTIFIED**;
- substitution enumeration: **NOT JUSTIFIED**;
- finite residue/carry/exponent-code search: **NOT JUSTIFIED**;
- new generator or sampling distribution: **NOT JUSTIFIED**;
- CPU campaign: **NOT JUSTIFIED**;
- GPU work: **NOT JUSTIFIED**;
- cloud/distributed/volunteer work: **NOT JUSTIFIED**;
- docs/COMPUTE_BUDGET.md: **UNCHANGED**;
- docs/METRIC_CATALOG.md: **UNCHANGED**.

The remaining obligation is symbolic and theorem-level.

## 25. Exact next theorem-sized obligation

The next session should not repeat the p-adic lifting search.

The exact residual obligation is:

> **CDM4-T11 — rational-coboundary collision / grouped-weight cancellation audit.**
>
> Classify the equivalence relation
> \[
> i\sim j
> \Longleftrightarrow
> P_i/P_j\in\mathbb Q(z)^\times
> \]
> inside the exact elementary-2-group Walsh family, derive the rational multipliers \(R_i(z)\) from the divisor/coboundary equation, and determine whether the exact Collatz grouped coefficients
> \[
> A_C(W)=
> \sum_{i\in C}\widehat C_iR_i(W)
> \]
> can vanish simultaneously for every nonrational class.
>
> Prove either that at least one grouped coefficient is always nonzero in every genuinely nonperiodic reduced family, thereby killing the whole remaining higher-rank Walsh class, or classify the exact exceptional families in which all grouped coefficients vanish and pass only those exact rational values to the ordinary-integrality/positivity branch.

This is a sharper obligation than T10's missing theorem and uses the now-verified p-adic lift as a closed component.

No enumeration is authorized.

## 26. Deliverable checklist

- mandatory T10 progress-and-correction audit: **COMPLETED**;
- Mahler route decision: **NARROW**;
- exact T9 reduced class: **RETAINED**;
- exact true kernel dimension:
  \[
  m=|E/K_C|;
  \]
- exact support after zero/rational removal:
  \[
  \mathcal I=\mathcal S_C\setminus\{1,\chi_{\rm alt}\text{ if present}\};
  \]
- exact functional relation/coboundary status: **T9 lattice \(\Lambda\) retained**;
- exact functional algebraic-independence status:
  \[
  \Lambda=0
  \iff
  \text{functional algebraic independence};
  \]
- exact functional linear-independence status: **pairwise rational-quotient criterion proved in T10**;
- coefficient field: **\(\mathbb Q\)**;
- Mahler base: **\(k\)**;
- exact 2-adic point:
  \[
  W=2^B/3^k;
  \]
- singularity status: **regular at every depth**;
- rational-unit status: **allowed; no torsion restriction**;
- same-point several-function evaluation allowed: **YES**;
- functional independence lifts to value independence: **YES**;
- value conclusion under \(\Lambda=0\): **algebraic independence**;
- value conclusion under pairwise rational inequivalence: **linear independence with \(1\), sufficient for the Collatz sum**;
- Xu–Wang 2004 applies: **NOT VERIFIED / NOT NEEDED**;
- Wang 2006 applies simultaneously: **NOT VERIFIED / NOT NEEDED**;
- Wang–Xu 2006 applies simultaneously: **NOT VERIFIED / NOT NEEDED**;
- Flicker applies: **NO APPLICATION PROMOTED / NOT NEEDED**;
- Kubota verified nonarchimedean value version: **NOT VIA KUBOTA'S ORIGINAL VALUE PROOF**;
- another peer-reviewed theorem applies: **YES, Adamczewski–Bell–Smertnig 2023**;
- separate transcendence remains strongest available result: **NO; simultaneous p-adic lifting is now load-bearing**;
- same-point rational cancellation excluded: **YES except exact rational-multiple class cancellations characterized by \(A_C(W)=0\)**;
- Collatz-specific additive no-cancellation theorem found: **YES in the pairwise-inequivalent class; general case reduced exactly to grouped coefficients**;
- genuinely higher-rank recursive class newly ruled out: **YES**;
- bounded \(R_m\) implies periodicity for a new class: **YES**;
- restricted Periodicity-Conjecture boundary reduced: **YES**;
- Cobham applies: **NO**;
- López–Stoll load-bearing: **NO**;
- explicit anchored aperiodic word exists: **NO**;
- candidate or unbounded orbit found: **NO**;
- counterexample claimed: **NO**;
- future compute justified: **NO**;
- exact next obligation: **Section 25**.

## 27. Source ledger

1. Boris Adamczewski, Jason Bell, Daniel Smertnig, “A height gap theorem for coefficients of Mahler functions,” Journal of the European Mathematical Society 25 (2023), 2525–2571. DOI 10.4171/JEMS/1244. **Peer reviewed. Load-bearing.** Section 4, especially Theorems 4.2 and 4.3.
   - EMS Press: https://ems.press/journals/jems/articles/5898523
   - DOI: https://doi.org/10.4171/JEMS/1244

2. K. K. Kubota, “On the algebraic independence of holomorphic solutions of certain functional equations and their values,” Mathematische Annalen 227 (1977), 9–50. **Peer reviewed.** Functional first-order criterion retained from T9.

3. Hajime Kaneko, Takeshi Kurosawa, Yohei Tachiya, Taka-aki Tanaka, “Explicit algebraic dependence formulae for infinite products related with Fibonacci and Lucas numbers,” Acta Arithmetica 168 (2015), 161–186. **Peer reviewed.** Source-level restatement used in T9 for Kubota.

4. Yann Bugeaud and Jia-Yan Yao, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” Annali di Matematica Pura ed Applicata 196 (2017), 929–946. **Peer reviewed.** Individual p-adic theorem; no longer the strongest applicable result.

5. Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” Journal of the Australian Mathematical Society, Series A 27 (1979), 173–188. DOI 10.1017/S144678870001209X. **Peer reviewed.** Arbitrary-completion framework; not needed for the stationary T10 bridge.

6. Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930. DOI 10.12386/A2004sxxb0116. **Peer reviewed; theorem text not sufficiently recovered.**

7. Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194. DOI 10.1007/s10114-005-0534-4. **Peer reviewed; abstract insufficient for simultaneous use.**

8. T.-Q. Wang and G.-S. Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” Advances in Mathematics (China) 35 (2006), 463–475. **Peer reviewed; simultaneous hypotheses not independently verified.**

9. S. M. Molchanov, “On the p-adic transcendence measure of the values of functions satisfying some functional equations,” Vestnik Moskovskogo Universiteta, 1983, no. 2, 31–37. **Source text inspected; scalar theorem.**

10. O. Yu. Bazhenova, “Algebraic independence over \(Q_p\) of the values of analytic functions at points from \(C_p\),” Chebyshevskii Sbornik 11:1 (2010), 15–19. **Source text inspected; different point-construction framework.**

11. Peter Bundschuh and Kumiko Nishioka, p-adic algebraic-independence work for special sparse series. **Peer reviewed; wrong function class for T10.**

12. Keijo Väänänen and Rolf Wallisser, p-adic linear-independence work for special \(q\)-difference/Poincaré functions. **Peer reviewed; wrong transformation.**

## 28. Permanent lesson

The missing bridge was not a new p-adic transcendence argument.

It was a source-recovery failure.

The exact diagonal Walsh system already lay inside a published arbitrary-place Mahler lifting theorem. Once that theorem is applied, the higher-rank additive problem becomes much simpler than T9 anticipated:

- full cocycle independence gives algebraic independence of all values;
- pairwise rational inequivalence already gives the linear independence needed for the Collatz sum;
- all remaining possible rational cancellation is confined to exact rational-function-multiple classes and a finite grouped-weight test at \(W\).

The programme should therefore stop treating same-point p-adic lifting as open for this one-variable linear family.

The next work is exact Collatz algebra, not generic Mahler literature search.

C — new recursive-language obstruction found
