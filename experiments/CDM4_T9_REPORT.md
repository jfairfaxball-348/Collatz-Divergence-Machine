# CDM4-T9 — P-ADIC WALSH-PRODUCT SAME-POINT INDEPENDENCE AUDIT

Date: 2026-10-03

Authoritative input commit: c3c10963861b9c4a2fde2a38885c8f11067b33b9

Session type: theory / source-level literature audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue/carry/exponent-code optimization: **NONE**  
CPU/GPU/cloud/distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T9 does **not** recover or prove the completion-correct p-adic same-point value-independence theorem required to exclude rational cancellation among a genuinely multi-character family of Collatz Walsh products.

It does sharpen the functional side of the problem substantially.

For the exact T8 elementary-2-group translation class, after passing to the reachable output quotient
\[
G=E/K_C,
\]
T9 proves an exact classification of rational character components. If
\[
f_\chi(n)=\chi(u_n),
\]
then
\[
f_\chi(kn+r)=f_\chi(n)\chi(\varepsilon_r),
\]
so every projected character sequence is strongly \(k\)-multiplicative. If such a \(\{\pm1\}\)-valued sequence is eventually periodic, then it is either constant \(1\), or, only when \(k\) is odd,
\[
f_\chi(n)=(-1)^n,
\qquad
\chi(\varepsilon_r)=(-1)^r.
\]
Therefore the reduced class has at most one nontrivial rational Walsh component. In the alternating case
\[
S_\chi(z)=\frac{1+z^k}{1+z},
\qquad
P_\chi(z)=\frac1{1+z}.
\]

T9 also proves that distinct characters of the exact quotient \(G\) give distinct character polynomials \(S_\chi\). Thus duplicate \(S_\chi\) do not survive exact reachable/output reduction.

Most importantly, T9 recovers a peer-reviewed restatement of Kubota's first-order functional theorem. For
\[
P_i(z)=S_i(z)P_i(z^k),
\]
the normalized products are algebraically independent over the rational-function field exactly when the cocycles \(S_i\) are multiplicatively independent modulo rational Mahler coboundaries. Hence the T8 preprocessing condition is the exact functional algebraic-independence criterion for this first-order diagonal class.

The adjacent Kubota value theorem in the same source is, however, archimedean: it assumes an algebraic point \(\gamma\) with ordinary \(0<|\gamma|<1\). It does not classify the 2-adic specialization at
\[
W=\frac{2^B}{3^k}.
\]

A source-level audit of Xu–Wang 2004, Wang 2006, Wang–Xu 2006, Flicker 1979, Bundschuh–Nishioka, Väänänen/Wallisser, later Mahler literature, and modern lifting work did not recover a peer-reviewed theorem with all of the required features: several first-order Mahler functions, the same algebraic p-adic point, the stationary substitution \(z\mapsto z^k\), functional-to-value lifting, and allowance for the rational non-torsion unit \(3^{-k}\).

Flicker's theorem genuinely permits nonarchimedean completions, but its multi-function mechanism requires a transformation/limit/dominance package that is not verified for the stationary Walsh family. Its p-adic discussion explicitly encounters discreteness of valuations as a limitation. The normalized Collatz products all have
\[
v_2(P_i(W))=0,
\]
so T8 supplies no Flicker-style valuation separation.

No Collatz-specific additive identity was found that forces the exact weighted Fourier reconstruction to be nonrational.

Accordingly T9 gives a sharper exact functional preprocessing theorem and a sharper statement of the missing p-adic lifting theorem, but it rules out no new genuinely higher-rank recursive Collatz class. No new scientific compute is justified.

## 2. Binding class and inherited exact structure

T9 works only with the exact T8 balanced elementary-2-group translation class.

Let
\[
A\cong(\mathbb Z/2\mathbb Z)^d,\qquad d\ge2,
\]
with digit translations
\[
\varepsilon_0,\ldots,\varepsilon_{k-1}\in A,
\qquad
\varepsilon_0=0,
\]
and fixed point
\[
u_{kn+r}=u_n+\varepsilon_r.
\]

Let
\[
E=\langle\varepsilon_0,\ldots,\varepsilon_{k-1}\rangle
\]
and let the exact Collatz block constants be
\[
C_a=\sum_{j=0}^{k-1}3^{k-1-j}2^{A_{a,j}}.
\]

The exact output stabilizer is
\[
K_C=\{h\in E:C_{x+h}=C_x\text{ for every }x\in E\}.
\]

The true reachable/output quotient is
\[
G=E/K_C,
\]
and the exact true \(k\)-kernel dimension is
\[
\boxed{m=|G|=|E/K_C|.}
\]

No substitution enumeration is used or permitted in T9. Therefore \(m\) is given exactly by this quotient formula rather than as a numerical value for an arbitrarily selected example.

For every character \(\chi\in\widehat G\),
\[
\widehat C_\chi=\sum_{a\in G}\chi(a)C_a,
\]
\[
S_\chi(z)=\sum_{r=0}^{k-1}\chi(\varepsilon_r)z^r\in\mathbb Z[z],
\]
and
\[
\widehat F_\chi(z)=S_\chi(z)\widehat F_\chi(z^k).
\]

If \(\widehat C_\chi\ne0\), define
\[
P_\chi(z)=\frac{\widehat F_\chi(z)}{\widehat C_\chi}.
\]
Then
\[
P_\chi(0)=1,
\qquad
P_\chi(z)=S_\chi(z)P_\chi(z^k),
\]
and
\[
P_\chi(z)=\sum_{n\ge0}\chi(u_n)z^n.
\]

The exact Collatz point remains
\[
W=\frac{2^B}{3^k},
\qquad
v_2(W)=B>0,
\]
and
\[
F_0(W)
=
\frac1{|G|}
\left[
\frac{\widehat C_1}{1-W}
+
\sum_{\substack{\chi\ne1\\\widehat C_\chi\ne0}}
\widehat C_\chi P_\chi(W)
\right].
\]
The inverse-Collatz value is
\[
H=-\frac{F_0(W)}{3^k}.
\]

