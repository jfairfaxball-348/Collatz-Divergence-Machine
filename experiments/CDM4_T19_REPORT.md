# CDM4-T19 — Nonprimitive real-contraction / positive-anchor completion audit

**Date:** 2026-10-03  
**Authoritative input commit:** f4d34b7d78f9c0d43d078e73593324921e84a42d  
**Session type:** theorem / exact nonprimitive Frobenius / completion audit only

Scientific Collatz starts generated: **0**  
Scientific trajectories executed: **0**  
Substitution enumeration: **NONE**  
Finite residue / carry / exponent-code optimization: **NONE**  
CPU / GPU / cloud / distributed scientific work: **NONE**  
Explicit anchored aperiodic word found: **NO**  
Unbounded orbit found: **NO**  
Counterexample claimed: **NO**

## 1. Executive result

T19 closes the ordinary-real completion gap for every genuinely aperiodic **nonprimitive T18-admissible \(k\)-uniform substitution system**.

The central correction is that T14's primitive coordinatewise contraction theorem is stronger than the T18 completion-sign argument actually needs.

For the exact canonical scalar
\[
S(x)=\sum_tF_t(x)=\sum_{n\ge0}x^{c(n)}
\]
and the exact Collatz point
\[
q_s=\frac{2^{v(s)}}3,
\]
write
\[
A_n=\sum_{i=0}^{n-1}v(u_i),
\qquad
\lambda=\log_2 3.
\]
Then
\[
S(q)=\sum_{n\ge0}\frac{2^{A_n}}{3^n}.
\]

Because a coding of a fixed point of a \(k\)-uniform substitution is \(k\)-automatic, the T3/Bell theorem applies directly to the finite-valued valuation word. If a genuinely aperiodic such word were realized by an ordinary positive integer Collatz anchor, T3 gives
\[
\limsup_{n\to\infty}\frac{A_n}{n}\le\lambda,
\]
while Bell gives
\[
\beta:=\limsup_{n\to\infty}\frac{A_n}{n}\in\mathbb Q.
\]
Since \(\lambda=\log_2 3\notin\mathbb Q\),
\[
\boxed{\beta<\lambda.}
\]

Hence there are \(\varepsilon>0\) and \(N_0\) such that
\[
A_n\le(\lambda-\varepsilon)n
\qquad(n\ge N_0).
\]
Therefore
\[
\boxed{
S^{(\infty)}(q)
=
\sum_{n\ge0}\frac{2^{A_n}}{3^n}
<\infty
}
\]
in the ordinary real completion, and every term is positive.

More importantly, for every \(J\ge0\),
\[
\boxed{
S(\tau^J(q))
=
\sum_{n\ge0}
\frac{2^{A_{nk^J}}}{3^{nk^J}}.
}
\]
This is an exact fixed-point identity:
\[
v^TM^Jc(n)=A_{nk^J}.
\]
Thus every canonical state series converges absolutely at every actual real monomial-orbit point used by T18, even if one or more individual coordinates
\[
q_{J,s}=\frac{2^{B_J(s)}}{3^{k^J}}
\]
are greater than \(1\).

That observation is the missing T19 bridge. The completion-sign proof needs convergence of the canonical scalar and the finitely many canonical state subseries at the actual algebraic tail point; it does **not** require the entire point to lie in an ordinary real unit polydisc.

T19 also completes the requested nonprimitive Frobenius audit.

Let \(M\) be the nonnegative incidence matrix in the column convention
\[
\mathbf1^TM=k\mathbf1^T.
\]
After exact reachable/output minimization, put the directed graph into Frobenius form.

For every strongly connected diagonal block \(M_C\):

- \(C\) is final/sink if and only if
  \[
  \rho(M_C)=k;
  \]
- every nonfinal component satisfies
  \[
  \rho(M_C)<k;
  \]
- therefore no chain of distinct \(k\)-spectral blocks is possible;
- consequently no canonical nonnegative Parikh coordinate can contain a term
  \[
  j^e k^j,\qquad e>0.
  \]

Equal-radius chains can occur below \(k\), producing terms \(j^e\rho^j\) with \(\rho<k\), but these are \(o(k^j)\).

After scaling
\[
P=\frac1kM,
\]
the matrix is column-stochastic. Its final strongly connected components are exactly the recurrent classes of this finite Markov chain. If \(D\) is the least common multiple of their graph periods, then for every reachable state \(s\) there are rational numbers
\[
b_{s,0},\ldots,b_{s,D-1}\in\mathbb Q
\]
such that
\[
\boxed{
B_j(s)
=
k^j b_{s,j\bmod D}
+
O(j^E\rho_*^j)
}
\]
for some \(E\ge0\) and \(\rho_*<k\).

Thus imprimitive modulation is exactly periodic at the \(k^j\) scale, and every limiting valuation mean is rational. Since \(\log_2 3\) is irrational, a recurrent or transient state cannot be asymptotically critical in the sense
\[
B_j(s)=k^j\log_2 3+o(k^j)
\]
along any fixed residue class.

The exact coordinatewise real-contraction criterion is
\[
\max_{0\le r<D}b_{s,r}<\log_2 3
\]
for each coordinate \(s\) one insists on placing in the real unit region. T19 does **not** infer this condition from the positive anchor for every state. It is unnecessary.

A simple exact nonprimitive uniform system illustrates why coordinatewise contraction is strictly stronger than scalar contraction:
\[
\sigma(a)=abc,\qquad
\sigma(b)=bbb,\qquad
\sigma(c)=ccc,
\]
with
\[
v(a)=v(b)=1,\qquad v(c)=2.
\]
Then
\[
\frac{B_j(a)}{3^j}\to\frac32<\log_2 3,
\]
but
\[
\frac{B_j(c)}{3^j}=2>\log_2 3.
\]
So an intrinsically subcritical root scalar can coexist with a supercritical recurrent coordinate. This is a structural illustration only; it is not an anchored Collatz word and is not a candidate.

