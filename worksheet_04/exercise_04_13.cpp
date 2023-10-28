/*
 * Příklad 4.13 - Vytvořte program v jazyce C++ pro výpočet hodnoty kombinačního
 * čísla (n k) ze zadaných hodnot n, k.
 */
#include <iostream>

using namespace std;

int main() {
    int n, k, lower, higher;
    cin >> n >> k;
    if (k > (n - k)) {
        higher = k;
        lower = n - k;
    } else {
        higher = n - k;
        lower = k;
    }
    long long int numerator = n, denominator = lower;
    for (int i = n - 1; i > higher; i--)
        numerator *= i;
    for (int i = lower - 1; i > 1; i--)
        denominator *= i;
    cout << numerator / denominator << endl;
    return 0;
}