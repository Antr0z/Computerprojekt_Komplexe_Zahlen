#include "cmplxpol_s86689.h"
#include <iostream>
using namespace std;

int main(){
    double zahl1 = 132;
    double zahl2;
    const char j = j;
    cmplxpol konvtest = zahl1;
    zahl2 = konvtest; 

    std::cout << "Konvertierungskonstruktor double -> cmplxpol \n double zahl1 = 132 -> cmplxpol konvtest\n";
    std::cout << "Ausgabe konvtest: "; 
    konvtest.drucke(konvtest);
    std::cout << "\n\n";
    std::cout << "Konvertierungskonstruktor cmplxpol -> double \n cmplxpol konvtest{132, 0} -> double zahl2\n";
    std::cout << "Ausgabe zahl2: "; 
    std::cout << zahl2 << "\n\n";

    std::cout << "Konstruktor Betrag und Phase /cmplxpol test1{ 0.5, 245.0 }/ \n"; 
    cmplxpol test1{ 0.5, 245.0 };

    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << "Negativ Präfix - \n";
    test1 = -test1;
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    test1 = -test1;

    std::cout << "Konvergiert Komplex ~ \n";
    test1 = ~test1;
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << "Konstruktor Betrag und Phase /cmplxpol test2{ -0.5, 45.0}/ \n";
    cmplxpol test2{ -0.5, 45.0};
    std::cout << "überladener Ausgabeoperator: " << test2 << "\n";
    std::cout << "Betrag: " << test2.abs() << "\n";
    std::cout << "Phase: " << test2.arg() << "\n";
    std::cout << "Phase Radiant: " << test2.arg_rad() << "\n";
    std::cout << "Realteil: " << test2.real() << "\n";
    std::cout << "Imaginärteil: " << test2.imag() << "\n\n";

    cmplxpol test3{ 15, j, 15};
    std::cout << "test3 mit Konstruktor für Real- und Imaginärteil test3{ 15, j, 15} \n";
    std::cout << "überladener Ausgabeoperator: " << test3 << "\n";
    std::cout << "Betrag: " << test3.abs() << "\n";
    std::cout << "Phase: " << test3.arg() << "\n";
    std::cout << "Phase Radiant: " << test3.arg_rad() << "\n";
    std::cout << "Realteil: " << test3.real() << "\n";
    std::cout << "Imaginärteil: " << test3.imag() << "\n\n";

    std::cout << "Addition von test1 und test2\n";
    cmplxpol test1_test2;
    test1_test2 = test1 + test2;
    std::cout << "überladener Ausgabeoperator: " << test1_test2 << "\n";
    std::cout << "Betrag: " << test1_test2.abs() << "\n";
    std::cout << "Phase: " << test1_test2.arg() << "\n";
    std::cout << "Phase Radiant: " << test1_test2.arg_rad() << "\n";
    std::cout << "Realteil: " << test1_test2.real() << "\n";
    std::cout << "Imaginärteil: " << test1_test2.imag() << "\n\n";

    std::cout << "Subtraktion von test1 und test2\n";
    
    test1_test2 = test1 - test2;
    std::cout << "überladener Ausgabeoperator: " << test1_test2 << "\n";
    std::cout << "Betrag: " << test1_test2.abs() << "\n";
    std::cout << "Phase: " << test1_test2.arg() << "\n";
    std::cout << "Phase Radiant: " << test1_test2.arg_rad() << "\n";
    std::cout << "Realteil: " << test1_test2.real() << "\n";
    std::cout << "Imaginärteil: " << test1_test2.imag() << "\n\n";

    std::cout << "Multiplikation von test1 und test2\n";
   
    test1_test2 = test1 * test2;
    std::cout << "überladener Ausgabeoperator: " << test1_test2 << "\n";
    std::cout << "Betrag: " << test1_test2.abs() << "\n";
    std::cout << "Phase: " << test1_test2.arg() << "\n";
    std::cout << "Phase Radiant: " << test1_test2.arg_rad() << "\n";
    std::cout << "Realteil: " << test1_test2.real() << "\n";
    std::cout << "Imaginärteil: " << test1_test2.imag() << "\n\n";

    std::cout << "Division von test1 und test2\n";
    
    test1_test2 = test1 / test2;
    std::cout << "überladener Ausgabeoperator: " << test1_test2 << "\n";
    std::cout << "Betrag: " << test1_test2.abs() << "\n";
    std::cout << "Phase: " << test1_test2.arg() << "\n";
    std::cout << "Phase Radiant: " << test1_test2.arg_rad() << "\n";
    std::cout << "Realteil: " << test1_test2.real() << "\n";
    std::cout << "Imaginärteil: " << test1_test2.imag() << "\n\n";

    std::cout << " += Addition von test1 auf test2\n";
    test1 += test2;
    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << " -= Subtraktion von test2 weg von test1 \n";
    test1 -= test2;
    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << " *= Multiplikation auf test2 mit test1 \n";
    test1 *= test2;
    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << " /= Division von test2 weg von test1 \n";
    test1 /= test2;
    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";


    std::cout << "Präfix ++ test1\n";
    test1 = ++test1;

    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << "Präfix -- test1\n";
    test1 = --test1;

    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << "Postfix ++ test1\n";
    test1 = test1++;

    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";

    std::cout << "Postfix -- mit test1\n";
    test1 = test1--;

    std::cout << "überladener Ausgabeoperator: " << test1 << "\n";
    std::cout << "Betrag: " << test1.abs() << "\n";
    std::cout << "Phase: " << test1.arg() << "\n";
    std::cout << "Phase Radiant: " << test1.arg_rad() << "\n";
    std::cout << "Realteil: " << test1.real() << "\n";
    std::cout << "Imaginärteil: " << test1.imag() << "\n\n";


    std::cout << "werte für test1: " << test1 << "\n";
    std::cout << "werte für test2: " << test2 << "\n";
    std::cout << "ist test1 > test2?\n";
    if(test1 > test2){
        std::cout << "WAHR";
    }
    std::cout << "ist test1 < test2?\n";
    if(test1 < test2){
        std::cout << "FALSCH";
    }else std::cout << "WAHR";

    std::cout << "ist test1 == test2?\n";
    if(test1 == test2){
        std::cout << "WAHR";
    }else std::cout << "FALSCH";

    std::cout << "ist test1 != test2?\n";
    if(test1 < test2){
        std::cout << "WAHR";
    }else std::cout << "FALSCH";
}
    