T8 already proved, and T9 does not re-open,
\[
S_\chi(W^{k^j})\equiv1\pmod{2^{Bk^j}}
\]
for every \(\chi\) and \(j\ge0\). Thus every character factor is nonzero and a 2-adic unit along the complete Mahler orbit.

## 3. Exact Fourier support and zero components

The exact support is
\[
\mathcal S_C
=
\{\chi\in\widehat G:\widehat C_\chi\ne0\}.
\]

If
\[
\widehat C_\chi=0,
\]
then
\[
\widehat F_\chi\equiv0,
\]
so the character is removed exactly.

No numerical support list is produced because T9 is an all-family theorem audit and substitution enumeration is forbidden. The exact theorem-first preprocessing rule is the symbolic set \(\mathcal S_C\) above.

The trivial character yields
\[
S_1(z)=1+z+\cdots+z^{k-1}
=\frac{1-z^k}{1-z},
\]
\[
P_1(z)=\frac1{1-z}.
\]

## 4. New T9 theorem: exact rational character classification

For a character \(\chi\), put
\[
a_r=\chi(\varepsilon_r)\in\{\pm1\},
\qquad a_0=1,
\]
and
\[
f(n)=\chi(u_n).
\]
Then
\[
f(kn+r)=f(n)a_r.
\tag{1}
\]

Iterating (1) over the base-\(k\) digits of \(n\) shows that \(f\) is strongly \(k\)-multiplicative.

### Theorem T9.1

If \(f:\mathbb N_0\to\{\pm1\}\) satisfies (1) and is eventually periodic, then exactly one of the following holds.

1. \(a_r=1\) for every \(r\), and \(f(n)=1\) for every \(n\).
2. \(k\) is odd,
   \[
   a_r=(-1)^r
   \]
   for every \(r\), and
   \[
   f(n)=(-1)^n
   \]
   for every \(n\).

### Proof

Let \(p\) be the least eventual period.

Because \(a_0=1\),
\[
f(kn)=f(n).
\tag{2}
\]

If \(d=\gcd(p,k)>1\), then sufficiently large integers congruent modulo \(p/d\) become congruent modulo \(p\) after multiplication by \(k\). Equation (2) would make \(p/d\) an eventual period, contradicting minimality. Hence
\[
\gcd(p,k)=1.
\tag{3}
\]

Let \(g\) be the induced eventual function on \(\mathbb Z/p\mathbb Z\). Equation (2) gives
\[
g(kx)=g(x).
\tag{4}
\]

Using \(r=1\) in (1),
\[
g(kx+1)=g(x)a_1.
\]
Since multiplication by \(k\) is invertible modulo \(p\), (4) implies
\[
g(y+1)=a_1g(y).
\]
Thus
\[
g(y)=c\,a_1^y
\]
on \(\mathbb Z/p\mathbb Z\).

For general \(r\), equation (1) now gives
\[
c\,a_1^{kx+r}=c\,a_1^x a_r,
\]
so
\[
a_r=a_1^{(k-1)x+r}
\]
for every \(x\). Therefore
\[
a_1^{k-1}=1,
\qquad
a_r=a_1^r.
\tag{5}
\]

Since \(a_1\in\{\pm1\}\), either \(a_1=1\), or \(a_1=-1\) and \(k-1\) is even. The latter means \(k\) is odd. The base-\(k\) digit product and (5) then give the claimed formula for every \(n\), not only eventually. QED.

### Consequence for rational Walsh components

A rational power series with coefficients in a finite set has an eventually periodic coefficient sequence, and an eventually periodic sequence has a rational generating function. Therefore, after exact quotient reduction, the only rational normalized character products are:

- the trivial character
  \[
  P_1(z)=\frac1{1-z};
  \]
- possibly one nontrivial alternating character, only for odd \(k\), satisfying
  \[
  \chi(\varepsilon_r)=(-1)^r,
  \]
  in which case
  \[
  S_\chi(z)=\sum_{r=0}^{k-1}(-1)^rz^r
  =\frac{1+z^k}{1+z},
  \]
  \[
  P_\chi(z)=\frac1{1+z}.
  \]

Because the \(\varepsilon_r\) generate \(G\), at most one character can have the prescribed values \((-1)^r\).

Thus the genuinely nonrational support is exactly
\[
\mathcal I
=
\mathcal S_C
\setminus
\left(
\{1\}
\cup
\{\chi_{\rm alt}\text{ if it exists}\}
\right).
\tag{6}
\]

This removes the T8 ambiguity about projected-periodic components for the exact elementary-2-group translation class.

## 5. New T9 theorem: duplicate character polynomials disappear after exact quotienting

### Theorem T9.2

For distinct characters \(\chi,\psi\in\widehat G\),
\[
S_\chi(z)\ne S_\psi(z).
\]

### Proof

If
\[
S_\chi(z)=S_\psi(z),
\]
then coefficient comparison gives
\[
\chi(\varepsilon_r)=\psi(\varepsilon_r)
\]
for every digit \(r\). The images of the \(\varepsilon_r\) generate \(G\), so the characters agree on every element of \(G\). Hence \(\chi=\psi\). QED.

Therefore no duplicate \(S_\chi\) survive exact reachable/output quotient reduction.

This does not rule out rational-function quotients or higher multiplicative coboundary relations.

## 6. Equality and rational-function quotient criteria

Let
\[
P_i(z)=S_i(z)P_i(z^k),
\qquad
P_i(0)=1.
\]

Then
\[
P_i=P_j
\quad\Longleftrightarrow\quad
S_i=S_j.
\]

For the quotient
\[
Q(z)=\frac{P_i(z)}{P_j(z)}
\]
one has
\[
Q(z)=\frac{S_i(z)}{S_j(z)}Q(z^k).
\]

