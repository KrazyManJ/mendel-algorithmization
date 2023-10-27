/*
 * Příklad 3.21 - Vytvořte program v jazyce C++ pro výpočet kořenů kvadratické
 * rovnice na základě zadaných koeficientů a, b, c, kde platí ax2 + bx + c = 0.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double a, b, c, D;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0) cout << "equation does not have real roots";
    else if (D == 0) {
        cout << "equation have one double root of value " << (-b) / (2 * a) << endl;
    } else {
        cout << "equation have two roots of value " << (-b + sqrt(D)) / (2 * a) << " and "
             << (-b - sqrt(D)) / (2 * a) << endl;
    }
    return 0;
}