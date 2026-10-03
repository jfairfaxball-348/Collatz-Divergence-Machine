# CDM4-T13 — Generic balanced finite-kernel regularity / completion-sign audit

**Date:** 2026-10-03  
**Authoritative input commit:** a7c2ce19d58a43843ce1a1eb992d5debe0c83762  
**Session type:** theorem / exact finite-kernel / Mahler-regularity audit only  
**Scientific Collatz starts generated:** **0**  
**Scientific trajectories executed:** **0**  
**Substitution enumeration:** **NONE**  
**Finite residue / carry / exponent-code optimization:** **NONE**  
**CPU/GPU/cloud/distributed scientific work:** **NONE**  
**Explicit anchored aperiodic word found:** **NO**  
**Unbounded orbit found:** **NO**  
**Counterexample claimed:** **NO**

## 1. Executive result

T13 closes the entire **balanced one-variable finite-\(k\)-kernel Collatz class as a genuinely nonperiodic positive-integer anchoring route**, without assuming that the deterministic digit transitions are permutations, a group action, or regular at the original Collatz point.

The strongest requested regular-case statement is therefore proved and strengthened.

Let the exact true finite-kernel Collatz coefficient system be

\[
\mathbf F(z)=M(z)\mathbf F(z^k),
\qquad
M(z)=\sum_{r=0}^{k-1}z^rA_r,
\]

where the states are the distinct reachable \(k\)-kernel sequences of the exact positive Collatz block-constant sequence, and each \(A_r\) is the exact deterministic digit-transition matrix.

Three facts are decisive.

1. **Canonical singularity at \(z=0\) is not intrinsic arithmetic singularity.**  
   The matrix \(A_0=M(0)\) is the functional matrix of the digit-zero transition. It is invertible exactly when that transition is a permutation. In that case complete 2-adic orbit regularity follows immediately. If \(A_0\) is singular, however, the canonical determinant can still be nonzero away from \(0\), and the complete Collatz orbit can still be regular. Thus \(A_0\) singular is not itself a surviving obstruction.

2. **Identically singular canonical systems are rational-linearly reducible while preserving the exact Collatz coordinate.**  
   Let
   \[
   d=\dim_{\mathbb Q(z)}
   \operatorname{span}_{\mathbb Q(z)}
   \{F_0,\ldots,F_{m-1}\}.
   \]
   Choose a basis
   \[
   \mathbf G=(G_1,\ldots,G_d)^T
   \]
   from the original state series with
   \[
   G_1=F_0.
   \]
   Then
   \[
   \mathbf F(z)=C(z)\mathbf G(z)
   \]
   for an exact rational matrix \(C(z)\), and
   \[
   \mathbf G(z)=A(z)\mathbf G(z^k)
   \]
   for an exact
   \[
   A(z)\in\operatorname{GL}_d(\mathbb Q(z)).
   \]
   If the induced square matrix were singular, a nonzero left null row would give a rational-function linear relation among the chosen basis functions, a contradiction. In particular,
   \[
   \det M(z)\equiv0
   \]
   implies that the canonical presentation was rational-linearly nonminimal, even when all canonical kernel states are distinct as sequences.

3. **Every invertible rational one-variable Mahler system is regular on a sufficiently deep tail of the Collatz Mahler orbit.**  
   Put
   \[
   W=\frac{2^B}{3^k},
   \qquad
   \alpha_j=W^{k^j}.
   \]
   Since
   \[
   0<|W|_2<1,
   \]
   the nonzero points \(\alpha_j\) are pairwise distinct. An invertible rational matrix \(A(z)\) and its inverse have only finitely many nonzero poles. Its determinant has only finitely many nonzero zeros. The rational reconstruction matrix \(C(z)\) likewise has only finitely many nonzero poles. Therefore there exists \(J\) such that
   \[
   \alpha=\alpha_J
   \]
   is a regular point for the complete future Mahler orbit of the minimal system and \(C(\alpha)\) is defined.

This means that **complete regularity at the original point \(W\) is sufficient but not necessary for the T12 sign argument**.

The exact anchor relation can be transported forward without inverting any early canonical matrix. If

\[
P_J(W)
=
M(W)M(W^k)\cdots M(W^{k^{J-1}}),
\]

then

\[
F_0(W)
=
e_0^TP_J(W)C(\alpha)\mathbf G(\alpha).
\]

A hypothetical positive anchor \(H=N>0\) therefore gives a homogeneous linear value relation at the regular tail point \(\alpha\).

T3 and balance force

\[
\frac Bk<\log_2 3,
\qquad
0<W<1
\]

in the ordinary real absolute value for every genuinely nonperiodic positive anchor.

Adamczewski–Bell–Smertnig Theorem 4.3 then lifts the transported 2-adic value relation at \(\alpha\) to a functional relation with the **same specialization**. Embedding that functional identity into the real completion and evaluating at \(\alpha\) reconstructs the original exact positive coefficient series

\[
F_0^{(\infty)}(W)>0,
\]

while the lifted anchor relation requires

\[
F_0^{(\infty)}(W)=-3^kN<0.
\]

Contradiction.

Hence

\[
\boxed{
\text{no genuinely nonperiodic balanced finite-\(k\)-kernel family has }
H\in\mathbb Z_{>0}.
}
\]

The theorem includes canonical systems with singular \(M(0)\), canonical systems with finitely many early singular Mahler iterates, and canonical systems with \(\det M\equiv0\). No singular balanced finite-kernel subclass survives as a positive-anchor route after exact rational-linear reduction and tail transport.

Combining with T2,

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\]

for the complete balanced finite-\(k\)-kernel class covered here.

The stronger universal conclusion

\[
H\notin\mathbb Q
\]

is **not** proved. In a subcritical family \(0<W<1\), any rational exceptional inverse value that survives lies in

\[
\mathbb Q\cap\mathbb Z_2
\]

and has negative ordinary real sign. T13 does not exclude a negative rational or negative integer.

No scientific compute follows.

---

## 2. Authority, inherited T12 state, and scope

T13 began from the exact repository commit named above. The required governance, audit, metric, basin, T1–T12, T3 manifest, and T3 symbolic-check files were read before promotion of any T13 theorem. The repository, not conversational memory, was treated as authoritative.

