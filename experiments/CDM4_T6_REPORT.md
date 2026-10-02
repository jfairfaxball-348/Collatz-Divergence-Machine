# CDM4-T6 — COMPLETION-CORRECT P-ADIC MAHLER VALUE AUDIT

Date: 2026-10-02

Authoritative input commit: 7e9bbda39105cc3d61e7161c3e3288e590f20a68

## Executive result

**PROVED / CLASS C.**

The universal balanced-block target

\[
G(W)\in \mathbb Q \quad\Longrightarrow\quad G(z)\in\mathbb Q(z),
\qquad
W=\frac{2^B}{3^k},
\]

is **not** proved for every balanced automatic Collatz coefficient system. In fact, a one-point converse of that form is false for generic finite-valued automatic/Mahler series.

However, T6 does prove a genuine new recursive-language obstruction.

A peer-reviewed theorem of Bugeaud and Yao (Annali di Matematica Pura ed Applicata 196 (2017), Theorem 3.1 together with the remark immediately following its proof) explicitly permits evaluation at

\[
\alpha=\frac{r p^w}{s},\qquad p\nmid rs,
\]

not only at a pure power \(p^w\). Therefore the Collatz point

\[
W=\frac{2^B}{3^k}
\]

is admissible for their p-adic transcendence argument whenever the relevant Collatz generating function satisfies their special first-order Mahler equation and the orbit avoids the equation singularities.

T6 then identifies and proves such an equation for a concrete infinite balanced substitution class: non-eventually-periodic binary complementary \(k\)-uniform substitutions with equal numbers of the two letters in each substituted block. For this class the exact Collatz automatic coefficient series has a two-dimensional kernel system and a scalar first-order equation. All Bugeaud-Yao nonvanishing hypotheses are proved exactly. Hence its value at \(W\), and therefore the exact inverse-Collatz value \(H\), is transcendental in \(\mathbb Q_2\). No rational 2-adic anchor, and in particular no positive integer anchor, exists in this class.

Consequently, for this class,

\[
\text{bounded canonical representatives }R_m
\quad\Longrightarrow\quad
\text{eventual periodicity of the valuation word}.
\]

This is a new recursive-language obstruction in the sense required by the project.

No candidate trajectory was generated. No explicit anchored aperiodic word was found. No unbounded orbit or Collatz counterexample is claimed. No new scientific compute is justified.

---

## 1. Scope and inherited exact identities

All T1-T5 route kills remain in force.

For a balanced \(k\)-uniform substitution \(\sigma\), with valuation coding \(v:\Gamma\to\{1,2\}\) and common substituted-block valuation sum

\[
\sum_{r=0}^{k-1}v(\sigma(s)_r)=B
\quad\text{for every }s\in\Gamma,
\]

T5 proved

\[
H=-\frac13 G(W),
\qquad
W=\frac{2^B}{3^k},
\]

where

\[
G(z)=\sum_{n\ge0}g(u_n)z^n
\]

and \(g(u_n)\) is finite-valued and \(k\)-automatic.

For a substituted valuation block \(w=(w_0,\ldots,w_{k-1})\in\{1,2\}^k\), T5 also proved

\[
g(w)=\frac{C_w}{3^{k-1}}
\]

with an integer block affine constant \(C_w\), and proved that \(w\mapsto C_w\) is injective.

The subcritical condition is

\[
B<k\log_2 3.
\]

Then \(0<W<1\) in the real absolute value and \(|W|_2=2^{-B}<1\), so the same formal series converges at \(W\) in both completions. The values in the two completions must still be kept distinct.

---

## 2. The generic finite-kernel one-variable Mahler system

Let

\[
c_n=g(u_n)\in\mathbb Q
\]

and let

\[
\mathcal K_k(c)
=
\left\{
(c_{k^e n+r})_{n\ge0}:e\ge0,\ 0\le r<k^e
\right\}
\]

be the \(k\)-kernel. Since \(c_n\) is \(k\)-automatic, this set is finite.

Enumerate the distinct kernel sequences as

\[
c^{(1)},\ldots,c^{(m)}.
\]

For each state \(i\) and digit \(0\le r<k\), there is a unique transition \(\delta(i,r)\) such that

\[
c^{(i)}_{kn+r}=c^{(\delta(i,r))}_n.
\]

Define

\[
G_i(z)=\sum_{n\ge0}c^{(i)}_n z^n.
\]

