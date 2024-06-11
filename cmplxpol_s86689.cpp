#include "cmplxpol_s86689.h"
#include <cmath>
cmplxpol::cmplxpol(void){ //Standart-Konstruktor
    bt = 0.0;
    ph = 0.0;
    re = 0.0;
    im = 0.0;
}

cmplxpol::cmplxpol(double betrag, double phase){ //parametisierbarer Konstruktor für Betrag und Phase
    while(phase > 180 || phase < -180){
        if(phase > 180){
            phase = phase - 180;
        }
        if(phase < -180){
            phase = phase + 180;
        }
    }
    ph = phase;
    
    if(betrag < 0){
        bt = betrag * -1;
    } 
    
    double radiant = phase * (M_PI/180);
    re = bt * cos(radiant);
    im = bt * sin(radiant);
}

cmplxpol::cmplxpol(double real,const char cmplxj, double imag):re(real), im(imag){ //parametisierbarer Konstruktor für Real- und Imaginärteil  
    bt = sqrt(real*real+imag*imag); // Der char zum unterscheiden vom anderen Konstruktor

    double radiant = atan(imag/real);

    if (real < 0){
        if (imag >= 0){
            if(real == 0 && imag == 0){
                radiant = 0;
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
}

cmplxpol::cmplxpol(double i):bt(0.0), ph(0.0), re(0.0), im(0.0){    //Konvertierungs-Konstruktor double -> cmplxpol
    bt = sqrt(i*i);
    if(i < 0){
        ph = 180;
    }else
    ph = 0;
}

cmplxpol::operator double(void)const{
    return bt;
}