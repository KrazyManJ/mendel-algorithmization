/*
 * Příklad 3.2 - Vytvořte program v jazyce C++ pro výpis dvou načtených čísel seřazených sestupně.
 */
#include <iostream>

using namespace std;

int main() {
    long double num1, num2;
    cin >> num1 >> num2;
    if (num1 > num2) cout << num1 << ", " << num2;
    else cout << num2 << ", " << num1;
    return 0;
}