Once the global scalar convergence theorem is used instead, the already-closed T18 machinery applies without modification:

1. transport the exact 2-adic positive-anchor relation to a deep reduced regular tail;
2. retain \(G_{Y,1}=S|_Y\);
3. append \(1\);
4. use T18 exact mixed-place lifting;
5. preserve
   \[
   Q(\alpha,\mathbf X)=P(\mathbf X);
   \]
6. evaluate the algebraic functional identity in the ordinary real completion at the same algebraic tail point, where all canonical state series now converge absolutely;
7. use exact scalar reconstruction;
8. obtain
   \[
   S^{(\infty)}(q)+3N=0;
   \]
9. contradict
   \[
   S^{(\infty)}(q)>0,\qquad N>0.
   \]

Therefore
\[
\boxed{
\text{every genuinely aperiodic nonprimitive T18-admissible system has }
H\notin\mathbb Z_{>0}.
}
\]

Together with T18, primitivity is no longer needed for the positive-integer conclusion inside the complete T18 stable-orbit-closure framework.

Under T2's inherited finite-alphabet anchoring hypotheses,
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
throughout the newly closed nonprimitive class.

The positive-rational boundary remains unchanged in principle. T19's strict real gap is derived from a **realized positive integer orbit**, so it does not automatically exclude an abstract positive rational noninteger inverse value. If
\[
\limsup A_n/n<\log_2 3
\]
is independently known for the recursive system, the same exact T18 lifting/sign argument excludes every
\[
H\in\mathbb Q_{>0}.
\]
Negative rational values remain unexcluded and are not Collatz counterexamples.

No scientific compute is justified.

## 2. Authority and exact T18 state inherited

T19 read the required governance files, T1–T18 reports, and the T3 manifest/symbolic fixture before mathematical work. The repository state at the commit named above is authoritative.

T19 treats the following T18 conclusions as closed.

For the T15 stable image,
\[
L=\ker_{\mathbb Z}(M^{J_0}),
\qquad
N=\mathbb Z^m/L,
\]
the exact stable Collatz orbit is an \(S\)-unit orbit in a finitely generated multiplicative group.

After passage to a suitable arithmetic progression of minimal orbit-closure dimension, Laurent plus Bell-Ghioca-Tucker produce an irreducible coset
\[
Y=tH
\]
with dense selected orbit.

For the progression power \(R\), translation gives
\[
\rho(h)=c\,\Psi_H(h),
\]
where \(\Psi_H\) is an isogeny. Thus \(\rho\) is finite, dominant and étale.

The complete relation lattice is
\[
R_Y=H^\perp,
\qquad
N_Y=N/R_Y.
\]

The canonical reduced positive semigroup is
\[
\Gamma_Y=\pi_Y(\mathbb N^m),
\]
with exact weight
\[
w_Y(\pi_Y(a))=\mathbf1^Ta,
\qquad
w_Y(A_Y^n\gamma)=k^{Rn}w_Y(\gamma).
\]

The reduced tail tends 2-adically to the torus-fixed boundary point
\[
o_Y\in\operatorname{Spec}K[\Gamma_Y].
\]

Canonical restriction precedes rational-linear minimalization, and the new basis may retain
\[
G_{Y,1}=S|_Y.
\]
All newly introduced denominators are nonzero rational functions on \(H\), and dense étale dynamics gives a complete regular tail.

T18's dense-coset toric zero theorem and exact mixed-place lifting theorem then give
\[
P(\mathbf f(\alpha))=0
\Longrightarrow
Q(h,\mathbf f(h))=0,
\qquad
Q(\alpha,\mathbf X)=P(\mathbf X).
\]

Appending \(1\) remains harmless.

None of those algebraic conclusions uses primitivity. The only T18 primitive input was the ordinary-real convergence step. T19 attacks exactly that input.

## 3. Exact nonprimitive incidence graph

Let
\[
\sigma:\Lambda\to\Lambda^k
\]
be the inherited reachable/output-minimized \(k\)-uniform substitution, prolongable on \(a_0\), with fixed point
\[
u=\sigma^\infty(a_0).
\]

Let
\[
M_{t,s}=\#\{r:\sigma(s)_r=t\}.
\]
The graph orientation is
\[
s\longrightarrow t
\quad\Longleftrightarrow\quad
M_{t,s}>0.
\]

Every column has sum \(k\):
\[
\boxed{\mathbf1^TM=k\mathbf1^T.}
\]

The state set is already reachable from \(a_0\). Thus every strongly connected component discussed below is algebraically reachable; no formal unreachable component survives T14 minimization.

Order the strongly connected components in reverse topological order so that every intercomponent edge points weakly upward in the matrix. Then
\[
M=
\begin{pmatrix}
M_{C_1}&*&*&\cdots&*\\
0&M_{C_2}&*&\cdots&*\\
\vdots&&\ddots&&\vdots\\
0&\cdots&0&M_{C_r}
\end{pmatrix}.
\]
This is an exact Frobenius block upper-triangular form in the present column-source convention.

A component is:

- **final/recurrent** if it has no edge to a different component;
- **transient** if it is nonfinal;
- **primitive recurrent** if its irreducible diagonal block has graph period \(1\);
- **imprimitive recurrent** if its graph period is \(d_C>1\).

A singleton with no self-loop has zero diagonal block and is transient.

This graph-theoretic notion of nonprimitivity is not identified with reducibility alone. An irreducible block can itself be imprimitive.

## 4. Uniformity determines the \(k\)-spectral blocks

### Theorem T19.1 — final components are exactly the \(k\)-spectral components

For every strongly connected component \(C\),
\[
\boxed{
\rho(M_C)=k
\iff
C\text{ is final}.
}
\]

Every nonfinal component has
\[
\boxed{\rho(M_C)<k.}
\]

