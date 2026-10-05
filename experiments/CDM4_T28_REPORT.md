# CDM4-T28 — NONPRINCIPAL MULTISCALE FILTRATION / ITERATED-STRATUM RELATIVE-LIFTING AUDIT

**Date:** 2026-10-05  
**Authoritative input branch:** `cdm4-t27-special-fibre-degeneration-audit`  
**Authoritative input commit:** `bfb01a45f3759569bac60f7df6a1c3cc30f3c2c7`  
**T27 merged into main at session start:** **NO** — `main` and T27 were verified divergent, so the exact T27 tip above was used as authority.  
**Working branch:** `cdm4-t28-nonprincipal-multiscale-audit`

Scientific starts: **0**. Candidate trajectories: **0**. Substitution enumeration: **NONE**. Finite-code search: **NONE**. CPU/GPU/cloud/distributed scientific work: **NONE**. Explicit anchored aperiodic word: **NO**. Unbounded orbit: **NO**. Counterexample claimed: **NO**.

## 1. Executive result

T28 does **not** prove universal nonprincipal multiscale exact relation lifting.

It does prove that several ingredients previously known only in the principal-fast case have genuine higher-codimension analogues.

Let
\[
g_1<\cdots<g_r
\]
be the T22 positive reduced growth profiles, let
\[
\Gamma_{\le i}
\]
be the positive characters of profile at most \(g_i\), and let
\[
I_{>i}\subset R:=K[\Gamma_Y]
\]
be the complementary high-growth monomial ideal.

T28 proves:

1. \(\Gamma_{\le i}\) is a face of \(\Gamma_Y\). Hence
   \[
   \boxed{I_{>i}\text{ is a prime monomial face ideal}.}
   \]

2. The canonical relative local object is
   \[
   \boxed{\mathcal O_i=R_{I_{>i}}.}
   \]
   Its maximal ideal is
   \[
   \mathfrak p_i=I_{>i}\mathcal O_i
   \]
   and its residue field is
   \[
   \boxed{
   k_i=\operatorname{Frac}K[\Gamma_{\le i}].
   }
   \]

3. If
   \[
   c_i=\operatorname{ht}I_{>i},
   \]
   then \(\mathcal O_i\) can have dimension \(c_i>1\) and need not be a DVR or a PID. Nevertheless
   \[
   \mathcal O_i/\mathfrak p_i^P
   \]
   has finite length over \(k_i\), with Hilbert–Samuel growth
   \[
   \ell_i(P)
   =
   \dim_{k_i}\mathcal O_i/\mathfrak p_i^P
   =
   \frac{e_i}{c_i!}P^{c_i}+O(P^{c_i-1}).
   \]

4. The T25 canonical finite-jet phenomenon has a genuine nonprincipal analogue. In every live higher-growth stratum,
   \[
   \operatorname{ord}_{\mathfrak p_i}\theta^{\gamma_n}\to\infty
   \]
   for the canonical prefix monomials \(\theta^{\gamma_n}\). Therefore every fixed jet
   \[
   F_t\bmod\mathfrak p_i^P
   \]
   contains only finitely many canonical prefix terms and is algebraic over \(k_i\). No orbit-dependent slow truncation is used.

5. T23's moving **analytic** coefficient obstruction is therefore removed at every fixed canonical jet order. The next-stratum coefficients are algebraic moving coefficients whose heights live on strictly slower growth scales.

6. For fixed state degree \(D_X\), let \(h(D_X)\) be the state-polynomial quotient dimension over the full torus function field. Relative Hilbert–Samuel Hermite–Padé counting gives a nonzero auxiliary with
   \[
   \operatorname{ord}_{\mathfrak p_i}E\ge P
   \]
   whenever
   \[
   h(D_X)\ell_i(D_f+1)>\ell_i(P).
   \]
   Asymptotically,
   \[
   \frac{P}{D_f}\gtrsim h(D_X)^{1/c_i}.
   \]
   After subtracting the largest possible baseline coefficient order \(D_f\), the genuine cancellation excess still satisfies
   \[
   \boxed{
   \frac{P_{\rm rel,i}}{D_f}
   \gtrsim
   h(D_X)^{1/c_i}-1.
   }
   \]
   Thus higher codimension weakens the exponent but does not kill the multiplicity amplifier.