Hence
\[
Q(z)\in\mathbb Q(z)^\times
\]
if and only if there exists
\[
R(z)\in\mathbb Q(z)^\times
\]
such that
\[
\frac{S_i(z)}{S_j(z)}
=
\frac{R(z)}{R(z^k)}.
\tag{7}
\]

Thus rational-function related products are exactly pairwise rational Mahler coboundaries.

## 7. Exact multiplicative relation lattice

For the genuinely nonrational components \(P_1,\ldots,P_t\), define
\[
\Lambda
=
\left\{
(m_1,\ldots,m_t)\in\mathbb Z^t:
\prod_{i=1}^t S_i(z)^{m_i}
=
\frac{R(z)}{R(z^k)}
\text{ for some }R\in\mathbb Q(z)^\times
\right\}.
\tag{8}
\]

Then
\[
(m_i)\in\Lambda
\]
if and only if
\[
\prod_{i=1}^tP_i(z)^{m_i}\in\mathbb Q(z)^\times.
\tag{9}
\]

This is the exact rational Mahler-coboundary preprocessing object.

A relation with one exponent equal to \(\pm1\) permits exact elimination of that product as a rational function times a Laurent monomial in the others. More general relations may make a component algebraic over the retained product field rather than rationally expressible without taking a root. Consequently “remove multiplicative relations” must preserve the induced algebraic relation in the Collatz additive output; one cannot simply delete a dependent summand.

## 8. New source-level result: Kubota gives the exact functional algebraic-independence criterion

T9 recovered a peer-reviewed restatement of Kubota's theorem in:

Hajime Kaneko, Takeshi Kurosawa, Yohei Tachiya, and Taka-aki Tanaka,  
“Explicit algebraic dependence formulae for infinite products related with Fibonacci and Lucas numbers,”  
Acta Arithmetica 168 (2015), 161–186, DOI 10.4064/aa168-2-5.

Their Lemma 2.1, explicitly attributed to Kubota, defines
\[
H_k=
\left\{
\frac{g(z^k)}{g(z)}:g\in K(z)^\times
\right\}
\]
and states that nonzero formal power series satisfying
\[
f_i(z^k)=c_i(z)f_i(z)
\]
are algebraically independent over \(K(z)\) if and only if the \(c_i\) are multiplicatively independent modulo \(H_k\).

For T9,
\[
P_i(z^k)=S_i(z)^{-1}P_i(z),
\]
so inversion of the cocycles is irrelevant.

### Theorem T9.3 — exact functional criterion

The normalized Walsh products
\[
P_1(z),\ldots,P_t(z)
\]
are algebraically independent over \(\mathbb Q(z)\) if and only if
\[
\Lambda=\{0\}.
\tag{10}
\]

Equivalently, multiplicative independence of the cocycles modulo rational Mahler coboundaries is necessary and sufficient for functional algebraic independence in the T9 first-order diagonal class.

Because extension of the constant field by algebraic numbers does not change transcendence degree, the same functional algebraic independence holds over \(\overline{\mathbb Q}(z)\).

This resolves the main T8 functional-independence question.

It does **not** imply p-adic value independence.

## 9. The adjacent Kubota value theorem is the wrong completion

The same Kaneko–Kurosawa–Tachiya–Tanaka paper restates the corresponding Kubota/Nishioka value theorem immediately after the functional criterion.

It assumes:

- the functions converge for ordinary \(|z|<1\);
- \(\gamma\) is algebraic;
- ordinary
  \[
  0<|\gamma|<1;
  \]
- all cocycles are defined and nonzero along \(\gamma^{k^j}\);
- functional algebraic independence.

It then concludes algebraic independence of the values.

This is a genuine same-point functional-to-value theorem, but it is archimedean. Its absolute value is the ordinary one, not the 2-adic absolute value.

Therefore it cannot be applied to the 2-adic value
\[
P_i(W),
\qquad
W=2^B/3^k,
\]
merely because the same formal series also has a complex interpretation.

The desired T9 theorem is precisely a completion-correct nonarchimedean analogue with the required evaluation-point hypotheses.

## 10. Divisor-theoretic form of the coboundary test

For a fixed proposed integer relation \(m=(m_i)\), put
\[
q(z)=\prod_iS_i(z)^{m_i}.
\]

The relation is a rational coboundary exactly when
\[
q(z)=\frac{R(z)}{R(z^k)}
\tag{11}
\]
for some rational \(R\).

Let
\[
\phi:\mathbb P^1\to\mathbb P^1,
\qquad
\phi(z)=z^k,
\]
and let
\[
D=\operatorname{div}(R).
\]
Then (11) is equivalent to the integral divisor equation
\[
\boxed{
\operatorname{div}(q)
=
D-\phi^*D.
}
\tag{12}
\]

Conversely, on \(\mathbb P^1\), every degree-zero integral divisor is principal, so an integral degree-zero solution \(D\) of (12) reconstructs a rational \(R\) up to a scalar.

At a finite nonzero point \(\alpha\),
\[
\operatorname{ord}_\alpha(q)
=
D(\alpha)-D(\alpha^k).
\tag{13}
\]

At \(0\) and \(\infty\), where the power map has ramification index \(k\),
\[
\operatorname{ord}_0(q)=(1-k)D(0),
\]
\[
\operatorname{ord}_\infty(q)=(1-k)D(\infty).
\tag{14}
\]

Because every \(S_i(0)=1\), the T9 cocycles satisfy
\[
\operatorname{ord}_0(q)=0,
\]
so any coboundary witness has \(D(0)=0\).

These equations show that shared polynomial factors or shared roots alone do not establish dependence: multiplicities must satisfy the entire \(k\)-power orbit equation.

Cyclotomic factors require cycle bookkeeping under \(\alpha\mapsto\alpha^k\). Non-root-of-unity factors can also occur through the divisor of an arbitrary rational \(R\); therefore it would be false to claim that only cyclotomic factors matter.