The following T12/T10 facts are inherited and not reproved.

- Adamczewski–Bell–Smertnig, JEMS 25 (2023), Theorems 4.2–4.3, apply at arbitrary places of number fields.
- For a linear one-variable \(k\)-Mahler system with invertible rational matrix and a regular algebraic point \(\alpha\) satisfying \(0<|\alpha|_v<1\), homogeneous algebraic value relations lift to homogeneous functional relations with the exact specialization preserved.
- T12 already closes all balanced finite-group translation systems, including the nonabelian case, as positive-anchor routes.
- T11 already closes the finite-abelian translation branch more strongly by transcendence after rational-character removal.
- T3 supplies the distinct-positive-orbit height bound used to force subcriticality for a genuinely aperiodic positive anchor.
- T2 supplies the exact anchoring implication and the positive-orbit boundedness/eventual-periodicity equivalence.
- T5 supplies the exact balanced inverse normalization and positivity of the exact Collatz block constants.
- Cobham remains unavailable without a second multiplicatively independent automatic base for the same relevant sequence.
- López–Stoll remains non-load-bearing.

T13 does **not** reopen finite-group representation theory, scalar Walsh collisions, p-adic lifting literature, substitution enumeration, or any scientific trajectory search.

The class considered here is the exact balanced one-variable finite-kernel class arising from the T5 reduction.

Balance means that every substituted length-\(k\) valuation block has the same total valuation \(B\). The exact one-variable point is

\[
W=\frac{2^B}{3^k}.
\]

Use the integer block-constant normalization. If \(c_n\) is the exact positive Collatz block constant at automatic block position \(n\), then the root series is

\[
F_0(z)=\sum_{n\ge0}c_nz^n,
\qquad
c_n\in\mathbb Z_{>0},
\]

and

\[
\boxed{
H=-\frac{F_0(W)}{3^k}\in\mathbb Z_2.
}
\tag{1}
\]

The finite alphabet of block constants makes every kernel-state series bounded-coefficient and therefore convergent in both completions whenever \(|z|<1\) in the relevant absolute value.

---

## 3. Exact true finite-kernel state set

Let

\[
c=(c_n)_{n\ge0}
\]

be the actual exact Collatz block-constant sequence, not a formal automaton state labeling.

Its true \(k\)-kernel is

\[
\mathcal K_k(c)
=
\left\{
(c_{k^en+s})_{n\ge0}:
e\ge0,\ 0\le s<k^e
\right\}.
\tag{2}
\]

Assume this set is finite and enumerate its **distinct sequences**

\[
c^{(0)},c^{(1)},\ldots,c^{(m-1)},
\qquad
c^{(0)}=c.
\tag{3}
\]

Then

\[
\boxed{
m=|\mathcal K_k(c)|
}
\tag{4}
\]

is the exact true finite-kernel cardinality.

This is already the exact reachable/output quotient.

- Every state is reachable from the root \(c^{(0)}\) by a finite base-\(k\) digit word, by definition of the \(k\)-kernel.
- Two states are output-equivalent exactly when the complete kernel sequences are equal; duplicates have already been identified in (3).
- No zero-output state occurs in the canonical Collatz state set because every \(c_n\) is a positive exact block constant.
- No formal automaton state that is unreachable from the root survives.
- No additional group, normality, permutation, or semigroup quotient structure is assumed.

For each digit

\[
0\le r<k
\]

define the exact transition

\[
\delta_r(i)=j
\]

by

\[
c^{(i)}_{kn+r}=c^{(j)}_n
\qquad(n\ge0).
\tag{5}
\]

The exact transition monoid is

\[
\boxed{
\mathcal T=\langle\delta_0,\ldots,\delta_{k-1}\rangle
\le\operatorname{End}(\{0,\ldots,m-1\}).
}
\tag{6}
\]

It may be much smaller than a formal automaton transition monoid and need not be a group.

For each state define

\[
F_i(z)=\sum_{n\ge0}c^{(i)}_nz^n.
\tag{7}
\]

The prescribed Collatz output is exactly the root coordinate

\[
\boxed{
F_0(z)=e_0^T\mathbf F(z).
}
\tag{8}
\]

No signed representation coordinate is substituted for this scalar.

---

## 4. Exact canonical Mahler matrix

Let \(A_r\) be the deterministic transition matrix

\[
(A_r)_{ij}
=
\begin{cases}
1,&\delta_r(i)=j,\\
0,&\text{otherwise}.
\end{cases}
\tag{9}
\]

Every row of every \(A_r\) has exactly one \(1\).

The exact coefficient identities (5) give

\[
F_i(z)
=
\sum_{r=0}^{k-1}z^rF_{\delta_r(i)}(z^k).
\]

Thus

\[
\boxed{
\mathbf F(z)=M(z)\mathbf F(z^k),
\qquad
M(z)=\sum_{r=0}^{k-1}z^rA_r.
}
\tag{10}
\]

### Canonical exact data

- coefficient field:
  \[
  \mathbb Q;
  \]
- matrix entries:
  \[
  M(z)\in M_m(\mathbb Z[z]);
  \]
- system dimension:
  \[
  m=|\mathcal K_k(c)|;
  \]
- canonical rational-function rank:
  \[
  r_M=\operatorname{rank}_{\mathbb Q(z)}M(z);
  \]
- canonical determinant:
  \[
  D(z)=\det M(z)\in\mathbb Z[z];
  \]
- constant matrix:
  \[
  \boxed{M(0)=A_0;}
  \tag{11}
  \]
- row sum:
  \[
  M(z)\mathbf 1
  =
  (1+z+\cdots+z^{k-1})\mathbf1;
  \tag{12}
  \]
- prescribed scalar:
  \[
  F_0=e_0^T\mathbf F.
  \]

The determinant polynomial and rank are exact symbolic objects of the true kernel. T13 does not replace them by formal-state counts or finite numerical determinant samples.

There is a second dimension that is load-bearing below:

\[
\boxed{
d=
\dim_{\mathbb Q(z)}
\operatorname{span}_{\mathbb Q(z)}
\{F_0,\ldots,F_{m-1}\}.
}
\tag{13}
\]