Then, exactly,

\[
G_i(z)
=
\sum_{r=0}^{k-1}z^r G_{\delta(i,r)}(z^k).
\]

Equivalently,

\[
\mathbf G(z)=M(z)\mathbf G(z^k),
\]

where

\[
M_{ij}(z)
=
\sum_{\substack{0\le r<k\\ \delta(i,r)=j}}z^r
\in\mathbb Z[z].
\]

### Exact properties

- **Mahler base:** \(k\).
- **Coefficient field:** \(\mathbb Q\); the kernel matrix itself lies in \(M_m(\mathbb Z[z])\).
- **Explicit dimension:** \(m=|\mathcal K_k(c)|\). This is the exact kernel presentation dimension; it is not claimed to be the minimal possible linear-Mahler dimension.
- **Row sum:** every row of \(M(z)\) sums to
  \[
  1+z+\cdots+z^{k-1}.
  \]
- **Singularity structure:** \(\det M(z)\) may vanish identically or at algebraic points. Finite kernel dimension by itself does not supply the invertibility hypotheses of a value theorem.
- **Behavior under \(z\mapsto z^k\):** closed exactly by the displayed system.
- **Arithmetic conclusion:** none follows merely from finiteness of the kernel.

This is the canonical one-variable system supplied directly by automaticity. It is stronger and more explicit than merely citing “automatic implies Mahler,” but it does not yet solve the value problem for arbitrary \(m\).

---

## 3. Rational generating function iff eventual periodicity

### Theorem T6.0

Let \(a_n\) take values in a finite subset of \(\mathbb Q\), and set

\[
A(z)=\sum_{n\ge0}a_nz^n.
\]

Then

\[
A(z)\in\mathbb Q(z)
\quad\Longleftrightarrow\quad
(a_n)\text{ is eventually periodic}.
\]

### Proof

If \(a_n\) is eventually periodic, the usual finite-prefix plus geometric-tail expression makes \(A(z)\) rational.

Conversely, suppose \(A(z)=P(z)/Q(z)\), with \(Q(0)\ne0\). After normalizing \(Q(0)=1\), the coefficients satisfy a fixed finite-order linear recurrence for all sufficiently large \(n\). The recurrence deterministically maps the finite state

\[
(a_{n-d+1},\ldots,a_n)
\]

to the next state. Since the alphabet is finite, only finitely many states occur. One state therefore repeats, and determinism makes the tail periodic.

Thus, for the balanced Collatz coefficient sequence,

\[
G(z)\text{ rational}
\quad\Longleftrightarrow\quad
g(u_n)\text{ eventually periodic}.
\]

When the block coding \(s\mapsto g(s)\) is injective on the letters actually used, this is equivalent to eventual periodicity of \(u\).

---

## 4. Exact audit of unit absorption

The Collatz evaluation point can be written

\[
W=c\,2^B,
\qquad
c=3^{-k}.
\]

Suppose a Mahler system has the form

\[
\mathbf F(z)=A(z)\mathbf F(z^k).
\]

For a fixed nonzero algebraic \(c\), define

\[
\mathbf F_c(z)=\mathbf F(cz).
\]

Then

\[
\mathbf F_c(z)
=
A(cz)\mathbf F_{c^k}(z^k).
\]

Thus the scaled-copy construction generates the unit states

\[
c,\ c^k,\ c^{k^2},\ldots.
\]

### Proposition T6.1 — finite scaled-unit orbit

For nonzero algebraic \(c\), the orbit \(\{c^{k^j}:j\ge0\}\) is finite if and only if \(c\) is a root of unity.

Indeed, if \(c^{k^a}=c^{k^b}\) for \(b>a\), then

\[
c^{k^a(k^{b-a}-1)}=1.
\]

The converse is immediate.

For the Collatz unit \(c=3^{-k}\), the values \(c^{k^j}\) are distinct positive rationals. Hence the naive finite enlargement by scaled copies does **not** close.

This is an exact route obstruction. P-adic closeness to \(1\), or finite periodicity modulo \(2^N\), does not create an exact finite Mahler system.

For a torsion unit, in contrast, the orbit is finite and the scaled-copy construction does close after finitely many unit states.

Crucially, this failure of absorption is **not** the same as failure of every value theorem: the Bugeaud-Yao theorem used below permits a non-torsion rational p-adic unit directly in its evaluation argument.

---