For any fixed proposed \(m\), this reduces the coboundary question to an exact rational-function/divisor calculation. Recent peer-reviewed algorithmic work of Chyzak, Dreyfus, Dumas, and Mezzarobba on first-order factors of Mahler operators gives a broader effective framework for rational first-order structures, but T9 does not infer from it an algorithm computing the complete integer lattice \(\Lambda\) for every symbolic family without additional work.

## 11. Character-product identities

For elementary-2-group characters,
\[
(\chi\psi)(a)=\chi(a)\psi(a).
\]

This gives coefficientwise identities
\[
\chi(\varepsilon_r)\psi(\varepsilon_r)
=
(\chi\psi)(\varepsilon_r),
\]
but generally
\[
S_{\chi\psi}(z)
\ne
S_\chi(z)S_\psi(z).
\]

The character group law therefore does not directly generate multiplicative identities among the cocycle polynomials. Any actual product relation must still satisfy the coboundary criterion (8).

Likewise, orthogonality of characters gives exact Fourier inversion but does not imply additive independence of the specialized values.

## 12. Exact functional-independence status after T9 preprocessing

For the exact all-family class, define:

- quotient group:
  \[
  G=E/K_C;
  \]
- true kernel dimension:
  \[
  m=|G|;
  \]
- support:
  \[
  \mathcal S_C=\{\chi:\widehat C_\chi\ne0\};
  \]
- rational character set:
  \[
  \mathcal R=
  \{1\}
  \cup
  \{\chi_{\rm alt}\text{ if it exists}\};
  \]
- genuinely nonrational support:
  \[
  \mathcal I=\mathcal S_C\setminus\mathcal R;
  \]
- multiplicative relation lattice \(\Lambda\) from (8).

The exact statuses are:

- **zero components:** completely classified by \(\widehat C_\chi=0\);
- **rational components:** completely classified by Theorem T9.1;
- **duplicate \(S_\chi\):** impossible after quotient reduction, by Theorem T9.2;
- **rational-function quotient:** exactly equation (7);
- **multiplicative dependence:** exactly \(\Lambda\ne0\);
- **functional algebraic independence:** exactly \(\Lambda=0\), by Kubota;
- **functional linear independence:** follows from functional algebraic independence when \(\Lambda=0\);
- **value linear independence at \(W\):** not proved;
- **value algebraic independence at \(W\):** not proved.

Because no particular substitution is enumerated, T9 does not fabricate a numerical support or a list of concrete \(S_i\). The surviving normalized products are exactly
\[
\boxed{
P_\chi(z)=\prod_{j\ge0}S_\chi(z^{k^j}),
\qquad
\chi\in\mathcal I,
}
\tag{15}
\]
subject to the exact relation lattice (8).

## 13. Exact p-adic evaluation data

The coefficient field for the character equations is
\[
\mathbb Q
\]
with
\[
S_i(z)\in\mathbb Z[z].
\]

The Mahler base is the single common integer
\[
k\ge2.
\]

The exact evaluation point is
\[
W=\frac{2^B}{3^k}\in\mathbb Q,
\qquad
|W|_2=2^{-B}<1.
\]

The rational-unit factor is
\[
3^{-k}\in\mathbb Z_2^\times.
\]
It is non-torsion.

T8 proves the complete orbit regularity:
\[
S_i(W^{k^j})\ne0
\]
for every \(i\) and \(j\ge0\).

Moreover
\[
P_i(W)\in\mathbb Z_2^\times,
\qquad
v_2(P_i(W))=0.
\]

Thus the remaining problem is not convergence, singularity, determinant rank, or unknown component valuation.

## 14. Source-level p-adic theorem audit

A theorem is load-bearing only if its actual statement is recoverable sufficiently to check its function class, field, completion, point, singularities, independence hypothesis, and conclusion.

### 14.1 Bugeaud–Yao 2017

Bugeaud–Yao's peer-reviewed theorem remains fully verified for one scalar first-order Mahler function. Its published remark explicitly permits evaluation at
\[
rp^w/s,
\qquad
p\nmid rs.
\]

Therefore the Collatz rational non-torsion unit is permitted **inside that theorem**.

For every \(\chi\in\mathcal I\), T8's nonsingularity and T9's nonrationality classification permit individual p-adic transcendence through this first-order route.

It supplies no theorem for several different character functions at the same point.

**T9 use:** separate transcendence only.

### 14.2 Kubota 1977, via a peer-reviewed 2015 restatement

The functional theorem gives the exact algebraic-independence criterion in Section 8.

The adjacent value theorem is same-point and algebraic-independence strength, but assumes ordinary \(0<|\gamma|<1\).

**T9 use:** exact functional algebraic independence; **not** p-adic value lifting.

### 14.3 Xu–Wang 2004

Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930, DOI 10.12386/A2004sxxb0116.

The official journal record confirms the article, pagination, DOI, peer-reviewed venue, and a PDF-sized object. The accessible official page does not expose an inspectable theorem statement, and repeated DOI/title/source searches did not recover a later exact restatement containing all hypotheses.

The following remain unverified from theorem text:

- exact number of functions;
- shared-base requirement;
- exact equations;
- coefficient field;
- same-point allowance;
- rational-unit allowance;
- singularity requirements;
- functional-independence assumptions;
- height/dominance assumptions;
- exact linear versus algebraic-independence conclusion.

**T9 disposition:** directly relevant but **NON-LOAD-BEARING**.

### 14.4 Wang 2006

Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194, DOI 10.1007/s10114-005-0534-4.

The official journal abstract confirms p-adic transcendence results for “some Mahler type functions.” It does not expose enough theorem text to certify a simultaneous same-point theorem.

**T9 disposition:** peer-reviewed and relevant; simultaneous Walsh-product applicability **UNVERIFIED**.

### 14.5 Wang–Xu 2006

Tian Qin Wang and Guang Shan Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” Advances in Mathematics (China) 35 (2006), 463–475.

Bugeaud–Yao explicitly cite this work in their scalar p-adic transcendence step. That citation certifies a narrower single-function use inside Bugeaud–Yao's argument. It does not certify a several-function same-point theorem for the T9 family.