7. The canonical finite-degree relation quotient over \(\mathcal O_i\) is torsion-free by the same domain-kernel saturation argument as T25:
   \[
   0\ne a\in\mathcal O_i,\quad aQ\in J
   \Longrightarrow Q\in J.
   \]
   It need not be free when \(c_i>1\).

8. Every finite torsion-free local relation module \(\mathscr M\) admits a free lattice
   \[
   \mathscr N\cong\mathcal O_i^s
   \]
   with
   \[
   \mathscr N\subseteq\mathscr M\subseteq d^{-1}\mathscr N
   \]
   for one fixed \(0\ne d\in\mathcal O_i\). Artin–Rees then gives a constant \(C_{\rm AR}\) bounding the \(\mathfrak p_i\)-order lost through division by this fixed denominator.

9. After a fixed macro-iterate for which
   \[
   \rho^{N*}\mathfrak p_i\subseteq\mathfrak p_i^{a_i},
   \qquad a_i\ge2,
   \]
   degree-\(D_X\) inverse transport through \(n\) macro-iterates loses at most
   \[
   \boxed{
   D_XC_{\rm AR}\frac{a_i^n-1}{a_i-1}.
   }
   \]
   This is the higher-codimension analogue of the T27 geometric slope tax.

10. Rees valuations and normalized blowups are useful interpretation devices, but they control integral closures
    \[
    \overline{I^n},
    \]
    not the exact powers \(I^n\) required by the specialization-safe proof. They therefore do not replace the face-prime adic filtration.

The first remaining obstruction is now:

\[
\boxed{
\textbf{a synchronized stratumwise algebraic-moving-target zero/nonvanishing theorem}
}
\]

for the canonical finite-jet algebra, followed by exact descent to the original relation polynomial.

Existing moving-target Subspace Theorems are newly relevant because the finite-jet coefficients have the correct small-height hierarchy
\[
h(\text{coefficient at stratum }i)
=
O(g_i(n))
=
o(g_{i+1}(n)).
\]
However T28 does not verify the complete coherence/nondegeneracy package needed to iterate such a theorem through the full face flag, and does not prove local-to-global descent from a Rees/blowup chart.

Therefore
\[
\boxed{
\text{new universal nonprincipal exact relation lifting: NOT YET OBTAINED.}
}
\]

No new positive-integer anchor class is excluded. No new bounded-\(R_m\) periodicity class is promoted. No scientific compute is justified.

## 2. Authority and inherited state

The exact T27 branch tip was verified as
\[
\boxed{
\texttt{bfb01a45f3759569bac60f7df6a1c3cc30f3c2c7}.
}
\]

At session start, `main` was not a descendant of that tip; the two histories were divergent. T28 therefore uses the exact T27 tip as authority.

T20–T27 are treated as closed infrastructure. In particular, T28 does not reopen:

- T22 reduced growth profiles and scalar-support fullness;
- T23 slow-face elimination and the general moving-analytic-coefficient obstruction;
- T24 principal-fast semigroup splitting;
- T25 relative finite jets and Hermite–Padé multiplicity;
- T26 aperiodicity \(\Rightarrow d_{\rm rel}>0\);
- T27 finite positive-slope transport tax and complete principal-fast exact lifting.

## 3. Face-prime theorem

For positive characters T22 proves
\[
\operatorname{prof}(\gamma+\eta)
=
\max\{\operatorname{prof}(\gamma),\operatorname{prof}(\eta)\}.
\]

Therefore, if
\[
\gamma+\eta\in\Gamma_{\le i},
\]
then both \(\gamma\) and \(\eta\) lie in \(\Gamma_{\le i}\). Thus \(\Gamma_{\le i}\) is a face.

The complementary monomials generate \(I_{>i}\), and
\[
R/I_{>i}\cong K[\Gamma_{\le i}]
\]
is a domain. Hence
\[
\boxed{I_{>i}\text{ is prime}.}
\]

This gives a canonical local ring at every stratum without choosing a generator or a valuation.

## 4. Canonical relative local ring and finite jets

Put
\[
\mathcal O_i=R_{I_{>i}},
\qquad
\mathfrak p_i=I_{>i}\mathcal O_i.
\]

Then
\[
\boxed{
\mathcal O_i/\mathfrak p_i
\cong
\operatorname{Frac}K[\Gamma_{\le i}].
}
\]

Because \(\mathcal O_i\) is Noetherian local, every quotient
\[
\mathcal O_i/\mathfrak p_i^P
\]
has finite length. Hilbert–Samuel theory gives the polynomial growth in Section 1.

