/*
 * Příklad 3.5 - Vytvořte program v jazyce C++ pro zjištění, zda zadané číslo je, či není sudé.
 */
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 2 == 0) cout << "Is even." << endl;
    else cout << "Is odd." << endl;
    return 0;
}