## 5. P-adic Mahler theorem audit

### 5.1 Bugeaud-Yao 2017 — load-bearing

Reference:

Yann Bugeaud and Jia-Yan Yao, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” Annali di Matematica Pura ed Applicata 196 (2017), 929-946, DOI 10.1007/s10231-016-0602-7.

Their Theorem 3.1 considers an integer-coefficient power series

\[
f(z)=\sum_{m\ge0}c_mz^m
\]

satisfying a first-order Mahler equation

\[
f(z)=\frac{A(z)}{B(z)}+\frac{C(z)}{D(z)}f(z^d),
\]

with \(d\ge2\) and \(A,B,C,D\in\mathbb Z[z]\), together with nonvanishing of \(B,C,D\) along the Mahler orbit of the evaluation point. If infinitely many leading Hankel determinants of \(f\) are nonzero, the theorem gives p-adic transcendence at \(p^w\).

The remark immediately following the proof states that \(p^w\) may be replaced by

\[
\frac{r p^w}{s},
\]

where \(r,s\) are coprime, \(r\ne0\), \(s>0\), and \(p\nmid rs\); the same argument gives transcendence of the resulting p-adic value.

This point is decisive for T6.

#### Hypothesis audit

- **Mahler base:** \(d\ge2\).
- **Coefficient field:** integer coefficients for \(f\) and the displayed equation.
- **Characteristic:** \(0\).
- **Ambient completion:** \(\mathbb Q_p\), with the functional-transcendence step over \(\mathbb C_p\).
- **Convergence domain:** the evaluation argument has positive \(p\)-adic valuation, hence lies in the open p-adic unit disc.
- **Evaluation point:** rational algebraic \(r p^w/s\).
- **Nontrivial p-adic unit:** **explicitly permitted** when rational and prime to \(p\).
- **Singularity exclusion:** \(B(\alpha^{d^m})C(\alpha^{d^m})D(\alpha^{d^m})\ne0\) for all \(m\ge0\).
- **Regular-singular hypothesis:** not required in the theorem as stated.
- **Hankel hypothesis for transcendence:** infinitely many nonzero leading Hankel determinants.
- **Conclusion:** transcendence; stronger irrationality-exponent bounds require additional quantitative control of the Hankel index gaps.
- **Application to generic balanced \(G\):** no, because a generic automatic kernel system need not reduce to the required first-order scalar equation.
- **Application to the T6 first-order subclass below:** yes.

A useful simplification is that T6 only needs transcendence, not the irrationality exponent. For a nonrational formal series, Kronecker's Hankel criterion gives infinitely many nonzero leading Hankel determinants. Therefore the difficult condition \(\limsup n_{i+1}/n_i=1\), used by Bugeaud-Yao for the sharp irrationality exponent, is not needed here.

### 5.2 Wang-Xu 2006 — supporting but not separately load-bearing

Bugeaud-Yao cite:

T.-Q. Wang and G.-S. Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” Advances in Mathematics (China) 35 (2006), 463-475.

Bugeaud-Yao cite page 464 for the transcendence step used in Theorem 3.1 and again in the rational-unit remark. The full Wang-Xu hypotheses were not independently recovered from an authoritative full text in this session. Therefore T6 does **not** promote a broader Wang-Xu theorem beyond what is explicitly stated and proved in the peer-reviewed Bugeaud-Yao source.

### 5.3 Tian Qin Wang 2006 — audited, non-load-bearing

Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187-194, DOI 10.1007/s10114-005-0534-4.

The accessible authoritative metadata and abstract establish only that the paper proves p-adic transcendence results for some Mahler-type functions. The exact theorem hypotheses were not available in an authoritative accessible full text during T6. It is therefore not used as a proof premise.

### 5.4 Nishioka 1990 — wrong theorem family

Kumiko Nishioka, “p-adic transcendental numbers,” Proceedings of the American Mathematical Society 108 (1990), 39-41, DOI 10.1090/S0002-9939-1990-0994783-3.

This peer-reviewed paper constructs explicit algebraically independent sets of p-adic numbers. It is not a general automatic-coefficient Mahler value theorem at the Collatz \(S\)-unit point, so it does not apply to \(G(W)\).

### 5.5 Modern regular-singular Mahler theory — functional, not the required p-adic value theorem

