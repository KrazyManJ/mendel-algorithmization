/*
 * Vytvořte program v jazyce C++ pro určení, zda je trojúhelník
 * zadaný svými délkami stran rovnostranný, rovnoramenný nebo pravoúhlý.
 */
#include <iostream>

using namespace std;

int main() {
    long double a, b, c;
    string type;
    cin >> a >> b >> c;
    if (a == b && b == c) type = "rovnostranny";
    else if (a == b || b == c || c == a) type = "rovnoramenny";
    else {
        long double hyp, leg1, leg2;
        if (a > b && a > c)
            hyp = a, leg1 = b, leg2 = c;
        else if (b > a && b > c)
            hyp = b, leg1 = a, leg2 = c;
        else
            hyp = c, leg1 = a, leg2 = b;
        if (hyp * hyp == leg1 * leg1 + leg2 * leg2)
            type="pravouhly";
        else
            type ="obecny";
    }
    cout << "trojuhelnik je " << type << endl;
    return 0;
}