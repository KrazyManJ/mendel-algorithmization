/*
 * Příklad 3.18 - Vytvořte program v jazyce C++ pro výpočet obvodu pravoúhlého
 * trojúhelníka zadaného délkami jeho odvěsen.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double long a, b;
    cin >> a >> b;
    cout << sqrt(a * a + b * b) << endl;
    return 0;
}