Colin Faverjon and Marina Poulet, “Regular singular Mahler equations and Newton polygons,” Journal of the Mathematical Society of Japan 78 (2026), 799-831, DOI 10.2969/jmsj/94739473, concerns regular-singular structure, Frobenius methods and Newton polygons. Its stated results are about the functional/singularity theory of Mahler equations, not a p-adic arithmetic specialization theorem forcing transcendence of \(G(W)\).

### 5.6 Adamczewski-Faverjon value theorems — complex completion

The audited peer-reviewed Adamczewski-Faverjon lifting/value results use algebraic points inside the **complex** unit disc. Their use of p-adic Diophantine tools inside proofs does not change the ambient value being classified. They remain non-applicable to the exact 2-adic value \(G(W)\).

### 5.7 Brechler 2026 preprint — non-load-bearing

The 2026 preprint on multivariate Mahler functions reports p-adic meromorphy and lifting/descent statements in a broader multivariate setting. It is not peer-reviewed at the time of this audit and T6 does not use it as a load-bearing theorem.

### 5.8 Automatic p-adic digit theorems — wrong automatic sequence

The automatic p-adic rational/transcendental dichotomy concerns the canonical base-\(p^w\) digit sequence of the p-adic number being evaluated. T5/T6 know automatic Collatz valuation/control data, not automatic canonical Hensel digits of \(H\). That route remains unavailable unless the actual digit automaticity is separately proved.

---

## 6. Correction to the T5 “pure p-power mismatch”

T5 correctly refused to apply a theorem stated only at \(p^w\) to \(2^B/3^k\) without checking the hypotheses.

T6 found that, for Bugeaud-Yao Theorem 3.1 specifically, the published remark explicitly removes this mismatch for rational p-adic units.

Therefore the durable corrected statement is:

> The factor \(3^{-k}\) is **not** itself an obstruction to Bugeaud-Yao's first-order p-adic transcendence theorem. The actual obstruction for a generic balanced Collatz series is that its finite automatic-kernel system need not collapse to the special first-order scalar Mahler equation with the required regular orbit.

This correction does not solve the universal balanced problem, but it opens and closes a real theorem-sized subclass.

---

## 7. General first-order balanced S-unit exclusion theorem

### Theorem T6.2

Let a balanced \(k\)-uniform Collatz valuation substitution produce

\[
G(z)=\sum_{n\ge0}g_nz^n,
\qquad
W=\frac{2^B}{3^k},
\qquad
H=-\frac13G(W),
\]

with \(g_n\) finite-valued and non-eventually-periodic.

Suppose there is a nonzero integer \(L\) such that

\[
F(z)=L G(z)\in\mathbb Z[[z]]
\]

and \(F\) satisfies

\[
F(z)=\frac{A(z)}{Q(z)}+\frac{C(z)}{D(z)}F(z^d)
\]

for some \(d\ge2\) and \(A,Q,C,D\in\mathbb Z[z]\), with

\[
Q(W^{d^m})C(W^{d^m})D(W^{d^m})\ne0
\quad
\text{for every }m\ge0.
\]

Then \(F(W)\), \(G(W)\), and \(H\) are transcendental over \(\mathbb Q\) in \(\mathbb Q_2\).

### Proof

Because the coefficients of \(F\) take finitely many values and are non-eventually-periodic, Theorem T6.0 gives

\[
F(z)\notin\mathbb Q(z).
\]

By Kronecker's Hankel criterion, infinitely many leading Hankel determinants of \(F\) are nonzero.

Now write

\[
W=\frac{1\cdot 2^B}{3^k}.
\]

The Bugeaud-Yao rational-unit remark applies with

\[
p=2,\quad w=B,\quad r=1,\quad s=3^k.
\]

The stated nonvanishing hypothesis is exactly the required regular-orbit condition. Hence \(F(W)\) is transcendental in \(\mathbb Q_2\). Multiplication by nonzero rationals preserves transcendence, so \(G(W)\) and \(H\) are transcendental.

QED.

This theorem is a project-level synthesis of the exact T5 reduction with a verified published p-adic value theorem. It is not claimed as a new theorem in the external literature.

---

## 8. Concrete new excluded class: balanced complementary binary substitutions

T6 now proves that the hypotheses of Theorem T6.2 hold automatically for a nontrivial infinite substitution class.

### 8.1 Definition of the class

Let \(k\ge2\) be even.

Choose

\[
\varepsilon=(\varepsilon_0,\ldots,\varepsilon_{k-1})\in\{0,1\}^k
\]