No full source-level theorem statement was recovered to the project's load-bearing standard.

**T9 disposition:** scalar relevance confirmed indirectly; simultaneous T9 application **UNVERIFIED**.

### 14.6 Flicker 1979

Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” Journal of the Australian Mathematical Society, Series A 27 (1979), 173–188, DOI 10.1017/S144678870001209X.

The original theorem text was re-audited.

Flicker's ambient setup genuinely allows a completion \(K_{\mathfrak p}\) of a number field, including nonarchimedean completions. Several functions are allowed.

However the theorem is not a turnkey stationary diagonal theorem. It uses a sequence of transformations, convergence to limiting functions, functional algebraic independence of those limiting functions, transformation growth, invariant domains and boundedness, direction/dominance conditions, and in its nonarchimedean mechanism valuation separation data.

Flicker also explicitly notes a p-adic limitation arising from the discrete rank-one value group in a multi-function application.

The T9 normalized products satisfy
\[
v_2(P_i(W))=0
\]
for every \(i\), so T8 supplies no distinct valuation hierarchy of the type used in Flicker's dominance argument. More fundamentally, T9 does not establish the required sequence-of-systems/limiting-function/direction package.

**T9 disposition:** genuine p-adic algebraic-independence machinery; **DOES NOT APPLY** to the exact stationary Walsh family on the verified hypotheses.

### 14.7 Bundschuh–Nishioka 2004

Peter Bundschuh and Kumiko Nishioka, “Algebraic independence over \(\mathbb Q_p\),” Journal de Théorie des Nombres de Bordeaux 16 (2004), DOI 10.5802/jtnb.458.

This is a genuine p-adic algebraic-independence theorem, but for special sparse series
\[
\sum_n\zeta(n)x^{e(n)}
\]
with linear-recurrence exponents and roots-of-unity coefficients.

**T9 disposition:** wrong function family.

### 14.8 Väänänen–Wallisser and related p-adic linear-independence work

Väänänen and Wallisser proved p-adic linear-independence measures for special \(q\)-difference/Tschakaloff-type functions. Their transformations are of \(q\)-difference/Poincaré type, such as multiplication of the argument by a fixed rational \(q\), not the stationary Mahler power substitution
\[
z\mapsto z^k.
\]

**T9 disposition:** genuine p-adic linear-independence literature, but wrong functional-equation class.

### 14.9 Nesterenko / Molchanov–Yanchenko historical lead

Nesterenko's peer-reviewed 1987 survey records a p-adic algebraic-independence estimate of Molchanov and Yanchenko for two function values. The cited item is a 1983 conference proceeding/abstract rather than a recovered theorem statement sufficient for hypothesis checking.

The multi-function Mahler theorem displayed in Nesterenko's survey itself uses ordinary \(0<|\alpha|<1\).

**T9 disposition:** historical lead only; non-load-bearing.

### 14.10 Modern Adamczewski–Faverjon lifting

Modern characteristic-zero Mahler lifting theorems audited in T7–T9 are formulated for complex analytic values at algebraic points with ordinary \(|\alpha|<1\). The use of p-adic ingredients inside some proofs does not turn their conclusion into a p-adic specialization theorem.

**T9 disposition:** wrong completion for the required value.

### 14.11 Other peer-reviewed Mahler-value work

Bundschuh–Väänänen, Väänänen–Wu, and related papers give strong same-point conclusions for special Mahler functions in the usual complex unit disk. Goto–Tanaka gives strong analogues in positive-characteristic function fields. Neither supplies the required characteristic-zero 2-adic lifting theorem.

**T9 disposition:** comparison only.

## 15. Theorem-hypothesis matrix

| Source | Functions | Transformation | Completion/value domain | Same-point several values | Functional independence lifts? | Rational non-torsion unit verified? | T9 applicability |
|---|---:|---|---|---|---|---|---|
| Bugeaud–Yao 2017 | 1 | \(z\mapsto z^k\), first order | p-adic | no simultaneous theorem | individual transcendence only | **YES**, explicitly for its theorem | individual components only |
| Kubota / Kaneko et al. 2015 Lemma 2.1 | several | \(z\mapsto z^k\), first order | functional field | N/A | exact functional algebraic-independence criterion | N/A | **YES functionally** |
| Kubota/Nishioka value lemma restated in 2015 | several | \(z\mapsto z^k\) | ordinary complex unit disk | **YES** | **YES**, algebraic independence | p-adic question N/A | NO, wrong completion |
| Xu–Wang 2004 | several suggested by title | Mahler type | p-adic subject confirmed | theorem text not recovered | theorem text not recovered | not recovered | UNVERIFIED |
| Wang 2006 | “some” Mahler functions | Mahler type | p-adic | not recovered | not recovered | not recovered | UNVERIFIED |
| Wang–Xu 2006 | Mahler-type algebraic functional equations | Mahler type | p-adic | not recovered | scalar use cited by Bugeaud–Yao | not recovered generally | UNVERIFIED simultaneously |
| Flicker 1979 | several | general transformation sequence | arbitrary completion, including p-adic | possible in framework | YES under full dominance package | no T6-style blanket rule verified | NO application verified |
| Bundschuh–Nishioka 2004 | special sparse series | recurrence-exponent series | p-adic | several qualifying values | special-family theorem | theorem-specific | wrong family |
| Väänänen–Wallisser 1991 | special \(q\)-functions | \(q\)-difference/Poincaré | p-adic | theorem-specific | special quantitative result | theorem-specific | wrong transformation |
| Adamczewski–Faverjon | several | Mahler systems | complex value theorems audited | YES | YES in complex setting | p-adic question N/A | wrong completion |
| Goto–Tanaka 2018 | several | Mahler type | positive-characteristic function fields | YES | YES in its setting | N/A | wrong characteristic |

No row supplies the full T9 bridge.

## 16. Linear independence first: exact minimum requirement

