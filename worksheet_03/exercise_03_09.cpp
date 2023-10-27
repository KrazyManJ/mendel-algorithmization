/*
 * Příklad 3.9 - Vytvořte program v jazyce C++ pro výpočet kořene lineární
 * rovnice ax + b = 0 (tedy hodnoty x). Koeficienty a a b načte algoritmus ze vstupu.
 */
#include <iostream>

using namespace std;

/*
 *       y = ax + b
 *   y - b = ax        (/a)
 * (y-b)/a = x
 */

int main() {
    long double a, b, y;
    cin >> a >> b >> y;
    cout << (y - b) / a << endl;
    return 0;
}