such that

\[
\varepsilon_0=0,
\qquad
\sum_{r=0}^{k-1}\varepsilon_r=\frac{k}{2}.
\]

Define the \(k\)-uniform substitution

\[
\sigma(0)=\varepsilon_0\varepsilon_1\cdots\varepsilon_{k-1},
\]

\[
\sigma(1)=(1-\varepsilon_0)(1-\varepsilon_1)\cdots(1-\varepsilon_{k-1}).
\]

Because each image contains \(k/2\) zeroes and \(k/2\) ones, \(\sigma\) is primitive. Since \(\varepsilon_0=0\), it is prolongable on \(0\); let \(u\) be its fixed point.

Restrict to the case that \(u\) is not eventually periodic.

Use the Collatz valuation coding

\[
v(0)=1,\qquad v(1)=2.
\]

### 8.2 Exact balance and evaluation point

Each substituted block contains \(k/2\) letters of each valuation. Hence

\[
B=\frac{k}{2}\cdot1+\frac{k}{2}\cdot2=\frac{3k}{2}.
\]

Therefore

\[
W=\frac{2^{3k/2}}{3^k}
=
\left(\frac89\right)^{k/2}.
\]

Thus

\[
0<W<1,
\qquad
|W|_2=2^{-3k/2}<1.
\]

The mean valuation is \(3/2<\log_2 3\), so the class is subcritical in the T5 sense.

### 8.3 Integer block constants

Let

\[
C_0=3^{k-1}g(0),
\qquad
C_1=3^{k-1}g(1).
\]

These are integers.

The two substituted valuation blocks are complements under \(1\leftrightarrow2\), hence are distinct. By the T5 injectivity of the block affine constant,

\[
C_0\ne C_1.
\]

Define the integer-coefficient target series

\[
F_0(z)=\sum_{n\ge0}C_{u_n}z^n.
\]

Then

\[
F_0(z)=3^{k-1}G(z)
\]

and

\[
H=-\frac{F_0(W)}{3^k}.
\]

### 8.4 Exact two-state kernel system

The fixed point satisfies

\[
u_{kn+r}=u_n\oplus\varepsilon_r.
\]

Define

\[
P_0(z)=\sum_{\varepsilon_r=0}z^r,
\qquad
P_1(z)=\sum_{\varepsilon_r=1}z^r,
\]

and

\[
S(z)=P_0(z)-P_1(z)
=
\sum_{r=0}^{k-1}(-1)^{\varepsilon_r}z^r.
\]

Let

\[
F_1(z)=\sum_{n\ge0}C_{1-u_n}z^n.
\]

Then exactly

\[
\begin{pmatrix}
F_0(z)\\
F_1(z)
\end{pmatrix}
=
\begin{pmatrix}
P_0(z)&P_1(z)\\
P_1(z)&P_0(z)
\end{pmatrix}
\begin{pmatrix}
F_0(z^k)\\
F_1(z^k)
\end{pmatrix}.
\]

For a nonperiodic \(u\), the two kernel sequences \(u\) and \(1-u\) are distinct, so this is the exact two-state kernel presentation.

The determinant is

\[
\det M(z)
=
(P_0(z)+P_1(z))(P_0(z)-P_1(z))
\]

\[
=
(1+z+\cdots+z^{k-1})S(z).
\]

This supplies an explicit dimension, coefficient field, determinant and singularity structure.

### 8.5 Exact scalar Mahler equation

Since

\[
F_0(z)+F_1(z)=\frac{C_0+C_1}{1-z},
\]

the first row of the matrix system gives

\[
F_0(z)
=
S(z)F_0(z^k)
+
\frac{(C_0+C_1)P_1(z)}{1-z^k}.
\]

Equivalently, for the original Collatz series,

\[
G(z)
=
S(z)G(z^k)
+
\frac{(g(0)+g(1))P_1(z)}{1-z^k}.
\]

This is the exact scalar first-order \(k\)-Mahler equation required by Bugeaud-Yao after using the integer-scaled series \(F_0\).

A still simpler homogeneous equation is obtained from

\[
D(z)=F_0(z)-F_1(z):
\]

\[
D(z)=S(z)D(z^k).
\]

### 8.6 Exact singularity check at the Collatz point

For every \(m\ge0\),

\[
0<W^{k^m}<1.
\]

Therefore

