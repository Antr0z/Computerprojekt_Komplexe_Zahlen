#pragma once
class cmplxpol{
    private:
        double bt, ph, re, im;
    public:
        cmplxpol(void); //Standart-Konstruktor
        cmplxpol(double betrag, double phase); //Parametisierbarer Konstruktor für Betrag und Phase
        cmplxpol(double real, char complxj, double imag); //Parametisierbarer Konstruktor für Real- und Imaginärteil
        cmplxpol(double i); //Konvertierungs-Konstruktor double -> cmplxpol        
        operator double (void) const; //Konvertierungs-Konstruktor cmplxpol -> double
        double real();
        double imag();
        double abs();
        double arg();
        double arg_rad();
        double set_pol();
        void drucke();
};