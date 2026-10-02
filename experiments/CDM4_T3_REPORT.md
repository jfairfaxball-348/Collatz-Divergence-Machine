# CDM4-T3 — Anchor-carry extinction / recursive-language realizability audit

Date: 2026-10-02. Authority at entry: repository commit
`a33e846537cda2733c10c10436cfb60ce5a3f1e7`.

**Classification: C — NEW RECURSIVE-LANGUAGE OBSTRUCTION FOUND.**

**PROVED:** an exact block carry recurrence, a fixed-dimensional substitution
recurrence, and a return-prefix/height obstruction. The obstruction excludes a
specified broad class defined by an asymptotic return inequality, including the
primitive Thue-Morse valuation coding `0 -> 1, 1 -> 2`. Critical bounded-discrepancy
valuation words are also excluded. These are project additions, not claims of
literature priority; the return argument is closely related to Wang's theorem.

**FAILED for promotion:** the proposed blanket automatic/substitution exclusion
through the López-Stoll 2021 density preprint. Its proof does not establish the
needed transfer from a real series limit to its 2-adic limit. This audit does not
disprove the claimed density theorem.

**UNKNOWN:** whether every aperiodic automatic, primitive substitutive, or morphic
Collatz language is impossible for a positive integer. No explicit aperiodic
positive anchor, scientific divergence candidate, unbounded orbit, or
counterexample was found or claimed. Scientific starts and scientific trajectories
executed in T3: **zero**.

## 1. Authority, scope, and dependency boundary

All files required by the session instruction were read at the entry commit
before mathematical work. `CDM4_T3_INPUT_MANIFEST.json` records their SHA-256
digests. The repository, not conversational memory, supplied the research state.
The root objective and the exclusion of nontrivial finite-cycle research remain
unchanged. No prior scientific population was rerun.

This report uses the shortened map

$$
T(n)=\begin{cases}n/2&n\text{ even},\\(3n+1)/2&n\text{ odd},\end{cases}
\qquad U(x)=(3x+1)/2^{v_2(3x+1)}\quad(x\text{ odd}).
$$

Put `lambda = log_2(3)` and `delta = log_3(2) = 1/lambda`. An aperiodic word
here means **not eventually periodic**, unless a source's terminology is being
described. `[...]_q` is the representative in `0,...,q-1`.

The proofs in Sections 2–8 use elementary exact arithmetic and T2's anchoring
equivalence, restated below. Perron-Frobenius frequency theory and Bell's
peer-reviewed automatic-density theorem are explicitly identified external
dependencies in Section 9. No theorem in this report depends on López-Stoll 2021.

## 2. Exact T2 state and the certification implication

**PROVED, inherited and checked.** For a valuation prefix `a_1,...,a_m`, let

$$
A_0=C_0=0,\quad A_m=\sum_{i=1}^m a_i,\quad
C_{m+1}=3C_m+2^{A_m},\quad M_m=2^{A_m+1}.
$$

Then `2^{A_m} x_m = 3^m x_0 + C_m`. Exact realization, including the odd
accelerated endpoint, is equivalent to

$$
3^m N+C_m\equiv2^{A_m}\pmod {2^{A_m+1}}.
$$

Thus

$$
R_m=[3^{-m}(2^{A_m}-C_m)]_{M_m},\quad R_0=1,\quad
Y_m=(3^mR_m+C_m)/2^{A_m}
$$

are positive odd integers. Canonical cylinders nest, giving

$$
R_{m+1}=R_m+d_mM_m,\quad 0\le d_m<2^{a_{m+1}},
\quad 2^{a_{m+1}}Y_{m+1}=3Y_m+1+2d_m3^{m+1}.                 \tag{1}
$$

Consequently

$$
R_m=1+\sum_{j<m}d_j2^{A_j+1}.                              \tag{2}
$$

An ordinary nonnegative anchor exists iff `R_m` is bounded iff it stabilizes iff
`d_m=0` eventually. The anchor is in fact positive odd, since every `R_m` is odd.
This is also equivalent to `R_{m+1}/M_m -> 0`. For a bounded valuation alphabet
it is equivalent to `R_m/M_m -> 0` along **all valuation depths**. Nesting and
nonnegative digits prove these equivalences; finite small residues prove none
of them.

For a positive integer, bounded orbit iff eventually periodic source parity:
boundedness gives a repeated state; determinism gives periodicity; the converse
is T1's exact affine argument. Odd-gap encoding `a -> 1 0^{a-1}` preserves
eventual periodicity in both directions for infinite positive valuations.
Therefore an explicit positive anchored aperiodic valuation word would already
prove unboundedness and non-arrival at 1. No such word is established here.

## 3. Exact block composition and carry

### 3.1 Ordered affine data

**PROVED — block composition lemma.** For `w=(b_1,...,b_k)`, define

$$
B_j=\sum_{i\le j}b_i,\quad B=B_k,\quad P_w=3^k,\quad Q_w=2^B,
\quad C_w=\sum_{j=0}^{k-1}3^{k-1-j}2^{B_j}.
$$

The empty block has `(k,B,P,Q,C)=(0,0,1,1,0)`. Its formal forward map is
`F_w(x)=(P_w x+C_w)/Q_w`; exact cylinder membership makes this the actual
accelerated dynamics with all valuations exact.

For chronological concatenation `uv`:

$$
\begin{split}
k_{uv}&=k_u+k_v,& B_{uv}&=B_u+B_v,\\
P_{uv}&=P_uP_v,& Q_{uv}&=Q_uQ_v,\\
C_{uv}&=P_vC_u+Q_uC_v.                                    \tag{3}
\end{split}
$$

This follows by composing `F_v(F_u(x))`. In particular,

$$
K_w=\begin{pmatrix}P_w&C_w\\0&Q_w\end{pmatrix},\qquad
K_{uv}=K_vK_u.                                            \tag{4}
$$