### Proof

For every column of \(M_C\), the sum of entries inside \(C\) is at most \(k\).

If \(C\) is final, every descendant of a state in \(C\) remains in \(C\), so every column sum of \(M_C\) is exactly \(k\). Therefore
\[
\mathbf1_C^TM_C=k\mathbf1_C^T,
\]
and
\[
\rho(M_C)=k.
\]

Now let \(C\) be nonfinal and irreducible. At least one column has an outgoing edge from \(C\), so at least one internal column sum is strictly less than \(k\).

Let \(r_C>0\) be a Perron right eigenvector:
\[
M_Cr_C=\rho(M_C)r_C.
\]
Then
\[
\rho(M_C)\mathbf1_C^Tr_C
=
\mathbf1_C^TM_Cr_C
<
k\mathbf1_C^Tr_C,
\]
because all coordinates of \(r_C\) are positive and at least one column deficit is strict. Hence
\[
\rho(M_C)<k.
\]

The acyclic singleton case has \(\rho=0<k\). QED.

### Consequences

1. Every final recurrent block has exact spectral radius \(k\).
2. Every transient block has exact spectral radius strictly below \(k\).
3. A final block has no outgoing edge, so two distinct \(k\)-spectral blocks can never lie in one directed block chain.
4. Therefore reducibility cannot produce a polynomial factor
   \[
   j^e k^j,\qquad e>0,
   \]
   in the canonical nonnegative Parikh dynamics.

Equal-radius chains are possible only at radii
\[
\rho<k.
\]

## 5. Chains of equal subcritical spectral radius

General block-triangular matrix powers contain convolution sums between diagonal blocks.

If a directed block chain
\[
C_0\to C_1\to\cdots\to C_e
\]
contains \(e+1\) blocks with a common spectral radius \(\rho\), repeated convolution can produce a factor
\[
j^e\rho^j.
\]

T19 does not rule this out when
\[
\rho<k.
\]

Likewise, nonperipheral Jordan blocks inside transient or subdominant spectral subspaces may produce polynomial factors multiplying eigenvalue powers.

Uniformity supplies the decisive normalization:
\[
j^e\rho^j=o(k^j)
\qquad(\rho<k).
\]

Thus polynomial corrections can survive in transient/subleading canonical coordinates, but never at the leading \(k^j\) scale.

The same distinction must be kept after rational or signed coordinate changes. Signed reduced coordinates may display cancellation patterns or Jordan expressions that obscure positivity, but they cannot create a new canonical \(j^ek^j\) mass term that was absent from the nonnegative Parikh system.

## 6. Actual fixed-point occurrence structure

The exact fixed point begins with the nested substitution prefixes
\[
\sigma^j(a_0)=u_0u_1\cdots u_{k^j-1}.
\]

Hence
\[
\boxed{
M^je_{a_0}
}
\]
is exactly the Parikh vector of the length-\(k^j\) prefix.

For a component \(C\), define
\[
N_C(j)=\mathbf1_C^TM^je_{a_0}.
\]

Then \(N_C(j)\) is the exact number of letters from \(C\) in the prefix of length \(k^j\).

Because the substitution is prolongable, these prefixes are nested. Therefore \(N_C(j)\) is nondecreasing.

This gives the exact finite/infinite occurrence classification:

\[
\boxed{
C\text{ occurs only finitely often in }u
\iff
\sup_jN_C(j)<\infty.
}
\]

Since \(N_C(j)\) is a nondecreasing integer sequence, boundedness is equivalent to eventual constancy.

Likewise,
\[
\boxed{
C\text{ occurs infinitely often}
\iff
N_C(j)\to\infty.
}
\]

For every transient component,
\[
\frac{N_C(j)}{k^j}\to0.
\]
Thus every transient component has zero density along substitution-length prefixes, although it may still occur infinitely often.

Every reachable final component has positive absorption probability from \(a_0\), and consequently positive total asymptotic mass along the appropriate periodic subsequences.

Therefore the dominant \(k^j\)-scale Parikh growth is controlled exactly by the reachable final components. Transient equal-radius chains control only subleading growth.

## 7. Markov normalization and exact block asymptotics

Set
\[
\boxed{
P=\frac1kM.
}
\]
Then
\[
\mathbf1^TP=\mathbf1^T,
\]
so \(P\) is a finite column-stochastic matrix.

Its recurrent classes are exactly the final SCCs from Section 4. All other states are transient in the finite Markov-chain sense.

Let
\[
D=\operatorname{lcm}\{d_C:C\text{ final}\},
\]
where \(d_C\) is the period of the irreducible recurrent class \(C\).

### Theorem T19.2 — exact nonprimitive valuation asymptotics

For every reachable state \(s\) and every residue
\[
0\le r<D,
\]
there is a rational probability vector
\[
\mu_{s,r}\in\mathbb Q_{\ge0}^{|\Lambda|}
\]
such that
\[
\boxed{
P^{Dn+r}e_s\longrightarrow\mu_{s,r}.
}
\]

Moreover there exist \(E\ge0\) and \(0\le\theta<1\), depending only on \(P\), such that
\[
P^je_s
=
\mu_{s,j\bmod D}
+
O(j^E\theta^j).
\]

Define
\[
\boxed{
b_{s,r}=v^T\mu_{s,r}\in\mathbb Q.
}
\]

Then
\[
\boxed{
B_j(s)
=
v^TM^je_s
=
k^j b_{s,j\bmod D}
+
O(j^E\rho_*^j)
}
\]
with
\[
\rho_*=k\theta<k.
\]

### Rationality proof

After taking the \(D\)-th power, every recurrent cyclic class becomes primitive. Its stationary vector is the unique normalized solution of a linear system with rational coefficients, so it is rational.

Absorption probabilities from the transient states solve
\[
(I-Q)x=b
\]
for the rational transient matrix \(Q\). Since \(\rho(Q)<1\),
\[
I-Q
\]
is invertible over \(\mathbb Q\), so those probabilities are rational.

