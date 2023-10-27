/*
 * Příklad 3.4 - Vytvořte program v jazyce C++, který provede převod zadaného celého čísla na
 * číslo opačné prostřednictvím binárních operací v doplňkovém kódu.
 */
#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << ~a+1 << endl;
    return 0;
}
