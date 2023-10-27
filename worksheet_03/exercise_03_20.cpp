/*
 * Příklad 3.20 - Vytvořte program v jazyce C++ pro načtení tří hodnot a
 * jejich vzestupný výpis (výpis od nejmenší po největší).
 */
#include <iostream>

using namespace std;

int main() {
    long double a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        a += b, b = a - b, a -= b;
    if (b > c)
        b += c, c = b - c, b -= c;
    if (a > b)
        a += b, b = a - b, a -= b;
    cout << a << " " << b << " " << c << endl;
    return 0;
}