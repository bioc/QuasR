#include <stdio.h>
#include <math.h>
#include <Rinternals.h>
#include <samtools-1.7-compat.h>

#define MIN_INTRON_LENGTH 60 // minimum length of an insertion for the alignment to be "spliced"

int _isSpliced(const bam1_t *hit);
void _reverse(char *buf, int len);
void _complement(char *buf, int len);
samfile_t * _bam_tryopen(const char *filename, const char *filemode, void *aux);
SEXP _getListElement(SEXP list, const char *str);
