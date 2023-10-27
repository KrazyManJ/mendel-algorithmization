/*
 * Příklad 3.14 - Vytvořte program v jazyce C++ pro absolutní hodnoty rozdílu dvou zadaných čísel.
 */
#include <iostream>
using namespace std;

int main(){
    long double a,b,sub;
    cin >> a >> b;
    sub = a - b;
    if (sub < 0) sub*=-1;
    cout << sub << endl;
    return 0;
}