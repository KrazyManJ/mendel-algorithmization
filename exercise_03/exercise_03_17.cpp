/*
 * Příklad 3.17 - Vytvořte program v jazyce C++ pro výpočet obsahu pravoúhlého
 * trojúhelníka zadaného délkami jeho odvěsen.
 */
#include <iostream>
using namespace std;

int main(){
    long double a,b;
    cin >> a >> b;
    cout << (a*b)/2 << endl;
    return 0;
}