The remaining issue is whether canonical analytic state functions have algebraic finite jets.

Let
\[
\gamma_n=\pi_Y(c(n)).
\]
For a fixed face, let \(k_i(n)\) count prefix letters \(u_j\) with
\[
\pi_Y(e_{u_j})\notin\Gamma_{\le i}.
\]
Since
\[
\theta^{\gamma_n}
=
\prod_{j<n}\theta^{\pi_Y(e_{u_j})},
\]
one has
\[
\theta^{\gamma_n}\in I_{>i}^{\,k_i(n)}.
\]

In every live higher-growth stratum,
\[
k_i(n)\to\infty.
\]
If only finitely many above-face letters occurred, repeated substitution would leave only bounded transverse incidence. The transverse part would then have spectral radius at most \(1\), while all remaining descendants lie on profiles at most \(g_i\). This cannot support a strictly higher live T22 profile, whose exponential radius is \(>1\).

Hence
\[
\operatorname{ord}_{\mathfrak p_i}\theta^{\gamma_n}\to\infty.
\]

For
\[
F_t=\sum_{n:u_n=t}a_n\theta^{\gamma_n},
\]
only finitely many terms survive modulo \(\mathfrak p_i^P\). Therefore
\[
\boxed{
F_t\bmod\mathfrak p_i^P
\text{ is finite algebraic data over }k_i.
}
\]

This is the nonprincipal finite-jet theorem.

## 5. T23 moving analytic coefficients after T28

T23 stopped after an expression
\[
f=\sum_jm_jf_j
\]
because the values \(f_j(q_n^{\rm slow})\) were moving analytic values.

For canonical finite jets, T28 replaces those coefficients by fixed algebraic functions over the slower face field.

At the next scale their values are algebraic and satisfy
\[
h(\text{coefficient})
=
O(g_i(n))
=
o(g_{i+1}(n)).
\]

Therefore the old analytic truncation obstruction is gone at fixed jet order.

The remaining theorem is not an approximation theorem; it is a moving-target zero/nonvanishing theorem for these exact algebraic jets.

## 6. Relative Hilbert–Samuel multiplicity

Fix \(D_X\), let
\[
h=h(D_X),
\]
and choose \(h\) independent state-polynomial representatives over the full torus function field.

Choose coefficient representatives from a residue-field section of
\[
\mathcal O_i/\mathfrak p_i^{D_f+1}.
\]

The coefficient space has dimension
\[
h\,\ell_i(D_f+1)
\]
over \(k_i\).

Requiring a combination to vanish modulo \(\mathfrak p_i^P\) gives at most \(\ell_i(P)\) linear conditions because all required jets are finite algebraic data.

Thus
\[
h\,\ell_i(D_f+1)>\ell_i(P)
\]
produces a nonzero auxiliary.

Using
\[
\ell_i(P)\sim \frac{e_i}{c_i!}P^{c_i},
\]
one obtains
\[
P/D_f\gtrsim h^{1/c_i}.
\]

The coefficient vector is nonzero modulo \(\mathfrak p_i^{D_f+1}\), so its minimum coefficient order is at most \(D_f\). The conservative cancellation excess therefore satisfies
\[
\boxed{
P_{\rm rel,i}\ge P-D_f.
}
\]

Hence
\[
\boxed{
P_{\rm rel,i}/D_f
\gtrsim
h(D_X)^{1/c_i}-1.
}
\]

T26's proof that algebraicity of the entire canonical state field over the torus rational function field forces eventual periodicity does not depend essentially on a principal divisor. Therefore genuine aperiodicity again forces
\[
d_{\rm rel}>0
\]
and hence \(h(D_X)\to\infty\).

So nonprincipal higher codimension does not remove the multiplicity resource.

## 7. Saturated local relation modules and transport tax

Let \(J\) be the exact functional relation ideal and fix \(D_X\).

If
\[
0\ne a\in\mathcal O_i
\]
and
\[
aQ\in J,
\]
then
\[
aQ(\mathbf G)=0
\]
in the analytic target domain, so \(Q(\mathbf G)=0\) and \(Q\in J\).

Thus the finite-degree quotient is torsion-free over \(\mathcal O_i\).

It need not be free. Instead choose a free sublattice \(\mathscr N\) of the same rank inside the torsion-free module \(\mathscr M\). The torsion quotient \(\mathscr M/\mathscr N\) is annihilated by one fixed nonzero \(d\):
\[
d\mathscr M\subseteq\mathscr N.
\]

