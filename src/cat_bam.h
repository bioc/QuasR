// include Boolean.h early, will define TRUE/FALSE enum prefent Rdefines.h from defining them as int constants
#include <R_ext/Boolean.h>
#include <Rdefines.h>
#include "htslib/sam.h"

SEXP cat_bam(SEXP inbam, SEXP outbam);