The reversed matrix order is essential. These maps are affine; treating them as
fractional-linear maps adds no state or theorem.

### 3.2 Canonical refinement from the current state

Use the exact prefix state `(m,A,R,Y)` and abbreviate `p=3^m`, `M=2^{A+1}`.
Let

$$
r_w=[P_w^{-1}(Q_w-C_w)]_{2Q_w}.
$$

All starts in the current cylinder have form `R+M t`, with endpoint `Y+2pt`.
Appending `w` requires `Y+2pt = r_w (mod 2Q_w)`. Since both endpoints are odd,

$$
D_w=[p^{-1}(r_w-Y)/2]_{Q_w}.                              \tag{5}
$$

Division by two occurs on the ordinary even integer `r_w-Y`, before modular
reduction. Equivalently, for nonempty `w`,

$$
D_w=[3^{-(m+k)}(2^{B-1}-(3^kY+C_w)/2)]_{2^B}.             \tag{6}
$$

The closed update is

$$
\begin{split}
m'&=m+k,\quad A'=A+B,\quad C'=P_wC+2^AC_w,\\
R'&=R+MD_w,\\
Y'&=(P_wY+C_w+2pP_wD_w)/Q_w.                             \tag{7}
\end{split}
$$

For `rho=R/M`,

$$
\rho'=(\rho+D_w)/Q_w.                                   \tag{8}
$$

The block digit is a mixed-radix aggregate of the one-step digits. If `S` is
the state before `u` and `S_u` the updated state,

$$
D_{uv}(S)=D_u(S)+Q_uD_v(S_u).                            \tag{9}
$$

It is not a digit attached to `v` independently of its arithmetic input.
Equations (5)–(9) give an exact transducer with unbounded integer state. A
minimal implementation can keep `(p,M,R,Y)` and the block tuple; the optional
`m,A,C` fields provide provenance. No whole-prefix recomputation is required.

### 3.3 Inverse affine cocycle

Set `s_w=Q_w/P_w` and `h_w=-C_w/P_w`. Then

$$
x_0=h_w+s_wx_k,\quad s_{uv}=s_us_v,\quad
h_{uv}=h_u+s_uh_v.                                      \tag{10}
$$

Thus `L_w=[[s_w,h_w],[0,1]]` satisfies `L_{uv}=L_uL_v`: an exact affine
semidirect-product representation. For a prefix,

$$
h_m=-\sum_{j<m}2^{A_j}/3^{j+1},\qquad R_m=h_m+s_mY_m.     \tag{11}
$$

The endpoint term in (11) cannot be discarded in either completion.

## 4. Substitution levels and return words

### 4.1 A fixed number of exact arithmetic registers

**PROVED — substitution recurrence.** Let `sigma` be a non-erasing substitution
on `r` letters, with each letter `i` coded by a nonempty valuation block `w_i`.
Store `(k_i^{(j)},B_i^{(j)},P_i^{(j)},Q_i^{(j)},C_i^{(j)})` for the coded block
`sigma^j(i)`. If `sigma(i)=i_1...i_t`,

$$
\begin{split}
P_i^{(j+1)}&=\prod_{h=1}^tP_{i_h}^{(j)},\qquad
Q_i^{(j+1)}=\prod_{h=1}^tQ_{i_h}^{(j)},\\
C_i^{(j+1)}&=\sum_{h=1}^t
 \left(\prod_{g<h}Q_{i_g}^{(j)}\right) C_{i_h}^{(j)}
 \left(\prod_{g>h}P_{i_g}^{(j)}\right).                    \tag{12}
\end{split}
$$

Let `S_{hi}` count letter `h` in `sigma(i)`. Then the column vectors of lengths
and valuation sums satisfy `k^{(j+1)}=S^T k^{(j)}` and
`B^{(j+1)}=S^T B^{(j)}`. Counts alone do not determine `C`: order matters.
There are `3r` essential integer registers, or `5r` including lengths and sums,
but their bit lengths grow. This is **finite-dimensional, not finite-state**.

For a growing prolongable fixed point beginning with `i_0`, the coded blocks
`sigma^j(i_0)` are cofinal nested prefixes. At each level use

$$
R_j=[P_j^{-1}(Q_j-C_j)]_{2Q_j},\qquad
Y_j=(P_jR_j+C_j)/Q_j,\qquad
D_j=(R_{j+1}-R_j)/(2Q_j).                               \tag{13}
$$

These give the exact carry between levels. Bounded `R_j` on cofinal levels is
equivalent to bounded `R_m` at every depth. Eventual `D_j=0` is equivalent to
eventual one-step zero carry, because each level lift is a sum of nonnegative
one-step lifts. The cross-level condition `R_{j+1}/(2Q_j) -> 0` also suffices
and is equivalent. Small `R_j/(2Q_j)` only on sparse levels is not supplied this
equivalence by T2: the appended block lengths are unbounded.

For an arbitrary recurrent point in the substitution subshift, `sigma^j(i_0)`
need not be its prefixes. A nested address or return-word decomposition must
be specified before using (13).

### 4.2 Return words and the missing arithmetic state

For any fixed prefix of a uniformly recurrent word, its return words form a
finite family `W_1,...,W_t`. Assign each its exact `(k,B,P,Q,C,r)` data. Equations
(3)–(9) then give the induced return maps with no approximation. Durand's
finite-derived-sequence characterization concerns symbolic structure [L5]; it
does not bound `p`, `Y`, `M`, or the moduli in (5).

Consequently a finite return alphabet does not produce a finite arithmetic
state graph. Finite symbolic recurrence alone forces neither a periodic orbit
nor a cancellation identity. Treating these return maps as whole-progression
closure would revive the T1 obstruction. Return words become useful here through
the quantitative congruence theorem in Section 6, rather than such a graph.

## 5. A height bound that needs no density preprint

**PROVED — distinct-orbit product bound.** Suppose a positive odd `N` realizes
an aperiodic valuation word. Its odd orbit states `x_0=N,x_1,...` are distinct;
otherwise its future word is eventually periodic. Therefore

