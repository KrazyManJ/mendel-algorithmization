/*
 * Příklad 3.11 Vytvořte program v jazyce C++ pro zjištění hodnot tří
 * nejnižších bitů vnitřní reprezentace zadaného celého čísla.
 */
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 2; i >= 0; i--) cout << (((num&7)>>i)&1);
    return 0;
}