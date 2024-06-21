#ifndef CMPLXPOL_H_
#define CMPLXPOL_H_
#include <iostream>
class cmplxpol{
    private:
        double bt, ph, re, im, phrad;   //alle Attribute die ich gebrauchen kann  
                                        //ich habe Real- ,Imaginärteil und Phase in Radiant mit hinzugefügt weil mir das teilweise was gespart hat
    public:                              

        /**** Konstruktoren ****/

        cmplxpol(void); //Standart-Konstruktor

        cmplxpol(double betrag, double phase);  //Parametisierbarer Konstruktor für Betrag und Phase

        cmplxpol(double real,const char complxj, double imag);  //Parametisierbarer Konstruktor für Real- und Imaginärteil

        cmplxpol(double i); //Konvertierungs-Konstruktor double -> cmplxpol        

        operator double (void) const;   //Konvertierungs-Konstruktor cmplxpol -> double
        
        /**** Methoden ****/
        
        double real(void) const;                                    //Wiedergabe des Realteils

        double imag(void) const;                                    //Wiedergabe des Imaginärteils

        const char imagj(void) const;                               //Eine Methode für den komplexen buchstaben j (habe diese methode hinzugefügt damit ich den
                                                                    //Konstruktor bei manchen Methoden ausführen kann)

        double abs(void) const;                                     //Methode für den Betrag 

        double arg(void) const;                                     //Methode für die Phase 

        double arg_rad(void) const;                                 //Methode für die Phase in Radiant

        void set_pol(double betrag, double phase);                  //setzen einer neuen Komplexen Zahl mit Betrag und Phase 

        void set_pol(double real,const char complxj, double imag);  //setzen einer neuen Komplexen Zahl mit Real- und Imaginärteil

        void set_pol(const cmplxpol& z);                            //Überladung der beiden set_pol Methoden damit beide angenommen werden können

        void drucke(const cmplxpol& z);                             //wiedergabe von betrag und phase

        /**** Überladene Operatoren ****/

        friend std::ostream& operator<<(std::ostream& p, const cmplxpol& z);    //überladung des Ausgabe Operators 
                                                                                //(ich habe fast überall friend mit dazu geschrieben weil es meistens besser funktioniert hat)

        friend cmplxpol operator~(const cmplxpol& z);                           //überladeung des ~ Operators um Konjugiert komplexe Zahlen Wiederzugeben

        friend cmplxpol operator+(const cmplxpol& z1, const cmplxpol& z2);      //Überladung des Plus Operators

        friend cmplxpol operator-(const cmplxpol& z1, const cmplxpol& z2);      //Überladung des Minus Operators

        friend cmplxpol operator*(const cmplxpol& z1, const cmplxpol& z2);      //Überladung des Mal Operators

        friend cmplxpol operator/(const cmplxpol& z1, const cmplxpol& z2);      //Überladung des Geteilt Operators

        friend double operator+=(cmplxpol& z1, const cmplxpol z2);              //Überladung des Plusgleich Operators

        friend double operator-=(cmplxpol& z1, const cmplxpol z2);              //Überladung des Minusgleich Operators

        friend double operator*=(cmplxpol& z1, const cmplxpol z2);              //Überladung des Malgleich Operators

        friend double operator/=(cmplxpol& z1, const cmplxpol z2);              //Überladung des Geteiltgleich Operators

        friend cmplxpol operator+(const cmplxpol& z);                           //Überladung des Plus Operators als Präfix

        friend cmplxpol operator-(const cmplxpol& z);                           //Überladung des Minus Operators als Präfix

        cmplxpol operator++(void);                          //Überladung des ++ Operator als Präfix
        cmplxpol operator++(int);                                               //und Postfix
                                                               
        friend cmplxpol operator--(const cmplxpol& z);                          //Überladung des -- Operator als Präfix
        cmplxpol operator--(int);                                               //und Postfix

        //Vergleichsoperatoren

        friend bool operator==(const cmplxpol& z1, const cmplxpol& z2);         //Überladung des Vergleichs Operators

        friend bool operator!=(const cmplxpol& z1, const cmplxpol& z2);         //Überladung des Ungleich Operators

        friend bool operator<(const cmplxpol& z1, const cmplxpol& z2);          //Überladung des kleiner als Operators  

        friend bool operator>(const cmplxpol& z1, const cmplxpol& z2);          //Überladung des größer als Operators  
};
#endif