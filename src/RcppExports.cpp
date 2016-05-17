// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cllikProj
double cllikProj(const NumericVector& x, const IntegerVector& dims, const NumericVector& ALPHA0, const NumericMatrix& BETA0, const NumericMatrix& UU, const NumericVector& RR, const NumericVector& TAU);
RcppExport SEXP dnc_cllikProj(SEXP xSEXP, SEXP dimsSEXP, SEXP ALPHA0SEXP, SEXP BETA0SEXP, SEXP UUSEXP, SEXP RRSEXP, SEXP TAUSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA0(ALPHA0SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type BETA0(BETA0SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type UU(UUSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type TAU(TAUSEXP);
    __result = Rcpp::wrap(cllikProj(x, dims, ALPHA0, BETA0, UU, RR, TAU));
    return __result;
END_RCPP
}
// cLogLikelihood
double cLogLikelihood(const NumericVector& Yvec, const NumericVector& Xvec, const IntegerVector& DIMS, const NumericVector& ALPHA, const NumericVector& SS1);
RcppExport SEXP dnc_cLogLikelihood(SEXP YvecSEXP, SEXP XvecSEXP, SEXP DIMSSEXP, SEXP ALPHASEXP, SEXP SS1SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Xvec(XvecSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type DIMS(DIMSSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA(ALPHASEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SS1(SS1SEXP);
    __result = Rcpp::wrap(cLogLikelihood(Yvec, Xvec, DIMS, ALPHA, SS1));
    return __result;
END_RCPP
}
// cposteriorNoOmega
double cposteriorNoOmega(const IntegerVector& dims, const NumericVector& Yvec, const NumericVector& XVec, const NumericVector& RR, const NumericVector& TAU, const NumericVector& SS1, const NumericVector& ALPHA, const NumericMatrix& BETA, const IntegerMatrix& Z, const NumericMatrix& UU, const NumericVector& CC, const NumericMatrix& GAMSTAR, const NumericVector& A2STAR, const NumericVector& B2STAR, const NumericVector& B3STAR);
RcppExport SEXP dnc_cposteriorNoOmega(SEXP dimsSEXP, SEXP YvecSEXP, SEXP XVecSEXP, SEXP RRSEXP, SEXP TAUSEXP, SEXP SS1SEXP, SEXP ALPHASEXP, SEXP BETASEXP, SEXP ZSEXP, SEXP UUSEXP, SEXP CCSEXP, SEXP GAMSTARSEXP, SEXP A2STARSEXP, SEXP B2STARSEXP, SEXP B3STARSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type XVec(XVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SS1(SS1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA(ALPHASEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type BETA(BETASEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type UU(UUSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type CC(CCSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type GAMSTAR(GAMSTARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A2STAR(A2STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B2STAR(B2STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B3STAR(B3STARSEXP);
    __result = Rcpp::wrap(cposteriorNoOmega(dims, Yvec, XVec, RR, TAU, SS1, ALPHA, BETA, Z, UU, CC, GAMSTAR, A2STAR, B2STAR, B3STAR));
    return __result;
END_RCPP
}
// csimulateData
arma::cube csimulateData(const NumericVector& Xvec, const IntegerVector& dims, const NumericVector& ALPHA, const NumericVector& SS1);
RcppExport SEXP dnc_csimulateData(SEXP XvecSEXP, SEXP dimsSEXP, SEXP ALPHASEXP, SEXP SS1SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type Xvec(XvecSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA(ALPHASEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SS1(SS1SEXP);
    __result = Rcpp::wrap(csimulateData(Xvec, dims, ALPHA, SS1));
    return __result;
END_RCPP
}
// cVBnoClust
Rcpp::List cVBnoClust(const IntegerVector& dims, const NumericVector& Yvec, const NumericVector& muVec, const NumericVector& SigVec, const NumericVector& A2STAR, const NumericVector& B2STAR, const NumericVector& B3STAR, const NumericVector& EOmVec, const NumericVector& A0, const NumericVector& B0, const NumericVector& A0STAR, const NumericVector& B0STAR, const NumericVector& AI2, const NumericVector& BI2, const NumericVector& A3, const NumericVector& B3, const NumericVector& ES1, const NumericVector& ES2);
RcppExport SEXP dnc_cVBnoClust(SEXP dimsSEXP, SEXP YvecSEXP, SEXP muVecSEXP, SEXP SigVecSEXP, SEXP A2STARSEXP, SEXP B2STARSEXP, SEXP B3STARSEXP, SEXP EOmVecSEXP, SEXP A0SEXP, SEXP B0SEXP, SEXP A0STARSEXP, SEXP B0STARSEXP, SEXP AI2SEXP, SEXP BI2SEXP, SEXP A3SEXP, SEXP B3SEXP, SEXP ES1SEXP, SEXP ES2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type muVec(muVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SigVec(SigVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A2STAR(A2STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B2STAR(B2STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B3STAR(B3STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type EOmVec(EOmVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A0(A0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A0STAR(A0STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B0STAR(B0STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type AI2(AI2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type BI2(BI2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A3(A3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B3(B3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ES1(ES1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ES2(ES2SEXP);
    __result = Rcpp::wrap(cVBnoClust(dims, Yvec, muVec, SigVec, A2STAR, B2STAR, B3STAR, EOmVec, A0, B0, A0STAR, B0STAR, AI2, BI2, A3, B3, ES1, ES2));
    return __result;
END_RCPP
}
// cVBUpdate
Rcpp::List cVBUpdate(const IntegerVector& DIMS, const NumericVector& Yvec, const NumericVector& CC, const NumericMatrix& GAMSTAR, const NumericVector& A2STAR, const NumericVector& B2STAR, const NumericVector& B3STAR, const NumericVector& EOmVec, const NumericVector& muVec, const NumericVector& SigVec, const NumericMatrix& BI0G, const NumericVector& BitbarVec, const NumericVector& BithkVec, const NumericVector& ER, const NumericVector& ER2, const NumericVector& AI2, const NumericVector& BI2, const NumericMatrix& NU, const NumericVector& A3, const NumericVector& B3, const NumericVector& ES1, const NumericVector& ES2, const NumericMatrix& GAM);
RcppExport SEXP dnc_cVBUpdate(SEXP DIMSSEXP, SEXP YvecSEXP, SEXP CCSEXP, SEXP GAMSTARSEXP, SEXP A2STARSEXP, SEXP B2STARSEXP, SEXP B3STARSEXP, SEXP EOmVecSEXP, SEXP muVecSEXP, SEXP SigVecSEXP, SEXP BI0GSEXP, SEXP BitbarVecSEXP, SEXP BithkVecSEXP, SEXP ERSEXP, SEXP ER2SEXP, SEXP AI2SEXP, SEXP BI2SEXP, SEXP NUSEXP, SEXP A3SEXP, SEXP B3SEXP, SEXP ES1SEXP, SEXP ES2SEXP, SEXP GAMSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type DIMS(DIMSSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type CC(CCSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type GAMSTAR(GAMSTARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A2STAR(A2STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B2STAR(B2STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B3STAR(B3STARSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type EOmVec(EOmVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type muVec(muVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SigVec(SigVecSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type BI0G(BI0GSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type BitbarVec(BitbarVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type BithkVec(BithkVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ER(ERSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ER2(ER2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type AI2(AI2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type BI2(BI2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type NU(NUSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type A3(A3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B3(B3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ES1(ES1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ES2(ES2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type GAM(GAMSEXP);
    __result = Rcpp::wrap(cVBUpdate(DIMS, Yvec, CC, GAMSTAR, A2STAR, B2STAR, B3STAR, EOmVec, muVec, SigVec, BI0G, BitbarVec, BithkVec, ER, ER2, AI2, BI2, NU, A3, B3, ES1, ES2, GAM));
    return __result;
END_RCPP
}
// drawMiss
Rcpp::List drawMiss(const IntegerVector& dims, const NumericVector& Yvec, const NumericVector& SS1, const IntegerMatrix& MISS, const NumericVector& XVec, const NumericVector& ALPHA);
RcppExport SEXP dnc_drawMiss(SEXP dimsSEXP, SEXP YvecSEXP, SEXP SS1SEXP, SEXP MISSSEXP, SEXP XVecSEXP, SEXP ALPHASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SS1(SS1SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type MISS(MISSSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type XVec(XVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA(ALPHASEXP);
    __result = Rcpp::wrap(drawMiss(dims, Yvec, SS1, MISS, XVec, ALPHA));
    return __result;
END_RCPP
}
// drawS
Rcpp::List drawS(const IntegerVector& dims, const NumericVector& Yvec, const NumericVector& OmVec, const NumericVector& XVec, const NumericVector& ALPHA);
RcppExport SEXP dnc_drawS(SEXP dimsSEXP, SEXP YvecSEXP, SEXP OmVecSEXP, SEXP XVecSEXP, SEXP ALPHASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type OmVec(OmVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type XVec(XVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA(ALPHASEXP);
    __result = Rcpp::wrap(drawS(dims, Yvec, OmVec, XVec, ALPHA));
    return __result;
END_RCPP
}
// drawTau
arma::colvec drawTau(const IntegerVector& dims, const NumericVector& Xvec, const NumericVector& RR, const NumericMatrix& UU, const IntegerMatrix& Z);
RcppExport SEXP dnc_drawTau(SEXP dimsSEXP, SEXP XvecSEXP, SEXP RRSEXP, SEXP UUSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Xvec(XvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type UU(UUSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    __result = Rcpp::wrap(drawTau(dims, Xvec, RR, UU, Z));
    return __result;
END_RCPP
}
// drawU
arma::mat drawU(const IntegerVector& dims, const IntegerVector& TAU, const IntegerVector& RR, const NumericVector& Xvec, const IntegerMatrix& Z);
RcppExport SEXP dnc_drawU(SEXP dimsSEXP, SEXP TAUSEXP, SEXP RRSEXP, SEXP XvecSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Xvec(XvecSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type Z(ZSEXP);
    __result = Rcpp::wrap(drawU(dims, TAU, RR, Xvec, Z));
    return __result;
END_RCPP
}
// drawXZar
Rcpp::List drawXZar(const IntegerVector& dims, const NumericVector& XVec, const NumericVector& Yvec, const NumericVector& OmVec, const NumericVector& SS1, const NumericVector& ALPHA, const NumericVector& TAU, const NumericVector& RR, const NumericMatrix& UU, const IntegerMatrix& ZZ, const NumericVector& rnVec, const NumericMatrix& BB, const NumericVector& RNa, const NumericVector& B3Star, const NumericVector& CC);
RcppExport SEXP dnc_drawXZar(SEXP dimsSEXP, SEXP XVecSEXP, SEXP YvecSEXP, SEXP OmVecSEXP, SEXP SS1SEXP, SEXP ALPHASEXP, SEXP TAUSEXP, SEXP RRSEXP, SEXP UUSEXP, SEXP ZZSEXP, SEXP rnVecSEXP, SEXP BBSEXP, SEXP RNaSEXP, SEXP B3StarSEXP, SEXP CCSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type XVec(XVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Yvec(YvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type OmVec(OmVecSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type SS1(SS1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ALPHA(ALPHASEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type UU(UUSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type ZZ(ZZSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type rnVec(rnVecSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type BB(BBSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type RNa(RNaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type B3Star(B3StarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type CC(CCSEXP);
    __result = Rcpp::wrap(drawXZar(dims, XVec, Yvec, OmVec, SS1, ALPHA, TAU, RR, UU, ZZ, rnVec, BB, RNa, B3Star, CC));
    return __result;
END_RCPP
}
