// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// stat_sav_file
Rcpp::List stat_sav_file(const std::string& file_path);
RcppExport SEXP _savr_stat_sav_file(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(stat_sav_file(file_path));
    return rcpp_result_gen;
END_RCPP
}
// read_sav_header
Rcpp::List read_sav_header(const std::string& file_path);
RcppExport SEXP _savr_read_sav_header(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(read_sav_header(file_path));
    return rcpp_result_gen;
END_RCPP
}
// read_sav_region
Rcpp::List read_sav_region(const std::string& file_path, const std::string& chrom, std::int32_t beg, std::int32_t end, const std::string& fmt_str);
RcppExport SEXP _savr_read_sav_region(SEXP file_pathSEXP, SEXP chromSEXP, SEXP begSEXP, SEXP endSEXP, SEXP fmt_strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file_path(file_pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type chrom(chromSEXP);
    Rcpp::traits::input_parameter< std::int32_t >::type beg(begSEXP);
    Rcpp::traits::input_parameter< std::int32_t >::type end(endSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type fmt_str(fmt_strSEXP);
    rcpp_result_gen = Rcpp::wrap(read_sav_region(file_path, chrom, beg, end, fmt_str));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_savr_stat_sav_file", (DL_FUNC) &_savr_stat_sav_file, 1},
    {"_savr_read_sav_header", (DL_FUNC) &_savr_read_sav_header, 1},
    {"_savr_read_sav_region", (DL_FUNC) &_savr_read_sav_region, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_savr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
