# Promotion Policy

Promotion is a compute-allocation decision, not a mathematical truth claim.

## Candidate IDs

Every recorded promoted candidate receives a permanent identifier: `CDM-00000001`, `CDM-00000002`, ... IDs are never reused.

## Required record

Each promoted candidate records: candidate ID; starting integer and bit length; decimal magnitude estimate; generation method; stage; reason; exact steps; peak value/representation; peak bit length; peak/start ratio; first descent; odd/even statistics; growth-window statistics; residue information; basin status; merge status; estimated next-stage cost; independent replay status; final disposition.

## Beyond L1

Every promotion beyond L1 must explicitly answer:

> WHY IS ADDITIONAL COMPUTE EXPECTED TO PRODUCE MATHEMATICAL INFORMATION?

Acceptable reasons identify a testable structural hypothesis. Unacceptable reasons include only long survival, large start, large peak, or budget expiry.

## CDM0 calibration promotion

CDM0 uses a transparent short-prefix rule only to exercise the software transition. A start unresolved after 8 steps with no descent below its start may be promoted to L1, subject to quota. This is **not** a scientifically validated filter.
