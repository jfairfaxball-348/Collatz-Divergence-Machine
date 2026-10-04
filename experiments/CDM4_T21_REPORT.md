# CDM4-T21 — REDUCIBLE MORPHIC ORDINARY-PREFIX LIMSUP / POSITIVE-GRADING AUDIT

Date: 2026-10-04

Authority commit on entry: dfe33897d5eaa0cc407d490e2767d8fdd7b48ee6

Repository: jfairfaxball-348/Collatz-Divergence-Machine

## 1. Executive result

CDM4-T21 produces two new structural theorems.

First, the ordinary-prefix obstruction left open by T20 is closed for the full expanding nonerasing pure-morphic class considered here.

Let
\[
\sigma:\Lambda\to\Lambda^+
\]
be nonerasing, prolongable on \(a_0\), and expanding on every reachable letter. Let
\[
u=\sigma^\omega(a_0),
\qquad
A_n=\sum_{i<n}v(u_i),
\qquad
v:\Lambda\to\mathbb Z_{>0}.
\]

Then
\[
\boxed{
\beta=\limsup_{n\to\infty}\frac{A_n}{n}
\in\overline{\mathbb Q}.
}
\]

More precisely, there is an explicitly defined finite set
\[
\mathcal E(\sigma,v)\subset\overline{\mathbb Q}\cap\mathbb R
\]
obtained from deterministic stationary policies on a finite phase-augmented Dumont–Thomas prefix automaton such that
\[
\boxed{
\liminf_{n\to\infty}\frac{A_n}{n}
=\min\mathcal E,
\qquad
\limsup_{n\to\infty}\frac{A_n}{n}
=\max\mathcal E.
}
\]

The full accumulation set is
\[
\boxed{
\left[
\liminf A_n/n,\,
\limsup A_n/n
\right].
}
\]

Thus the ordinary mean need not exist, but both endpoints are algebraic. The accumulation set may be a nontrivial interval; T21 does not incorrectly promote it to a finite set.

The decisive point missed at T20 is the canonical leading-prefix geometry. Every Dumont–Thomas representation of a positive prefix length begins with a nonempty strict prefix of
\[
\sigma(a_0)=a_0w.
\]
That leading prefix contains \(a_0\). Hence its highest substituted block contains \(\sigma^J(a_0)\) and has the maximal reachable exponential-polynomial growth order. Lower-growth components, even if they occur infinitely often and even if they are placed at arbitrary later prefix depths, cannot outrun this leading block.

Equal-radius SCC chains and their leading
\[
J^e\rho^J
\]
factors survive, but the common polynomial factor cancels in the projective prefix ratio. Residue-class modulation survives as a finite phase variable in the prefix automaton.

Second, the positive-grading obstruction is also closed at the semigroup/support-displacement level for every expanding reducible system after T18 orbit-closure reduction.

On a sufficiently deep period-refined arithmetic progression
\[
q_{a+Rn},
\]
define the length-increment row
\[
d^T
=
\mathbf1^TM^a(M^R-I).
\]
After choosing the tail deeply enough,
\[
d_s>0
\]
for every reachable letter \(s\). If \(R_Y\) is the complete character-relation lattice of the selected dense T18 orbit coset, then every \(\mu\in R_Y\) has constant \(2\)- and \(3\)-exponents on the progression, so
\[
d^T\mu=0.
\]
Therefore
\[
\boxed{
w_\Delta(\pi_Y(x))=d^Tx
}
\]
is a well-defined positive integral grading on
\[
\Gamma_Y=\pi_Y(\mathbb N^m).
\]

Moreover there exist \(C>0\) and \(\kappa>1\) such that
\[
\boxed{
w_\Delta(A_Y^n\gamma)
\ge
C\kappa^n w_\Delta(\gamma)
}
\]
for every \(\gamma\in\Gamma_Y\) and every \(n\ge0\).

This is enough to recover the finite-codimensional support filtration and exponential support displacement without forcing a single reducible Perron eigenvector.

However T21 does not promote this support theorem to a universal reducible T17/T18 exact lifting theorem. If different surviving generators have genuinely unequal exponential-polynomial growth scales, the published/inherited global \(S\)-unit height-versus-boundary-contraction argument has not been reverified in a multiscale form. The grading obstruction is closed; the unequal-scale global lifting interface is the remaining theorem-sized boundary.

For the reducible subclass in which all surviving reduced positive generators have one comparable exponential-polynomial scale, the T17/T18 proof does extend. In that balanced-growth subclass, a hypothetical positive integer anchor is excluded by the full completion-sign contradiction.

No explicit anchored aperiodic word was found. No candidate Collatz start, unbounded orbit, or Collatz counterexample was found. No scientific compute is justified.

## 2. T20 state inherited exactly

T21 treats the following as closed T20 infrastructure.

For
\[
\ell_J(s)=\mathbf1^TM^Je_s,
\qquad
B_J(s)=v^TM^Je_s,
\]
and the prefix Parikh vector \(c(n)\),
\[
L_J(n)=\mathbf1^TM^Jc(n),
\]
with
\[
\sigma^J(u_{<n})=u_{<L_J(n)},
\]
\[
c(L_J(n))=M^Jc(n),
\]
and
\[
A_{L_J(n)}=v^TM^Jc(n).
\]

The exact finite stationary functional system remains
\[
\mathbf F(x)=\mathcal A(x)\mathbf F(\tau(x)).
\]

At
\[
q_s=\frac{2^{v(s)}}3,
\]
\[
q_{J,s}
=
\frac{2^{B_J(s)}}{3^{\ell_J(s)}},
\]
and
\[
\boxed{
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}.
}
\]