Combining rational absorption probabilities with rational stationary vectors gives
\[
\mu_{s,r}\in\mathbb Q^{|\Lambda|}.
\]

No unproved rational-frequency assumption is used.

### Exact interpretation

For a final primitive component, \(d_C=1\) and there is no periodic modulation inside the class.

For a final imprimitive component, the limiting distribution and valuation mean can depend on
\[
j\bmod d_C.
\]

For a transient starting state, the leading term is a rational convex combination of the reachable recurrent cyclic limits. The transient block itself contributes only the subleading
\[
O(j^E\rho_*^j)
\]
term.

## 8. Recurrent critical components are impossible

A state would be asymptotically critical along a residue class if
\[
B_j(s)
=
\lambda k^j+o(k^j)
\]
there.

By Theorem T19.2, every residue-class limit is
\[
b_{s,r}\in\mathbb Q.
\]

But
\[
\lambda=\log_2 3
\]
is irrational: if \(\lambda=p/q\in\mathbb Q\), then \(2^p=3^q\), contradicting unique factorization.

Therefore
\[
\boxed{
b_{s,r}\ne\log_2 3
}
\]
for every state and residue.

Hence every residue class is strictly one of:

\[
b_{s,r}<\log_2 3,
\]
or
\[
b_{s,r}>\log_2 3.
\]

There is no exact recurrent critical equality and no hidden \(o(k^j)\) critical branch.

This conclusion is intrinsic to the uniform integer substitution and does not require a positive anchor.

## 9. Exact coordinatewise real-contraction criterion

Recall
\[
q_{j,s}
=
\frac{2^{B_j(s)}}{3^{k^j}}
=
2^{B_j(s)-\lambda k^j}.
\]

For a fixed state \(s\), Theorem T19.2 gives, along
\[
j\equiv r\pmod D,
\]
\[
\frac1{k^j}\log_2q_{j,s}
\longrightarrow
b_{s,r}-\lambda.
\]

Therefore:

\[
\boxed{
q_{j,s}\to0
\text{ on every residue class}
\iff
\max_r b_{s,r}<\lambda.
}
\]

Equivalently, \(q_{j,s}<1\) for all sufficiently large \(j\) if and only if
\[
\max_r b_{s,r}<\lambda.
\]

If some \(b_{s,r}>\lambda\), then
\[
q_{j,s}\to+\infty
\]
along that residue subsequence.

For a finite set \(E_{\rm coord}\) of coordinates, a uniform unit-polydisc tail exists exactly when
\[
\max_{s\in E_{\rm coord}}\max_r b_{s,r}<\lambda.
\]
Because the set of rational limits is finite, this condition automatically yields a uniform positive gap
\[
\varepsilon_{\rm coord}>0.
\]

This is the exact nonprimitive replacement for the primitive Perron-Frobenius coordinate criterion.

T19 does not assume this criterion for the positive-anchor contradiction.

## 10. A positive integer anchor gives a global strict gap

Let
\[
a_n=v(u_n),
\qquad
A_n=\sum_{i=0}^{n-1}a_i.
\]

The sequence \((a_n)\) is \(k\)-automatic.

Indeed the fixed point satisfies
\[
u_{kn+r}=\delta_r(u_n),
\]
so a finite automaton reading base-\(k\) digits reaches \(u_n\), and applying the finite coding \(v\) gives \(a_n\).

Assume now that the valuation word is genuinely aperiodic and is realized by an ordinary positive integer Collatz anchor.

T3's distinct-positive-orbit height theorem gives
\[
\limsup_{n\to\infty}\frac{A_n}{n}\le\lambda.
\]

T3 also records Bell's peer-reviewed theorem that the limsup mean of a nonnegative rational-valued automatic sequence is rational. Hence
\[
\beta
=
\limsup_{n\to\infty}\frac{A_n}{n}
\in\mathbb Q.
\]

Because \(\lambda\notin\mathbb Q\),
\[
\boxed{
\beta<\lambda.
}
\]

Choose
\[
0<\varepsilon<\lambda-\beta.
\]
By the definition of limsup there is \(N_0\) such that
\[
\boxed{
A_n\le(\lambda-\varepsilon)n
\qquad(n\ge N_0).
}
\]

This is the exact real-growth conclusion supplied by a hypothetical positive integer anchor in the nonprimitive uniform case.

It is a **global prefix theorem**. T19 does not silently transfer it to every statewise quantity \(B_j(s)\).

For the prolongation state itself,
\[
B_j(a_0)=A_{k^j},
\]
so
\[
\frac{B_j(a_0)}{k^j}\le\lambda-\varepsilon
\]
eventually, and every residue-class limit \(b_{a_0,r}\) is strictly subcritical.

For another state \(s\), no corresponding uniform inequality is inferred.

## 11. Why statewise subcriticality is stronger than necessary

A state \(s\) occurring at a fixed position \(p\) in the fixed point satisfies
\[
\sigma^j(s)
=
u_{pk^j}\cdots u_{(p+1)k^j-1},
\]
so
\[
B_j(s)
=
A_{(p+1)k^j}-A_{pk^j}.
\]

The global upper bound on \(A_n\) does not provide a matching lower bound on
\[
A_{pk^j}
\]
strong enough to force
\[
B_j(s)<\lambda k^j.
\]

Therefore a global positive-anchor growth theorem must not be silently applied component-by-component.

The following exact structural example shows that intrinsic root subcriticality and coordinatewise subcriticality are genuinely different properties.

Take
\[
\sigma(a)=abc,\qquad
\sigma(b)=bbb,\qquad
\sigma(c)=ccc,
\]
with
\[
v(a)=v(b)=1,\qquad v(c)=2.
\]

