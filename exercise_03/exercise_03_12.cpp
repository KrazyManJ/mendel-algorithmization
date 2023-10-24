/*
 * Příklad 3.12 - Vytvořte program v jazyce C++ pro zjištění hodnot čtyř
 * nejvyšších bitů vnitřní reprezentace zadaného znaku.
 */
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    // 11110000 >> 4 = 00001111 = 1+2+4+8=15
    cout << ((ch >> 4) & 15) << endl;
    return 0;
}