#ifndef CMPLXPOL_H_
#define CMPLXPOL_H_
#include <iostream>
class cmplxpol{
    private:
        double bt, ph, re, im, phrad;
    public:

        /**** Konstruktoren ****/

        cmplxpol(void); //Standart-Konstruktor
        cmplxpol(double betrag, double phase); //Parametisierbarer Konstruktor für Betrag und Phase
        cmplxpol(double real,const char complxj, double imag); //Parametisierbarer Konstruktor für Real- und Imaginärteil
        cmplxpol(double i); //Konvertierungs-Konstruktor double -> cmplxpol        
        operator double (void) const; //Konvertierungs-Konstruktor cmplxpol -> double
        
        /**** Methoden ****/
        
        double real(void) const;
        double imag(void) const;
        const char imagj(void) const;
        double abs(void) const;
        double arg(void) const;
        double arg_rad(void) const;
        void set_pol(double betrag, double phase);
        void set_pol(double real,const char complxj, double imag);
        void set_pol(const cmplxpol& z);
        void drucke(const cmplxpol& z);

        /**** Überladene Operatoren ****/

        friend std::ostream& operator<<(std::ostream& p, const cmplxpol& z);
        friend cmplxpol operator~(const cmplxpol& z);
        friend cmplxpol operator+(const cmplxpol& z1, const cmplxpol& z2);
        friend cmplxpol operator-(const cmplxpol& z1, const cmplxpol& z2);
        friend cmplxpol operator*(const cmplxpol& z1, const cmplxpol& z2);
        friend cmplxpol operator/(const cmplxpol& z1, const cmplxpol& z2);
        friend double operator+=(cmplxpol& z1, const cmplxpol z2);
        friend double operator-=(cmplxpol& z1, const cmplxpol z2);
        friend double operator*=(cmplxpol& z1, const cmplxpol z2);
        friend double operator/=(cmplxpol& z1, const cmplxpol z2);
        friend cmplxpol operator+(const cmplxpol& z);
        friend cmplxpol operator-(const cmplxpol& z);
        friend cmplxpol operator++(const cmplxpol& z);
        cmplxpol operator++(int);
        cmplxpol operator--(int);
        friend cmplxpol operator--(const cmplxpol& z);
        friend bool operator==(const cmplxpol& z1, const cmplxpol& z2);
        friend bool operator!=(const cmplxpol& z1, const cmplxpol& z2);
        friend bool operator<(const cmplxpol& z1, const cmplxpol& z2);
        friend bool operator>(const cmplxpol& z1, const cmplxpol& z2);
};
#endif