The incidence matrix has final recurrent blocks \(b\) and \(c\), both of spectral radius \(3\), while \(a\) is transient with spectral radius \(1\).

Exactly,
\[
B_j(b)=3^j,
\qquad
B_j(c)=2\cdot3^j,
\]
and
\[
B_j(a)
=
1+\sum_{h=0}^{j-1}3\cdot3^h
=
\frac{3^{j+1}-1}{2}.
\]

Therefore
\[
\frac{B_j(a)}{3^j}\to\frac32<\log_2 3,
\]
while
\[
\frac{B_j(c)}{3^j}=2>\log_2 3.
\]

So even an aperiodic nonprimitive uniform system with a strictly subcritical root can possess a supercritical final coordinate.

This example is not a Collatz anchor and does not refute a conditional statement by supplying an anchored counterexample. Its role is narrower and exact: it proves that coordinatewise contraction is not an intrinsic consequence of root/scalar subcriticality and therefore must not be inserted as an unproved intermediate lemma.

T19 instead proves that the scalar completion argument never needed that lemma.

## 12. Exact scalar identity on every monomial tail

The canonical scalar is
\[
S(x)=\sum_{n\ge0}x^{c(n)},
\]
where \(c(n)\) is the Parikh vector of the prefix
\[
u_0\cdots u_{n-1}.
\]

At the exact Collatz point,
\[
q^{c(n)}
=
\frac{2^{A_n}}{3^n}.
\]

Now let
\[
q_J=\tau^J(q).
\]
Then
\[
(q_J)_s
=
\frac{2^{B_J(s)}}{3^{k^J}}.
\]

Hence
\[
(q_J)^{c(n)}
=
\frac{
2^{\sum_sc_s(n)B_J(s)}
}{
3^{nk^J}
}.
\]

But
\[
\sum_sc_s(n)B_J(s)
=
v^TM^Jc(n).
\]

Because \(u\) is a fixed point of a \(k\)-uniform substitution,
\[
\sigma^J(u_0\cdots u_{n-1})
=
u_0\cdots u_{nk^J-1}.
\]
Therefore
\[
\boxed{
v^TM^Jc(n)=A_{nk^J}.
}
\]

Thus:

### Theorem T19.3 — exact scalar subsequence identity

For every \(J\ge0\),
\[
\boxed{
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{nk^J}}}{3^{nk^J}}.
}
\]

For each canonical state \(t\),
\[
F_t(q_J)
=
\sum_{\substack{n\ge0\\u_n=t}}
\frac{2^{A_{nk^J}}}{3^{nk^J}},
\]
so
\[
0\le F_t(q_J)\le S(q_J)
\]
in the ordinary real completion whenever the scalar converges.

No sign cancellation is used.

## 13. Weakest real-convergence criterion needed

For a fixed tail depth \(J\), the exact canonical criterion is simply
\[
\boxed{
\sum_{n\ge0}
2^{A_{nk^J}-\lambda nk^J}
<\infty.
}
\]

If this holds, then:

- \(S(q_J)\) converges absolutely;
- every canonical \(F_t(q_J)\) converges absolutely as a positive subseries;
- every finite rational-linear basis reconstructed from the canonical values is defined provided its algebraic denominators are nonzero;
- finite forward transport matrices cause no convergence problem.

This is weaker than
\[
q_{J,s}<1
\quad\text{for every state }s.
\]

A convenient sufficient condition is
\[
\limsup_{n\to\infty}
\frac{A_{nk^J}}{nk^J}
<\lambda.
\]

The positive-anchor theorem of Section 10 gives the stronger global condition
\[
\limsup_{n\to\infty}\frac{A_n}{n}<\lambda,
\]
so the criterion holds simultaneously for every \(J\).

## 14. Positive-anchor real convergence

From Section 10, for \(n\ge N_0\),
\[
A_n-\lambda n\le-\varepsilon n.
\]

Therefore
\[
\frac{2^{A_n}}{3^n}\le2^{-\varepsilon n}.
\]

Hence
\[
\boxed{
S^{(\infty)}(q)<\infty.
}
\]

For every \(J\),
\[
A_{nk^J}-\lambda nk^J
\le
-\varepsilon nk^J
\]
once \(nk^J\ge N_0\). Thus
\[
S^{(\infty)}(q_J)
\le
\text{finite initial part}
+
\sum_{n\ge n_0}2^{-\varepsilon nk^J}
<\infty.
\]

Therefore:

### Theorem T19.4 — nonprimitive scalar real-convergence theorem

If a genuinely aperiodic finite-valued \(k\)-automatic valuation word arising from the exact uniform-substitution setup has an ordinary positive integer Collatz anchor, then for every \(J\ge0\):

\[
\boxed{
S^{(\infty)}(q_J)<\infty,
}
\]

and every canonical state series \(F_t^{(\infty)}(q_J)\) converges absolutely.

This theorem requires no primitivity and no statewise coordinate contraction.

## 15. Scalar relevance of components

The canonical scalar partitions by actual fixed-point letters:
\[
S=\sum_tF_t.
\]

Therefore a component is scalar-relevant precisely through actual occurrences of its states in the fixed point.

T19 distinguishes three cases.

### 15.1 Finite-occurrence components

If
\[
\sup_jN_C(j)<\infty,
\]
the component contributes only finitely many terms to the original scalar series.

Such a component can affect finite transport matrices and initial monomial coordinates, but it cannot obstruct convergence.

### 15.2 Infinite zero-density transient components

A transient component may satisfy
\[
N_C(j)\to\infty
\]
while
\[
\frac{N_C(j)}{k^j}\to0.
\]

It contributes infinitely many canonical scalar terms and must not be discarded merely because its density is zero.

Nevertheless every such term is bounded by the same global geometric estimate
\[
2^{A_n-\lambda n}\le2^{-\varepsilon n}.
\]
Thus its full contribution is absolutely summable.

### 15.3 Recurrent final components

