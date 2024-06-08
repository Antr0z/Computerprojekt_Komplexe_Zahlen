#include "cmplxpol_s86689.h"
cmplxpol::cmplxpol(double betrag){
    ph = betrag;
    bt = betrag;
}

double cmplxpol::abds(double zusatz){
    double mii=bt*ph+zusatz;
    return mii;
}