For the unreduced additive Collatz output, the minimum sufficient value theorem would be:

> If
> \[
> 1,P_1(z),\ldots,P_t(z)
> \]
> are linearly independent over \(\overline{\mathbb Q}(z)\), then at the regular algebraic 2-adic point \(W\),
> \[
> 1,P_1(W),\ldots,P_t(W)
> \]
> are linearly independent over \(\overline{\mathbb Q}\).

Functional algebraic independence from Theorem T9.3 is stronger than the functional hypothesis needed for such a linear lifting theorem.

However, when a nontrivial multiplicative relation is used to eliminate a component, the original additive Fourier expression can become a Laurent-polynomial or algebraic expression in a smaller functional basis. In that situation mere linear independence of basis values may no longer exclude rationality of the rewritten Collatz output.

Therefore:

- **linear value independence** is the minimal theorem for a genuinely linearly presented independent family;
- **algebraic value independence** is the clean theorem that survives arbitrary exact multiplicative-relation preprocessing.

T9 found neither in the p-adic completion for the exact family.

## 17. No p-adic Siegel–Shidlovskii-style lifting theorem recovered

T9 explicitly searched for a p-adic Mahler analogue of a lifting principle saying that algebraic linear or polynomial relations among specialized values arise from functional relations.

No peer-reviewed theorem was recovered whose checked hypotheses give that statement for:

- characteristic zero;
- the nonarchimedean 2-adic completion;
- several stationary first-order \(k\)-Mahler functions;
- one common algebraic point \(W\);
- the rational non-torsion unit \(3^{-k}\);
- the T8 regular orbit.

This is an evidence-based source audit, not a claim that no such theorem can exist anywhere in the literature.

## 18. p-adic logarithms do not bridge multiplicative to additive independence

T8 gives
\[
P_i(W)\in1+4\mathbb Z_2,
\]
so
\[
\log P_i(W)
=
\sum_{j\ge0}\log S_i(W^{k^j})
\]
is valid.

This does not solve T9.

Standard p-adic Baker/Brumer-type logarithm theorems concern finite linear forms in logarithms of algebraic numbers. The values \(P_i(W)\) are precisely the potentially transcendental infinite products under study, and the displayed logarithm is an infinite sum.

Even a theorem proving linear independence of these logarithms would address multiplicative independence of the specialized products. The Collatz obstruction is additive:
\[
q_0+\sum_i q_iP_i(W)=0.
\]

No verified theorem converts the former into the latter.

No complex logarithm is used.

## 19. Symmetric powers, exterior powers, and matrix embedding

The normalized family can be written as the diagonal Mahler system
\[
\mathbf P(z)
=
\operatorname{diag}(S_1(z),\ldots,S_t(z))
\mathbf P(z^k).
\]

One may adjoin the constant function \(1\), and symmetric or exterior powers encode products and minors.

This gives no new p-adic arithmetic theorem. The determinant and orbit singularities are already completely controlled by T8. Turning the scalar equations into a larger matrix system does not supply a functional-to-value lifting principle.

## 20. Collatz-specific weighted no-cancellation audit

After rational components are separated, the exact output has the form
\[
F_0(W)
=
\frac1{|G|}
\left[
\frac{\widehat C_1}{1-W}
+
\sum_{\chi\in\mathcal I}
\widehat C_\chi P_\chi(W)
+
\text{any alternating rational component}
\right].
\tag{16}
\]

The weights and cocycles are coupled through the same exact substitution, but in different ways.

The cocycle
\[
S_\chi(z)=\sum_r\chi(\varepsilon_r)z^r
\]
depends only on the digit translations.

The coefficient
\[
\widehat C_\chi
=
\sum_{j=1}^{k-1}
3^{k-1-j}
\sum_a\chi(a)2^{A_{a,j}}
\]
depends on the chronological Collatz prefix exponents \(A_{a,j}\).

T9 checked the available universal identities:

- Fourier orthogonality and inversion;
- the trivial and possible alternating rational components;
- \(\widehat C_\chi\equiv0\pmod2\) for nontrivial characters;
- exact component valuations;
- balance:
  \[
  \widehat v_\chi S_\chi(1)=0;
  \]
- determinant factorization;
- character multiplication;
- the chronological-prefix formula for \(\widehat C_\chi\).

No symbolic identity derived from these forces (16) outside \(\mathbb Q\).

In particular:

- evenness of nontrivial \(\widehat C_\chi\) gives only finite 2-adic congruence information;
- exact component valuations do not exclude a rational sum;
- \(S_\chi(1)\) does not determine \(\widehat C_\chi\);
- no universal derivative/value identity between \(S_\chi\) and \(\widehat C_\chi\) was obtained;
- no Vandermonde or triangular determinant in the Collatz weights was derived.

Thus no Collatz-specific weighted no-cancellation theorem is proved.

## 21. Consequences for the residual recursive class

T9 rules out no new genuinely multi-character higher-rank automatic class.

The one-dimensional residual case remains covered by T6/Bugeaud–Yao when only one genuinely nonrational first-order component survives.

For the genuine \(t\ge2\) remainder,
\[
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
\]
is **not** newly proved.

The residual primitive constant-length class is nevertheless reduced more sharply:

1. the true quotient is \(G=E/K_C\);
2. zero support is exact;
3. rational character projections are exactly trivial/alternating;
4. duplicate \(S_\chi\) are impossible after quotienting;
5. rational-function and multiplicative functional relations reduce exactly to Mahler coboundaries;
6. Kubota converts absence of such relations into full functional algebraic independence;
7. the complete p-adic orbit is nonsingular;
8. the remaining obstruction is the missing p-adic functional-to-value lift or a Collatz-specific additive substitute.

For the generic balanced automatic remainder, the rational-anchor problem therefore still lies inside the restricted Lagarias Periodicity-Conjecture boundary identified in T5.

## 22. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base has been proved for the same relevant sequence.

