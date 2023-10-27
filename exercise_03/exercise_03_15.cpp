/*
 * Příklad 3.15 - Vytvořte program v jazyce C++ pro určení, zda zadané číslo je kladné, záporné či nula
 */
#include <iostream>
using namespace std;

int main(){
    long double num;
    cin >> num;
    if (num > 0) cout << num <<" is positive" << endl;
    else if (num < 0) cout << num <<" is negative" << endl;
    else cout << num <<" is zero" << endl;
    return 0;
}