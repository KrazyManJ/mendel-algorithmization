/*
 * Příklad 3.3 - Vytvořte program v jazyce C++ pro určení minima za tří zadaných čísel.
 */
#include <iostream>

using namespace std;

int main() {
    long double num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2) {
        if (num2 > num3) cout << num3;
        else cout << num2;
    }
    else {
        if (num1 > num3) cout << num3;
        else cout << num1;
    }
    return 0;
}