Artin–Rees applied to
\[
d\mathscr M\subseteq\mathscr N
\]
gives \(C_{\rm AR}\) such that division through \(d\) loses at most \(C_{\rm AR}\) powers of \(\mathfrak p_i\).

For a live transverse stratum, pass to one fixed macro-iterate such that
\[
\rho^{N*}\mathfrak p_i
\subseteq
\mathfrak p_i^{a_i},
\qquad a_i\ge2.
\]

Then state-polynomial degree \(D_X\) loses at most
\[
\boxed{
D_XC_{\rm AR}
\frac{a_i^n-1}{a_i-1}
}
\]
through \(n\) inverse macro-iterates.

Thus the T27 finite-threshold slope-tax mechanism extends qualitatively beyond a DVR.

## 8. Rees valuations and blowups

The normalized blowup of a Noetherian ideal has finitely many exceptional divisorial valuations; for monomial ideals these are toric Rees valuations.

They are useful for asymptotic slope interpretation, but they characterize integral closures of powers:
\[
f\in\overline{I^n}
\]
through finitely many valuation inequalities.

Exact lifting is formulated with \(I^n\), not merely \(\overline{I^n}\).

Therefore no integral-closure replacement is promoted.

Likewise, blowing up principalizes \(I\) locally, but a relation constructed only on one exceptional chart may use chart ratios or exceptional denominators. Pullback of a known global relation is safe; descent of a newly constructed local relation is an additional theorem.

T28 does not prove that descent.

## 9. Why the fastest face is the correct first layer

For
\[
I_{>r-1},
\]
all transverse generators lie on the same fastest T22 profile \(g_r\).

Thus:

- \(\mathfrak p_{\rm fast}^P\) evaluates with local decay on scale \(P\,g_r(n)\);
- global point height is also \(\Theta(g_r(n))\);
- residue-field coefficients come from lower strata and have height \(o(g_r(n))\).

The original T22 fast/slow mismatch therefore disappears at the top relative layer.

The intended induction then descends through
\[
I_{>r-2},\ldots,I_{>1}
\]
while keeping one synchronized orbit time \(n\).

No asynchronous \(n_i\) are used.

## 10. Remaining theorem: synchronized algebraic moving targets

A future proof must establish:

### T28-Z

Let \(E\) be a nonzero analytic expression generated by the canonical state functions and algebraic toric coefficients, with the finite algebraic face-prime jets proved above.

If
\[
E(q_n)=0
\]
for infinitely many synchronized reduced orbit points, then the lowest surviving multiscale initial form must vanish identically. Iterating through the finite face flag must force \(E=0\).

At the \(i+1\)-st stage, the initial form is a finite algebraic moving target with coefficient height
\[
O(g_i(n))
=
o(g_{i+1}(n)).
\]

This matches the small-height shape of moving-target Subspace Theorem technology.

T28 does not prove:

- coherence of the moving target family;
- the required algebraic nondegeneracy on every infinite subsequence;
- the small-value-to-exact-vanishing implication in this toric setting;
- compatibility of successive face reductions with the semilinear relation module;
- exact descent to the original canonical relation.

This is now the first exact theorem-level obstruction.

## 11. Exact specialization and completion sign

No new universal nonprincipal lift is proved.

Therefore T28 does not weaken the specialization rule:
\[
\boxed{
Q(\alpha,\mathbf X)=P(\mathbf X)
}
\]
must remain literal.

The inherited completion-sign contradiction is ready immediately after such a lift:

1. append \(1\);
2. use the T21 positive-integer strict prefix gap;
3. obtain real convergence of the canonical scalar/state tails;
4. port the exact algebraic identity to the real completion;
5. reconstruct the scalar;
6. derive
   \[
   S^{(\infty)}(q)+3N=0
   \]
   against \(S^{(\infty)}(q)>0\) and \(N>0\).

T28 does not yet trigger this chain for a new class.

## 12. Required deliverable answers

