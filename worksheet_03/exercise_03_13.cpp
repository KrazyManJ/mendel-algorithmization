/*
 * Příklad 3.13 - Vytvořte program v jazyce C++ pro zjištění, kolik bajtů
 * má znak v kódování UTF-8 zadaný ze vstupu.
 */
#include <iostream>

using namespace std;

int main() {
    string ch;
    cin >> ch;
    cout << ch.size() << endl;
    return 0;
}