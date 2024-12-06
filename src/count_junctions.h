// include Boolean.h early, will define TRUE/FALSE enum prefent Rdefines.h from defining them as int constants
#include <R_ext/Boolean.h>
#include <Rdefines.h>
#include <samtools-1.7-compat.h>

SEXP count_junctions(SEXP bamfile, SEXP tid, SEXP start, SEXP end, SEXP allelic, SEXP includeSecondary, SEXP mapqMin, SEXP mapqMax);