- **T25 finite-jet analogue:** **YES**, for fixed canonical face-prime jets.
- **Canonical saturated relative lattices:** **YES** as finite torsion-free local modules; not necessarily free.
- **Finite divisorial family replacing the DVR:** **NOT EXACTLY**. Rees valuations describe integral closure; exact powers and Artin–Rees local modules are primary.
- **Finite multiscale slope-tax bound:** **YES** at each face prime after a fixed expanding macro-iterate.
- **Relative Hermite–Padé multiplicity dominates the tax:** **YES at the local quantitative level**; the ratio grows like \(h(D_X)^{1/c_i}-1\).
- **Moving analytic coefficients:** **ELIMINATED at fixed canonical jet order**, replaced by algebraic lower-height moving coefficients.
- **Rees/blowup specialization safety:** pullback is safe; local-to-global descent of a newly constructed relation is **NOT PROVED**.
- **New exact relation-lifting theorem:** **NO**.
- **Literal \(Q(\alpha,\mathbf X)=P(\mathbf X)\):** no new lift, so no new claim.
- **Completion-sign contradiction for a new class:** **NO**.
- **New positive-integer anchor class excluded:** **NO**.
- **Extension of \(R_m\) bounded \(\Rightarrow\) eventual periodicity beyond principal-fast:** **NO**.
- **Positive rational noninteger:** unchanged; requires independent real subcriticality plus exact lifting.
- **Negative rational:** unchanged and unexcluded.
- **Explicit anchored aperiodic word / candidate / unbounded orbit / counterexample:** **NONE**.
- **Scientific compute justified:** **NO**.

## 13. Literature checkpoint

The literature audit supports the structural split used above.

Classical Rees valuation theory describes integral closures of ideal powers using finitely many DVRs associated with normalized blowups. Artin–Rees supplies the finite filtration loss for a fixed submodule inclusion in a Noetherian module.

Ru–Vojta moving-target Subspace Theorem technology and later moving-hypersurface variants retain the decisive small-height hypothesis on algebraic moving coefficients. T28's finite jets now have that height shape; T23's analytic truncations did not.

Adamczewski–Faverjon 2026 remains published and relevant but does not itself supply T28-Z.

Enzo Brechler's arXiv:2607.24877 was rechecked on 2026-10-05 and remains listed as a preprint; no journal publication was located. It is non-load-bearing.

## 14. Permanent T28 lessons

### T28-L1 — growth strata are canonical prime faces

Use
\[
I_{>i}
\]
as face primes, not arbitrary monomial ideals.

### T28-L2 — principalness is not required for finite canonical jets

Finite canonical transverse jets follow from growing prefix order, not from a single uniformizer.

### T28-L3 — higher codimension weakens but does not kill multiplicity

Hilbert–Samuel dimension changes the gain from \(h\) to roughly \(h^{1/c}\), still unbounded under positive relative transcendence.

### T28-L4 — freeness is convenient, not essential

Free-lattice sandwiches plus Artin–Rees give finite transport loss for torsion-free local modules.

### T28-L5 — Rees valuations see integral closure

Do not replace exact powers by integral closures without an exact descent theorem.

### T28-L6 — the moving coefficient obstruction has changed

The live problem is now algebraic moving-target zero/nonvanishing and exact descent, not analytic coefficient truncation.

### T28-L7 — synchronization remains absolute

Every layer uses the same exact semilinear orbit time.

## 15. Exact next theorem-sized obligation

**CDM4-T29 — CANONICAL STRATUMWISE ALGEBRAIC-MOVING-TARGET ZERO THEOREM / EXACT-DESCENT AUDIT.**

Treat as closed:

- face-prime structure of every \(I_{>i}\);
- canonical local rings \(\mathcal O_i\);
- finite algebraic canonical jets;
- higher-codimension relative Hilbert–Samuel multiplicity;
- torsion-free local relation modules and free-lattice sandwiches;
- finite Artin–Rees semilinear transport tax;
- the fact that Rees valuations control integral closure rather than exact powers;
- one synchronized orbit time.

The next theorem must:

> prove that the finite algebraic moving initial forms supplied by the canonical face-prime jets satisfy a synchronized moving-target zero/nonvanishing theorem along the T18 dense orbit, with coefficient height \(o\) of the next-stratum point height; iterate this through the complete finite growth flag; and prove exact descent to the original canonical relation module with
> \[
> Q(\alpha,\mathbf X)=P(\mathbf X)
> \]
> literally.

A successful T29 theorem would remove the remaining T22/T23 nonprincipal multiscale obstruction and should immediately trigger the inherited completion-sign contradiction.

No scientific compute is authorized.

## 16. Classification

\[
\boxed{
\textbf{C — NEW CANONICAL MULTISCALE RELATIVE INFRASTRUCTURE PROVED; FULL EXACT LIFTING STILL OPEN.}
}
\]