\[
1-(W^{k^m})^k\ne0.
\]

It remains to show

\[
S(W^{k^m})\ne0.
\]

Because \(\varepsilon_0=0\),

\[
S(0)=1.
\]

The leading coefficient of \(S\) is \(\pm1\). Hence, by the rational-root theorem, every rational root of \(S\) must be \(+1\) or \(-1\).

But \(W^{k^m}\) is rational and lies strictly between \(0\) and \(1\). Therefore it is not a root of \(S\).

Thus every Bugeaud-Yao singularity exclusion is satisfied exactly.

### 8.7 Nonrationality

The coefficient sequence of \(F_0\) takes the two distinct integer values \(C_0,C_1\).

Because \(u\) is non-eventually-periodic and \(C_0\ne C_1\), the coefficient sequence of \(F_0\) is non-eventually-periodic.

By Theorem T6.0,

\[
F_0(z)\notin\mathbb Q(z).
\]

Hence infinitely many leading Hankel determinants are nonzero.

### 8.8 P-adic value conclusion

Apply Bugeaud-Yao Theorem 3.1 and its rational-unit remark to

\[
F_0(z)
=
\frac{(C_0+C_1)P_1(z)}{1-z^k}
+
S(z)F_0(z^k)
\]

at

\[
W=\frac{2^{3k/2}}{3^k}.
\]

All hypotheses have been verified.

Therefore

\[
F_0(W)\text{ is transcendental in }\mathbb Q_2.
\]

Consequently,

\[
G(W)\text{ is transcendental},
\]

and

\[
H=-\frac{F_0(W)}{3^k}
\]

is transcendental.

In particular,

\[
H\notin\mathbb Q\cap\mathbb Z_2,
\]

so \(H\) is not an ordinary integer and cannot be a positive integer Collatz anchor.

### Theorem T6.3 — balanced complementary substitution exclusion

> No non-eventually-periodic fixed point of the balanced complementary binary substitution class above can be realized by an ordinary positive Collatz integer with the prescribed accelerated valuation word.

This is the qualifying T6 recursive-language obstruction.

---

## 9. New bounded-\(R_m\) implication

T2 proved, for bounded valuation alphabets, that an ordinary nonnegative anchor is equivalent to bounded canonical start-cylinder representatives \(R_m\).

Combine T2 with Theorem T6.3.

For the balanced complementary binary class,

\[
(R_m)\text{ bounded}
\quad\Longrightarrow\quad
u\text{ eventually periodic}.
\]

Indeed, if \(u\) were non-eventually-periodic and \(R_m\) bounded, T2 would produce an ordinary integer anchor, while T6.3 proves that the exact inverse value is transcendental and therefore not an integer.

Thus T6 does establish “bounded \(R_m\) implies periodicity” for a new explicit recursive class.

---

## 10. Why generic one-point rationality is false

The stronger generic implication

\[
\text{finite-valued nonperiodic automatic }a_n
\ \&\
A(W)\in\mathbb Q
\quad\Longrightarrow\quad
A(z)\in\mathbb Q(z)
\]

is false, even for positive finite-valued automatic coefficients.

Let

\[
T(z)=\sum_{n\ge0}t_nz^n
\]

be any non-eventually-periodic \(k\)-automatic series, for example the Thue-Morse \(0/1\) series.

Fix any nonzero rational \(W\) with \(|W|_2<1\) and \(|W|_\infty<1\). Choose an integer \(M>W^{-1}\), and define

\[
C(z)
=
\left(1-\frac{z}{W}\right)T(z)
+
\frac{M}{1-z}.
\]

Then

\[
C(W)=\frac{M}{1-W}\in\mathbb Q.
\]

The coefficients of \(C\) belong to the finite set determined by

\[
M+t_n-W^{-1}t_{n-1},
\]

with the obvious separate \(n=0\) term. Shifts, products of finite automata, and finite codings preserve automaticity, so the coefficient sequence is \(k\)-automatic and finite-valued. The choice of \(M\) makes it positive.

If \(C(z)\) were rational, then

\[
\left(1-\frac{z}{W}\right)T(z)
=
C(z)-\frac{M}{1-z}
\]

would be rational, hence \(T(z)\) would be rational, contradicting non-eventual periodicity.

Therefore \(C(z)\) is a nonrational automatic/Mahler function taking a rational value at the algebraic p-adic point \(W\).

