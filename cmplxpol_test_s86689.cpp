#include "cmplxpol_s86689.h"
#include <iostream>
using namespace std;

int main(){
    double zahl1 = 132;
    double zahl2 = 200;
    const char j = j;
    cmplxpol das{ 20.0, -20.0 };
    double x = das;
    std::cout << das.arg() << "\n";
    std::cout << das.abs() << "\n";
    std::cout << das.imag() << "\n";
    das.set_pol(20, 10);
    std::cout << das.arg() << "\n";
    std::cout << das.abs() << "\n";
    std::cout << das.imag() << "\n";
    std::cout << ~das << "\n";
}