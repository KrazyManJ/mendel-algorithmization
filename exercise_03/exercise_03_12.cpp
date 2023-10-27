/*
 * Příklad 3.12 - Vytvořte program v jazyce C++ pro zjištění hodnot čtyř
 * nejvyšších bitů vnitřní reprezentace zadaného znaku.
 */
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin.get(ch);
    for (int i = 7; i > 3; i--) cout << ((ch >> i) & 1);
    return 0;
}