Distinct kernel sequences need not be linearly independent over \(\mathbb Q(z)\). Thus \(m\) and \(d\) must not be conflated.

Because every true kernel state is reachable from \(F_0\) by iterated digit sections, the root sequence is cyclic at the sequence/kernel level. The rational Mahler-linear cyclic space generated by the root has dimension \(d\).

---

## 5. Exact structure of \(A_0\)

The matrix \(A_0\) is the functional matrix of the deterministic map

\[
\delta_0:\{0,\ldots,m-1\}\to\{0,\ldots,m-1\}.
\]

Its functional graph is a disjoint union of directed cycles with transient trees feeding the cycles.

For every \(n\ge1\),

\[
\boxed{
\operatorname{rank}A_0^n
=
|\operatorname{im}\delta_0^n|.
}
\tag{14}
\]

The ranks therefore stabilize exactly when the images of the digit-zero map stabilize. The stable image is the union of the cycle vertices of the functional graph.

### 5.1 Invertible \(A_0\)

Because \(A_0\) has exactly one \(1\) in each row,

\[
\boxed{
A_0\text{ invertible}
\Longleftrightarrow
\delta_0\text{ is bijective}
\Longleftrightarrow
A_0\text{ is a permutation matrix}.
}
\tag{15}
\]

This gives a broad sufficient condition for complete canonical orbit regularity.

At a place \(v\mid2\),

\[
M(W^{k^j})
\equiv A_0
\pmod{\mathfrak m_v}
\]

for every \(j\ge0\). If \(A_0\) is a permutation matrix,

\[
\det A_0=\pm1,
\]

hence

\[
\boxed{
\det M(W^{k^j})\in\mathcal O_v^\times
\quad\forall j\ge0.
}
\tag{16}
\]

Thus the T12 finite-group unit argument extends immediately to every exact deterministic finite-kernel system whose digit-zero map is a permutation, even when the other digit maps are not permutations and no group acts.

### 5.2 Idempotent \(A_0\)

The condition

\[
A_0^2=A_0
\]

is equivalent to

\[
\delta_0^2=\delta_0.
\]

Every state in the image is then a fixed point of \(\delta_0\), and

\[
\operatorname{rank}A_0=|\operatorname{im}\delta_0|.
\]

Unless \(A_0=I\), it is singular. Idempotence by itself says nothing about whether

\[
\det M(W^{k^j})
\]

vanishes.

### 5.3 Nilpotent \(A_0\)

A nonempty deterministic row-one matrix cannot be nilpotent:

\[
A_0\mathbf1=\mathbf1.
\]

Thus \(1\) is always an eigenvalue and

\[
\boxed{
A_0\text{ nilpotent is impossible}.
}
\tag{17}
\]

### 5.4 Synchronizing digit zero

If \(\delta_0^s\) is constant for some \(s\), then

\[
\operatorname{rank}A_0^s=1.
\]

This produces maximal constant-term collapse but does not imply intrinsic Mahler singularity away from \(0\).

### 5.5 Why transient elimination from \(A_0\) alone is unsafe

A coordinate subspace supported on the stable image of \(\delta_0\) need not be invariant under the other digit maps \(\delta_r\).

Therefore:

- quotienting by \(\ker A_0^n\);
- deleting digit-zero transient states;
- restricting to the eventual image of \(A_0\);

is valid only when the resulting subspace/quotient is invariant under the full Mahler action and the prescribed coordinate is preserved.

T13 does not use such a shortcut. The universal safe reduction is the rational-linear reduction in Section 8.

---

## 6. Complete canonical Mahler-orbit regularity classification

The canonical system is polynomial, so it has no finite poles.

The exact level-2 regularity condition at the original point is

\[
\boxed{
D(W^{k^j})\ne0
\quad\forall j\ge0.
}
\tag{18}
\]

This is necessary and sufficient for canonical complete-orbit regularity.

### 6.1 If \(D\not\equiv0\)

A nonzero polynomial has only finitely many nonzero roots.

The Mahler orbit

\[
W,\ W^k,\ W^{k^2},\ldots
\]

consists of pairwise distinct nonzero points because

\[
0<|W|_2<1.
\]

Therefore

\[
\boxed{
D\not\equiv0
\Longrightarrow
D(W^{k^j})\ne0
\text{ for all sufficiently large }j.
}
\tag{19}
\]

Thus a nonzero canonical determinant permits only **finitely many early singular iterates**.

Equivalently, canonical all-depth regularity fails exactly when a nonzero root of \(D\) lies on the orbit

\[
\{W^{k^j}:j\ge0\}.
\tag{20}
\]

This is an exact all-depth theorem, not a finite numerical determinant check.

If \(A_0\) is singular and \(D\not\equiv0\), then

\[
D(0)=0
\]

and one may write

\[
D(z)=z^su(z),
\qquad
s\ge1,\quad u(0)\ne0.
\tag{21}
\]

Equation (21) explains the constant-term singularity but does **not** itself prove a quotient preserving the Collatz coordinate. The load-bearing conclusion is only eventual nonsingularity (19).

### 6.2 If \(D\equiv0\)

The canonical system is singular at every point.

This is not yet an intrinsic singularity of the vector of Mahler functions. Section 7 proves immediately that it forces rational-function linear dependence among the canonical state series.

### 6.3 The three regularity levels

T13 keeps separate:

1. \(M(0)=A_0\) invertible;
2. \(M(W^{k^j})\) invertible for every \(j\ge0\);
3. existence of a useful equivalent/minimal Mahler presentation that is regular at the point where relation lifting is applied.

The implications are not equivalences.

T13 proves something slightly different and stronger for the project objective:

> every exact finite-kernel system has a rational-linearly minimal invertible presentation, and that presentation is regular on a sufficiently deep Mahler tail.

T13 does **not** claim that one can always rationally gauge-desingularize the minimal presentation so that it is regular already at the original point \(W\).

That stronger original-point desingularization statement remains unnecessary and unproved.

---

## 7. Tiny exact fixtures: why state minimization and Mahler regularity differ

The following deterministic automata are theorem-hypothesis fixtures only. They are **not Collatz substitutions, candidates, or scientific starts**.

### 7.1 Singular \(A_0\) with regular nonzero determinant

Take \(k=2\), three true states, and digit transitions