$$
\begin{split}
x_m&=N\frac{3^m}{2^{A_m}}
       \prod_{i<m}\left(1+\frac1{3x_i}\right),\\
\prod_{i<m}\left(1+\frac1{3x_i}\right)
 &\le \exp\left(\frac13\sum_{i<m}\frac1{x_i}\right)
 \le e^{1/3}(m+1)^{1/3}.                                \tag{14}
\end{split}
$$

The last inequality uses only that distinct positive integers have reciprocal
sum at most `H_m <= 1+log(m+1)`. In particular

$$
N2^{\lambda m-A_m}\le x_m
 \le Ne^{1/3}(m+1)^{1/3}2^{\lambda m-A_m}.                \tag{15}
$$

Since `x_m>=1`,

$$
A_m\le\lambda m+\tfrac13\log_2(m+1)+\log_2N+
                 \tfrac13\log_2e.                      \tag{16}
$$

Hence `limsup A_m/m <= lambda` is necessary. This is a self-contained version
of the positive-integer growth restriction underlying Wang's related results.
It assumes aperiodicity/distinctness; applying it to a periodic orbit would be
an error.

For shortened source parity, write `h(n)=sum_{i<n} v_i`. The identical product
argument over the distinct shortened states gives

$$
N3^{h(n)}2^{-n}\le T^n(N)
 \le Ne^{1/3}(n+1)^{1/3}3^{h(n)}2^{-n}.
$$

Thus `liminf h(n)/n >= delta`. **Equality is not proved.** No convergence of
ordinary density is assumed.

## 6. Return-prefix obstruction and a primitive substitution class

### 6.1 Exact return inequality

**PROVED — return-prefix/height obstruction.** Let `a` be a non-eventually-periodic
positive valuation word. Suppose there are pairs `(ell_j,r_j)` with both
coordinates tending to infinity such that

$$
a_{\ell_j+i}=a_i\quad(1\le i\le r_j),
$$

and

$$
E_j=A_{\ell_j}+A_{r_j}-\lambda\ell_j
                  -\tfrac13\log_2(\ell_j+1)\longrightarrow+\infty. \tag{17}
$$

Then no positive odd integer realizes `a`. Its canonical `R_m` tends to
infinity, and infinitely many anchor digits are nonzero.

*Proof.* Assume a positive anchor `N`. Both `N` and `x_{ell_j}` realize the same
exact prefix of length `r_j`. T2's exact cylinder gives

$$
2^{A_{r_j}+1}\mid(x_{\ell_j}-N).                          \tag{18}
$$

The difference is nonzero by aperiodicity. Combining (15) and (18),

$$
1\le \frac{|x_{\ell_j}-N|}{2^{A_{r_j}+1}}
\le\frac N2\left(e^{1/3}2^{-E_j}+2^{-A_{r_j}}\right).
$$

The right side tends to zero, a contradiction. Nondecreasing unbounded integer
representatives tend to infinity; (2) then gives infinite carry support. QED.

The repeat implies `A_{ell+r}=A_ell+A_r`, so (17) is also an endpoint-length
inequality. Neither a positive average drift nor repetition alone suffices.
This is an infinite theorem condition, not a finite score or ranker.

### 6.2 Frequency/return corollary

**PROVED.** If `A_m=alpha*m+o(m)` and the above repeats have
`r_j/ell_j -> c>0`, then

$$
\alpha(1+c)>\lambda                                    \tag{19}
$$

rules out positive anchoring. The strict margin makes (17) linear in `ell_j`.
For bounded discrepancy `|A_m-alpha*m|<=D`, it is enough that
`alpha*r_j-(lambda-alpha)*ell_j-(1/3)log_2(ell_j+1) -> +infinity`.
No conclusion is asserted at a vanishing margin without controlling the
remaining terms.

### 6.3 Explicit primitive-substitution criterion

Let `z=sigma^infinity(i_0)` be growing and primitive, with nonempty valuation
block coding. Require that the **coded output** be aperiodic; an aperiodic
letter word can be destroyed by coding. Let `v` and `u` be positive right and
left Perron eigenvectors of the incidence matrix `S`. Write `k_i,B_i` for the
base coding lengths and sums. The output mean is

$$
\alpha=(B^Tv)/(k^Tv).
$$

Choose any fixed later occurrence of `i_0` in `z`, and let `p` be the nonempty
letter prefix preceding that occurrence. The coded block `sigma^j(i_0)`
repeats after the coded block `sigma^j(p)`. Perron asymptotics give

$$
\frac{\ell_j}{r_j}\longrightarrow
K=\frac{u^T\operatorname{count}(p)}{u_{i_0}}>0.
$$

The nonempty coding ensures these lengths tend to infinity. Therefore

$$
\boxed{\ \alpha(1+1/K)>\lambda\quad\Longrightarrow\quad
R_m\to\infty\ }                                        \tag{20}
$$

for this primitive aperiodic class. For a constant-length substitution with
one valuation per letter, an occurrence at letter position `q>0` gives `K=q`.
More generally the same ratio holds for a primitive constant-length
substitution with nonempty block coding, by Perron asymptotics.

This is a broad, exact sufficient obstruction with algebraic input quantities.
It is not an exclusion of every primitive substitution. A large return ratio
can fail (20), particularly when the valuation mean is well below `lambda`.
Failure of this sufficient test supplies no evidence for anchoring.

### 6.4 Relation to Wang

Wang's [L2] Theorem 4.13 (author version numbering) already uses repeated
E-sequence prefixes and a growth inequality, with an additional hypothesis
`3^n>2^{A_n}` for every prefix. Section 6 proves the needed obstruction directly,
without that every-prefix assumption, retaining a logarithmic correction from
the distinct-integer product bound. The subsequent substitution application is
therefore not presented as discovery of the underlying return-congruence idea.

