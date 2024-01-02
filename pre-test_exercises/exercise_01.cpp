#include <iostream>

/**
 * Na vstupu je řada celých čísel. Vypište dvě čísla, jejichž ciferný součet je nejvyšší.
 */

using namespace std;

int digitSum(int num) {
    int sum = 0;

    while (num != 0) {
        sum += (num % 10);
        num /= 10;
    }

    return abs(sum);
}

int main() {
    int num;
    int max1 = 0, max2 = 0;

    while (cin >> num) {
//        cout << digitSum(num) << endl;
        if (digitSum(num) > digitSum(max1)) {
            max2 = max1;
            max1 = num;
        } else if (digitSum(num) > digitSum(max2)) {
            max2 = num;
        }
    }

    cout << "Max 1: " << max1 << " (" << digitSum(max1) << ")" << endl;
    cout << "Max 2: " << max2 << " (" << digitSum(max2) << ")" << endl;

    return 0;
}