These control the leading Parikh density and can be primitive or imprimitive.

A recurrent component can contain a coordinate whose statewise mean exceeds \(\lambda\). This does not invalidate scalar convergence: the actual positions at which those letters occur are already included in the globally bounded prefix terms.

### Rational minimalization does not define scalar relevance

A state coordinate may disappear from a rational minimal basis while its canonical terms still contribute to \(S\) through reconstruction.

Therefore T19 never declares a component irrelevant merely because a signed or rational reduced coordinate eliminates it.

The canonical scalar, not the minimal coordinate list, is the relevance authority.

## 16. Audit of transient supercritical coordinates

Suppose a transient state \(s\) has
\[
b_{s,r}>\lambda
\]
for some residue class, so
\[
q_{j,s}>1
\]
along an infinite subsequence.

This causes no contradiction and no failure of the T19 proof.

The reasons are exact.

1. The internal transient SCC has spectral radius \(<k\); any polynomially weighted internal mass is \(o(k^j)\).
2. The supercritical leading mean for \(B_j(s)\), if present, comes from the recurrent descendants mixed into \(\sigma^j(s)\), not from a new \(k\)-spectral transient block.
3. Finite initial transport uses only finitely many algebraic matrix evaluations.
4. If the state occurs only finitely often, its scalar contribution is finite.
5. If it occurs infinitely often with zero density, its scalar terms remain a subseries of the globally convergent positive scalar.
6. T18 scalar reconstruction is performed from canonical values, not from an assertion that every coordinate lies in the unit polydisc.

Thus:

\[
\boxed{
\text{a transient real-supercritical coordinate is harmless once canonical scalar convergence is proved.}
}
\]

## 17. Audit of imprimitive recurrent components

Let \(C\) be a final irreducible component of period
\[
d_C>1.
\]

T19 does not call it primitive after taking a power.

Instead \(P_C^{d_C}\) splits according to the cyclic classes. On each cyclic class the appropriate return block is primitive, and the residue-class limits in Theorem T19.2 are obtained separately.

Hence the exact valuation means are
\[
b_{s,r},
\qquad
r\bmod d_C,
\]
not one silently averaged Perron mean.

Each \(b_{s,r}\) is rational, so none equals \(\lambda\).

A state may therefore be subcritical on one residue and supercritical on another. Coordinatewise real contraction fails in that case.

The canonical scalar proof is unaffected because Section 14 controls the actual prefix exponent
\[
A_n-\lambda n
\]
for every sufficiently large \(n\), not merely on a component cycle.

Graph periodicity of \(C\) is not identified with eventual periodicity of the valuation word.

## 18. T18 reduction remains exact and scalar-preserving

T19 does not alter any algebraic part of T18.

Choose the T18 arithmetic progression and its dense irreducible coset
\[
Y=tH.
\]

Choose a sufficiently deep actual orbit point
\[
\alpha=q_J
\]
on that progression that avoids every T18 zero/pole locus.

Because Section 14 proves real convergence for **every** \(J\), this chosen algebraically regular point is automatically also an ordinary-real convergence point for every canonical state function.

Restrict the canonical system to \(Y\), translate to \(H\), and then re-minimalize exactly as in T18.

The basis retains
\[
G_{Y,1}=S|_Y.
\]

Every basis/reconstruction denominator is a nonzero algebraic number when evaluated at \(\alpha\). Nonzero algebraic numbers remain nonzero under every field embedding, so the same finite reconstruction is defined in the ordinary real completion.

Thus:

- relation lifting: **PROVED, inherited from T18**;
- exact specialization: **PRESERVED**;
- appending \(1\): **HARMLESS**;
- ordinary real scalar reconstruction: **CONVERGENT by T19**.

## 19. Pointwise completion portability needs no real polydisc

The primitive T14 proof placed the whole deep monomial point in a real open unit polydisc. T19 replaces that sufficient condition by a weaker pointwise absolute-convergence statement.

The T18 lifted relation is an algebraic functional identity. After clearing the finitely many rational denominators, it is a finite polynomial identity in the canonical/reduced analytic series with algebraic coefficients.

Such an identity may be evaluated in another completion at any algebraic point where:

1. every rational coefficient is regular;
2. every participating canonical series converges absolutely;
3. the finite reconstruction matrices are defined.

Section 14 supplies item 2 at every actual monomial-orbit point. T18 regular-tail selection supplies items 1 and 3 algebraically.

Absolute convergence is enough to justify the finite sums and products in the polynomial identity. No open real neighborhood and no coordinatewise real unit-polydisc inclusion is required.

This is the exact reason T19 can use the T18 relation at a nonprimitive real tail with some coordinates greater than \(1\).

## 20. Completion-sign contradiction

Assume for contradiction that a genuinely aperiodic nonprimitive T18-admissible valuation language is realized by an ordinary positive integer anchor
\[
H=N\in\mathbb Z_{>0}.
\]

The exact 2-adic relation is
\[
S(q)+3N=0.
\]

Transport it forward to the deep T18 reduced regular point \(\alpha=q_J\):
\[
\ell_J\mathbf G_Y(\alpha)+3N=0.
\]

