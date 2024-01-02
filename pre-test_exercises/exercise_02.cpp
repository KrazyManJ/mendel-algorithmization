#include <iostream>
#include <cmath>

using namespace std;

/**
 * Uživatel zadá celé kladné číslo N, poté uživatel zadá N reálných čísel,
 * které se vloží do vzorce a vypočte se výsledek
 *
 * x0 = průměr všech x
 *
 *
 */

void fillArray(double array[], unsigned size, double &avg) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
        avg += array[i];
    }
    avg /= size;
}

double calcNumerator(double array[], unsigned size, double avg) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += pow(array[i] - avg, 2);
    }

    return sum;
}

int main() {
    unsigned n;
    double avg = 0;
    double result;

    /// Define n size
    cin >> n;
    double array[n];

    /// Filling the array
    fillArray(array, n, avg);

    /// Calculate result
    result = sqrt((calcNumerator(array, n, avg)) / (n - 1));
    cout << result << endl;

    return 0;
}