The factors \(2\) and \(3\) in the Collatz arithmetic do not supply Cobham's symbolic hypothesis by themselves.

**Applicable in T9:** NO.

### López–Stoll

T9 does not repair the real/2-adic completion transfer or prescribed-parity/actual-parity issue identified in T3.

**Load-bearing in T9:** NO.

## 23. Positive branch

T9 finds no genuinely higher-rank nonperiodic system with
\[
H\in\mathbb Q\cap\mathbb Z_2.
\]

Therefore there is no new rational value to test for ordinary integrality, positivity, or exact valuation-word compatibility.

The hostile certification protocol is not triggered.

No explicit anchored aperiodic word, candidate, unbounded orbit, or counterexample was found or claimed.

## 24. Compute and promotion decision

No theorem-derived scientific workload is established.

- New scientific starts: **NOT JUSTIFIED**.
- Candidate trajectories: **NOT JUSTIFIED**.
- Substitution enumeration: **NOT JUSTIFIED**.
- Finite residue/carry/exponent-code search: **NOT JUSTIFIED**.
- New generator/distribution: **NOT JUSTIFIED**.
- CPU/GPU/cloud/distributed scaling: **NOT JUSTIFIED**.
- docs/COMPUTE_BUDGET.md: **UNCHANGED**.
- docs/METRIC_CATALOG.md: **UNCHANGED**.

The bottleneck remains theorem-level arithmetic, not finite computation.

## 25. Exact missing theorem

T9 can now state the missing bridge more sharply.

### Desired p-adic diagonal Mahler lifting theorem

Let \(K\) be a number field, \(v\) a nonarchimedean place, \(k\ge2\), and let
\[
P_i(z)\in K[[z]]
\]
converge for \(|z|_v<1\) and satisfy
\[
P_i(z)=S_i(z)P_i(z^k),
\qquad
S_i(z)\in K(z)^\times.
\]

Let \(\alpha\in\overline K\) satisfy
\[
0<|\alpha|_v<1
\]
and assume
\[
S_i(\alpha^{k^j})\notin\{0,\infty\}
\]
for all \(i,j\).

Assume the cocycle classes are multiplicatively independent modulo
\[
\left\{
\frac{R(z)}{R(z^k)}:R\in\overline K(z)^\times
\right\},
\]
equivalently, by Kubota in the first-order class, that the \(P_i\) are functionally algebraically independent.

The desired conclusion is
\[
P_1(\alpha),\ldots,P_t(\alpha)
\]
algebraically independent over \(\overline K\), or at minimum
\[
1,P_1(\alpha),\ldots,P_t(\alpha)
\]
linearly independent over \(\overline K\).

For the exact Collatz specialization:
\[
K=\mathbb Q,
\qquad
v=v_2,
\qquad
\alpha=W=\frac{2^B}{3^k},
\]
and the theorem must allow the rational non-torsion unit \(3^{-k}\).

T8 has already supplied the complete nonsingularity hypothesis.

This is the completion-correct p-adic analogue of the archimedean first-order Mahler lifting statement actually needed by the higher-rank Walsh system.

A weaker theorem that excludes only the exact weighted relation (16) would also suffice.

## 26. Exact next theorem-sized obligation

The next theorem-sized obligation is:

> Prove the p-adic diagonal Mahler lifting theorem in Section 25, or recover a peer-reviewed theorem whose complete source-level hypotheses imply it for the exact T9 family. If that is impossible, derive a Collatz-specific additive theorem that excludes the exact weighted Fourier relation (16) without assuming generic simultaneous value independence.

The first subproblem should be linear-value lifting, because it is the minimum requirement before multiplicative-relation elimination complicates the Collatz output. The second subproblem is to determine whether known p-adic zero-estimate/Padé machinery behind Xu–Wang/Wang can actually be specialized to several stationary first-order functions at one rational S-unit point.

No compute campaign follows from this obligation.

## 27. Deliverable checklist

- **Exact theorem proved or failed:** functional preprocessing is sharpened by Theorems T9.1–T9.3; same-point p-adic value independence is not proved.
- **Exact reduced class:** balanced elementary-2-group translation substitutions reduced to \(G=E/K_C\).
- **Exact true kernel dimension:** \(m=|E/K_C|\).
- **Exact Fourier support:** \(\mathcal S_C=\{\chi:\widehat C_\chi\ne0\}\).
- **Every surviving normalized product:** equation (15), indexed exactly by the genuinely nonrational support \(\mathcal I\), with multiplicative relation lattice \(\Lambda\).
- **Every zero component removed:** exactly \(\widehat C_\chi=0\).
- **Every rational component removed:** trivial character plus the unique possible odd-\(k\) alternating character.
- **Duplicate components:** no duplicate \(S_\chi\) after exact quotienting.
- **Rational-function multiples:** exactly characterized by pairwise coboundaries (7).
- **Rational Mahler-coboundary relations:** exactly characterized by \(\Lambda\) and divisor equation (12).
- **Functional linear independence:** follows on any cocycle-independent subfamily.
- **Functional multiplicative independence:** exactly \(\Lambda=\{0\}\) for the full retained family.
- **Functional algebraic independence:** exactly \(\Lambda=\{0\}\), by Kubota.
- **Exact coefficient field:** \(\mathbb Q(z)\), with \(S_i\in\mathbb Z[z]\).
- **Mahler base:** \(k\).
- **Exact 2-adic point:** \(W=2^B/3^k\).
- **Singularity status:** fully regular at every \(W^{k^j}\), inherited from T8.
- **Rational-unit status:** \(3^{-k}\) is rational, 2-adic unit, non-torsion; explicitly permitted by Bugeaud–Yao only inside its verified scalar theorem.
- **External p-adic independence theorems audited:** Section 14.
- **Several functions at same point:** verified in archimedean Kubota/Nishioka lifting, not verified p-adically for T9.
- **Linear or algebraic value independence:** neither proved p-adically for the T9 family.
- **Functional independence lifts to p-adic value independence:** NOT VERIFIED.
- **Xu–Wang 2004 applies:** NOT VERIFIED.
- **Wang 2006 applies:** NOT VERIFIED.
- **Wang–Xu 2006 applies:** NOT VERIFIED for simultaneous T9 use.
- **Flicker applies:** NO application verified; the stationary family does not satisfy the established dominance/limit package.
- **Any other peer-reviewed p-adic theorem applies:** none recovered for the exact simultaneous family.
- **Separate transcendence available:** YES, component-by-component through Bugeaud–Yao where nonrationality holds.
- **Same-point rational cancellation excluded:** NO.
- **Collatz-specific weighted no-cancellation identity:** NO.
- **New genuinely higher-rank automatic class ruled out:** NO.
- **Bounded \(R_m\) implies periodicity for a new class:** NO.
- **Residual primitive constant-length class further reduced:** YES functionally, not arithmetically.
- **Remaining problem still a restricted Periodicity-Conjecture problem:** YES for the generic balanced automatic remainder.
- **Cobham applicable:** NO.
- **López–Stoll load-bearing:** NO.
- **Explicit anchored aperiodic word:** NONE.
- **Candidate or unbounded orbit found:** NO.
- **Counterexample claimed:** NO.
- **Future compute justified:** NO.
- **Exact next theorem-sized obligation:** Section 26.

