#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <vector>
#include <cstring>
#include <string>
#include <stdbool.h>
#include "htslib/sam.h"

// include Boolean.h early, will define TRUE/FALSE enum prefent Rdefines.h from defining them as int constants
#include <R_ext/Boolean.h>
#include <Rdefines.h>

#define MAX_READ_LENGTH 500

#ifdef __cplusplus
extern "C" {
#endif
#include "utilities.h"

    SEXP quantify_methylation(SEXP infiles, SEXP regionChr, SEXP regionChrLen, SEXP regionStart,
			      SEXP seqstring, SEXP mode, SEXP returnZero, SEXP mapqMin, SEXP mapqMax);
    SEXP detect_SNVs(SEXP infiles, SEXP regionChr, SEXP regionChrLen, SEXP regionStart,
		     SEXP seqstring, SEXP returnZero, SEXP mapqMin, SEXP mapqMax);
    SEXP quantify_methylation_allele(SEXP infiles, SEXP regionChr, SEXP regionChrLen, SEXP regionStart,
				     SEXP seqstring, SEXP mode, SEXP returnZero, SEXP mapqMin, SEXP mapqMax);
    SEXP quantify_methylation_singleAlignments(SEXP infiles, SEXP regionChr, SEXP regionChrLen, SEXP regionStart,
					       SEXP seqstring, SEXP mode, SEXP mapqMin, SEXP mapqMax);
#ifdef __cplusplus
}
#endif