Wang's mechanical-word exclusion remains intact: irrational
`a_n=floor(n theta)-floor((n-1)theta)`, `theta>=1`, has no positive odd anchor.
Its favorable-growth cases illustrate why (11)'s real convergence is not
realizability. Wang's term “Omega-divergent E-sequence” means nonrealizability,
not an unbounded positive Collatz orbit. Arbitrary Sturmian intercepts or arbitrary
codings are not silently added to that quoted theorem's scope.

## 7. One canonical substitution solved without a search

**PROVED — Thue-Morse valuation coding has infinitely many nonzero carries.**
The choice is analytic: `sigma(0)=01, sigma(1)=10` has exact balance and returns
at a known substitution position, making (20) directly testable. No other
substitution was computed or ranked.

Let `t_n` be the binary digit sum of `n` modulo two, beginning at `n=0`, and set
`a_{n+1}=1+t_n`. Then `t_{2n}=t_n`, `t_{2n+1}=1-t_n`, so

$$
A_{2s}=3s,\qquad A_{2s+1}=3s+1+t_s,\qquad
|A_m-3m/2|\le1/2.                                      \tag{21}
$$

The word is not eventually periodic. Indeed eventual period `p` would, using
`t_{2^k+r}=1-t_r` for fixed `r` and sufficiently large `k`, imply
`t_{r+p}=t_r` for every `r>=0`. But this global period would give
`t_{2^k-p}=t_{2^k}=1` for every sufficiently large `k`; the left side is
`k-s_2(p-1) (mod 2)`, which alternates with `k`. Contradiction.

Because `t_3=t_0=0`, for `L=2^j`, `j>=1`, the first `L` valuations repeat at
shift `3L`. Equation (21) gives

$$
A_L=3L/2,\quad A_{3L}=9L/2,\quad
E_j=(6-3\lambda)L-\tfrac13\log_2(3L+1)\to+\infty.
$$

The exact exponential comparison is `27<64`; the relevant ratio is a constant
times `(3L+1)^{1/3}(27/64)^L`. Section 6 proves nonrealizability, hence
`R_m -> infinity` and infinite nonzero carry support. This proof is independent
of finite residues, Wang's every-prefix growth assumption, and López-Stoll 2021.

As an independent check on this specialization, (21) directly bounds
`sum_{j<m} 2^{A_j}/3^{j+1}` by
`G=(sqrt(2)/3)/(1-2*sqrt(2)/3)`, since `8<9`. The exact affine identity then
bounds `x_{3L}/2^{A_L+1}` by `(N+G)(27/64)^L/2`, without using the harmonic
product estimate. Together with (18) and `N/2^{A_L+1}->0`, this gives the same
contradiction. Both arguments concern the full infinite word.

The substitution-level arithmetic also closes exactly. For the two complementary
blocks at level `j>=1`, write their constants as `C_{0,j},C_{1,j}`. They share
`P_j=3^{2^j}`, `Q_j=2^{3*2^{j-1}}`, and

$$
\begin{split}
C_{0,j+1}&=P_jC_{0,j}+Q_jC_{1,j},\\
C_{1,j+1}&=P_jC_{1,j}+Q_jC_{0,j},\\
P_{j+1}&=P_j^2,\qquad Q_{j+1}=Q_j^2.
\end{split}                                             \tag{22}
$$

At level 1, `(P,Q,C_0,C_1)=(9,8,5,7)`. Equations (13) recover `R_j,Y_j,D_j`.
This solves the anchoring question negatively for the specified word, not the
location of every individual nonzero digit. Finite prefixes before this tail
are also excluded: any positive anchor for such a prefix would produce a
positive odd anchor for the excluded tail. A suffix of this word is not
automatically covered by that finite-prefix statement.

## 8. Balance, cocycles, and endpoint rigidity

### 8.1 Critical bounded discrepancy

**PROVED — critical bounded-discrepancy obstruction.** No aperiodic valuation
word with `|A_m-lambda*m|<=D` for all `m` is positively anchored.

If it were, (11) gives

$$
x_m=\frac{3^m}{2^{A_m}}
 \left(N+\sum_{j<m}\frac{2^{A_j}}{3^{j+1}}\right)
\ge 2^{-2D}m/3.
$$

But (15) gives `x_m <= N 2^D e^{1/3}(m+1)^{1/3}`, a contradiction. A finite
initial exception is absorbed by enlarging `D`. This extends the project
obstruction beyond a specified mechanical coding, using only bounded critical
discrepancy. It is not a theorem excluding all balanced words: below the
critical mean, Section 6 still needs sufficiently early returns. Means above
`lambda` are already excluded by (16).

### 8.2 What the cocycle does and does not prove

Equations (10)–(11) are a genuine finite-dimensional affine cocycle over the
valuation shift. Equation (9) is a carry cocycle on the **extended arithmetic
state**. Neither identifies bounded canonical `R_m` with bounded sums of a
continuous real observable on the compact symbolic subshift alone.

In fact, if `A_m=alpha*m+O(1)` with `alpha<lambda`, the real series for `h_m`
converges absolutely, whether or not there is a positive anchor. The excluded
Thue-Morse example has this property. Thus bounded real `h_m` is not an anchor
criterion. Conversely under an anchor, the growing `Y_m` in (11) can balance
the contracting scale `s_m`; throwing it away loses the integer.

Gottschalk-Hedlund requires a compact minimal system, a continuous scalar
observable, and bounded Birkhoff sums along an orbit [L7]. It can address the
centered valuation discrepancy `a-alpha`, when its hypotheses hold. The
canonical modular carry has not been represented by such an observable. The
affine isometry generalization also does not apply to scales `2^a/3` as real
isometries. No hypothesis is supplied by calling the recurrence a cocycle.

Moreover bounded cocycles do not force periodic bases: on any aperiodic minimal
subshift choose a continuous `g` and set `f=g o S-g`. Its sums telescope and
are bounded. This is a direct counterexample to the proposed general
bounded-cocycle-implies-periodic inference, not a Collatz example.