\[
\delta_0=(1\mapsto1,\ 2\mapsto1,\ 3\mapsto3),
\]

\[
\delta_1=(1\mapsto2,\ 2\mapsto3,\ 3\mapsto3).
\]

With two distinct finite outputs \(a\ne b\), take state-zero outputs

\[
(a,a,b),
\]

which satisfy the necessary digit-zero consistency.

All three states are reachable from state \(1\), and they are distinct as complete output sequences: states \(2\) and \(3\) differ at \(n=0\), while states \(1\) and \(2\) differ after digit \(1\).

The exact matrices are

\[
A_0=
\begin{pmatrix}
1&0&0\\
1&0&0\\
0&0&1
\end{pmatrix},
\qquad
A_1=
\begin{pmatrix}
0&1&0\\
0&0&1\\
0&0&1
\end{pmatrix},
\]

so

\[
M(z)=
\begin{pmatrix}
1&z&0\\
1&0&z\\
0&0&1+z
\end{pmatrix}
\]

and

\[
\boxed{
\det M(z)=-z(1+z).
}
\tag{22}
\]

Thus \(M(0)\) is singular, but \(M(\alpha)\) is invertible for every nonzero \(\alpha\) in the 2-adic open unit disc.

This kills the inference

\[
M(0)\text{ singular}
\Longrightarrow
\text{canonical Mahler orbit singular}.
\]

### 7.2 An exactly minimized state automaton can still have \(D\equiv0\)

Take \(k=2\), four reachable pairwise-distinct states with

\[
\delta_0=(1,1,2,4),
\qquad
\delta_1=(2,4,3,3),
\]

and state-zero outputs

\[
(a,a,a,b),
\qquad
a\ne b.
\]

The digit-zero consistency is exact, all four states are reachable from state \(1\), and standard exact partition refinement separates all four complete state sequences.

The canonical matrix is

\[
M(z)=
\begin{pmatrix}
1&z&0&0\\
1&0&0&z\\
0&1&z&0\\
0&0&z&1
\end{pmatrix},
\]

with

\[
\boxed{\det M(z)\equiv0.}
\tag{23}
\]

Indeed

\[
(1,-1,-z,z)M(z)=0.
\tag{24}
\]

Hence the exact state functions satisfy

\[
\boxed{
F_1-F_2-zF_3+zF_4=0.
}
\tag{25}
\]

This fixture shows that equality/minimization of kernel states does not imply rational-function linear minimality.

The universal reduction below is therefore genuinely needed.

---

## 8. Theorem T13.1 — identically singular canonical systems are reducible

Assume

\[
\det M(z)\equiv0.
\]

Then there is a nonzero rational row vector

\[
q(z)\in\mathbb Q(z)^{1\times m}
\]

such that

\[
q(z)M(z)=0.
\]

Using the exact Mahler equation,

\[
q(z)\mathbf F(z)
=
q(z)M(z)\mathbf F(z^k)
=
0.
\]

Therefore

\[
\boxed{
\det M\equiv0
\Longrightarrow
F_0,\ldots,F_{m-1}
\text{ are linearly dependent over }\mathbb Q(z).
}
\tag{26}
\]

In particular, an identically singular canonical presentation is **never rational-linearly minimal**.

This theorem answers the T13 “singular implies reducible” target in the precise sense needed by the project.

It does not say that two kernel states are equal. The reduction can be a signed rational-function relation such as (25).

---

## 9. Theorem T13.2 — exact rational-linear minimalization preserving \(F_0\)

Let

\[
V=
\operatorname{span}_{\mathbb Q(z)}
\{F_0,\ldots,F_{m-1}\}
\]

and let

\[
d=\dim_{\mathbb Q(z)}V.
\]

Because \(F_0\) is a nonzero positive-coefficient series, it can be extended to a basis of \(V\) chosen from the original state functions:

\[
\mathbf G(z)
=
(G_1(z),\ldots,G_d(z))^T,
\qquad
G_1=F_0.
\tag{27}
\]

There is an exact rational reconstruction matrix

\[
C(z)\in\operatorname{Mat}_{m\times d}(\mathbb Q(z))
\]

with

\[
\boxed{
\mathbf F(z)=C(z)\mathbf G(z).
}
\tag{28}
\]

Let \(S\) be the constant selector matrix that extracts the chosen basis coordinates from \(\mathbf F\), so

\[
\mathbf G=S\mathbf F,
\qquad
SC=I_d.
\tag{29}
\]

Substituting (28) into the canonical Mahler equation gives

\[
\mathbf G(z)
=
S M(z) C(z^k)\mathbf G(z^k).
\]

Define

\[
\boxed{
A(z)=S M(z)C(z^k).
}
\tag{30}
\]

Then

\[
\boxed{
\mathbf G(z)=A(z)\mathbf G(z^k).
}
\tag{31}
\]

### Invertibility

Suppose \(A(z)\) were singular over \(\mathbb Q(z)\). Then there would be a nonzero row

\[
u(z)\in\mathbb Q(z)^{1\times d}
\]

with

\[
u(z)A(z)=0.
\]

Equation (31) would give

\[
u(z)\mathbf G(z)=0,
\]

contradicting the choice of \(G_1,\ldots,G_d\) as a \(\mathbb Q(z)\)-basis.

Therefore

\[
\boxed{
A(z)\in\operatorname{GL}_d(\mathbb Q(z)).
}
\tag{32}
\]

This is an exact lower-dimensional regular Mahler **module presentation** whenever \(d<m\).

The prescribed Collatz scalar survives in the strongest possible way:

\[
\boxed{
G_1=F_0.
}
\tag{33}
\]

No scalar first-order quotient is asserted. The minimal rank \(d\) may exceed one.

---

## 10. Theorem T13.3 — eventual regularity of every rationally minimal system

Let

\[
A(z)\in\operatorname{GL}_d(\mathbb Q(z))
\]

be the minimal matrix from Section 9.

Let \(\Sigma_A\subset\overline{\mathbb Q}^{\times}\) be the finite set of nonzero points at which \(A\) or \(A^{-1}\) is not defined.

Let \(\Sigma_C\subset\overline{\mathbb Q}^{\times}\) be the finite set of nonzero poles of the reconstruction matrix \(C(z)\).

