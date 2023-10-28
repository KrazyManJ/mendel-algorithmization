/*
 * Příklad 4.18 - Vytvořte program v jazyce C++ pro určení, zda je načtené číslo prvočíslem
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long int read, den = 3;
    cin >> read;
    if (read < 1) {
        cerr << "Bad input number" << endl;
        return 4;
    }
    if (read < 3) cout << read << " is prime number" << endl;
    else {
        while (den <= sqrt(read) && read % den != 0) den += 2;
        if (den > sqrt(read)) cout << read << " is prime number" << endl;
        else cout << read << " is not prime" << endl;
    }
    return 0;
}