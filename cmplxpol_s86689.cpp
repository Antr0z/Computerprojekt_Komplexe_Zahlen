#include "cmplxpol_s86689.h"
#include <cmath>
#include <iostream>
using namespace std;

/**** Konstruktoren ****/

cmplxpol::cmplxpol(void){ //Standart-Konstruktor
    bt = 0.0;
    ph = 0.0;
    re = 0.0;
    im = 0.0;
    phrad = 0.0;
}

cmplxpol::cmplxpol(double betrag, double phase){ //parametisierbarer Konstruktor für Betrag und Phase
    while(phase > 180.0 || phase < -180.0){
        if(phase > 180.0){
            phase = phase - 180.0;
        }
        if(phase < -180.0){
            phase = phase + 180.0;
        }
    }
    ph = phase;
    
    bt = sqrt(betrag * betrag);
     
    double radiant = (phase*M_PI)/180;
    re = bt * cos(radiant);
    im = bt * sin(radiant);
    phrad = radiant;
}

cmplxpol::cmplxpol(double real,const char cmplxj , double imag):re(real), im(imag){ //parametisierbarer Konstruktor für Real- und Imaginärteil  
                                                                                   //Der char zum unterscheiden vom anderem Konstruktor
    bt = sqrt(real*real+imag*imag); 

    double radiant = atan(imag/real);

    if (real < 0.0){
        if (imag >= 0.0){
            if(real == 0.0 && imag == 0.0){
                radiant = 0.0;
            }
            else
            if (real == 0){
                radiant = M_PI/2;
            }
            
            radiant = radiant + M_PI;
        }
        if(imag < 0){
            if(real == 0){
                radiant = M_PI/2;
            }else
            radiant = radiant - M_PI;
        }
    }
    ph = radiant * (180/M_PI);
    phrad = radiant;
}

/**** Methoden ****/

cmplxpol::cmplxpol(double i):bt(0.0), ph(0.0), re(0.0), im(0.0){ //Konvertierungs-Konstruktor double -> cmplxpol
    bt = sqrt(i*i);
    if(i < 0){
        ph = 180;
    }else
    ph = 0;
}

cmplxpol::operator double(void)const{ //Konvertierungs-Konstruktor cmplxpol -> double
    return bt;
}

double cmplxpol::real(void) const{ //Rückgabe des Realteils aus den Attributen
    return re;
}

double cmplxpol::imag(void) const{ //Rückgabe des Imaginärteils aus den Attributen
    return im;
}

const char cmplxpol::imagj(void) const{
    const char* j = "j";
    return *j;
}

double cmplxpol::abs(void) const{ //Rückgabe des Betrags aus den Attributen
    return bt;
}

double cmplxpol::arg(void) const{ //Rückgabe der Phase(grad) aus den Attributen
    return ph;
}

double cmplxpol::arg_rad(void) const{ //Rückgabe der Phase(rad) aus den Attributen
    return phrad;
}

void cmplxpol::set_pol(double betrag, double phase){ //set_pol methode die alle Attribute nochmal neu berechnet
    while(phase > 180 || phase < -180){ //while loop um Phase zwischen -180° und 180° zu bringen
        if(phase > 180){
            phase = phase - 180;
        }
        if(phase < -180){
            phase = phase + 180;
        }
    }
    ph = phase; //zuweisung der phase am ende des loops
    
    bt = sqrt(betrag * betrag); 
     
    double radiant = phase * (M_PI/180);
    re = bt * cos(radiant);
    im = bt * sin(radiant);
    phrad = radiant;
    }

void cmplxpol::set_pol(double real, const char cmplxj, double imag){
    im = imag;
    re = real;
    bt = sqrt(real*real+imag*imag); 

    double radiant = atan(imag/real);

    if (real < 0.0){
        if (imag >= 0.0){
            if(real == 0.0 && imag == 0.0){
                radiant = 0.0;
            }
            else
            if (real == 0){
                radiant = M_PI/2;
            }
            
            radiant = radiant + M_PI;
        }
        if(imag < 0){
            if(real == 0){
                radiant = M_PI/2;
            }else
            radiant = radiant - M_PI;
        }
    }
    ph = radiant * (180/M_PI);
    phrad = radiant;
}

void cmplxpol::set_pol(const cmplxpol& z){
    ph = z.ph;
    bt = z.bt;
    re = z.re;
    im = z.im;
    phrad = z.phrad;
    } 

/**** Überladung der Operatoren ****/

std::ostream& operator << (std::ostream& p, const cmplxpol& z){ 
    double zph = z.ph;
    const char* zvor = "";
    if(zph < 0){
        zvor = "-";
    }
    zph = sqrt(zph*zph);
    return p << z.bt << "exp(" 
             << zvor << "j" 
             << zph << "Grad)";
}

cmplxpol operator~(const cmplxpol& z){
    return cmplxpol(z.re, z.imagj(), -z.im);
}

