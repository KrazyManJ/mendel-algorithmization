/*
 * Příklad 3.11 Vytvořte program v jazyce C++ pro zjištění hodnot tří
 * nejnižších bitů vnitřní reprezentace zadaného celého čísla.
 */
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    // 7 = 00000111
    cout << (num & 7) << endl;
    return 0;
}