Append \(1\) and set
\[
P(X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
\]

T18 exact mixed-place lifting gives
\[
Q(h,1,\mathbf G_Y(h))=0
\]
with
\[
\boxed{
Q(\alpha,X_0,\mathbf X)
=
3NX_0+\ell_J\mathbf X.
}
\]

By Sections 14, 18 and 19, the same algebraic identity may be evaluated in the ordinary real completion at \(\alpha\).

Exact scalar reconstruction gives
\[
\ell_J\mathbf G_Y^{(\infty)}(\alpha)
=
S^{(\infty)}(q).
\]

Therefore
\[
S^{(\infty)}(q)+3N=0.
\]

But
\[
S^{(\infty)}(q)
=
\sum_{n\ge0}\frac{2^{A_n}}{3^n}
>0
\]
because every term is positive and the \(n=0\) term is \(1\).

Also
\[
N>0.
\]

Contradiction.

### Theorem T19.5 — nonprimitive positive-anchor exclusion

\[
\boxed{
\text{Every genuinely aperiodic nonprimitive T18-admissible }
k\text{-uniform system has }
H\notin\mathbb Z_{>0}.
}
\]

Together with the primitive theorem of T18:

\[
\boxed{
\text{primitivity is no longer a positive-anchor hypothesis inside the complete T18 framework.}
}
\]

The new result is an exclusion theorem for a recursive language class, not an explicit Collatz counterexample.

## 21. Positive rational audit

T19's real theorem is conditional on the existence of a **realized positive integer orbit**.

The strict gap
\[
\beta<\lambda
\]
uses the T3 positive-orbit height inequality before Bell's rationality theorem separates \(\beta\) from \(\lambda\).

Therefore T19 does **not** conclude intrinsically that every T18-admissible recursive system is real-subcritical.

For an abstract value
\[
H\in\mathbb Q_{>0}
\]
there need not be an ordinary positive integer orbit realizing the valuation language, so the T3 height inequality is unavailable.

However, if ordinary real subcriticality is independently known, for example
\[
\limsup_{n\to\infty}\frac{A_n}{n}<\lambda,
\]
then Sections 12–20 apply verbatim with rational \(H>0\), and T18 lifting gives the same impossible sign identity.

Thus:
\[
\boxed{
\text{independent real subcriticality}
\Longrightarrow
H\notin\mathbb Q_{>0}.
}
\]

Negative rational values remain unexcluded. In a real-subcritical system the identity
\[
S^{(\infty)}(q)=-3H>0
\]
has the correct sign when \(H<0\).

They are not Collatz counterexamples.

## 22. Consequence back to T2

Under T2's inherited finite-alphabet anchoring hypotheses,
\[
R_m\text{ bounded}
\]
produces an ordinary positive integer anchor.

If the valuation word were genuinely aperiodic, Theorem T19.5 would exclude that anchor.

Therefore every newly closed nonprimitive T18-admissible class satisfies
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}.
}
\]

Together with T18, the same implication now holds without a primitive/nonprimitive split throughout the complete T18 positive-anchor framework.

## 23. Exact Periodicity-Conjecture boundary after T19

| Recursive class | Status after T19 |
|---|---|
| Finite abelian translations | **Closed by T11**, with the stronger transcendental inverse-value conclusion in the genuine class. |
| Finite nonabelian translations | **Closed as positive-anchor routes by T12.** |
| Balanced one-variable finite-kernel systems | **Closed as positive-anchor routes by T13.** |
| Primitive dominant multivariate systems covered by T16 | **Closed.** |
| T17 relatively admissible stable-image systems | **Closed; subsumed by T18.** |
| T18 orbit-closure-reduced primitive stable-image systems | **Closed by T18.** |
| Nonprimitive T18-admissible \(k\)-uniform systems | **NEWLY CLOSED by T19 as positive-anchor routes.** |
| Remaining nonprimitive systems inside the exact T18 \(k\)-uniform framework | **No primitive/nonprimitive real-completion subclass remains open for positive integer anchors.** |
| Remaining singular-incidence systems inside T15/T18 stable-image framework | **No algebraic singular-incidence subclass remains open; T19 also removes the nonprimitive real-completion split for positive integer anchors.** |
| General multivariate/unbalanced finite-state systems outside the exact T5/T15/T18 analytic framework | **OPEN.** |
| General nonuniform morphic/substitutive recursive languages | **OPEN.** |
| Finite-valued automatic valuation languages representable by the exact uniform-substitution/T18 setup | **Covered by the T19 mechanism; no claim is made for arbitrary parity languages with unbounded run-length valuation coding.** |
| Arbitrary automatic/morphic parity languages | **OPEN.** |
| Full Periodicity Conjecture | **OPEN.** |

T19 does not claim the full Periodicity Conjecture.

## 24. Cobham, López-Stoll, and Brechler

### Cobham

No second multiplicatively independent automatic base for the same relevant sequence is supplied or needed.

**Applicable in T19: NO.**

### López-Stoll

The T3 cross-completion defect remains unresolved.

T19 uses T18 exact mixed-place lifting as the completion bridge, not López-Stoll.

**Load-bearing in T19: NO.**

### Brechler

T19 did not perform a fresh publication-status search. The authoritative T18 audit, performed earlier on 2026-10-03, found arXiv:2607.24877v1 still to be a preprint.

T19 does not use Brechler.

**Publication status changed in T19: NOT CHECKED.**

**Load-bearing in T19: NO.**

## 25. External theorem dependence

T19 introduces no new load-bearing literature theorem.

It uses, as inherited and already audited repository infrastructure:

1. Bell's theorem recorded in T3: the limsup mean of a nonnegative rational-valued automatic sequence is rational.
2. T3's exact positive-orbit height inequality.
3. Laurent's torus Mordell-Lang theorem, already audited in T18.
4. Bell-Ghioca-Tucker dynamical Mordell-Lang, already audited in T18.
5. Corvaja-Zannier \(S\)-unit trapping, already audited in T17/T18.
6. The T16/T17/T18 mixed-place exact lifting machinery.

The new Frobenius/Markov arguments in T19 are elementary finite-dimensional nonnegative matrix arguments and exact rational linear algebra.

No new literature search is load-bearing.

## 26. Compute and promotion decision

No theorem-derived scientific workload is justified.