Set

\[
\Sigma=\Sigma_A\cup\Sigma_C.
\]

The Collatz Mahler orbit points

\[
\alpha_j=W^{k^j}
\]

are nonzero and pairwise distinct. Therefore the orbit meets the finite set \(\Sigma\) only finitely many times.

Choose \(J\) strictly beyond every such hit and put

\[
\boxed{
\alpha=W^{k^J}.
}
\tag{34}
\]

Then:

1. \(C(\alpha)\) is defined;
2. for every \(n\ge0\),
   \[
   A(\alpha^{k^n})
   \]
   and
   \[
   A^{-1}(\alpha^{k^n})
   \]
   are defined;
3. since
   \[
   0<|W|_2<1,
   \]
   one has
   \[
   0<|\alpha|_2<1.
   \]

Hence

\[
\boxed{
\alpha
\text{ is a regular algebraic point for the complete future orbit of the minimal system.}
}
\tag{35}
\]

A pole or zero at \(z=0\) causes no problem: no nonzero Mahler iterate equals \(0\).

This theorem is the exact singularity-removal mechanism needed by T13.

It is **tail regularization**, not a claim that the same presentation is regular at the original \(W\).

---

## 11. Transporting the exact Collatz coordinate through early singularities

Iterate the canonical polynomial equation \(J\) times.

Define

\[
P_J(z)
=
M(z)M(z^k)\cdots M(z^{k^{J-1}}).
\tag{36}
\]

Then

\[
\mathbf F(z)=P_J(z)\mathbf F(z^{k^J}).
\]

At \(z=W\),

\[
\mathbf F(W)=P_J(W)\mathbf F(\alpha).
\tag{37}
\]

No inverse matrix appears. Therefore (37) remains valid even if one or more early canonical matrices

\[
M(W),M(W^k),\ldots,M(W^{k^{J-1}})
\]

are singular.

Using the reconstruction (28) at the regular tail point,

\[
\mathbf F(\alpha)=C(\alpha)\mathbf G(\alpha).
\]

Thus

\[
F_0(W)
=
e_0^TP_J(W)C(\alpha)\mathbf G(\alpha).
\]

Define the exact algebraic, in fact rational, row

\[
\boxed{
\ell
=
e_0^TP_J(W)C(\alpha)
\in\mathbb Q^{1\times d}.
}
\tag{38}
\]

Then

\[
\boxed{
F_0(W)=\ell\,\mathbf G(\alpha).
}
\tag{39}
\]

This is the load-bearing coordinate-preservation identity.

Early canonical singularity can lower the particular row \(\ell\), but it cannot destroy the equality. If \(\ell=0\), then (39) would force \(F_0(W)=0\). This is impossible for the exact Collatz block-constant series: its constant coefficient is odd, since every block constant has leading term \(3^{k-1}\) and all later terms are even, while \(v_2(W)=B>0\). Hence
\[
F_0(W)\equiv F_0(0)\equiv1\pmod2
\]
after reduction modulo the 2-adic maximal ideal. Thus \(F_0(W)\) is a 2-adic unit and the transported coordinate is nontrivial.

---

## 12. Theorem T13.4 — generic finite-kernel completion-sign obstruction

### Statement

Let a balanced one-variable finite-\(k\)-kernel Collatz family have exact positive block-constant root series \(F_0\) and inverse value (1).

If its valuation/parity language is genuinely nonperiodic, then

\[
\boxed{
H\notin\mathbb Z_{>0}.
}
\tag{40}
\]

No hypothesis is required that:

- \(A_r\) are permutations;
- the digit transitions form a group;
- \(A_0=I\);
- \(A_0\) is invertible;
- the canonical determinant is nonzero;
- the canonical point \(W\) is regular;
- the system is regular singular.

### Proof

Assume for contradiction that

\[
H=N\in\mathbb Z_{>0}.
\]

By the exact inverse normalization,

\[
F_0(W)+3^kN=0
\tag{41}
\]

in the 2-adic completion.

#### Step 1 — subcriticality

Let \(A_m\) be the accumulated accelerated valuation sum of the hypothetical realized positive orbit.

Balance gives the substitution-level mean

\[
\frac Bk.
\]

T3's distinct-positive-orbit height theorem gives

\[
\limsup_{m\to\infty}\frac{A_m}{m}
\le\log_2 3.
\]

Hence

\[
\frac Bk\le\log_2 3.
\]

Equality would imply

\[
2^B=3^k,
\]

impossible for positive integers \(B,k\). Thus

\[
\boxed{
\frac Bk<\log_2 3
}
\tag{42}
\]

and

\[
\boxed{
0<W=\frac{2^B}{3^k}<1
}
\tag{43}
\]

in the ordinary real absolute value.

Nonperiodicity is used here to invoke T3's distinct-orbit height bound.

#### Step 2 — exact rational-linear minimization

Apply Theorem T13.2 and choose the basis \(\mathbf G\) with

\[
G_1=F_0.
\]

Then

\[
\mathbf G(z)=A(z)\mathbf G(z^k),
\qquad
A(z)\in\operatorname{GL}_d(\mathbb Q(z)).
\]

#### Step 3 — move to a regular Mahler tail

Apply Theorem T13.3 and choose \(J\) so that

\[
\alpha=W^{k^J}
\]

is regular for the complete future orbit of the minimal system and \(C(\alpha)\) is defined.

Equation (39) transports (41) to

\[
\boxed{
\ell\,\mathbf G(\alpha)+3^kN=0.
}
\tag{44}
\]

#### Step 4 — adjoin the constant function

Put

\[
\widetilde{\mathbf G}(z)
=
\begin{pmatrix}
1\\
\mathbf G(z)
\end{pmatrix}.
\]

It satisfies the invertible rational Mahler system

\[
\widetilde{\mathbf G}(z)
=
\begin{pmatrix}
1&0\\
0&A(z)
\end{pmatrix}
\widetilde{\mathbf G}(z^k).
\tag{45}
\]

The point \(\alpha\) is algebraic and regular, with

\[
0<|\alpha|_2<1.
\]

Define the homogeneous linear polynomial

\[
P(X_0,X_1,\ldots,X_d)
=
3^kN\,X_0+\ell(X_1,\ldots,X_d)^T.
\tag{46}
\]

