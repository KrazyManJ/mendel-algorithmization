/*
 * Příklad 3.8 - Vytvořte program v jazyce C++ pro výpočet počtu hlav a nohou všech
 * zvířat na farmě, kde chovají husy a ovce. Vstupem jsou počty jednotlivých zvířat podle druhu.
 * Uvažujte pouze zdravá zvířata.
 */
#include <iostream>

using namespace std;

int main() {
    const int GEESE_LEG_COUNT = 2;
    const int SHEEP_LEG_COUNT = 4;
    unsigned long geese, sheep;
    cout << "Zadej pocet hus: " << endl;
    cin >> geese;
    cout << "Zadej pocet ovci: " << endl;
    cin >> sheep;
    cout << "Celkove na farme je " << geese + sheep << " hlav a "
         << geese * GEESE_LEG_COUNT + sheep * SHEEP_LEG_COUNT << " nohou." << endl;
}