A strict global gap
\[
\limsup A_n/n<\lambda,
\qquad
\lambda=\log_2 3,
\]
therefore implies absolute real convergence of the canonical scalar and every canonical state subseries at every actual tail.

T20 also already proves algebraic residue-class limits for substituted-letter block ratios in the reducible expanding case. T21 does not re-prove that state-block theorem. It proves the missing arbitrary-prefix theorem.

Primitive variable-length systems remain closed by T20 and are not reopened.

## 3. Class covered by the T21 prefix theorem

The prefix theorem covers the reachable part of every morphism satisfying:

1. \(\sigma:\Lambda\to\Lambda^+\) is nonerasing;
2. \(\sigma\) is prolongable on \(a_0\):
   \[
   \sigma(a_0)=a_0w,
   \qquad w\ne\epsilon;
   \]
3. every letter reachable from \(a_0\) is expanding:
   \[
   |\sigma^J(s)|\to\infty;
   \]
4. the valuation coding is finite and positive:
   \[
   v(s)\in\mathbb Z_{>0}.
   \]

No primitivity is assumed.

No uniformity is assumed.

No fixed-base automaticity is assumed.

The theorem is a pure-morphic/substitutive theorem. A coded morphic valuation word is also covered whenever the coding is absorbed into the positive valuation vector on an expanding nonerasing prolongable presentation.

Erasing presentations, bounded-letter presentations, and arbitrary morphic presentations not reduced to this expanding nonerasing form are not claimed.

## 4. Reachable Frobenius structure

Restrict \(M\) to the letters reachable from \(a_0\), and put the SCCs into Frobenius order.

For each SCC \(C\):

- \(M_C\) is irreducible;
- \(\rho_C\) is its Perron spectral radius;
- \(d_C\) is its period.

The SCC condensation graph is finite and acyclic.

For a reachable letter \(s\), define its reachable exponential radius
\[
\rho(s)
=
\max\{\rho_C:C\text{ reachable from }s\}.
\]

Equal-radius directed chains can create Jordan coupling between critical blocks. After passage to a common residue period, the resulting powers have the form
\[
J^{e}\rho^J
\]
times algebraic leading coefficients.

For a state \(s\), the largest polynomial degree at the radius \(\rho(s)\) is the critical-chain/Jordan exponent \(e(s)\). In the nonnegative Frobenius setting this exponent records the longest effective chain of equal-\(\rho(s)\) critical blocks, with the usual residue refinement for imprimitive components.

Because every reachable letter is expanding, every final reachable SCC has spectral radius \(>1\). Hence
\[
\rho(s)>1
\]
for every reachable \(s\).

Let
\[
\rho=\rho(a_0).
\]

Because \(a_0\) reaches every reachable state, for each \(s\) there is an integer \(h_s\) such that \(\sigma^{h_s}(a_0)\) contains \(s\). Consequently
\[
\ell_J(s)
\le
\ell_{J+h_s}(a_0)
\]
for all \(J\), and similarly
\[
B_J(s)
\le
B_{J+h_s}(a_0)
\]
up to the positive valuation comparison already available from T20.

Therefore no reachable state has a larger exponential radius than \(a_0\), and no state at the same radius has a larger dominant polynomial degree.

This is the first key reducible simplification:
\[
\boxed{
(\rho(s),e(s))
\le_{\rm lex}
(\rho(a_0),e(a_0)).
}
\]

## 5. Root asymptotics and period refinement

Let
\[
g_J=\ell_J(a_0)=|\sigma^J(a_0)|.
\]

Because \(\sigma\) is nonerasing,
\[
g_{J+1}\ge g_J.
\]

The sequence \(g_J\) is an integral linear-recurrence sequence arising from \(M\). Standard Frobenius/Jordan decomposition gives, after a common period refinement \(D\),
\[
g_J
=
J^e\rho^J
\left(
L_{J\bmod D}+O(J^{-1})
\right)
+
o(J^e\rho^J),
\]
where
\[
\rho>1,
\qquad
e\ge0,
\qquad
L_r\in\overline{\mathbb Q}_{>0}.
\]

Monotonicity rules out a different dominant polynomial degree on different consecutive residue classes. Otherwise a passage from a higher-degree residue to a lower-degree residue would force
\[
g_{J+1}/g_J\to0
\]
along a subsequence, contradicting \(g_{J+1}\ge g_J\). Thus one common pair
\[
(\rho,e)
\]
controls all root residues; only the positive algebraic coefficient \(L_r\) is periodic.

Since
\[
v_{\min}g_J
\le
B_J(a_0)
\le
v_{\max}g_J,
\]
the root valuation sum has the same \((\rho,e)\):
\[
B_J(a_0)
=
J^e\rho^J
\left(
V_{J\bmod D}+O(J^{-1})
\right)
+
o(J^e\rho^J),
\]
with
\[
V_r\in\overline{\mathbb Q}_{>0}.
\]

For every finite Parikh digit \(d\in\mathbb N^m\) arising from a strict prefix of some \(\sigma(s)\), the root-dominance inequality implies the existence of algebraic nonnegative limits
\[
\boxed{
L_r(d)
=
\lim_{\substack{J\to\infty\\J\equiv r\!\!\!\pmod D}}
\frac{\mathbf1^TM^Jd}{J^e\rho^J}
\in\overline{\mathbb Q}_{\ge0},
}
\]
and
\[
\boxed{
V_r(d)
=
\lim_{\substack{J\to\infty\\J\equiv r\!\!\!\pmod D}}
\frac{v^TM^Jd}{J^e\rho^J}
\in\overline{\mathbb Q}_{\ge0}.
}
\]