Equation (44) is exactly

\[
P(\widetilde{\mathbf G}(\alpha))=0.
\]

#### Step 5 — apply Adamczewski–Bell–Smertnig exactly

Adamczewski–Bell–Smertnig Theorem 4.3 supplies a homogeneous degree-one functional relation

\[
Q(z,\widetilde{\mathbf X})
\]

such that

\[
Q(z,\widetilde{\mathbf G}(z))=0
\tag{47}
\]

as a functional identity and, crucially,

\[
\boxed{
Q(\alpha,\widetilde{\mathbf X})
=
P(\widetilde{\mathbf X}).
}
\tag{48}
\]

This exact specialization is the bridge between completions.

#### Step 6 — evaluate the lifted identity in the real completion

The functions \(G_i\) were chosen from the original finite-kernel state series. Their coefficients are drawn from the same finite positive Collatz block-constant alphabet. Therefore they converge absolutely for every real \(|z|<1\).

The reconstruction identities and the iterated canonical equation are rational/formal identities. Since \(C(\alpha)\) is defined and \(0<\alpha<1\),

\[
\ell\,\mathbf G^{(\infty)}(\alpha)
=
F_0^{(\infty)}(W).
\tag{49}
\]

Embed the coefficient number field of the lifted relation into \(\mathbb C\). The specialization coefficients in (48) are rational, so the embedding fixes them.

Evaluating (47) at the ordinary real point \(\alpha\) and using (48) gives

\[
F_0^{(\infty)}(W)+3^kN=0.
\tag{50}
\]

But every coefficient of \(F_0\) is a positive exact Collatz block constant and \(0<W<1\). Hence

\[
\boxed{
F_0^{(\infty)}(W)>0.
}
\tag{51}
\]

Also

\[
3^kN>0.
\]

Equation (50) is impossible.

Therefore

\[
H\notin\mathbb Z_{>0}.
\]

QED.

---

## 13. Why this is not an illicit cross-completion inference

The argument does **not** claim that the raw 2-adic and real sums have the same value because they use the same rational coefficients.

The chain is:

1. assume a 2-adic value relation;
2. transport it exactly to a regular 2-adic Mahler tail;
3. use a completion-correct theorem to lift the value relation to a functional identity;
4. use the theorem's exact specialization property;
5. embed the algebraic functional identity into the real completion;
6. reconstruct the original positive scalar series there.

The bridge is the lifted functional identity.

This is exactly the T12 logic, now made independent of canonical regularity at the first Mahler iterate.

---

## 14. Positivity survives every reduction

The minimal vector \(\mathbf G\), the reconstruction matrix \(C(z)\), and the transported row \(\ell\) can contain signed rational functions.

T13 therefore never infers positivity from those coordinates.

Instead:

- the basis is chosen to contain the exact root series
  \[
  G_1=F_0;
  \]
- the original canonical state vector is reconstructed exactly by
  \[
  \mathbf F=C\mathbf G;
  \]
- the transported value is reconstructed exactly by
  \[
  \ell\mathbf G(\alpha)=F_0(W);
  \]
- in the real completion the same identities reconstruct
  \[
  \ell\mathbf G^{(\infty)}(\alpha)=F_0^{(\infty)}(W);
  \]
- only the underlying exact root series is assigned a sign.

Thus the sign argument is immune to signed representation coordinates.

---

## 15. What the singular obstruction actually is

T13 distinguishes four phenomena.

### 15.1 Singular \(M(0)\)

This is only the failure of the digit-zero map to be a permutation. It may coexist with complete canonical orbit regularity.

### 15.2 A finite early orbit singularity

If

\[
D\not\equiv0
\]

but

\[
D(W^{k^j})=0
\]

for some \(j\), the canonical presentation is not regular at the original point. There can be only finitely many such depths. Forward transport across them requires no inverse and therefore preserves the anchor relation.

### 15.3 Identically singular canonical determinant

If

\[
D\equiv0,
\]

the canonical state series are rationally linearly dependent by Theorem T13.1. Rational-linear minimization removes this presentation singularity while preserving \(F_0\).

### 15.4 Intrinsic singularity after minimalization

For the one-variable finite-kernel systems covered here, no persistent nonzero-orbit obstruction remains.

The minimal matrix is rational and invertible. Its nonzero singular points form a finite set, so a sufficiently deep nonzero Mahler tail is regular.

Therefore:

\[
\boxed{
\text{there is no singular balanced finite-kernel subclass that survives as a positive-anchor route.}
}
\tag{52}
\]

This does **not** mean that the canonical presentation is regular at \(W\), nor that a rational gauge regular at \(W\) always exists.

---

## 16. Exact status of the requested desingularization questions

### Does \(\det M(z)\equiv0\)?

If yes, the canonical presentation is rational-linearly reducible by Theorem T13.1.

### Is the system nonminimal?

If \(\det M\equiv0\), **yes** in the rational Mahler-linear sense.

Even if \(\det M\not\equiv0\), the state functions can still have rational relations; Theorem T13.2 always reduces to the exact \(\mathbb Q(z)\)-span.

### Does the prescribed output survive?

**YES.** The basis is explicitly chosen with

\[
G_1=F_0.
\]

### Can transient coordinates be eliminated exactly?

Only when justified by the full Mahler action. T13 does not delete them merely from the functional graph of \(A_0\). The rational-linear minimization eliminates every exact rational redundancy safely.

### Can a rational gauge transformation desingularize at the original \(W\)?

**NOT PROVED UNIVERSALLY.**

It is not needed.

### Does a lower-dimensional regular Mahler presentation exist?

A lower-dimensional invertible rational presentation exists whenever \(d<m\), and every such minimal presentation is regular on a sufficiently deep Mahler tail.

### Is there always a scalar quotient containing \(F_0\)?

**NO SUCH THEOREM IS CLAIMED.**

The minimal dimension may be greater than one.

### Can an iterate acquire a stable invertible restriction?

Possibly in individual systems, but T13 does not require this. The universal object is the minimal rational Mahler module plus tail regularity.

---

## 17. Rational exceptional branch

The exact inverse value always satisfies

\[
H\in\mathbb Z_2.
\]

