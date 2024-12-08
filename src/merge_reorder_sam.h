#include <cstdlib>
#include <iostream>
#include <fstream>
#include <queue>
#include <map>
#include <algorithm>
#include "htslib/sam.h"

// include Boolean.h early, will define TRUE/FALSE enum prefent Rdefines.h from defining them as int constants
#include <R_ext/Boolean.h>
#include <Rdefines.h>
#include <R.h>

int _merge_reorder_sam(const char** fnin, int nin, const char* fnout, int mode, int maxhits);

#ifdef __cplusplus
extern "C" {
#endif
    SEXP merge_reorder_sam(SEXP infiles, SEXP outfile, SEXP mode, SEXP maxhits);
#ifdef __cplusplus
}
#endif
