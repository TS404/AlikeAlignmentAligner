// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_align
List rcpp_align(CharacterMatrix ref, CharacterMatrix aln);
RcppExport SEXP AlikeAlignmentAligner_rcpp_align(SEXP refSEXP, SEXP alnSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type ref(refSEXP);
    Rcpp::traits::input_parameter< CharacterMatrix >::type aln(alnSEXP);
    __result = Rcpp::wrap(rcpp_align(ref, aln));
    return __result;
END_RCPP
}
