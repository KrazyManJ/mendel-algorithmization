/*
 * Příklad 3.7 - Vytvořte program v jazyce C++ pro výpočet obsahu a obvodu obdélníka
 * zadaného dvěma stranami.
 */
#include <iostream>

using namespace std;

int main() {
    long double a, b;
    cin >> a >> b;
    cout << "Obdelnik o stranach " << a << " a " << b << " ma obvod " << (a + b) * 2 << " a obsah " << a * b << endl;
    return 0;
}