## 28. Source ledger

1. K. K. Kubota, “On the algebraic independence of holomorphic solutions of certain functional equations and their values,” Mathematische Annalen 227 (1977), 9–50, DOI 10.1007/BF01360961.
2. Hajime Kaneko, Takeshi Kurosawa, Yohei Tachiya, Taka-aki Tanaka, “Explicit algebraic dependence formulae for infinite products related with Fibonacci and Lucas numbers,” Acta Arithmetica 168 (2015), 161–186, DOI 10.4064/aa168-2-5.
3. Yann Bugeaud and Jia-Yan Yao, “Hankel determinants, Padé approximations, and irrationality exponents for p-adic numbers,” Annali di Matematica Pura ed Applicata 196 (2017), 929–946, DOI 10.1007/s10231-016-0602-7.
4. Yuval Z. Flicker, “Algebraic independence by a method of Mahler,” Journal of the Australian Mathematical Society, Series A 27 (1979), 173–188, DOI 10.1017/S144678870001209X.
5. Guang Shan Xu and Tian Qin Wang, “p-adic Measures for Algebraic Independence of the Values of Mahler Type Functions,” Acta Mathematica Sinica, Chinese Series 47 (2004), 921–930, DOI 10.12386/A2004sxxb0116.
6. Tian Qin Wang, “p-adic Transcendence and p-adic Transcendence Measures for the Values of Mahler Type Functions,” Acta Mathematica Sinica, English Series 22 (2006), 187–194, DOI 10.1007/s10114-005-0534-4.
7. Tian Qin Wang and Guang Shan Xu, “p-adic transcendence measures for the values of functions satisfying algebraic functional equation of Mahler type,” Advances in Mathematics (China) 35 (2006), 463–475.
8. Peter Bundschuh and Kumiko Nishioka, “Algebraic independence over \(\mathbb Q_p\),” Journal de Théorie des Nombres de Bordeaux 16 (2004), DOI 10.5802/jtnb.458.
9. Keijo Väänänen and Rolf Wallisser, “A linear independence measure for certain p-adic numbers,” Journal of Number Theory 39 (1991), 225–236, DOI 10.1016/0022-314X(91)90045-D.
10. Yu. V. Nesterenko, “Measures of algebraic independence of numbers and functions,” Astérisque 147–148 (1987), 141–149.
11. Boris Adamczewski and Colin Faverjon, “A new proof of Nishioka's theorem in Mahler's method,” Comptes Rendus Mathématique 361 (2023), 1011–1028, DOI 10.5802/crmath.458.
12. Frédéric Chyzak, Thomas Dreyfus, Philippe Dumas, Marc Mezzarobba, “First-order factors of linear Mahler operators,” Journal of Symbolic Computation 130 (2025), article 102424, DOI 10.1016/j.jsc.2025.102424.
13. Aihua Fan and Jakub Konieczny, “On uniformity of q-multiplicative sequences,” Bulletin of the London Mathematical Society 51 (2019), 466–488, DOI 10.1112/blms.12245.
14. Peter Bundschuh and Keijo Väänänen, “Algebraic independence of certain Mahler functions and of their values,” Journal of the Australian Mathematical Society 98 (2015), 289–310, DOI 10.1017/S1446788714000524.
15. Keijo Väänänen and Wen Wu, “On linear independence measures of the values of Mahler functions,” Proceedings of the Royal Society of Edinburgh Section A 148 (2018), 1297–1311, DOI 10.1017/S0308210518000148.
16. Akinari Goto and Taka-aki Tanaka, “Algebraic independence of the values of functions satisfying Mahler type functional equations under the transformation represented by a power relatively prime to the characteristic of the base field,” Journal of Number Theory 184 (2018), 384–410, DOI 10.1016/j.jnt.2017.08.026.

## 29. Permanent lesson

T9 separates the higher-rank problem into two layers that should no longer be conflated.

The **functional layer is now essentially exact** for the first-order Walsh products: after true quotient reduction, rational projected characters are explicitly classified, duplicate cocycles disappear, rational quotients and multiplicative relations are exactly Mahler coboundaries, and Kubota turns coboundary independence into full functional algebraic independence.

The **arithmetic specialization layer remains open** in the required completion. T8 has already made the Collatz 2-adic orbit completely regular, so the missing object is no longer a vague “Mahler theorem.” It is a same-point nonarchimedean lifting theorem for a finite algebraically independent family of stationary first-order products at a rational S-unit point.

Until that theorem, or an exact Collatz-specific additive substitute, is supplied, functional algebraic independence and separate p-adic transcendence do not exclude rational cancellation in the higher-rank Collatz anchor.

D — no qualifying theorem found
