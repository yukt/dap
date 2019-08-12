// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dap_main
List dap_main(List arg, int quiet);
RcppExport SEXP _dap_dap_main(SEXP argSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type arg(argSEXP);
    Rcpp::traits::input_parameter< int >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(dap_main(arg, quiet));
    return rcpp_result_gen;
END_RCPP
}
// dap_sbams
List dap_sbams(NumericMatrix& x, NumericVector& y, int normalize, List arg, int quiet, String phenoname);
RcppExport SEXP _dap_dap_sbams(SEXP xSEXP, SEXP ySEXP, SEXP normalizeSEXP, SEXP argSEXP, SEXP quietSEXP, SEXP phenonameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< List >::type arg(argSEXP);
    Rcpp::traits::input_parameter< int >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< String >::type phenoname(phenonameSEXP);
    rcpp_result_gen = Rcpp::wrap(dap_sbams(x, y, normalize, arg, quiet, phenoname));
    return rcpp_result_gen;
END_RCPP
}
// dap_ss
List dap_ss(StringVector& snp_name, NumericVector& est, NumericVector& est_se, NumericMatrix& ld_matrix, int sample_size, double syy, List arg, int quiet);
RcppExport SEXP _dap_dap_ss(SEXP snp_nameSEXP, SEXP estSEXP, SEXP est_seSEXP, SEXP ld_matrixSEXP, SEXP sample_sizeSEXP, SEXP syySEXP, SEXP argSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector& >::type snp_name(snp_nameSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type est(estSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type est_se(est_seSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type ld_matrix(ld_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type syy(syySEXP);
    Rcpp::traits::input_parameter< List >::type arg(argSEXP);
    Rcpp::traits::input_parameter< int >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(dap_ss(snp_name, est, est_se, ld_matrix, sample_size, syy, arg, quiet));
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
    {"_dap_dap_main", (DL_FUNC) &_dap_dap_main, 2},
    {"_dap_dap_sbams", (DL_FUNC) &_dap_dap_sbams, 6},
    {"_dap_dap_ss", (DL_FUNC) &_dap_dap_ss, 8},
    {"_dap_read_sbams", (DL_FUNC) &_dap_read_sbams, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