This exact counterexample shows that **automaticity plus one algebraic p-adic specialization is not enough**. A successful theorem must use additional functional structure, singularity hypotheses, or Collatz-specific coupling between the coefficient alphabet and the evaluation point.

The counterexample is not Collatz-derived and does not disprove the primary balanced Collatz conjecture.

---

## 11. Roots of unity versus the actual Collatz unit

The two relevant facts are now cleanly separated.

### Torsion unit

If \(c\) is a root of unity, the orbit

\[
c,\ c^k,\ c^{k^2},\ldots
\]

is finite. A finite scaled-copy Mahler enlargement is therefore available.

### Actual Collatz unit

For

\[
c=3^{-k},
\]

the orbit is infinite, so that finite scaled-copy absorption route fails.

But \(c\) is a rational 2-adic unit. Bugeaud-Yao's rational-unit remark permits it directly for their first-order theorem. Hence:

> non-torsion prevents the naive finite unit-state closure, but does not prevent the first-order Bugeaud-Yao p-adic value theorem.

No analogous verified peer-reviewed theorem was found in T6 that covers an arbitrary higher-rank automatic kernel system at the same non-torsion rational unit.

---

## 12. Connection to the Periodicity Conjecture

The T5 identity remains exact:

\[
H=\Phi(V),
\qquad
V=\sum_{j\ge0}2^{A_j}.
\]

For the full automatic-gap class, the desired implication

\[
H\in\mathbb Q\cap\mathbb Z_2
\quad\Longrightarrow\quad
V\in\mathbb Q\cap\mathbb Z_2
\]

remains a restricted case of Lagarias' Periodicity Conjecture.

T6 does **not** solve that restricted conjecture in full.

What T6 adds is extra structure strong enough to escape the open bridge in one explicit subclass:

- balanced binary complementary substitution;
- exact two-state kernel;
- determinant factorization;
- scalar first-order Mahler reduction;
- verified regular Mahler orbit at \(W\);
- published p-adic \(S\)-unit transcendence theorem.

Thus the T6 exclusion is genuinely more specialized than the general Periodicity-Conjecture statement and is not a relabeling of the open conjecture.

For balanced substitutions whose automatic kernel does not admit a qualifying first-order scalar equation, the Periodicity-Conjecture bridge remains unresolved.

---

## 13. Cobham and López-Stoll

### Cobham

No second automatic presentation in a multiplicatively independent integer base was proved for the same relevant sequence. Cobham therefore remains unavailable.

The simultaneous appearance of powers of \(2\) and \(3\) in the Collatz formulas is not a Cobham hypothesis.

### López-Stoll

The López-Stoll 2021 density equality remains non-load-bearing for the project. T6 does not repair the real/2-adic completion transfer or the prescribed-parity/actual-parity issues identified in T3.

---

## 14. Multivariate T5 system

T6 obtained a genuine one-variable theorem, so the multivariate extension was reconsidered.

The generic T5 recurrence is

\[
\mathbf F(x)=A(x)\mathbf F(\tau(x))
\]

at

\[
q_s=\frac{2^{v(s)}}{3}.
\]

The Bugeaud-Yao theorem is univariate and first-order. It does not directly cover a higher-rank multivariate monomial system.

The 2026 Brechler preprint indicates p-adic meromorphy and lifting/descent phenomena for multivariate Mahler functions, but it is not peer-reviewed and T6 does not promote it as a proof theorem.

Therefore no generic multivariate p-adic rationality conclusion is claimed.

The correct next target is the higher-rank one-variable balanced kernel system before returning to the full multivariate Parikh system.

---

## 15. Requested deliverable answers

- **Exact theorem proved or failed:** the universal balanced automatic statement remains open; Theorems T6.2 and T6.3 prove p-adic transcendence for the first-order regular-orbit subclass and, concretely, for all nonperiodic balanced complementary binary substitutions.
- **Precise class covered:** even-length binary complementary \(k\)-uniform substitutions with \(\varepsilon_0=0\), exactly \(k/2\) ones in \(\sigma(0)\), valuation coding \(0\mapsto1,\ 1\mapsto2\), and non-eventually-periodic fixed point.
- **Exact one-variable Mahler equation:** 
  \[
  G(z)=S(z)G(z^k)+\frac{(g(0)+g(1))P_1(z)}{1-z^k}.
  \]
  The integer-scaled series \(F_0=3^{k-1}G\) satisfies the same equation with \(g(0)+g(1)\) replaced by \(C_0+C_1\).
