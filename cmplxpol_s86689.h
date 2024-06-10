#pragma once
class cmplxpol{
    private:
        double bt, ph;
    public:
        cmplxpol(void); //Standart-Konstruktor
        cmplxpol(double bt,double ph); //Parametisierbarer Konstruktor für Betrag und Phase
        cmplxpol(double real, double imag); //Parametisierbarer Konstruktor für Real- und Imaginärteil
        cmplxpol(double );
        cmplxpol();
        double real();
        double imag();
        double abs();
        double arg();
        double arg_rad();
        double set_pol();
        double drucke();
};