### 8.3 Endpoint/carry and finite support

If carry becomes zero, (1) becomes the actual odd Collatz recurrence. Finite
residues of `Y_m` then synchronize only finite arithmetic projections; unbounded
`Y_m` remains. A finite automaton producing symbols is not an autonomous
finite-state machine producing the integer orbit.

The return proof supplies a genuine endpoint incompatibility: eventual zero
carry plus aperiodicity would produce distinct integer endpoints satisfying
(18), while (15) makes their nonzero difference smaller than its divisor.
Hence carry is nonzero infinitely often for the classes in Sections 6–8.
For arbitrary recursive words no comparable incompatibility is proved.

Equation (2) characterizes ordinary positive anchoring exactly as finite support
of a mixed-radix expansion. Infinitely many symbolic constraints alone do not
preclude finite support; actual integer orbits satisfy all of them. The missing
ingredient is an arithmetic rigidity theorem for the chosen symbolic class,
not an information-counting argument.

## 9. Automatic, primitive, and morphic language audit

### 9.1 Unconditional automatic consequences

Bell [L3, Theorem 1.1] proves rational, computable limsup mean for a nonnegative
rational-valued automatic sequence. Corollary 1.2 gives rational lower and
upper densities of automatic sets. Ordinary density need not exist.

**PROVED, using Bell:** if an aperiodic automatic finite valuation word were
positively anchored, then

$$
\beta=\limsup A_m/m\in\mathbb Q,\qquad \beta<\lambda.      \tag{23}
$$

Indeed (16) gives `beta<=lambda`, and `lambda` is irrational. Consequently its
actual odd orbit would satisfy `x_m >= N 2^{epsilon*m}` for some `epsilon>0`
eventually. Applying Bell directly to the valuation outputs avoids the invalid
operation of adding separate letter-density limsups.

Likewise, an aperiodic automatic **source-parity** word of a positive integer
must have rational lower one-density strictly greater than `delta`, by Section
5 and Bell. Its shortened orbit would grow at least exponentially. This is a
necessary restriction, not a contradiction. It does not require bounded odd
gaps or conversion of the parity word into an automatic valuation word.

Finite kernel, rational frequencies, and automatic summatory structure do not
by themselves synchronize the unbounded arithmetic registers. A finite
nonuniform block coding `a -> 1 0^{a-1}` cannot simply be declared automatic in
the same base; morphic closure is weaker. When valuation averages exist, the
parity density is their reciprocal, by counting the odd positions `A_m`.

### 9.2 Primitive substitution frequencies and the logarithm

Primitive substitution frequencies and the nonempty-block-coded mean in
Section 6 are algebraic, from a Perron eigenvector of an integer matrix [L11].
For an aperiodic positively anchored primitive valuation word, (16) therefore
implies `alpha<lambda`, not equality, and again forces exponential growth.

Here is the number-theoretic status, without an unstated assumption. Neither
`lambda` nor `delta` is rational, since a rational logarithmic relation would
give a nontrivial equality of powers of 2 and 3. If `delta` were algebraic
irrational, the Gelfond-Schneider theorem would make `3^delta` transcendental,
contrary to `3^delta=2`. Thus both constants are **transcendental**. This uses
that established theorem, not just irrationality [L12].

Conditional on the unvalidated López-Stoll equality, Bell would exclude every
aperiodic automatic parity word of a positive integer, and the algebraic
frequency argument would exclude every aperiodic primitive substitutive parity
word and nonempty-block-coded primitive valuation word. **Those exclusions are
not promoted.** Only (20), (23), and the other independently proved restrictions
are load-bearing.

### 9.3 Reverse classification and scope mismatches

The reverse question “the valuation word of `N` is morphic; what follows?” is
answered here only for the excluded subclasses and the primitive/automatic
growth restrictions. A general morphic realization theorem remains UNKNOWN.
Nonprimitive morphisms need not have primitive Perron frequency behavior, and
their densities cannot be supplied by assumption.

Cobham-type theorems [L6] require the **same sequence** to admit two
multiplicatively independent automatic/substitutive structures. The appearances
of 2 and 3 in Collatz arithmetic do not establish that hypothesis.

For rational 2-adic integers the ordinary binary digit expansion is eventually
periodic. The parity point `Q_infinity(N)=sum (T^j(N) mod 2)2^j` is not the
binary expansion of `N`. The Bernstein-Lagarias conjugacy [L1] does not prove
preservation of rationality or automaticity in the direction needed here;
the rational periodicity issue is precisely substantive.

Christol's finite-characteristic power-series correspondence does not supply a
characteristic-zero rationality theorem for `Phi(Q_infinity(N))`. Similarly the
Adamczewski-Bugeaud Hensel-digit complexity theorem [L8, Section 6] concerns
digits of the number whose algebraicity is tested. Even when it makes an
aperiodic automatic parity point transcendental over the rationals, there is
no theorem here that its nonlinear Collatz conjugate cannot be the integer `N`.
Morphic/transducer closure [L13] does not supply that missing preservation law.

## 10. Independent audit of López-Stoll 2021

### 10.1 Conventions and claimed conclusion

**Source status:** arXiv:2101.12747v1, 2021 preprint, 51 pages [L4]. The inspected
record has no journal reference. Focused searches through 2026-10-02 did not
locate a peer-reviewed repair or independent validation of the disputed step;
this is a search outcome, not a claim that no such document exists.

The map is the same shortened `T`; the parity vector records source parities.
Rational 2-adic integers mean rationals in `Z_2`, equivalently reduced odd
denominator, of either sign. Non-cyclic means not eventually entering a cycle.
The claimed necessary equality concerns **liminf** parity-one density, not
existence of ordinary density. Positivity is not a hypothesis of that claim.

### 10.2 The proof dependency that fails project verification