Digits of strictly lower exponential or polynomial order have
\[
L_r(d)=V_r(d)=0.
\]

No such lower-order digit is discarded before this theorem is proved; its vanishing occurs only after the exact normalized prefix decomposition.

## 6. Exact Dumont–Thomas arbitrary-prefix decomposition

Let \(\mathcal A_\sigma\) be the prefix automaton.

An edge
\[
s\xrightarrow{p}t
\]
means that
\[
\sigma(s)=ptz
\]
for some suffix \(z\), with \(p\) a strict prefix of \(\sigma(s)\).

Let
\[
d(p)
\]
be the Parikh vector of \(p\).

The Dumont–Thomas/Marsault–Sakarovitch prefix theorem gives the following exact representation.

For every \(n\ge1\) there is a unique accepted word
\[
[p_k][p_{k-1}]\cdots[p_0]
\]
which does not begin with \([\epsilon]\) and such that
\[
\boxed{
u_{<n}
=
\sigma^k(p_k)
\sigma^{k-1}(p_{k-1})
\cdots
\sigma(p_1)p_0.
}
\]

Hence
\[
\boxed{
c(n)
=
\sum_{j=0}^k M^j d(p_j),
}
\]
\[
\boxed{
n
=
\sum_{j=0}^k \mathbf1^TM^j d(p_j),
}
\]
and
\[
\boxed{
A_n
=
\sum_{j=0}^k v^TM^j d(p_j).
}
\]

No recognizability theorem is needed for this decomposition.

No primitive derived system is substituted for the original fixed point.

No return-word frequency hypothesis is used.

The representation language is prefix-closed and finite-state.

## 7. The leading-prefix dominance lemma

This is the decisive T21 lemma.

Since
\[
\sigma(a_0)=a_0w,
\]
every nonempty prefix of \(\sigma(a_0)\) contains \(a_0\).

The leading Dumont–Thomas digit \(p_k\) is nonempty and labels an edge leaving the initial state \(a_0\). Therefore
\[
d(p_k)\ge e_{a_0}
\]
coordinatewise at the \(a_0\) coordinate, and
\[
\sigma^k(p_k)
\]
contains \(\sigma^k(a_0)\).

Thus
\[
\mathbf1^TM^k d(p_k)
\ge
\ell_k(a_0).
\]

Consequently the leading block always has the full root growth scale
\[
k^e\rho^k.
\]

All later blocks have powers at most \(k-1\), and every reachable digit has growth order at most the root order.

Therefore arbitrary prefixes cannot realize the feared mechanism in which a lower-growth leading block is later overtaken by a higher-growth block at a moving depth. The highest substituted block already contains the maximal-growth root letter.

This corrects the T20 boundary statement.

Unequal growth classes do occur inside the decomposition, but none has a growth class above the leading root block.

## 8. Uniform elimination of lower growth classes

Read the representation from most significant to least significant.

Write
\[
e_r
\]
for the \(r\)-th prefix-automaton edge from the top, so that its digit is substituted to depth
\[
k-r.
\]

Normalize by
\[
k^e\rho^k.
\]