T13 does not prove universal irrationality or transcendence.

However, suppose independently that the balanced family is subcritical:

\[
0<W<1.
\]

If

\[
H=h\in\mathbb Q,
\]

then the same transport-and-lift argument applies to

\[
F_0(W)+3^kh=0.
\]

The real specialization forces

\[
h
=
-\frac{F_0^{(\infty)}(W)}{3^k}
<0.
\tag{53}
\]

Therefore in the subcritical regime:

\[
\boxed{
H\in\mathbb Q
\Longrightarrow
H\in\mathbb Q\cap\mathbb Z_2
\text{ and }H<0
\text{ in the ordinary real embedding.}
}
\tag{54}
\]

Consequences:

- \(H\in\mathbb Q_2\): always, because the inverse series is in \(\mathbb Z_2\);
- \(H\in\mathbb Z_2\): always;
- \(H\in\mathbb Q\): possible in principle; not classified universally;
- \(H\in\mathbb Z\): a negative ordinary integer is not excluded;
- \(H\in\mathbb Z_{>0}\): excluded for every genuinely nonperiodic covered family.

A negative rational or negative integer is not a Collatz counterexample.

---

## 18. Logical role of nonperiodicity

Nonperiodicity is not needed for:

- exact finite-kernel reduction;
- rational-linear minimalization;
- tail regularity;
- relation transport;
- Adamczewski–Bell–Smertnig lifting;
- the real sign contradiction **once \(0<W<1\) is already known**.

Its load-bearing role is to force subcriticality for a hypothetical positive anchor.

T3 uses aperiodicity to make the positive orbit states distinct and obtains the height bound

\[
\limsup\frac{A_m}{m}\le\log_2 3.
\]

Balance then makes the substitution-level mean \(B/k\), and equality with \(\log_2 3\) is impossible. Thus

\[
W<1.
\]

Eventually periodic positive Collatz codes correspond to bounded/eventually periodic positive orbits by T2 and are irrelevant to the root objective. They are not globally excluded by the sign theorem because their balanced point need not be subcritical.

Thus the exact role is:

\[
\boxed{
\text{nonperiodicity is needed for the T3 subcriticality bridge, not for Mahler regularization itself.}
}
\tag{55}
\]

---

## 19. Consequence back to T2

T2 proves for the bounded finite valuation alphabets under study that

\[
R_m\text{ bounded}
\]

gives an ordinary positive anchor.

Suppose a balanced finite-kernel family is genuinely nonperiodic and \(R_m\) is bounded.

Then T2 produces a positive integer realizing the prescribed aperiodic valuation/parity language.

Theorem T13.4 excludes that positive anchor.

Therefore

\[
\boxed{
R_m\text{ bounded}
\Longrightarrow
\text{eventual periodicity}
}
\tag{56}
\]

for the entire balanced one-variable finite-\(k\)-kernel class covered by T13.

This strictly extends the T12 project-level obstruction beyond all finite-group translation systems.

It remains an anchoring obstruction, not a constructed Collatz counterexample.

---

## 20. Restricted Periodicity-Conjecture boundary after T13

### Closed more strongly by T11

Balanced finite abelian translation systems after rational-character removal:

\[
H\notin\mathbb Q
\]

for genuinely nonperiodic covered families.

### Closed as positive-anchor routes by T12

Balanced finite nonabelian translation systems.

### Closed as positive-anchor routes by T13

The complete balanced **one-variable finite-\(k\)-kernel** class, including:

- nonpermutation deterministic digit transitions;
- singular \(A_0\);
- finitely many early canonical Mahler singularities;
- canonical systems with \(\det M\equiv0\), after exact rational-linear reduction.

No canonical singular subclass remains open for the positive-anchor question.

### Still open

1. **Multivariate/unbalanced automatic inverse systems from T5.**  
   The one-variable tail-regularity argument uses the fact that an invertible rational matrix has only finitely many nonzero singular points along a one-dimensional orbit. A completion-correct multivariate analogue preserving the exact positive Collatz scalar has not been established here.

2. **General morphic/substitutive recursive valuation languages with no balanced one-variable finite-kernel reduction.**

3. **Recursive languages with no finite Mahler presentation.**

4. **The stronger rationality question \(H\notin\mathbb Q\)** for generic higher-rank balanced systems. T13 only excludes the positive branch and determines the sign of a rational exception in the subcritical regime.

The general 3x+1 Periodicity Conjecture is not solved.

---

## 21. Cobham and López–Stoll

### Cobham

No second automatic presentation in a multiplicatively independent base is proved for the same relevant sequence.

**Applicable:** **NO.**

### López–Stoll

The completion issue identified in T3 remains unresolved for project use.

T13 uses the Adamczewski–Bell–Smertnig functional relation as the completion bridge and does not identify raw real and 2-adic limits.

**Load-bearing:** **NO.**

---

## 22. Tiny symbolic-check status

T13 used only exact algebraic fixtures directly tied to the regularity theorem.

The checked deterministic matrices in Section 7 verify:

- singular \(A_0\) with
  \[
  \det M(z)=-z(1+z);
  \]
- exact state-minimal canonical presentation with
  \[
  \det M(z)\equiv0;
  \]
- exact left-null relation
  \[
  (1,-1,-z,z)M(z)=0.
  \]

No scientific Collatz start, trajectory, substitution enumeration, residue search, carry optimization, or candidate ranking was performed.

The class theorem does not depend on those finite fixtures.

---

## 23. Compute and promotion decision

T13 establishes no theorem-derived scientific workload.

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

No explicit anchored aperiodic word exists.

No candidate, unbounded orbit, or counterexample was found or claimed.

---

## 24. Deliverable checklist