The decisive passage is the proof of Theorem 1, printed page 29. Its
supercritical-density branch invokes Lemmas 23 and 26 and then (15)–(16) to
pass from the real series value to aperiodicity of the 2-adic value. Section 2,
printed pages 7–8, makes the required real/2-adic rationality identification
without proving it. Lemma 24, printed page 28, also identifies prescribed real
branches with actual parity when the real initial value is rational of odd
denominator. That identification needs justification; well-defined parity alone
does not establish it. **FAILED: this dependency is not accepted for project use.**

The mathematical issue can be isolated without relying on any statement in
that preprint. For odd positions `d_0<d_1<...`, the finite rational sums

$$
q_h=-\sum_{i<h}2^{d_i}/3^{i+1}
$$

converge 2-adically to the inverse-conjugacy point. Sufficiently high lower
one-density also makes them converge in the real absolute value. The completions
are different. Rationality or irrationality of one limit does not follow from
that of the other just because the approximants are identical rational numbers.

For a direct counterexample to that **general inference**, set

$$
z_n=-\frac{2^n}{3^{2n}}
        \left\lfloor\sqrt2\,\frac{3^{2n}}{2^n}\right\rfloor.
$$

These rationals have odd reduced denominators and `v_2(z_n)>=n`, hence tend to
the rational 2-adic value zero. In the real absolute value they tend to the
irrational number `-sqrt(2)`, with error less than `(2/9)^n`. This is an
elementary symbolic counterexample, **not a Collatz series or a disproof of the
claimed theorem**. Special Collatz series would need their own proved bridge.

In particular a negative real pseudoorbit built from a prescribed word cannot
be substituted for the positive integer orbit under investigation. The fact
that an actual orbit of a rational odd-denominator number stays in a fixed
denominator lattice is valid; applying it to an unverified prescribed-branch
pseudoorbit is the missing step, not a proof of that step.

The lower-density necessary inequality for positive integers is independently
proved in Section 5. The equality is neither imported from a conjecture nor
treated as established by the preprint's assertion. Every automatic/primitive
class kill requiring that equality is parked. The report does not assert the
density claim false, and does not certify every other lemma in the preprint.

## 11. Mixed-adic, height, and nonstandard representation audit

Equations (15) and (18) are a useful **proved height/divisibility comparison**:
they force `R_m -> infinity` under (17). No audited theorem forces a
depth-independent upper bound on `R_m` for a surviving aperiodic class.

The product formula for rational numbers is an identity, not such a height
bound. In `3^m R_m + C_m = 2^{A_m}Y_m`, the factors `R_m`, `C_m`, and `Y_m`
are not restricted to a fixed group of S-units. Therefore standard S-unit
finiteness theorems cannot simply be applied to this equation. Linear forms in
logarithms can separate powers of 2 and 3 but do not control the additive
ordered sum `C_m` and the free endpoint. Subspace-theorem digit approximations
[L8] would require a verified height-versus-approximation estimate for the
**Collatz conjugate**, not only for its parity point. A Mahler functional
equation for a generating series of automatic symbols likewise does not
establish a compatible equation for (5)'s modular representative.

The rational-base 3/2 representation of Eliahou–Verger-Gaugry [L9] is a
peer-reviewed exact representation of integer extension operations. Its
Proposition 7 translates an odd extension into `(3n+1)/2`; other extensions
have different meanings. Its auxiliary map also denoted `U` is not this
report's accelerated odd map. A finite representation automaton is not an
ordinary-positive-integer anchoring theorem for an infinite prescribed word.

López-Stoll 2009 [L10] gives a 2-adic continued-fraction treatment for specified
Sturmian words; its observed complexity patterns are not a proof that every
morphic word has a nonrational conjugate. Parvaix's substitution-invariant
Sturmian classification [L14] concerns symbolic invariance, not positive
Collatz realization.

Kramer 2026 [L15] is explicitly a preprint. Its fixed-start vanishing residue
rates are necessary asymptotics, and its finite diagnostics do not certify an
infinite anchor. Its start modulus `2^{A_m}` omits T2's final odd-endpoint bit;
this is a convention difference that must be repaired for exact cylinders.
For a fixed genuine start, eventual constancy of the canonical start and the
bound `x_m+1 <= (N+1)(3/2)^m` explain the relevant vanishing rates. Their
converses are not obtained. No exponent-code optimization was reproduced.

## 12. Classes killed, classes surviving, and exact characterization

| Class or proposed inference | Status and exact scope |
|---|---|
| Irrational mechanical valuations with zero intercept as specified by Wang | PROVED prior obstruction: no positive anchor. |
| Aperiodic words with `limsup A_m/m > lambda` | PROVED excluded by (16). |
| Aperiodic words with bounded `A_m-lambda*m` | PROVED excluded by Section 8.1. |
| Aperiodic words satisfying the infinite return condition (17) | PROVED excluded; `R_m -> infinity`, infinite carry support. |
| Primitive nonempty-block codings satisfying (20) | PROVED excluded, assuming the output is aperiodic. |
| Thue-Morse coding `a_{n+1}=1+t_n` | PROVED excluded exactly, without a search. |
| Finite prefixes followed by any excluded valuation tail | PROVED excluded by taking the actual odd endpoint at the tail. |
| Aperiodic automatic valuations or source parity in general | UNKNOWN; necessary strict exponential growth follows from Bell and Section 5. |
| Aperiodic primitive substitutions outside the proved exclusions | UNKNOWN; algebraic mean forces a strict growth gap if anchored. |
| General aperiodic morphic words, including nonprimitive cases | UNKNOWN; no blanket frequency or anchoring theorem. |
| Balanced subcritical words without the required return inequality | UNKNOWN; balance alone is insufficient for this proof. |
| Finite arithmetic dimension implies finite-state periodicity | FAILED inference: integer register sizes are unbounded. |
| Bounded real affine cocycle implies anchor or periodic base | FAILED; Section 8.2 supplies counterarguments. |
| López-Stoll equality plus frequency mismatch as an unconditional class kill | FAILED for promotion; unresolved proof dependency. |

