/*
 * Příklad 3.10 - Vytvořte program v jazyce C++ pro určení minima ze dvou zadaných čísel.
 */
#include <iostream>

using namespace std;

int main() {
    long double a, b, min;
    cin >> a >> b;
    if (a < b) min = a;
    else min = b;
    cout << min << endl;
    return 0;
}