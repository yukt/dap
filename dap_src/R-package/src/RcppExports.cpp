// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dap_main
List dap_main(List arg);
RcppExport SEXP _dap_dap_main(SEXP argSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type arg(argSEXP);
    rcpp_result_gen = Rcpp::wrap(dap_main(arg));
    return rcpp_result_gen;
END_RCPP
}
// dap_sbams
List dap_sbams(NumericMatrix& x, NumericVector& y, int normalize, List arg);
RcppExport SEXP _dap_dap_sbams(SEXP xSEXP, SEXP ySEXP, SEXP normalizeSEXP, SEXP argSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< List >::type arg(argSEXP);
    rcpp_result_gen = Rcpp::wrap(dap_sbams(x, y, normalize, arg));
    return rcpp_result_gen;
END_RCPP
}
// read_sbams
DataFrame read_sbams(const char * data_file);
RcppExport SEXP _dap_read_sbams(SEXP data_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type data_file(data_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(read_sbams(data_file));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dap_dap_main", (DL_FUNC) &_dap_dap_main, 1},
    {"_dap_dap_sbams", (DL_FUNC) &_dap_dap_sbams, 4},
    {"_dap_read_sbams", (DL_FUNC) &_dap_read_sbams, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}