Eventual-zero carry is characterized negatively for the nontrivial excluded
classes: it never occurs. For general finite alphabets the T2 equivalence is
exact but remains an equivalence, not a decision procedure. No positive
realization theorem for a new substantial recursive class was obtained.

The strongest surviving framework is a fixed-dimensional, ordered arithmetic
substitution recurrence (12)–(13), with an actual output proved aperiodic,
outside the established obstructions. In a primitive/automatic case a
hypothetical positive anchor must also support exponential growth. Neither
its symbolic recursion nor that forced growth supplies the anchor.

## 13. One theorem obligation for T4

**CONJECTURAL target — residual uniform-substitution carry rigidity.**

> Let `sigma` be a growing primitive constant-length substitution, prolongable
> on `i_0`, with a letter coding into valuations `{1,2}`. Suppose its output
> is not eventually periodic and has mean `alpha<lambda`. In the residual
> cases not excluded by Section 6, prove that its exact representatives in
> (13) are unbounded; equivalently, prove that bounded representatives force
> the coded output to be eventually periodic.

This is one theorem-sized target, not an assumption or a universal statement
about all finite recursive systems. It retains a substantial automatic class,
an exact rational frequency, and the explicit integer recurrence. The known
first-letter return test already excludes any case having a later initial
letter at position `q` with `alpha*(1+1/q)>lambda`; T4 must address the residual
arithmetic instead of rerunning that test or choosing words by finite scores.

The target is selected because T3 removes the claimed density shortcut and
provides the precise return-divisibility mechanism that now needs strengthening.
Proving that **all** such words have sufficiently early returns is not assumed;
it could be false as a purely combinatorial assertion. Work directly with the
arithmetic recurrence when that sufficient return condition fails.

For a positive certification attempt the single missing bridge remains:
**prove bounded `R_m` / eventual zero carry for one explicit aperiodic word,
with the stabilized integer `N>1` identified exactly.** The T4 negative target
would decide that bridge for the stated class. No candidate exists to which
the repository certification protocol can yet be applied.

**Exact next authorized action:** CDM4-T4, theory-only audit of this residual
uniform-substitution carry-rigidity statement, beginning by checking the T3
proofs and Wang overlap and then analyzing the unbounded arithmetic state in
(12)–(13). Tiny frozen exact identity checks may support a particular derivation.
No substitution enumeration, finite carry optimization, candidate trajectories,
new scientific starts, generator, CPU campaign, or GPU work is authorized.

## 14. Tiny exact verification and compute decision

The envelope in `cdm4_t3_symbolic_check.py` was frozen before execution: the
two Thue-Morse level-one blocks `(1,2)` and `(2,1)`, their concatenation, and
levels 1–3 of that one analytically selected substitution. The specified return
check uses at most 32 symbols. The script has no start-population input, orbit
search, scoring, randomness, substitution enumeration, or configurable depth.

`CDM4_T3_SYMBOLIC_CHECK_RESULT.json` records the **FINITE-VERIFIED** checks of
block composition, the inverse cocycle, exact odd endpoints, lift composition,
normalization, substitution recurrences, and the specified return. The infinite
obstructions are proved above and do not follow from these fixtures.

No new finite-search object merits registration in `METRIC_CATALOG.md`.
No theorem-derived scientific workload clears the promotion standard, so
`COMPUTE_BUDGET.md` is unchanged. Theory-support exact checks remain the only
permitted computation. No generator/distribution or GPU work is justified.

## 15. Final questions answered

| # | Question | Answer |
|---|---|---|
| 1 | Exact block law? | (3)–(9), including the odd-endpoint bit and state-dependent lift. |
| 2 | Finite-dimensional substitution recurrence? | Yes: (12)–(13), with `3r` essential unbounded integer registers. |
| 3 | Can primitive substitutions have eventual-zero carry? | Excluded by (20) for a substantial class; general aperiodic case UNKNOWN. |
| 4 | Aperiodic automatic positive-integer Collatz languages? | UNKNOWN generally; if realized they must have the strict growth gap in Section 9. |
| 5 | Is López-Stoll density validated for project use? | No; the cross-completion/parity-realization step fails independent verification. |
| 6 | What does that theorem rigorously eliminate here? | Nothing unconditionally; its proposed global exclusions remain conditional. |
| 7 | Can return words prohibit bounded representatives? | Yes under (17)/(20); finiteness of the return alphabet alone does not. |
| 8 | Is carry a cocycle? | Exact affine cocycle (10); exact state-dependent mixed-radix law (9). |
| 9 | Does bounded cocycle imply periodicity? | Not in general; no valid compact-base carry theorem supplied. |
| 10 | Balanced words beyond Wang excluded? | Critical bounded discrepancy, and subcritical words meeting the return inequality. |
| 11 | Can endpoint coupling force infinitely many nonzero digits? | Yes for the return and critical-discrepancy classes. |
| 12 | Does a mixed-adic theorem force bounded `R_m`? | None found; the proved height argument instead forces unbounded `R_m` in its scope. |
| 13 | One canonical substitution solved exactly? | Yes: Thue-Morse valuations `1+t_n` are non-anchorable. |
| 14 | Classes killed? | Exactly the proved rows of Section 12, including specified finite-prefix extensions. |
| 15 | Classes surviving? | Residual primitive/automatic classes, general morphic words, and subcritical balanced cases outside the return theorem. |
| 16 | Strongest new obstruction? | Return-prefix congruence versus distinct-orbit height, (17), with primitive criterion (20). |
| 17 | Strongest surviving framework? | Exact ordered substitution arithmetic plus the ordinary integer anchor obligation. |
| 18 | Single proof obligation blocking certification? | Bounded canonical representatives for one explicit aperiodic word, identifying `N>1`. |
| 19 | New scientific compute justified? | No. |
| 20 | New generator/distribution justified? | No. |
| 21 | GPU work justified? | No. |
| 22 | Explicit candidate found? | No. |
| 23 | Explicit unbounded orbit found? | No. |
| 24 | Counterexample claimed? | No. |
| 25 | Exact next authorized action? | Theory-only CDM4-T4 on the single residual uniform-substitution rigidity target in Section 13. |

