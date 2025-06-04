#include <iostream>
#include "Fraction.h"
using namespace std;
using namespace mathlib;

int main(){
    mathlib::Fraction fraction1( 15, 5 );
    cout << fraction1;

    mathlib::Fraction fraction2{ 15, 6 };
    fraction2.simplify();
    cout << fraction2 << endl;

    cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction fraction3;
    cout << "input fraction (numerator / denominator): \n";
    cin >> fraction3;
    cout << fraction3 << endl;
    cout << fraction3.toDouble() << endl;
}