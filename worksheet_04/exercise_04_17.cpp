/*
 * Příklad 4.17 - Vytvořte program v jazyce C++ pro výpis počtu menších čísel,
 * než je první číslo řady. Řada je ukončena hodnotou rovnající se prvnímu číslu.
 */
#include <iostream>

using namespace std;

int main() {
    double long curr, first, lowercount = 0;
    cin >> first;
    do {
        cin >> curr;
        if (curr < first) lowercount++;
    } while (curr != first);
    cout << "Count of nums lower than " << first << " is " << lowercount << endl;
    return 0;
}