| Required item | T13 result |
|---|---|
| exact T12 theorem state inherited | Sections 1–2 |
| exact finite-kernel state set | \(\mathcal K_k(c)\), the distinct true kernel sequences |
| exact reachable/output reduction | built into \(\mathcal K_k(c)\); every state reachable, duplicates removed |
| exact true \(k\)-kernel dimension | \(m=|\mathcal K_k(c)|\) |
| exact transition matrices | \((A_r)_{ij}=1\iff\delta_r(i)=j\), one \(1\) per row |
| exact Mahler matrix | \(M(z)=\sum_rz^rA_r\) |
| coefficient field | \(\mathbb Q\); canonical matrix in \(M_m(\mathbb Z[z])\) |
| rank and determinant | \(r_M=\operatorname{rank}_{\mathbb Q(z)}M\), \(D(z)=\det M(z)\) |
| exact \(M(0)\) | \(A_0\), functional matrix of \(\delta_0\) |
| prescribed Collatz output | \(F_0=e_0^T\mathbf F\), \(H=-F_0(W)/3^k\) |
| zero/redundant states | zero canonical states impossible; duplicate kernel sequences already removed; rational-linear redundancies removed by \(d\)-dimensional basis |
| exact invariant subsystem/quotient | rational Mahler span \(V\) with basis \(\mathbf G\) containing \(F_0\) |
| complete canonical orbit regularity | iff \(D(W^{k^j})\ne0\) for all \(j\) |
| \(A_0\) permutation sufficient | **YES**, all-depth 2-adic unit regularity |
| singular \(A_0\) intrinsically fatal | **NO** |
| \(D\not\equiv0\) singular depths | only finitely many; tail eventually regular |
| \(D\equiv0\) obstruction | canonical functions rational-linearly dependent |
| successful desingularization | exact rational-linear minimalization to \(A(z)\in GL_d(\mathbb Q(z))\), then tail regularization |
| regular at original \(W\) after gauge | not proved universally and not needed |
| prescribed coordinate survives reduction | **YES**, \(G_1=F_0\) and exact transported row \(\ell\) |
| T12 sign-lifting theorem applies | **YES after forward transport to a regular tail** |
| exact ABS use | Theorem 4.3 at \(\alpha=W^{k^J}\), with exact specialization of the homogeneous linear value relation |
| all regular balanced finite-kernel families excluded from positive anchoring | **YES** |
| singular balanced subclasses survive positive anchoring | **NO** within the covered one-variable finite-kernel class |
| stronger \(H\notin\mathbb Q\) proved | **NO** |
| rational exceptional inverse value | in subcritical regime may survive only in \(\mathbb Q\cap\mathbb Z_2\) with negative real sign |
| exceptional value in \(\mathbb Z_2\) | **YES**, all inverse values are in \(\mathbb Z_2\) |
| exceptional value in \(\mathbb Q\) | unresolved in general |
| exceptional value in \(\mathbb Z\) | negative integer not excluded |
| exceptional value in \(\mathbb Z_{>0}\) | **NO** |
| bounded \(R_m\Rightarrow\) periodicity for a new class | **YES: all covered balanced finite-kernel systems** |
| restricted Periodicity boundary reduced | **YES**, Section 20 |
| Cobham applies | **NO** |
| López–Stoll load-bearing | **NO** |
| explicit anchored aperiodic word | **NONE** |
| candidate/unbounded orbit found | **NO** |
| counterexample claimed | **NO** |
| future compute justified | **NO** |
| exact next theorem-sized obligation | Section 25 |

---

## 25. Exact next theorem-sized obligation

The balanced one-variable finite-kernel branch no longer blocks the positive-anchor question.

The next theorem-sized obligation should move to the structurally broader T5 system that does not collapse to one variable:

> **CDM4-T14 — multivariate/unbalanced finite-state Mahler tail-regularity / completion-sign audit.**
>
> Start from the exact T5 Parikh-vector system
> \[
> \mathbf F(x)=\mathcal A(x)\mathbf F(x^M)
> \]
> at the exact 2-adic Collatz point
> \[
> q_s=2^{v(s)}/3.
> \]
> Determine whether an exact rational-linear minimalization exists that preserves the prescribed positive Collatz scalar, whether the monomial orbit admits a completion-correct regular tail for an applicable arbitrary-place lifting theorem, and whether a lifted relation can be evaluated in the real completion with the exact positive scalar reconstructed.
>
> If a general multivariate theorem is unavailable, isolate the sharpest exact unbalanced subclass for which the one-variable T13 transport mechanism survives.

Do not reopen finite-group translation representation theory, scalar Walsh coboundaries, generic one-variable p-adic lifting, substitution enumeration, finite residue/carry optimization, or scientific trajectory search.

No scientific compute is authorized.

---

## 26. Source and dependency ledger

1. **Adamczewski–Bell–Smertnig (JEMS 25, 2023), Theorem 4.3.** Inherited from T10/T12 as the load-bearing arbitrary-place homogeneous relation-lifting theorem.
2. **T12.** Supplies the relation-lifting/real-sign architecture and the exact distinction between positive anchoring and full rationality.
3. **T5–T7.** Supply the exact balanced one-variable block-constant series and true finite-\(k\)-kernel Mahler system.
4. **T3.** Supplies the distinct-positive-orbit height bound forcing \(B/k<\log_2 3\) for a genuinely aperiodic positive anchor.
5. **T2.** Supplies the exact positive-integer anchoring criterion and bounded-orbit/eventual-periodicity equivalence.
6. The rational-linear reduction and tail-regularity theorems in Sections 8–10 are elementary consequences of the exact finite-kernel Mahler equation; no new external value theorem is invoked.

---

## 27. Permanent lesson

For one-variable finite-kernel Collatz systems, the load-bearing distinction is not

\[
M(0)\text{ invertible versus singular}.
\]

It is also not

\[
\text{canonical system regular at }W\text{ versus unusable}.
\]

The correct hierarchy is:

\[
\boxed{
\text{true kernel}
\to
\text{rational-linear minimal Mahler module}
\to
\text{sufficiently deep regular tail}
\to
\text{exact forward transport of the Collatz coordinate}.
}
\]

An identically singular canonical determinant exposes rational redundancy. A nonzero determinant can fail only at finitely many nonzero Mahler iterates. Early singularities need not be inverted: the exact value relation can be pushed forward through them.

Once the transported relation reaches a regular tail, T10's arbitrary-place relation lifting and T12's completion-sign argument apply unchanged. The signed coordinates introduced by reduction are harmless because the exact positive root series is reconstructed before the real sign is taken.

Thus generic balanced finite-kernel singularity is a presentation/early-orbit issue, not a surviving positive-anchor mechanism.

C — new recursive-language obstruction found
