# CDM4-T5 — Automatic Inverse-Collatz Rationality / Mahler Audit

**Date:** 2026-10-02  
**Authoritative starting commit:** \`151ff92d3b85a59b93763512acef775fe6b207a6\`  
**Session type:** theorem/literature audit only.  
**Scientific Collatz starts generated:** **ZERO.**  
**Candidate trajectories extended:** **ZERO.**  
**Substitution enumeration:** **NONE.**  
**GPU/cloud/distributed work:** **NONE.**  
**Counterexample found or claimed:** **NO.**

## 1. Executive result

The primary T5 statement was **not proved**:

> If a non-eventually-periodic \(k\)-automatic valuation word \(a_1,a_2,\ldots\in\{1,2\}\) has exact inverse-Collatz value
>
> \[
> H=-\sum_{j\ge 0}\frac{2^{A_j}}{3^{j+1}}\in\mathbb Z_2,
> \qquad A_j=a_1+\cdots+a_j,
> \]
>
> then \(H\notin\mathbb Z_{>0}\).

No counterexample to that statement was found either.

T5 does, however, sharpen the problem in three useful ways.

First, the inverse series is derived directly from the exact finite cylinders, and its completion behavior is explicit. For an actually realized positive integer start \(N\),

\[
N=-\sum_{j=0}^{m-1}\frac{2^{A_j}}{3^{j+1}}
 +\frac{2^{A_m}}{3^m}Y_m.
\]

The finite partial sums converge to \(N\) in \(\mathbb Q_2\). When the mean valuation is below \(\log_2 3\), the same partial sums converge in \(\mathbb R\) to a **negative** real number. The shared rational approximants therefore do not identify the two completion limits. This independently preserves the T3 rejection of a real/2-adic shortcut.

Second, automaticity gives less closure than a naive Mahler translation suggests. The valuation word \(a_n\) is \(k\)-automatic and its prefix sum \(A_n\) is \(k\)-regular, but \(2^{A_n}\) is not \(k\)-regular over characteristic zero: it grows at least as \(2^n\), whereas an integral \(k\)-regular sequence is polynomially bounded. Thus the inverse series is not obtained by simply applying the standard automatic/regular-to-Mahler generating-function theorem to the coefficients \(2^{A_n}\).

Third, for a \(k\)-uniform substitution there is nevertheless an exact **finite multivariate monomial/Mahler-type recurrence**. Using prefix Parikh vectors, the inverse series becomes the value of a finite vector functional system at the 2-adic algebraic point

\[
q_s=\frac{2^{v(s)}}3.
\]

This is the strongest new structural derivation of T5. In a balanced-block special case, where every substituted letter-block has the same total valuation \(B\), the system collapses further to a classical one-variable \(k\)-Mahler value at

\[
W=\frac{2^B}{3^k}.
\]

No audited peer-reviewed value theorem turns either representation into the required 2-adic nonrationality statement. Modern general Mahler value theorems are formulated for complex values; the published p-adic theorems found either concern the **canonical p-adic digit expansion of the tested number**, or special Mahler values \(f(p^w)\) under additional functional-equation/Hankel hypotheses. Those hypotheses do not match \(H\).

The conceptual reason is now exact. If

\[
V=\sum_{j\ge0}2^{A_j}\in\mathbb Z_2,
\]

then \(V\) is the shortened source-parity point whose 1-positions are \(0,A_1,A_2,\ldots\), and the Bernstein-Lagarias inverse conjugacy gives

\[
H=\Phi(V).
\]

Hence the desired implication

\[
H\in\mathbb Q\cap\mathbb Z_2
\quad\Longrightarrow\quad
V\in\mathbb Q\cap\mathbb Z_2
\]

is a restricted instance of Lagarias' still-open 3x+1 **Periodicity Conjecture**. The T5 restriction is substantial—the gaps of the 1-positions form an automatic \(\{1,2\}\)-sequence—but no published theorem was found that resolves that restricted class.

No new automatic or primitive constant-length class is therefore killed. No bounded-\(R_m\)-implies-periodicity theorem is obtained for a new class. No future scientific compute is justified.

The exact next theorem-sized obligation is to attack the p-adic value problem for the newly explicit Mahler representation itself, beginning with the balanced-block one-variable subclass rather than with generic finite residue experiments.

---

## 2. Authority and scope

The required repository governance, audit, basin, metric, T1, T2, T3, and T4 files were read before mathematical work. The repository state at the starting commit above was treated as authoritative.

The root objective remains one explicit positive integer whose shortened-Collatz orbit is rigorously unbounded and never reaches \(1\).

T5 obeyed all frozen restrictions:

- no new scientific starts;
- no candidate trajectories;
- no substitution enumeration;
- no finite residue optimization;
- no finite carry optimization;
- no finite exponent-code search;
- no generator or distribution change;
- no CPU campaign;
- no GPU, cloud, cluster, distributed, or volunteer work.

No executable symbolic fixture was necessary. The new functional equations below are exact algebraic derivations.

---

## 3. Finite exact derivation of the inverse series

Let \(N\) be an odd positive integer realizing the accelerated valuation prefix

\[
a_1,\ldots,a_m,\qquad a_i=v_2(3x_{i-1}+1),
\]

with odd accelerated states \(x_0=N,x_1,\ldots,x_m=Y_m\). Put

\[
A_0=0,\qquad A_j=\sum_{i=1}^j a_i,
\]

and

\[
C_0=0,\qquad C_{j+1}=3C_j+2^{A_j}.
\]

T2 gives the exact finite identity

\[
3^mN+C_m=2^{A_m}Y_m.
\]

Iterating the recurrence for \(C_m\) gives

\[
C_m=\sum_{j=0}^{m-1}3^{m-1-j}2^{A_j}.
\]

Divide the finite identity by \(3^m\):

\[
N
=
-\frac{C_m}{3^m}
+\frac{2^{A_m}}{3^m}Y_m,
\]

hence

\[
\boxed{
N=
-\sum_{j=0}^{m-1}\frac{2^{A_j}}{3^{j+1}}
+\frac{2^{A_m}}{3^m}Y_m.}
\tag{1}
\]

This is the requested finite derivation. The infinite series is not assumed.

### 3.1 2-adic convergence

For every \(j\),

\[
v_2\!\left(\frac{2^{A_j}}{3^{j+1}}\right)=A_j.
\]

Because every \(a_i\ge1\), \(A_j\ge j\to\infty\). Therefore

\[
-\sum_{j\ge0}\frac{2^{A_j}}{3^{j+1}}
\]

converges in \(\mathbb Q_2\), indeed in \(\mathbb Z_2\). Define

\[
\boxed{H=-\sum_{j\ge0}\frac{2^{A_j}}{3^{j+1}}\in\mathbb Z_2.}
\tag{2}
\]

If the word is realized by the ordinary integer \(N\), the remainder in (1) satisfies

\[
v_2\!\left(\frac{2^{A_m}}{3^m}Y_m\right)=A_m
\]

because \(Y_m\) is odd. It tends to zero 2-adically, so

\[
H=N
\]

in \(\mathbb Z_2\).

### 3.2 Direct realization by the 2-adic series

The inverse series contains more than a necessary condition. It gives the exact 2-adic orbit prescribed by the valuation word.

For \(m\ge0\), define the tail

\[
X_m
=
-\sum_{r\ge0}
\frac{2^{A_{m+r}-A_m}}{3^{r+1}}.
\tag{3}
\]

Its first term is \(-1/3\) and every later term is even, so \(X_m\) is odd in \(\mathbb Z_2\). A direct calculation gives

\[
3X_m+1
=
2^{a_{m+1}}X_{m+1}.
\tag{4}
\]

Because \(X_{m+1}\) is odd,

\[
v_2(3X_m+1)=a_{m+1}.
\]

Also \(X_0=H\). Thus every positive valuation word defines one exact odd 2-adic Collatz orbit, and if \(H\) happens to be an ordinary positive integer then that ordinary integer realizes the valuation word exactly.

This is also the direct inverse-conjugacy bridge used in Section 9.

### 3.3 Real completion when the mean is subcritical

Suppose

\[
\frac{A_j}{j}\to\alpha<\lambda,\qquad \lambda=\log_2 3.
\]

Then

\[
\frac{2^{A_j}}{3^j}
=
2^{A_j-\lambda j}
\]

decays exponentially in the real absolute value. Hence the same rational partial sums converge in \(\mathbb R\) to

\[
H_\infty^{(\mathbb R)}
=
-\sum_{j\ge0}\frac{2^{A_j}}{3^{j+1}}<0.
\tag{5}
\]

This real limit cannot equal a positive ordinary anchor \(N\).

For an actually realized positive \(N\), (1) shows exactly what happens instead: the real remainder

\[
\frac{2^{A_m}}{3^m}Y_m
\]

does **not** tend to zero. It compensates for the negative partial-sum limit so that the finite identity always remains equal to \(N\).

Therefore identical rational partial sums can converge to different limits in \(\mathbb R\) and \(\mathbb Q_2\). Rationality or transcendence of one completion cannot be transported to the other without an additional theorem.

This is the same completion boundary that made the López-Stoll shortcut non-load-bearing in T3.

---

## 4. The three sequences must remain distinct

T5 keeps separate the following objects.

### 4.1 Accelerated valuation word

\[
a_1,a_2,\ldots\in\{1,2\}.
\]

This is the sequence assumed \(k\)-automatic.

### 4.2 Shortened source-parity word

One accelerated valuation \(a_i\) corresponds to the shortened-map source-parity block

\[
1\,0^{a_i-1}.
\]

For the T5 alphabet,

\[
1\mapsto 1,\qquad 2\mapsto 10.
\tag{6}
\]

Thus the source-parity point is

\[
V=\sum_{j\ge0}2^{A_j}.
\tag{7}
\]

This is a **variable-length** morphic image of the valuation word. Automaticity of \(a_n\) does not, in general, imply same-base automaticity of this parity word. A nonuniform morphic image of an automatic word is morphic; it needs a separate theorem to be automatic.

### 4.3 Ordinary binary digits of a hypothetical anchor

If \(H=N\in\mathbb Z_{>0}\), the ordinary base-2 expansion of \(N\) is finite. Those digits are not the parity vector \(V\), and they are not the valuation word.

Consequently none of the following substitutions is valid without an additional proof:

- automatic valuation word = automatic shortened parity word;
- shortened parity digits = binary digits of \(N\);
- transcendence of the parity point = nonrationality of its Collatz inverse;
- automaticity of \(a_n\) = automaticity of the 2-adic digits of \(H\).

---

## 5. Exact automatic and regular structure

Let \(a_n\) be a \(k\)-automatic sequence with values in \(\{1,2\}\).

### 5.1 \(A_n\) is \(k\)-regular

A finite-valued \(k\)-automatic sequence is \(k\)-regular. The class of \(k\)-regular sequences is closed under partial summation, so

\[
A_n=\sum_{i=1}^n a_i
\]

is \(k\)-regular.

Equivalently, one can augment a finite linear representation for the automatic output with a summatory coordinate.

This is a characteristic-zero integer statement. No finite-characteristic theorem is needed.

### 5.2 \(2^{A_n}\) is not \(k\)-regular

The exponentiation step destroys the standard regular structure.

An integer-valued \(k\)-regular sequence has a finite linear representation

\[
u(n)=\ell M_{d_0}\cdots M_{d_r}c
\]

along the base-\(k\) digits of \(n\). The number of matrix factors is \(O(\log n)\). With finitely many fixed matrices, any matrix norm therefore gives

\[
|u(n)|\le n^C
\]

for some \(C\).

But \(A_n\ge n\), so

\[
2^{A_n}\ge2^n.
\]

Therefore

\[
\boxed{2^{A_n}\text{ is not }k\text{-regular over characteristic zero}.}
\tag{8}
\]

The weighted coefficient sequence

\[
P_n=\frac{2^{A_n}}{3^n}
\]

is likewise not obtained from the ordinary \(k\)-regular closure properties.

This is a precise reason why the standard generating-function theorem for automatic or regular sequences does not directly make (2) a one-variable Mahler value.

### 5.3 Characteristic-\(p\) automatic power-series theorems

Christol-type theorems concern formal power series over a finite field: algebraicity over \(\mathbb F_q(z)\) is equivalent to automaticity of the coefficient sequence under the corresponding hypotheses.

The Collatz inverse series has characteristic-zero rational coefficients and is evaluated 2-adically. Reducing a related series modulo \(p\) does not preserve the arithmetic rationality question for \(H\).

Christol is therefore not an anchor theorem here.

---

## 6. Exact multivariate Mahler-type embedding for uniform substitutions

The failure of (8) does not mean there is no Mahler structure. A stronger state description gives one.

Let

\[
\sigma:\Gamma\to\Gamma^k
\]

be a \(k\)-uniform substitution prolongable on an initial letter, with fixed point

\[
u=u_0u_1u_2\cdots,
\]

and let

\[
v:\Gamma\to\{1,2\}
\]

be the valuation coding, so \(a_{n+1}=v(u_n)\).

Let \(d=|\Gamma|\), and let \(c(n)\in\mathbb N^d\) be the Parikh vector of the prefix \(u_0\cdots u_{n-1}\). Thus \(c_s(n)\) counts occurrences of letter \(s\) among the first \(n\) source letters.

Let \(M\) be the incidence matrix of \(\sigma\), with column \(s\) equal to the Parikh vector of \(\sigma(s)\). For \(0\le r<k\), let \(p_r(s)\) be the Parikh vector of the length-\(r\) prefix of \(\sigma(s)\).

Because a length-\(n\) source prefix expands to length \(kn\),

\[
\boxed{
c(kn+r)=Mc(n)+p_r(u_n).}
\tag{9}
\]

This identity is exact.

For variables \(x=(x_s)_{s\in\Gamma}\), write

\[
x^c=\prod_s x_s^{c_s}.
\]

For each letter \(t\), define the multivariate series

\[
F_t(x)
=
\sum_{\substack{n\ge0\\u_n=t}}x^{c(n)}.
\tag{10}
\]

Every term has total degree \(n\), so these are well-defined formal power series.

Define the monomial transformation

\[
\tau(x)_s=\prod_t x_t^{M_{t,s}}.
\tag{11}
\]

Then (9) gives the finite vector recurrence

\[
\boxed{
F_t(x)
=
\sum_{s\in\Gamma}
\sum_{\substack{0\le r<k\\\sigma(s)_r=t}}
x^{p_r(s)}F_s(\tau(x)).}
\tag{12}
\]

Writing \(F=(F_t)\), this is

\[
F(x)=\mathcal A(x)F(\tau(x))
\tag{13}
\]

with a finite polynomial matrix \(\mathcal A(x)\).

This is an exact multivariate monomial/Mahler-type functional equation. It is not an analogy.

### 6.1 Exact specialization to the Collatz inverse

Set

\[
q_s=\frac{2^{v(s)}}3.
\tag{14}
\]

Since

\[
A_n=\sum_s v(s)c_s(n)
\quad\text{and}\quad
n=\sum_s c_s(n),
\]

we have

\[
q^{c(n)}
=
\frac{2^{A_n}}{3^n}.
\]

Therefore

\[
\boxed{
H=-\frac13\sum_{t\in\Gamma}F_t(q).}
\tag{15}
\]

In the 2-adic norm,

\[
|q_s|_2\le\frac12,
\]

so (10) converges at \(q\).

Moreover,

\[
\tau^j(q)_s
=
\frac{2^{B_j(s)}}{3^{k^j}},
\tag{16}
\]

where \(B_j(s)\) is the total coded valuation of the block \(\sigma^j(s)\). Since \(B_j(s)\ge k^j\),

\[
|\tau^j(q)_s|_2\le2^{-k^j}\to0.
\]

Thus the exact specialization is naturally 2-adic.

### 6.2 Why this is not yet an applicable published value theorem

Equation (13) is finite-dimensional, but three further conditions are theorem-dependent:

1. the relevant Mahler theory may require an invertible rational matrix system, whereas \(\mathcal A(x)\) can be singular;
2. the monomial transformation may have to satisfy nonsingularity/admissibility hypotheses, whereas a constant-length substitution incidence matrix \(M\) can be singular;
3. most importantly, the modern general lifting/value theorems audited here concern **complex** values of convergent Mahler functions, not the 2-adic value (15).

The 2026 Adamczewski-Faverjon Annals paper substantially removes restrictions on matrices in the complex multivariate theory, but its value statements are explicitly about complex numbers. It does not identify the 2-adic value in (15) with the complex value of the same formal series.

A 2026 preprint of Brechler proves broad p-adic meromorphy for multivariate Mahler functions, but the inspected result does not supply the required p-adic algebraic-value lifting theorem for (15), and the work is not peer-reviewed as of the T5 audit.

### 6.3 Scalar functional consequence

Even if \(\mathcal A(x)\) is not invertible, the finite vector equation implies finite linear dependence among sufficiently many iterates of any fixed scalar linear combination, after expressing the earlier iterates through a common later vector.

Thus the scalar

\[
S(x)=\sum_t F_t(x)
\]

satisfies a nontrivial finite relation of the form

\[
\sum_{j=0}^r p_j(x)S(\tau^j(x))=0
\tag{17}
\]

with rational-function, in fact after clearing denominators polynomial, coefficients and finite \(r\).

This is a genuine scalar multivariate Mahler-type equation. Again, a functional equation is not itself a value-transcendence theorem.

---

## 7. Balanced substituted blocks: a classical one-variable Mahler reduction

There is one important special case where the monomial orbit collapses to one variable.

Suppose every substituted letter-block has the same total coded valuation:

\[
B(s):=\sum_{r=0}^{k-1}v(\sigma(s)_r)=B
\qquad\text{for every }s\in\Gamma.
\tag{18}
\]

Put

\[
W=\frac{2^B}{3^k}.
\tag{19}
\]

For

\[
P_n=\frac{2^{A_n}}{3^n},
\]

equation (18) gives, for \(0\le r<k\),

\[
P_{kn+r}
=
W^n E_r(u_n),
\tag{20}
\]

where

\[
E_r(s)=
\frac{2^{\sum_{t<r}v(\sigma(s)_t)}}{3^r}.
\]

Hence

\[
\sum_{j\ge0}P_j
=
\sum_{n\ge0}g(u_n)W^n,
\qquad
g(s)=\sum_{r=0}^{k-1}E_r(s).
\tag{21}
\]

The coefficient sequence \(g(u_n)\) is finite-valued and \(k\)-automatic. Therefore

\[
G(z)=\sum_{n\ge0}g(u_n)z^n
\]

is a classical \(k\)-Mahler function and

\[
\boxed{H=-\frac13G(W).}
\tag{22}
\]

If \(B/k<\log_2 3\), then \(0<W<1\) in the real absolute value and \(|W|_2=2^{-B}<1\). Thus the same formal series converges in both completions.

The block coefficient also has an exact Collatz interpretation. If \(w\) is the coded length-\(k\) block, then

\[
g(s)=\frac{C_w}{3^{k-1}},
\tag{23}
\]

where \(C_w\) is the usual affine constant.

For \(w\in\{1,2\}^k\), the map \(w\mapsto C_w\) is injective. Indeed,

\[
C_w-3^{k-1}=2^{a_1}C_{\text{tail}},
\]

and \(C_{\text{tail}}\) is odd, so

\[
a_1=v_2(C_w-3^{k-1}),
\]

after which one recurses on the tail.

This special case therefore produces a particularly clean automatic-coefficient Mahler series. It still does not solve the anchor problem.

A complex theorem proving \(G(W)\) transcendental would prove a statement about the real/complex value of (22). The 2-adic value can still be rational without contradiction, because the two completions can assign different limits to the same rational partial sums.

---

## 8. External theorem audit

The following table records the load-bearing hypotheses relevant to T5.

| Result | Base / coefficient setting | Convergence and point | What it proves | T5 applicability |
|---|---|---|---|---|
| Cobham representation / automatic sequences | Integer base \(k\ge2\); finite alphabet | Symbolic | \(k\)-automatic iff coding of a fixed point of a \(k\)-uniform morphism, in the standard formulation | Applies to represent \(a_n\); says nothing by itself about \(H\) |
| Allouche-Shallit regular sequence theory; Becker Mahler connection | Characteristic zero for the integer/rational regular sequence used here | Formal/generating function near 0 | \(k\)-regular sequences have finite linear representations; regular generating functions satisfy Mahler-type equations | Applies to \(A_n\), not to \(2^{A_n}\); (8) blocks the naive route |
| Adamczewski-Faverjon, Annals 2026 | \(q\)-Mahler / multivariate Mahler over algebraic-number fields | Algebraic points satisfying complex analytic/admissibility hypotheses; value statements are complex | Strong lifting and algebraic-independence results; generalization of Nishioka; automatic-number applications | Wrong completion for \(H\); generic T5 system also needs system/admissibility verification |
| Adamczewski-Faverjon, PLMS 2017 | One-variable Mahler over a number field | Algebraic \(\alpha\) with \(0<|\alpha|<1\) in the complex absolute value, well-defined/non-pole conditions | Effective determination of algebraic versus transcendental complex Mahler values | Wrong completion |
| Adamczewski-Bugeaud 2007 and the p-adic automatic-number consequence recorded by Bugeaud-Yao 2017 | Canonical base-\(b=p^w\) digit expansion; digit sequence \(k\)-automatic | p-adic digit expansion of the **number being tested** | An automatic p-adic number is rational or transcendental; nonperiodic canonical digits give transcendence | Wrong sequence: T5 has automatic valuation gaps, not proved automatic canonical digits of \(H\) |
| Bugeaud-Yao 2017, Theorem 3.1 | Prime \(p\), \(b=p^w\); integer-coefficient \(f\); special order-one Mahler equation plus nonvanishing and Hankel hypotheses | p-adic value \(f(b)\) | Transcendence and irrationality-exponent bounds | Does not match \(W=2^B/3^k\); also requires special equation/Hankel data |
| Tian Qin Wang 2006 | p-adic values of **some** Mahler-type functions | Exact theorem hypotheses were not recoverable from the accessible full text during T5 | p-adic transcendence measures in a special class | Not used; abstract alone is insufficient to certify hypothesis match |
| Nishioka 1986 p-adic examples | Special lacunary/factorial-type power series | Algebraic p-adic arguments inside unit disk under the paper's specific hypotheses | p-adic algebraic independence for that family | Wrong function family |
| Christol | Characteristic \(p\), finite-field coefficients | Formal power series | Algebraic iff automatic coefficients | Wrong characteristic and wrong arithmetic value |
| Adamczewski-Bugeaud real automatic-number theorem | Canonical integer-base digits of the tested real number | Real expansion | Irrational automatic real number is transcendental | Wrong number/digit encoding and wrong completion |
| Brechler 2026 preprint | Multivariate \(M_T\)-functions | Complex and p-adic unit balls for meromorphy | Functional rational/transcendental dichotomy and p-adic meromorphy; lifting theorem in the inspected framework | Non-peer-reviewed and no verified p-adic value theorem yielding nonrationality of (15) |

### 8.1 The p-adic automatic-number theorem is about the wrong digits

Bugeaud-Yao define a p-adic number \(\xi\) to be automatic when its canonical base

\[
b=p^w
\]

digits form an automatic sequence. Their cited rational/transcendental dichotomy applies to that digit expansion.

T5 has not proved that the base-\(2^w\) digits of \(H\) are automatic. The sequence known to be automatic is \(a_n\), the sequence of valuation gaps in the parity point \(V\).

This distinction is load-bearing.

### 8.2 The published p-adic Mahler theorem found is too special

Bugeaud-Yao Theorem 3.1 evaluates \(f(b)\) at

\[
b=p^w
\]

for a power series satisfying a specific order-one equation

\[
f(z)=\frac{A(z)}{B(z)}
+\frac{C(z)}{D(z)}f(z^d)
\]

together with nonvanishing and Hankel-determinant conditions.

Even in the balanced reduction, the T5 argument is

\[
W=\frac{2^B}{3^k},
\]

not a pure power of \(2\). Multiplying the variable by the 2-adic unit \(3^{-k}\) does not preserve the standard \(z\mapsto z^k\) Mahler equation: after scaling, the next argument acquires \(3^{-k^2}\), not the same fixed scaling.

No theorem checked in T5 removes this mismatch.

### 8.3 Modern complex Mahler theorems do not cross completions

The 2026 Adamczewski-Faverjon theorem is exceptionally general for complex Mahler values. Its setup explicitly places \(\overline{\mathbb Q}\subset\mathbb C\) and studies complex values at algebraic points.

Even if all functional algebraic-independence, regularity, and singularity conditions were verified for a T5 Mahler function and its **complex** value were proved transcendental, this would not imply that its 2-adic value is nonrational.

The missing implication is arithmetic across completions, not a lack of a complex functional equation.

---

## 9. Exact conjugacy bridge and the open Periodicity Conjecture

The positions of the 1s in the shortened parity point are

\[
d_j=A_j,\qquad j\ge0,
\]

with \(A_0=0\). Hence

\[
V=\sum_{j\ge0}2^{A_j}.
\]

For the shortened map, Bernstein and Lagarias' inverse conjugacy \(\Phi\) satisfies the exact 2-adic formula

\[
\Phi\!\left(\sum_{j\ge0}2^{d_j}\right)
=
-\sum_{j\ge0}\frac{2^{d_j}}{3^{j+1}}.
\tag{24}
\]

Therefore

\[
\boxed{H=\Phi(V).}
\tag{25}
\]

The rationality facts surrounding the conjugacy are asymmetric.

One direction is known: eventual periodicity of a parity point is equivalent to rationality of that 2-adic point, and a rational parity point maps under \(\Phi\) to a rational 2-adic Collatz point.

The converse needed here—

\[
\Phi(V)\in\mathbb Q\cap\mathbb Z_2
\Longrightarrow
V\in\mathbb Q\cap\mathbb Z_2
\tag{26}
\]

—is equivalent to the open 3x+1 Periodicity Conjecture, often stated using the inverse parity map \(Q_\infty=\Phi^{-1}\):

\[
x\in\mathbb Q\cap\mathbb Z_2
\Longrightarrow
Q_\infty(x)\in\mathbb Q\cap\mathbb Z_2.
\tag{27}
\]

The T5 target is a restricted case of (26): \(V\)'s successive gaps are constrained to the automatic sequence \(a_n\in\{1,2\}\).

Because the gaps are bounded by two, \(V\) is eventually periodic if and only if the valuation-gap word \(a_n\) is eventually periodic. Thus a proof of (26) for the T5 restricted family would settle the desired theorem immediately.

No peer-reviewed theorem was found that proves (26) for all nonperiodic automatic \(\{1,2\}\)-gap sequences.

This is the central T5 audit conclusion.

---

## 10. Cobham audit

Cobham's theorem and its modern Mahler generalizations apply when the **same relevant sequence or number** is independently automatic in two multiplicatively independent bases.

T5 has only one automatic structure:

\[
a_n\text{ is }k\text{-automatic}.
\]

The appearances of powers of \(2\) and \(3\) in

\[
\frac{2^{A_j}}{3^{j+1}}
\]

do not make \(a_n\), \(V\), or the canonical digits of \(H\) simultaneously 2-automatic and 3-automatic.

Nor has the variable-length map (6) been proved to give the same automatic parity sequence in a second base.

Therefore:

\[
\boxed{\text{Cobham is not genuinely applicable to the T5 anchor question.}}
\]

If a future argument independently proves two automatic presentations of the same relevant digit sequence, Cobham may then become available. T5 does not have that hypothesis.

---

## 11. Does primitive constant-length structure add more?

Yes structurally, but not enough arithmetically.

For a primitive \(k\)-uniform substitution with one-letter coding into \(\{1,2\}\):

- the output valuation word is \(k\)-automatic;
- the fixed point is uniformly recurrent;
- letter frequencies exist and are rational because the Perron eigenvalue is the integer \(k\) and the normalized eigenvector can be taken rational;
- the mean valuation \(\alpha\) is rational;
- T4 already forces a hypothetical aperiodic positive anchor to satisfy

\[
1<\alpha<\log_2 3;
\]

- the prefix Parikh vectors satisfy the exact recurrence (9);
- the inverse value satisfies the finite multivariate recurrence (12)–(15).

Primitivity also ensures that for every source letter \(s\),

\[
\frac{B_j(s)}{k^j}\to\alpha.
\]

Thus in the real completion the monomial orbit (16) tends to zero when \(\alpha<\log_2 3\), and in the 2-adic completion it always tends to zero.

These facts improve the analytic organization of the inverse series, but they still do not decide whether the 2-adic value at \(q\) is rational.

The balanced-block condition (18) is a genuine stronger identity and produces the univariate reduction (22). No audited p-adic theorem covers that value in sufficient generality.

Therefore primitive constant-length structure gives a better Mahler representation, not a new anchor obstruction.

---

## 12. T4 endpoint cylinders remain exact but non-load-bearing for T5

T4 proved that a valuation block \(w\) of length \(r\), total valuation \(B\), and affine constant \(C_w\) satisfies

\[
2^B y=3^r x+C_w,
\]

and hence

\[
y\equiv2^{-B}C_w\pmod{3^r}.
\]

T5 uses the same affine constants in the balanced identity (23), but it does not turn the endpoint congruence into a new return obstruction.

Nothing in the Mahler embedding changes T4's conclusion that substitution-scale endpoint or two-sided divisibility collapses to the T3 return threshold.

No finite-context or return-word optimization is reopened.

---

## 13. López-Stoll remains non-load-bearing

The López-Stoll 2021 preprint explicitly frames rational 2-adic eventual periodicity as unresolved and proposes a density route.

T3 identified a missing real/2-adic completion bridge and a prescribed-parity/actual-parity identification issue in the load-bearing density argument. T5 does not repair either point.

The exact inverse series derivation in Section 3 reinforces the completion warning: the same rational partial sums naturally have distinct real and 2-adic limits in the subcritical regime.

Therefore no López-Stoll density equality is used as a premise, and no blanket automatic/substitution exclusion is inferred from it.

---

## 14. Positive branch audit

A disproof of the T5 theorem target would require an explicit non-eventually-periodic automatic valuation word with

\[
H=N\in\mathbb Z_{>0}.
\]

By Section 3.2, \(N\) would realize the valuation word exactly. By T2, a positive integer with a non-eventually-periodic valuation/parity word has an unbounded orbit and cannot reach \(1\).

Such an object would therefore move immediately into hostile certification review.

T5 found no such word and performed no enumeration capable of suggesting one.

No finite Mahler truncation, finite residue coincidence, long zero-carry run, or sparse representative decay is treated as evidence for one.

---

## 15. Does bounded \(R_m\) imply periodicity for a new class?

No.

T2 remains authoritative:

\[
R_m\text{ bounded}
\Longleftrightarrow
R_m\text{ stabilizes}
\Longleftrightarrow
d_m=0\text{ eventually}
\Longleftrightarrow
\text{one ordinary anchor}.
\]

If the prescribed word is also aperiodic, that anchor would be a divergent positive orbit.

T5 does not prove that bounded \(R_m\) forces eventual periodicity for any new automatic or primitive constant-length class.

The Mahler representation merely rewrites the same all-depth arithmetic question as rationality of a 2-adic functional value.

---

## 16. Compute and promotion decision

### Scientific starts

**NOT JUSTIFIED.**

### Candidate trajectories

**NOT JUSTIFIED.**

### Substitution enumeration

**NOT JUSTIFIED.**

A finite scan cannot decide rationality of the all-depth 2-adic Mahler value.

### Finite residue/carry/exponent-code optimization

**NOT JUSTIFIED.**

### New generator/distribution

**NOT JUSTIFIED.**

### GPU / cloud / distributed work

**NOT JUSTIFIED.**

### Metric catalog

**UNCHANGED.**

No theorem-derived search metric was established.

### Compute budget

**UNCHANGED.**

No theorem-derived scientific workload was established.

---

## 17. Exact next theorem-sized obligation

T5 turns the residual problem into a narrower p-adic value theorem.

The next obligation should begin with the balanced-block subclass because it has a classical one-variable representation and avoids the generic multivariate system complications:

> Let \(g_n\) be the finite-valued non-eventually-periodic \(k\)-automatic coefficient sequence produced by a balanced \(k\)-uniform Collatz valuation substitution, and let
>
> \[
> W=\frac{2^B}{3^k},
> \qquad B<k\log_2 3.
> \]
>
> For
>
> \[
> G(z)=\sum_{n\ge0}g_n z^n,
> \]
>
> prove under fully checked hypotheses that the **2-adic** value \(G(W)\) is not rational; or prove that this statement is itself outside the current p-adic Mahler theory and identify the precise additional arithmetic hypothesis required.

A proof would kill a genuine new automatic subclass.

If the balanced theorem is obtained, the next extension is the generic multivariate value

\[
S(q)=\sum_{n\ge0}q^{c(n)}
\]

under the monomial substitution map \(q\mapsto q^M\).

This is qualitatively different from finite substitution enumeration. It asks for a completion-correct arithmetic theorem about the exact all-depth value.

No compute campaign is authorized by this obligation.

---

## 18. Required deliverable questions answered

- **Exact theorem proved or failed:** the universal automatic positive-anchor exclusion remains unproved; no qualifying replacement anchor theorem or recursive-language obstruction was found.
- **Precise automatic/substitution class covered:** the structural derivations apply to arbitrary \(k\)-automatic \(\{1,2\}\) valuation words via a uniform-morphism presentation; the strongest project target remains genuinely aperiodic primitive constant-length codings.
- **Exact inverse-Collatz series:** equation (2), derived finitely in equation (1).
- **Mahler functional equation rigorously obtained?** **YES structurally:** a finite multivariate monomial/Mahler-type vector recurrence (12)–(15) for uniform substitutions; and a classical one-variable \(k\)-Mahler reduction (22) under equal substituted-block valuation sums. No value theorem follows automatically.
- **External theorem hypotheses checked?** Yes for every theorem used as a project premise; incomplete-access p-adic claims were not promoted.
- **Rationality of \(H\) ruled out for any new aperiodic class?** **NO.**
- **Bounded \(R_m\) implies periodicity for a new class?** **NO.**
- **Residual primitive constant-length class killed?** **NO.**
- **Any class survives?** **YES.** Residual primitive constant-length words outside T3/T4 exclusions, including unbalanced and potentially balanced-block cases not already killed, survive.
- **Reduction to a known unresolved conjugacy rationality question?** **YES.** The general bridge is a restricted case of Lagarias' Periodicity Conjecture.
- **Cobham genuinely applicable?** **NO** under the presently proved structures.
- **Variable-length valuation-to-parity coding preserves required automaticity?** **Not in general.** It preserves morphicity, not automatically same-base automaticity.
- **López-Stoll load-bearing?** **NO.**
- **Explicit anchored aperiodic word?** **NO.**
- **Candidate or unbounded orbit found?** **NO.**
- **Counterexample claimed?** **NO.**
- **Future compute justified?** **NO.**
- **Exact next obligation:** completion-correct p-adic rationality of the balanced one-variable Mahler value, then the generic multivariate value if the first theorem succeeds.

---

## 19. Source ledger

Sources were checked on 2026-10-02. Peer-reviewed status is stated explicitly. The absence of an applicable theorem is a focused audit result, not a claim that no relevant theorem can exist anywhere.

1. **D. J. Bernstein and J. C. Lagarias**, *The 3x + 1 Conjugacy Map*, Canadian Journal of Mathematics 48 (1996), 1154–1169. DOI: https://doi.org/10.4153/CJM-1996-060-x. **Peer reviewed.** Exact 2-adic conjugacy framework and inverse series.

2. **Olivier Rozier**, *Parity sequences of the 3x+1 map on the 2-adic integers and Euclidean embedding*, Integers 19 (2019), paper A8. **Peer reviewed.** Explicitly states Lagarias' Periodicity Conjecture \(Q(x)\) rational iff \(x\) rational and distinguishes the known direction from the conjectural converse.

3. **Jean-Paul Allouche and Jeffrey Shallit**, *The ring of k-regular sequences*, Theoretical Computer Science 98 (1992), 163–197. DOI: https://doi.org/10.1016/0304-3975(92)90001-V. **Peer reviewed.** Regular-sequence framework and closure properties.

4. **Paul-Georg Becker**, *k-Regular Power Series and Mahler-Type Functional Equations*, Journal of Number Theory 49 (1994), 269–286. DOI: https://doi.org/10.1006/jnth.1994.1093. **Peer reviewed.** Regular/Mahler connection.

5. **Boris Adamczewski and Colin Faverjon**, *Méthode de Mahler : relations linéaires, transcendance et applications aux nombres automatiques*, Proceedings of the London Mathematical Society 115 (2017), 55–90. DOI: https://doi.org/10.1112/plms.12038. **Peer reviewed.** One-variable complex Mahler values and automatic-number applications.

6. **Boris Adamczewski and Colin Faverjon**, *Mahler's method in several variables and finite automata*, Annals of Mathematics 204 (2026), 455–533. DOI: https://doi.org/10.4007/annals.2026.204.2.1. **Peer reviewed; published 2026-09-13.** General multivariate linear Mahler systems, complex algebraic values, and Cobham-type applications. Its value statements are explicitly complex.

7. **Yann Bugeaud and Guo-Niu Han/Yann?** The relevant source used here is **Yann Bugeaud and Guo-Niu Yao**, *Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers*, Annali di Matematica Pura ed Applicata 196 (2017), 929–946. DOI: https://doi.org/10.1007/s10231-016-0602-7. **Peer reviewed.** Defines automatic p-adic numbers through canonical \(p^w\)-adic digits and gives a special p-adic Mahler value theorem at \(p^w\).

8. **Boris Adamczewski and Yann Bugeaud**, *On the complexity of algebraic numbers I. Expansions in integer bases*, Annals of Mathematics 165 (2007), 547–565. **Peer reviewed.** Digit-complexity transcendence machinery; the p-adic automatic-number consequence used in later literature concerns the digits of the tested p-adic number.

9. **Tian Qin Wang**, *p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions*, Acta Mathematica Sinica, English Series 22 (2006), 187–194. DOI: https://doi.org/10.1007/s10114-005-0534-4. **Peer reviewed.** The accessible abstract confirms only a special Mahler-type class; exact theorem hypotheses were not sufficiently accessible for project promotion, so no result from it is load-bearing.

10. **Kumiko Nishioka**, *Algebraic independence of certain power series of algebraic numbers*, Journal of Number Theory 23 (1986), 354–364. DOI: https://doi.org/10.1016/0022-314X(86)90080-6. **Peer reviewed.** p-adic value results for a special lacunary family, not the T5 inverse series.

11. **Kumiko Nishioka**, *Mahler Functions and Transcendence*, Lecture Notes in Mathematics 1631, Springer, 1996. DOI: https://doi.org/10.1007/BFb0093672. **Authoritative monograph.** General Mahler background, including one- and several-variable theory.

12. **Josefina López and Peter Stoll**, *The 3x+1 Periodicity Conjeture in R*, arXiv:2101.12747v1 (2021). **Preprint, non-load-bearing.** It explicitly notes that eventual cyclicity for all rational 2-adic starts is unproved. T3's completion audit remains controlling.

13. **Enzo Brechler**, *Transcendence of multivariate Mahler functions and algebraic relations between their values*, arXiv:2607.24877 (2026). **Preprint as of T5.** Gives broad functional and p-adic meromorphy results for multivariate Mahler functions, but no verified peer-reviewed p-adic value theorem used here.

---

## 20. Permanent lesson

Automaticity has now been pushed to the correct arithmetic boundary.

The valuation word supplies enough finite symbolic structure to build:

- a \(k\)-regular prefix-sum sequence;
- an exact 2-adic inverse-conjugacy value;
- an exact finite multivariate monomial recurrence;
- and, in a balanced special case, an ordinary one-variable Mahler function.

What it does **not** supply is the missing completion-correct rationality theorem.

The hard bridge is not “find a Mahler-looking equation.” T5 has such an equation.

The hard bridge is:

\[
\text{aperiodic automatic valuation gaps}
\quad\Longrightarrow\quad
\Phi(V)\notin\mathbb Q
\]

**in the 2-adic completion**, under hypotheses actually proved for the Collatz inverse value.

That bridge is a restricted Periodicity-Conjecture problem. Until it is solved, the residual automatic primitive constant-length class remains open.

D — no qualifying theorem found