- **Coefficient field:** \(\mathbb Q\) for \(G\); \(\mathbb Z\) after the exact scaling \(F_0=3^{k-1}G\).
- **Mahler base:** \(k\).
- **System dimension:** exact \(k\)-kernel presentation dimension \(2\) for the complementary class.
- **Determinant:** 
  \[
  (1+z+\cdots+z^{k-1})S(z).
  \]
- **Exact evaluation point:** 
  \[
  W=2^{3k/2}/3^k=(8/9)^{k/2}.
  \]
- **External p-adic theorem that applies:** Bugeaud-Yao 2017, Theorem 3.1 plus its rational-unit remark.
- **Can \(3^{-k}\) be absorbed by finite scaled copies?** No; its exponentiation orbit is infinite. Torsion units are exactly the finite-orbit case.
- **Does a theorem nevertheless permit \(3^{-k}\)?** Yes, Bugeaud-Yao permits the rational unit directly in the first-order class.
- **Does rationality of \(G(W)\) force rationality of \(G(z)\) generically?** No. Section 10 gives an exact finite-valued positive automatic counterexample.
- **New automatic class ruled out?** Yes: the nonperiodic balanced complementary binary substitution class.
- **Does bounded \(R_m\) imply periodicity for a new class?** Yes, for that class.
- **Is the residual primitive constant-length class reduced?** Yes, by this exact first-order/complementary subclass exclusion. No claim is made that the remaining higher-rank balanced class is solved.
- **Does the unresolved remainder still contain a restricted Periodicity-Conjecture problem?** Yes.
- **Cobham applicable?** No.
- **López-Stoll load-bearing?** No.
- **Explicit anchored aperiodic word found?** No.
- **Candidate or unbounded orbit found?** No.
- **Counterexample claimed?** No.
- **Future compute justified?** No.
- **COMPUTE_BUDGET.md change justified?** No.
- **METRIC_CATALOG.md change justified?** No.

---

## 16. Exact next theorem-sized obligation

The next obligation is a **higher-rank p-adic \(S\)-unit Mahler-system audit**.

Start with the exact finite \(k\)-kernel system

\[
\mathbf G(z)=M(z)\mathbf G(z^k)
\]

for balanced Collatz coefficient sequences that do **not** reduce to the T6 first-order class.

The target is one of:

1. prove a peer-reviewed p-adic lifting/transcendence theorem applies to a regular algebraic point
   \[
   W=2^B/3^k
   \]
   for higher-rank linear Mahler systems with rational non-torsion p-adic unit;
2. derive a Collatz-specific scalar reduction whose order and singularities are controlled strongly enough for an existing p-adic theorem;
3. or prove an exact obstruction showing why the higher-rank automatic kernel cannot supply such a value theorem.

Do not return to substitution enumeration, finite residue/carry optimization, exponent-code search, trajectory computation, new sampling, CPU/GPU campaigns, or completion transfer from complex values.

No new scientific computation is authorized.

---

## 17. Source ledger

1. Yann Bugeaud and Jia-Yan Yao, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” Annali di Matematica Pura ed Applicata 196 (2017), 929-946. DOI: https://doi.org/10.1007/s10231-016-0602-7
2. T.-Q. Wang and G.-S. Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” Advances in Mathematics (China) 35 (2006), 463-475.
3. Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187-194. DOI: https://doi.org/10.1007/s10114-005-0534-4
4. Kumiko Nishioka, “p-adic transcendental numbers,” Proceedings of the American Mathematical Society 108 (1990), 39-41. DOI: https://doi.org/10.1090/S0002-9939-1990-0994783-3
5. Boris Adamczewski and Colin Faverjon, “Méthode de Mahler : relations linéaires, transcendance et applications aux nombres automatiques,” Proceedings of the London Mathematical Society 115 (2017), 55-90. DOI: https://doi.org/10.1112/plms.12038
6. Colin Faverjon and Marina Poulet, “Regular singular Mahler equations and Newton polygons,” Journal of the Mathematical Society of Japan 78 (2026), 799-831. DOI: https://doi.org/10.2969/jmsj/94739473
7. Enzo Brechler, “Transcendence of multivariate Mahler functions and algebraic relations between their values,” arXiv:2607.24877 (2026 preprint; non-load-bearing).

C — new recursive-language obstruction found