For every lower-radius digit with radius \(\rho'<\rho\),
\[
\sum_{j\le k}
O(j^E{\rho'}^j)
=
O(k^E{\rho'}^k),
\]
and therefore
\[
\frac{O(k^E{\rho'}^k)}{k^e\rho^k}
\to0.
\]

For a same-radius digit of lower polynomial degree \(f<e\),
\[
\sum_{j\le k}
O(j^f\rho^j)
=
O(k^f\rho^k),
\]
so
\[
\frac{O(k^f\rho^k)}{k^e\rho^k}
\to0.
\]

Thus all strictly lower growth profiles vanish uniformly in the normalized total prefix.

This is stronger than a density statement. It is an exact scale comparison.

A zero-density infinite component is not declared irrelevant. If it contributes at the root growth order, its leading coefficient survives below. If it is genuinely lower order, its contribution is proved to vanish.

## 9. Discounted projective prefix limit

Fix a residue
\[
q=k\bmod D.
\]

By compactness of the finite prefix tree, any sequence of representations with \(k\to\infty\) has a subsequence whose top-down edge labels converge cylinderwise to an infinite accepted path
\[
\omega=e_0e_1e_2\cdots.
\]

For fixed \(r\),
\[
\frac{(k-r)^e\rho^{k-r}}{k^e\rho^k}
\to
\rho^{-r}.
\]

The uniform geometric tail bound permits dominated convergence.

Hence
\[
\boxed{
\frac{n}{k^e\rho^k}
\longrightarrow
D_q(\omega)
=
\sum_{r\ge0}
\rho^{-r}
L_{q-r}(d(e_r)),
}
\]
and
\[
\boxed{
\frac{A_n}{k^e\rho^k}
\longrightarrow
N_q(\omega)
=
\sum_{r\ge0}
\rho^{-r}
V_{q-r}(d(e_r)),
}
\]
with phases read modulo \(D\).

The leading edge is nonempty and contains \(a_0\), so
\[
D_q(\omega)>0.
\]

Therefore every subsequential prefix-mean limit is
\[
\boxed{
R_q(\omega)
=
\frac{N_q(\omega)}{D_q(\omega)}.
}
\]

Conversely, every infinite accepted path with a nonempty first digit is realized by its finite accepted prefixes. Restricting lengths to a fixed residue class \(q\bmod D\) gives a sequence of ordinary fixed-point prefixes whose mean tends to \(R_q(\omega)\).

Thus the ordinary-prefix limit problem is exactly a finite-state discounted ratio problem.

The polynomial factor \(k^e\) has disappeared from the projective ratio. Equal-dominant-radius chains therefore do not create new transcendental mixing weights.

## 10. Finite-state discounted extremum theorem

Augment the prefix-automaton state by the exponent phase:
\[
(s,r)\in
\Lambda\times\mathbb Z/D\mathbb Z.
\]

For an edge \(e:s\to t\) with digit \(d(e)\), define algebraic phase rewards
\[
\mathsf L(e,r)=L_r(d(e)),
\qquad
\mathsf V(e,r)=V_r(d(e)).
\]

The phase transition is
\[
(s,r)\to(t,r-1).
\]

Let
\[
\delta=\rho^{-1}\in\overline{\mathbb Q},
\qquad
0<\delta<1.
\]

For fixed initial phase \(q\),
\[
R_q(\omega)
=
\frac{
\sum_{j\ge0}\delta^j\mathsf V(e_j,q-j)
}{
\sum_{j\ge0}\delta^j\mathsf L(e_j,q-j)
}.
\]

A dummy initial state enforces the unique Dumont–Thomas condition that the first prefix digit is nonempty. After the first transition, all ordinary prefix-automaton actions are allowed.

### Theorem T21.1 — stationary extremizers

For every \(q\), the maximum and minimum of \(R_q\) over all admissible infinite paths are attained by paths generated by deterministic stationary policies on the finite phase-augmented automaton.

#### Proof

For a real parameter \(x\), define the one-step reward
\[
r_x(e,r)
=
\mathsf V(e,r)-x\mathsf L(e,r).
\]

The discounted optimization
\[
\sup_\omega
\sum_{j\ge0}
\delta^j r_x(e_j,q-j)
\]
is an ordinary finite deterministic discounted control problem.

Its Bellman operator is a contraction of modulus \(\delta\). Therefore an optimal deterministic stationary action exists at every augmented state.

Let
\[
\beta_q=\max_\omega R_q(\omega).
\]

Because the path space is compact and the denominator is uniformly positive at the leading digit, the maximum is attained. For every path,
\[
N_q(\omega)-\beta_qD_q(\omega)\le0,
\]
and equality holds for a maximizing path.

Hence the optimal discounted value for the reward \(r_{\beta_q}\) is zero. A deterministic stationary policy attaining that additive optimum produces a path with
\[
N_q-\beta_qD_q=0,
\]
so its ratio is exactly \(\beta_q\).

The minimum follows by reversing the optimization. QED.

A path produced by a deterministic stationary policy on a finite directed graph is eventually periodic.

Therefore its numerator and denominator are finite algebraic sums plus geometric tails of the form
\[
\frac{\delta^m C}{1-\delta^c}.
\]

They are algebraic.

### Corollary T21.2 — finite algebraic endpoint set

Let \(\mathcal E\) be the finite set of ratios obtained from:

- one residue phase \(q\bmod D\);
- one allowed nonempty initial edge;
- one deterministic stationary policy on the finite augmented automaton.

Then
\[
\boxed{
\mathcal E\subset\overline{\mathbb Q}\cap\mathbb R,
}
\]
and
\[
\boxed{
\beta=\max\mathcal E.
}
\]

Similarly
\[
\boxed{
\alpha_-=
\liminf A_n/n
=
\min\mathcal E.
}
\]

This is the arithmetic classification requested by T21.

No finite determinant sampling or numerical policy search was performed. The finite policy set is a theorem description, not a computational campaign.

## 11. Exact accumulation set and ordinary mean

Set
\[
x_n=\frac{A_n}{n}.
\]

Since
\[
v_{\min}\le x_n\le v_{\max},
\]
and
\[
x_{n+1}-x_n
=
\frac{v(u_n)-x_n}{n+1},
\]
we have
\[
|x_{n+1}-x_n|
\le
\frac{v_{\max}-v_{\min}}{n+1}
\to0.
\]

A bounded real sequence whose successive increments tend to zero has a connected compact cluster set. In one dimension that cluster set is the interval between its liminf and limsup.

Hence
\[
\boxed{
\operatorname{Acc}\left(A_n/n\right)
=
[\alpha_-,\beta].
}
\]

Both endpoints belong to the finite algebraic set \(\mathcal E\).

Therefore:

- the accumulation set need not be finite;
- it is always an interval;
- its endpoints are algebraic;
- the ordinary mean exists exactly when
  \[
  \alpha_-=\beta.
  \]

When the mean exists it is algebraic, in agreement with the inherited Allouche–Shallit/Saari frequency theorem.

When the mean does not exist, T21 still controls the arithmetic of both extremal ordinary-prefix means.

## 12. Treatment of dominant \(J^e\rho^J\) chains

Equal-radius SCC chains are not subleading in general variable-length systems.

T21 retains them.

If the root critical chain has exponent \(e>0\), then
\[
\ell_J(a_0)
=
J^e\rho^J(L_r+o(1))
\]
and the leading arbitrary-prefix block has the same scale.

A later block at top offset \(r\) contributes
\[
(k-r)^e\rho^{k-r}.
\]

After normalization,
\[
\frac{(k-r)^e\rho^{k-r}}{k^e\rho^k}
\to
\rho^{-r}.
\]

Thus the polynomial factor survives in absolute block size but cancels in the projective prefix geometry.

A descendant with the same \(\rho\) but a smaller polynomial exponent contributes
\[
O(k^{e-1}\rho^k)
\]
after summation and is negligible relative to
\[
k^e\rho^k.
\]

Therefore dominant polynomial corrections do not generate a nonalgebraic prefix limsup.

## 13. Treatment of unequal exponential growth classes

T20 correctly warned that reducible systems can contain several exponential classes.

T21 shows that ordinary prefix geometry is more rigid than an arbitrary concatenation of substituted blocks.

The leading Dumont–Thomas digit always contains \(a_0\), so every positive prefix of representation depth \(k\) contains a block of size
\[
\Theta(k^e\rho^k)
\]
at the maximal reachable root scale.

Every later digit has growth radius at most \(\rho\).

If it has smaller radius, its total contribution over every later depth is exponentially negligible.

If it has radius \(\rho\) but smaller polynomial degree, its total contribution is polynomially negligible.

Only root-order digits survive, and their relative scales are the algebraic geometric factors
\[
\rho^{-r}
\]
with finite periodic modulation.

Thus lower-growth placement near a prefix boundary cannot control the limsup.

This is not the false statement that zero density implies irrelevance. The proof uses substituted scale, not density.

## 14. Critical threshold

Let
\[
\lambda=\log_2 3.
\]

T21 proves intrinsically that
\[
\beta\in\overline{\mathbb Q}.
\]

By Gelfond–Schneider,
\[
\lambda
\]
is transcendental. Therefore
\[
\boxed{
\beta\ne\lambda.
}
\]

Under a hypothetical genuinely aperiodic positive integer Collatz anchor, T3 supplies
\[
\beta\le\lambda.
\]

Hence
\[
\boxed{
\beta<\lambda.
}
\]

This closes the T20 critical branch for every expanding nonerasing pure-morphic valuation system in the T21 class.

The proof uses transcendence, not merely irrationality.

## 15. Exact scalar-convergence consequence

Choose
\[
\varepsilon>0
\]
with
\[
\beta+\varepsilon<\lambda.
\]

By the definition of limsup,
\[
A_n\le(\lambda-\varepsilon)n
\]
for all sufficiently large \(n\).

T20 then gives, for every \(J\),
\[
S(q_J)
=
\sum_{n\ge0}
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}},
\]
and
\[
L_J(n)\ge n.
\]

Therefore
\[
\frac{2^{A_{L_J(n)}}}{3^{L_J(n)}}
\le
2^{-\varepsilon L_J(n)}
\le
2^{-\varepsilon n}
\]
eventually.

Thus:

\[
\boxed{
\text{scalar convergence: PROVED for the full T21 expanding reducible class under a positive integer anchor.}
}
\]

Every canonical state function is a positive subseries and converges absolutely at the same actual tail points.

Coordinatewise real contraction is still not required.

## 16. Reducible positive expanding grading after T18 reduction

The second T21 target is independent of the prefix theorem.

Take the T18 stable-image/orbit-closure reduction and a selected dense arithmetic-progression tail
\[
q_{a+Rn}
\]
on a torus coset \(Y\).

Pass to a further period-refined progression if necessary and reselect the dense component as in T18.

Let
\[
R_Y
\]
denote the complete lattice of ambient characters constant on \(Y\), and let
\[
N_Y=\mathbb Z^m/R_Y,
\qquad
\Gamma_Y=\pi_Y(\mathbb N^m).
\]

The reduced pullback is induced by
\[
M^R.
\]

### Theorem T21.3 — increment grading

After taking \(a\) sufficiently deep, define
\[
d^T
=
\mathbf1^TM^a(M^R-I).
\]

Then:

1. every coordinate satisfies
   \[
   d_s>0;
   \]
2. \(d^T\mu=0\) for every \(\mu\in R_Y\);
3. therefore
   \[
   \boxed{
   w_\Delta(\pi_Y(x))=d^Tx
   }
   \]
   is a well-defined integral linear functional on \(N_Y\);
4. for every
   \[
   \gamma\in\Gamma_Y\setminus\{0\},
   \]
   \[
   \boxed{
   w_\Delta(\gamma)>0;
   }
   \]
5. there exist \(C>0\) and \(\kappa>1\) such that
   \[
   \boxed{
   w_\Delta(A_Y^n\gamma)
   \ge
   C\kappa^n w_\Delta(\gamma)
   }
   \]
   for all \(n\ge0\).

#### Proof of relation descent

For \(\mu\in R_Y\), the character is constant on the selected orbit:
\[
q_{a+Rn}^{\mu}=c_\mu.
\]

But
\[
q_J^\mu
=
\frac{
2^{v^TM^J\mu}
}{
3^{\mathbf1^TM^J\mu}
}.
\]

Comparing two consecutive points on the selected progression gives
\[
2^{v^TM^a(M^R-I)\mu}
3^{-\mathbf1^TM^a(M^R-I)\mu}
=1.
\]

Unique factorization, or multiplicative independence of \(2\) and \(3\), gives separately
\[
v^TM^a(M^R-I)\mu=0,
\]
and
\[
\mathbf1^TM^a(M^R-I)\mu=0.
\]

Hence
\[
d^T\mu=0.
\]

#### Proof of positivity

For a reachable letter \(s\),
\[
d_s
=
\ell_{a+R}(s)-\ell_a(s).
\]

After a common period refinement,
\[
\ell_{a+R}(s)/\ell_a(s)
\to
\rho(s)^R>1
\]
along the selected residue class, up to the inherited polynomial factor ratio tending to one.

Since there are finitely many reachable states, one sufficiently deep \(a\) makes every \(d_s\) strictly positive.

For \(x\in\mathbb N^m\setminus\{0\}\),
\[
d^Tx>0.
\]

If a nonzero positive exponent vector were killed in \(N_Y\), it would lie in \(R_Y\) and simultaneously have zero and positive \(d\)-weight, impossible.

Thus the reduced positive cone is pointed.

#### Proof of uniform expansion

For a generator \(e_s\),
\[
w_\Delta(A_Y^n\pi_Y(e_s))
=
\ell_{a+R(n+1)}(s)
-
\ell_{a+Rn}(s).
\]

Each such difference is a positive algebraic exponential-polynomial sequence with base
\[
\rho(s)^R>1
\]
and its inherited polynomial correction.

Choose
\[
1<\kappa<
\min_s\rho(s)^R.
\]

After adjusting a constant for finitely many initial \(n\),
\[
w_\Delta(A_Y^n\pi_Y(e_s))
\ge
C\kappa^n w_\Delta(\pi_Y(e_s))
\]
uniformly in \(s\).

Linearity and nonnegative generation extend the inequality to all \(\Gamma_Y\). QED.

## 17. Finite-codimensional support filtration and boundary attraction

Because the generator weights
\[
d_s
\]
are positive integers, the sets
\[
\{\gamma\in\Gamma_Y:w_\Delta(\gamma)<p\}
\]
are finite.

Therefore \(w_\Delta\) defines the same kind of finite-codimensional semigroup support filtration used by T17.

The support displacement is no longer an exact scalar identity such as
\[
w(A^n\gamma)=\rho^nw(\gamma),
\]
but the lower bound
\[
w_\Delta(A_Y^n\gamma)
\ge
C\kappa^n w_\Delta(\gamma)
\]
is sufficient for the formal high-support displacement estimate.

The actual selected point \(q_a\) also lies in a strict weighted boundary neighborhood.

Indeed, for \(x\in\mathbb N^m\),
\[
|\chi^{\pi_Y(x)}(q_a)|_2
=
2^{-v^TM^ax}
\le
2^{-v_{\min}\mathbf1^TM^ax}.
\]

Since the two positive linear forms
\[
\mathbf1^TM^ax
\quad\text{and}\quad
d^Tx
\]
have positive coefficients on the finite generator set, there is \(c>0\) with
\[
\mathbf1^TM^ax\ge c\,d^Tx.
\]

Hence
\[
\boxed{
|\chi^\gamma(q_a)|_2
\le
2^{-cv_{\min}w_\Delta(\gamma)}.
}
\]

Thus:

\[
\boxed{
\text{positive expanding grading: PROVED for every expanding reducible T18-reduced tail.}
}
\]

This closes the second literal T21 obstruction.

## 18. Exact lifting audit

The grading theorem does not by itself prove a universal reducible mixed-place lifting theorem.

T17/T20 use three quantitative layers together:

1. finite-codimensional positive support;
2. rapid boundary contraction under pullback;
3. global algebraic degree/height growth on a scale comparable to the contraction scale.

T21.3 supplies items 1 and 2 for every expanding reducible system.

If the surviving reduced generators have one common comparable growth scale, item 3 is also inherited on that same scale.

Define the balanced-growth condition on the selected reduced tail:

there exist
\[
\rho_*>1,\qquad e_*\ge0
\]
such that every surviving reduced positive generator has
\[
\ell_{a+Rn}(s)
=
\Theta(n^{e_*}\rho_*^n)
\]
and the same is true for its positive valuation sum.

Periodic residue constants are allowed.

Equal-radius SCC chains with the same effective polynomial degree are allowed.

Under this balanced-growth condition, the T17/T20 support, \(S\)-unit height, boundary-contraction, dense-orbit zero, rigid-local, relation-ideal, and exact-specialization estimates remain comparable after replacing the primitive scale by
\[
n^{e_*}\rho_*^n.
\]

Thus:

\[
\boxed{
\text{algebraic relation lifting: PROVED for the balanced-growth reducible T18-reduced subclass.}
}
\]

The specialization remains
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X).
}
\]

The scalar-preserving reduced basis still satisfies
\[
G_{Y,1}=S|_Y.
\]

Appending \(1\) remains harmless.

For genuinely unequal surviving growth scales, T21 does not claim that the inherited Corvaja–Zannier/global-height step is automatic. The new grading gives a minimum expansion scale, but a fast coordinate can dominate global height while a slow regular character controls local boundary contraction. A multigraded or filtration-by-growth-class replacement has not been proved here.

Therefore:

\[
\boxed{
\text{algebraic relation lifting: OPEN in the general unequal-growth reducible class.}
}
\]

This is now the only remaining variable-length obstruction inside the T21 framework.

## 19. Pointwise completion portability

For every balanced-growth reducible class in which the exact lift is available, T19 pointwise portability applies unchanged.

The required facts are:

1. rational coefficients are regular on a sufficiently deep complete tail;
2. T21 proves absolute real convergence of the canonical scalar and state functions under the hypothetical positive integer anchor;
3. finite reconstruction matrices are defined.

No open real polydisc is required merely to evaluate the already-lifted algebraic identity at the same algebraic tail point.

Thus:

\[
\boxed{
\text{pointwise completion portability: APPLICABLE in the balanced-growth closed subclass.}
}
\]

For the unequal-growth class, pointwise portability is not the problem. The missing input is the exact algebraic lift itself.

## 20. Completion-sign contradiction for the newly closed class

Assume now:

- the system is genuinely aperiodic;
- it lies in the expanding reducible T21 class;
- after T18 reduction it satisfies the balanced-growth lifting interface;
- a positive integer anchor exists:
  \[
  H=N\in\mathbb Z_{>0}.
  \]

Then:

1. T3 gives
   \[
   \beta\le\lambda;
   \]
2. T21 gives
   \[
   \beta\in\overline{\mathbb Q};
   \]
3. transcendence of \(\lambda\) gives
   \[
   \beta<\lambda;
   \]
4. all canonical real tail series converge absolutely;
5. T18 restriction retains
   \[
   G_{Y,1}=S|_Y;
   \]
6. T21.3 supplies the positive expanding reduced grading;
7. balanced growth supplies the remaining T17/T20 global scale comparison;
8. the exact \(2\)-adic anchor relation lifts with
   \[
   Q(\alpha,\mathbf X)=P(\mathbf X);
   \]
9. T19 permits pointwise real evaluation;
10. exact scalar reconstruction gives
    \[
    S^{(\infty)}(q)+3N=0;
    \]
11. but
    \[
    S^{(\infty)}(q)>0
    \quad\text{and}\quad
    N>0.
    \]

Contradiction.

Therefore
\[
\boxed{
H\notin\mathbb Z_{>0}
}
\]
for the newly closed balanced-growth reducible variable-length class.

No positivity is inferred from signed reduced coordinates. Positivity is taken only from the reconstructed canonical scalar.

## 21. Positive rational and negative rational audit

The algebraicity theorem for \(\beta\) is intrinsic to the recursive system.

The inequality
\[
\beta\le\lambda
\]
used above is not intrinsic. It comes from the hypothetical realized positive integer Collatz anchor through T3.

Therefore T21 does not automatically exclude an arbitrary abstract
\[
H\in\mathbb Q_{>0}.
\]

For any balanced-growth system in which one independently proves the intrinsic strict inequality
\[
\beta<\lambda,
\]
the same lifting and sign proof excludes every positive rational \(H\).

Thus:

- positive integer anchor exclusion: proved in the balanced-growth closed subclass;
- positive rational noninteger exclusion: conditional on independently known real subcriticality;
- negative rational values: remain unexcluded and are not Collatz counterexamples.

## 22. T2 bounded-\(R_m\) consequence

Under the inherited T2 finite-alphabet anchoring hypotheses, bounded \(R_m\) would produce an ordinary positive integer anchor.

The balanced-growth reducible T21 theorem excludes a genuinely aperiodic such anchor.

Therefore
\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]
for the newly closed balanced-growth reducible variable-length class.

For a general unequal-growth reducible system, scalar convergence is now proved but the exact lifting theorem remains open, so T21 does not promote a bounded-\(R_m\) periodicity theorem there.

## 23. Periodicity-Conjecture boundary after T21

| Recursive class | Status after T21 |
|---|---|
| Finite abelian translations | Closed by T11 |
| Finite nonabelian translations | Closed by T12 |
| Balanced one-variable finite-kernel systems | Closed by T13 |
| Primitive dominant multivariate systems | Closed by T16 |
| T17 stable-image systems | Closed; subsumed by T18 |
| T18 orbit-closure-reduced \(k\)-uniform stable-image systems | Exact lifting closed |
| T19 nonprimitive \(k\)-uniform systems | Positive-integer anchor route closed |
| T20 primitive growing variable-length systems | Positive-integer anchor route closed |
| Expanding reducible variable-length pure-morphic systems: ordinary-prefix limsup | **NEW: algebraic endpoint theorem closed by T21** |
| Expanding reducible variable-length T18-reduced systems: positive grading | **NEW: universal increment grading closed by T21** |
| Balanced-growth reducible variable-length T18-reduced systems | **NEW: positive-integer anchor route closed by T21** |
| Unequal-growth reducible variable-length T18-reduced systems | Scalar convergence and grading proved; exact multiscale lifting open |
| General morphic presentations with erasing/bounded letters not reduced to the T21 class | Open |
| Arbitrary automatic/morphic parity languages | Open |
| Full Periodicity Conjecture | Open |

The full Periodicity Conjecture is not solved.

## 24. Cobham, López–Stoll, and Brechler

**Cobham:** not applicable. T21 uses a morphic prefix automaton and no second multiplicatively independent automatic base.

**López–Stoll:** not load-bearing. No density shortcut or direct complex-to-\(p\)-adic transfer is used.

**Brechler:** rechecked on 2026-10-04. arXiv:2607.24877 remains version 1 and current indexing still labels it a preprint. No journal publication was found in the fresh check. It remains non-load-bearing.

## 25. Literature checkpoint

The load-bearing external prefix result is the Dumont–Thomas prefix numeration theorem in the form recorded by:

- Victor Marsault and Jacques Sakarovitch, “The signature of rational languages,” Theoretical Computer Science 658 (2017), 216–234, DOI 10.1016/j.tcs.2016.04.023. Their Theorem 39 and Corollaries 40–41 give the exact accepted-prefix representation
  \[
  \rho_\sigma([p_k]\cdots[p_0])
  =
  \sigma^k(p_k)\cdots p_0
  \]
  and uniqueness with a nonempty leading digit.

Context only:

- Kalle Saari, “On the Frequency of Letters in Morphic Sequences,” CSR 2006, LNCS 3967, 334–345: incidence-matrix criterion for existence of ordinary letter frequencies.
- Shuo Li, “Letter frequency vs factor frequency in pure morphic words,” Advances in Applied Mathematics 164 (2025), 102834: if all letter frequencies exist in a pure morphic word, all factor frequencies exist.
- Samuel Nicolay and Michel Rigo, “About frequencies of letters in generalized automatic sequences,” Theoretical Computer Science 374 (2007), 25–40: explicit generalized-automatic examples with no ordinary letter frequency and continuous periodic asymptotic oscillation. This is consistent with T21: the cluster interval can be nontrivial even though its endpoints are algebraic.
- Lustig–Uyanik reducible Perron-Frobenius theory remains inherited from T20 for substituted-block asymptotics.

No literature theorem was used to promote the new algebraic limsup result without proof.

## 26. Explicit word, candidate, and counterexample audit

No explicit genuinely aperiodic positive-integer anchored word was found.

No positive Collatz starting integer was produced.

No candidate trajectory was run.

No unbounded orbit was found.

No counterexample to Collatz was claimed.

No nontrivial finite cycle was investigated.

The theorem is an exclusion/obstruction theorem for a recursive language class, not a root-objective success.

## 27. Compute decision

No new scientific starts are justified.

No substitution enumeration was performed.

No finite residue optimization was performed.

No carry optimization was performed.

No exponent-code search was performed.

No generator or sampling distribution was introduced.

No CPU campaign was run.

No GPU work was run.

No cloud, cluster, distributed, or volunteer computation is justified.

Only exact symbolic theorem reasoning and literature verification were used.

docs/COMPUTE_BUDGET.md: **UNCHANGED**.

docs/METRIC_CATALOG.md: **UNCHANGED**.

## 28. Permanent T21 lessons

### T21-L1 — the leading Dumont–Thomas digit kills the feared moving higher-growth boundary

For a prolongable fixed point, the most significant nonempty prefix digit contains \(a_0\). Its \(k\)-fold substituted block therefore contains \(\sigma^k(a_0)\), the maximal reachable growth scale.

Do not model arbitrary pure-morphic prefixes as unconstrained concatenations of unrelated substituted blocks.

### T21-L2 — dominant polynomial corrections survive absolutely but cancel projectively

A leading
\[
k^e\rho^k
\]
factor is real and must be retained. In the normalized prefix ratio, top-offset blocks acquire the finite geometric weights
\[
\rho^{-r},
\]
while the common \(k^e\) factor cancels.

Do not call \(J^e\rho^J\) subleading.

### T21-L3 — nonexistence of a mean does not obstruct algebraic limsup endpoints

The prefix mean can oscillate on a continuum. The cluster set is an interval because successive Cesàro increments vanish. Nevertheless its two endpoints are finite-state discounted extrema and are algebraic.

Do not equate “frequency does not exist” with “limsup is arithmetically uncontrolled.”

### T21-L4 — reducible grading should be built from an orbit increment, not forced from one Perron vector

The row
\[
\mathbf1^TM^a(M^R-I)
\]
annihilates every complete orbit-relation character because the length exponent is constant on such a character. Deep expansion makes it positive on every positive generator.

This supplies a canonical reduced positive grading even when no strictly positive reducible left eigenvector exists.

### T21-L5 — grading and exact lifting remain distinct obligations

The increment grading closes support positivity and exponential support displacement.

It does not, by itself, certify the global \(S\)-unit height-versus-contraction step when surviving coordinates have unequal growth scales.

Do not promote scalar convergence plus grading to a universal T18 lift.

## 29. Exact next theorem-sized obligation

**CDM4-T22 — MULTISCALE REDUCIBLE TORIC RELATION-LIFTING / HEIGHT-FILTRATION AUDIT.**

Treat as closed:

- T20 exact endpoint and scalar transport;
- T21 algebraicity of
  \[
  \limsup A_n/n
  \]
  for every expanding nonerasing pure-morphic fixed point in scope;
- T21 strict scalar convergence under a hypothetical positive integer anchor;
- T21 universal post-orbit-closure positive increment grading.

The remaining question is:

> Given a T18-reduced expanding reducible variable-length system whose surviving positive generators have several distinct exponential-polynomial growth classes, can the T17/T18 exact relation-lifting theorem be extended by a multigraded or growth-filtration auxiliary-function argument, preserving
> \[
> Q(\alpha,\mathbf X)=P(\mathbf X),
> \]
> or is there a genuine \(S\)-unit height/contraction obstruction?

Required T22 focus:

1. stratify the reduced semigroup by growth class;
2. compare global algebraic height with classwise nonarchimedean contraction;
3. determine whether Corvaja–Zannier trapping survives without one common scale;
4. build a lexicographic/multigraded finite-codimensional support filtration if needed;
5. preserve T18 dense-coset reduction and regular-tail machinery;
6. keep scalar convergence separate from lifting;
7. run the completion-sign contradiction immediately for every newly lifted class.

No scientific compute is authorized.

## 30. Deliverable audit

This report states:

- inherited T20 theorem state;
- exact reducible variable-length obstruction attacked;
- class actually covered;
- reachable SCC/Frobenius structure;
- spectral radii and periods;
- equal-radius chains;
- polynomial/Jordan factors;
- exact length and valuation asymptotics;
- exact behavior of substituted-block ratios by inheritance;
- exact arbitrary-prefix decomposition;
- ordinary prefix-mean accumulation set;
- criterion for existence of the ordinary mean;
- algebraicity and finite-set origin of the limsup;
- positive-integer strictness below \(\log_2 3\);
- critical-case exclusion;
- zero-density treatment;
- unequal-growth treatment;
- dominant \(J^e\rho^J\) treatment;
- exact scalar-convergence implication;
- universal positive expanding reduced grading;
- balanced-growth exact lifting status;
- unequal-growth lifting status;
- exact specialization;
- harmless adjoining of \(1\);
- pointwise completion portability;
- completion-sign contradiction;
- positive-integer exclusion in the newly closed subclass;
- positive-rational boundary;
- negative-rational boundary;
- T2 bounded-\(R_m\) consequence;
- Periodicity-Conjecture boundary;
- Cobham status;
- López–Stoll status;
- fresh Brechler status;
- explicit-word/candidate/unbounded-orbit/counterexample status;
- compute decision;
- exact next theorem-sized obligation.

C — new recursive-language obstruction found