- new scientific starts: **NOT JUSTIFIED**;
- candidate trajectories: **NOT JUSTIFIED**;
- substitution enumeration: **NOT JUSTIFIED**;
- finite residue optimization: **NOT JUSTIFIED**;
- finite carry optimization: **NOT JUSTIFIED**;
- finite exponent-code search: **NOT JUSTIFIED**;
- generator or sampling distribution: **NOT JUSTIFIED**;
- CPU campaign: **NOT JUSTIFIED**;
- GPU work: **NOT JUSTIFIED**;
- cloud / cluster / distributed / volunteer work: **NOT JUSTIFIED**;
- docs/COMPUTE_BUDGET.md: **UNCHANGED**;
- docs/METRIC_CATALOG.md: **UNCHANGED**.

The tiny exact example in Section 11 is a theorem illustration only. It is not an enumeration, candidate search, or trajectory experiment.

No explicit anchored aperiodic word exists in the T19 output.

No candidate or unbounded orbit was found.

No counterexample was claimed.

## 27. Deliverable checklist

| Required item | T19 result |
|---|---|
| exact T18 theorem state inherited | Section 2 |
| exact nonprimitive obstruction attacked | ordinary real convergence / positivity only |
| reachable SCCs | all SCCs of the inherited reachable/output-minimized incidence graph; Section 3 |
| block/Frobenius structure | exact upper-triangular SCC form; Section 3 |
| transient components | exactly nonfinal SCCs |
| recurrent components | exactly final SCCs |
| primitive/imprimitive recurrent components | period \(1\) / period \(>1\), tracked separately |
| exact spectral radius of each relevant component | \(k\) iff final; \(<k\) iff nonfinal |
| exact \(B_j(s)\) asymptotics | \(k^jb_{s,j\bmod D}+O(j^E\rho_*^j)\), \(b_{s,r}\in\mathbb Q\) |
| polynomial/Jordan corrections | possible below \(k\); absent at \(k\) |
| uniformity rules out \(j^ek^j\) | **YES** in canonical nonnegative Parikh dynamics |
| actual fixed-point component visitation | exact counts \(N_C(j)=\mathbf1_C^TM^je_{a_0}\) |
| finite-prefix-only components | exactly bounded \(N_C(j)\) |
| zero-density components | every transient component; may still occur infinitely |
| dominant Parikh growth | reachable final components |
| exact ordinary-real coordinate criterion | \(\max_rb_{s,r}<\log_2 3\) |
| positive integer anchor forces all coordinates subcritical | **NOT USED / NOT PROMOTED** |
| positive integer anchor forces global strict prefix gap | **YES**, by T3 + Bell |
| scalar-relevant components | every actually occurring canonical component; finite and zero-density cases retained |
| transient supercritical coordinates | harmless after global scalar convergence |
| recurrent critical components | impossible: rational residue means cannot equal \(\log_2 3\) |
| imprimitive recurrent components | exact cyclic residue limits retained; not relabeled primitive |
| scalar-tail identity | \(S(q_J)=\sum_n2^{A_{nk^J}}/3^{nk^J}\) |
| weakest sufficient convergence statement | summability of that positive subsequence series at the chosen tail |
| positive anchor gives convergence | **YES at every actual tail point** |
| T18 reduced system remains exact/scalar-preserving | **YES** |
| T18 relation lifting applies | **YES** |
| exact specialization preserved | **YES** |
| appending \(1\) harmless | **YES** |
| ordinary real scalar reconstruction converges | **YES** under hypothetical positive integer anchor |
| completion-sign contradiction applies | **YES** |
| positive integer anchors excluded | **YES for all genuinely aperiodic nonprimitive T18-admissible systems** |
| positive rational nonintegers excluded | only with independently known real subcriticality |
| negative rational exceptions survive | **YES** |
| new bounded-\(R_m\) periodicity class | **YES** |
| full Periodicity Conjecture solved | **NO** |
| Cobham applies | **NO** |
| López-Stoll load-bearing | **NO** |
| Brechler status changed if checked | not rechecked in T19; inherited T18 preprint status |
| explicit anchored aperiodic word | **NO** |
| candidate/unbounded orbit | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |

## 28. Exact next theorem-sized obligation

T19 removes the primitive/nonprimitive ordinary-real split for \(k\)-uniform T18-admissible valuation systems.

The next theorem-sized boundary is no longer another Frobenius refinement.

It is the **nonuniform morphic scalar-convergence / completion-portability problem**:

> replace the two uniform ingredients
> \[
> u_{kn+r}=\delta_r(u_n)
> \]
> and
> \[
> S(\tau^Jq)
> =
> \sum_n\frac{2^{A_{nk^J}}}{3^{nk^J}}
> \]
> by an exact variable-length morphic analogue, and determine whether a hypothetical positive integer anchor forces enough ordinary real summability of the canonical scalar to support a completion-sign contradiction.

A successful theorem must track actual substitution lengths and actual scalar terms. It must not assume automaticity after a variable-length coding, and it must not import the uniform Bell limsup theorem outside its hypotheses.

If no such theorem is possible, the next report should isolate the exact nonuniform growth/return structure that prevents scalar completion.

No scientific compute is authorized by T19.

## 29. Permanent lesson

The nonprimitive obstruction was not a hidden \(k\)-spectral Jordan block.

Uniformity forces every \(k\)-spectral SCC to be final and therefore prevents chains of \(k\)-spectral blocks. The remaining Frobenius complications—transient chains, periodic recurrent classes, and polynomial corrections—are all explicit and controlled.

Nor was the missing theorem “every relevant coordinate becomes \(<1\) in the real completion.”

That condition is stronger than necessary and can fail in a perfectly subcritical nonprimitive scalar system.

The canonical Collatz scalar remembers the actual fixed-point order:
\[
S(q_J)
=
\sum_n
\frac{2^{A_{nk^J}}}{3^{nk^J}}.
\]
A hypothetical positive integer anchor plus automaticity gives a strict global prefix gap. That gap makes the positive scalar and every canonical state subseries converge at every actual tail point.

Once convergence is stated at the level the T18 sign argument actually uses, primitivity disappears from the completion step.

**C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND**