## 16. Focused source ledger

Primary sources were inspected, with access date 2026-10-02. “Published” below
refers to the cited journal article, not the date of its web upload. No global
novelty claim or exhaustive literature coverage is asserted.

| ID | Source and status | Verified role / boundary |
|---|---|---|
| L1 | Bernstein–Lagarias, *The 3x+1 Conjugacy Map*, Canadian Journal of Mathematics 48 (1996), [DOI 10.4153/CJM-1996-060-x](https://doi.org/10.4153/CJM-1996-060-x). Published. | Same shortened convention; 2-adic conjugacy, not an ordinary anchor theorem. |
| L2 | Sanmin Wang, *An E-Sequence Approach to the 3x+1 Problem*, Symmetry 11 (2019), 1415, [DOI](https://doi.org/10.3390/sym11111415); [author full text, arXiv:1809.02278v4](https://arxiv.org/html/1809.02278v4). Published; theorem numbering here follows inspected author text. | Accelerated E-sequences; Theorems 4.2, 4.13, 4.14 and Corollary 4.7; prior-art overlap acknowledged. Publisher access was rate-limited during T3. |
| L3 | Jason P. Bell, *The upper density of an automatic set is rational*, JTNB 32 (2020), 585–604, [journal and PDF](https://jtnb.centre-mersenne.org/articles/10.5802/jtnb.1135/). Published. | Theorem 1.1 and Corollary 1.2, including limsup rather than assumed density. |
| L4 | Josefina López–Peter Stoll, *The 3x+1 Periodicity Conjeture in R*, [arXiv:2101.12747v1](https://arxiv.org/abs/2101.12747v1), [PDF](https://arxiv.org/pdf/2101.12747v1). Preprint. | Proof dependency audited in Section 10; NOT load-bearing. |
| L5 | Fabien Durand, *A characterization of substitutive sequences using return words*, Discrete Mathematics 179 (1998), 89–101, [DOI](https://doi.org/10.1016/S0012-365X(97)00029-0), [author text](https://arxiv.org/abs/0807.3322). Published. | Finite derived sequences characterize primitive substitutivity; no bound on arithmetic registers. |
| L6 | Fabien Durand, *Cobham's theorem for substitutions*, JEMS 13 (2011), 1799–1814, [DOI](https://doi.org/10.4171/jems/294), [inspected author manuscript](https://arxiv.org/abs/1010.4009). Published. | Multiplicatively independent Perron structures must generate the same sequence. |
| L7 | Coronel–Navas–Ponce, *On bounded cocycles of isometries over a minimal dynamics*, [full author text](https://arxiv.org/html/1101.3523v4), especially Section 3. | Exact compactness, continuity, minimality and boundedness hypotheses checked; no imported carry conclusion. |
| L8 | Adamczewski–Bugeaud, *On the complexity of algebraic numbers I. Expansions in integer bases*, Annals of Mathematics 165 (2007), 547–565, [journal](https://annals.math.princeton.edu/2007/165-2/p04), [full author text](https://arxiv.org/pdf/math/0511674). Published. | Hensel expansion theorem, Section 6; the Collatz conjugate is not the tested digit expansion. |
| L9 | Eliahou–Verger-Gaugry, *The number system in rational base 3/2 and the 3x+1 problem*, Comptes Rendus Mathématique 363 (2025), 329–336, [article and PDF](https://comptes-rendus.academie-sciences.fr/mathematique/articles/10.5802/crmath.662/). Published. | Exact extension identities, with auxiliary-map convention distinguished. |
| L10 | López–Stoll, *The 3x+1 Conjugacy Map over a Sturmian Word*, Integers 9 (2009), 141–162, [journal PDF](https://math.colgate.edu/~integers/j13/j13.pdf). Published. | 2-adic continued fractions; examples do not prove general morphic irrationality. |
| L11 | Lustig–Uyanik, *Perron-Frobenius theory and frequency convergence for reducible substitutions*, Discrete and Continuous Dynamical Systems 37 (2017), [DOI](https://doi.org/10.3934/dcds.2017015). Published. | Primitive frequency theory is the only case needed here; no frequency claim for arbitrary morphic outputs. |
| L12 | Gelfond-Schneider theorem, also stated in A. Baker, *Linear forms in the logarithms of algebraic numbers*, Mathematika 13 (1966), 204–216, [journal extract](https://www.cambridge.org/core/journals/mathematika/article/linear-forms-in-the-logarithms-of-algebraic-numbers/55674A9E93007ADD34DCEDC12EA4FB4D), [DOI](https://doi.org/10.1112/S0025579300003971). Published. | Established algebraic-power theorem; its precise application is proved in Section 9.2. |
| L13 | Sprunger–Tune–Endrullis–Moss, *Eigenvalues and Transduction of Morphic Sequences: Extended Version*, [arXiv:1406.1754](https://arxiv.org/abs/1406.1754). Author extended version. | Morphic transduction framework, not automaticity of arbitrary variable-length encodings. |
| L14 | Bruno Parvaix, *Substitution invariant sturmian bisequences*, JTNB 11 (1999), 201–210, [DOI and article](https://jtnb.centre-mersenne.org/articles/10.5802/jtnb.246/). Published. | Symbolic invariant-word classification, distinguished from Collatz realization. |
| L15 | Oliver Kramer, *Adaptive Search in Collatz Exponent-Code Space via 2-adic and 3-adic Constraints*, [arXiv:2607.10041v1](https://arxiv.org/html/2607.10041v1), 2026-07-10. Preprint. | Necessary fixed-start residue-rate statements; no finite diagnostic is promoted. |
