#include "cmplxpol_s86689.h"
#include <iostream>
using namespace std;

int main(){
    double zahl1 = 132;
    double zahl2 = 200;
    const char j = j;
    cmplxpol das{ 0.5, 245.0 };
    cmplxpol dies{ -0.5, 45.0};
    cmplxpol jenes{ 15, 15};
    double x = das;
    std::cout << "das\n";
    std::cout << das.abs() << "\n";
    std::cout << das.arg() << "\n";
    std::cout << das.real() << "\n";
    std::cout << das.imag() << "\n";
    std::cout << "dies\n";
    std::cout << dies.abs() << "\n";
    std::cout << dies.arg() << "\n";
    std::cout << dies.real() << "\n";
    std::cout << dies.imag() << "\n";
    std::cout << dies << "\n";
    std::cout << "jenes\n";
    std::cout << jenes.real() << "\n";
    std::cout << jenes.imag() << "\n";
    std::cout << "das konjugiert komplex \n";
    das = ~das;
    std::cout << das.imag() << "\n";
    std::cout << das <<"\n";
    das = dies + jenes;
    std::cout << das <<"\n";
    std::cout << das.abs() << "\n";
    std::cout << das.arg() << "\n";
    std::cout << das.real() << "\n";
    std::cout << "\n\n";
    std::cout << dies.abs() << "\n";
    std::cout << dies.arg() << "\n";
    std::cout << dies.real() << "\n";
    std::cout << dies.imag() << "\n\n";
    std::cout << jenes.abs() << "\n";
    std::cout << jenes.arg() << "\n";
    std::cout << jenes.real() << "\n";
    std::cout << jenes.imag() << "\n\n";
    dies += jenes;
    std::cout << dies.abs() << "\n";
    std::cout << dies.arg() << "\n";
    std::cout << dies.real() << "\n";
    std::cout << dies.imag() << "\n\n";
    
    std::cout << ++jenes << "\n";
    std::cout << jenes++ << "\n";
    std::cout << --jenes << "\n";
    std::cout << jenes-- << "\n";
    std::cout << jenes.abs() << "\n";
    std::cout << jenes.arg() << "\n";
    std::cout << jenes.real() << "\n";
    std::cout << jenes.imag() << "\n\n";

    }