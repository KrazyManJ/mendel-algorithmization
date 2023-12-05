/**
 * Příklad 10.7 - Vytvořte datový typ automobil, který bude
 * obsahovat položky značka, model, rok výroby, barva, cena a SPZ.
 */
#include <iostream>

using namespace std;

struct Car {
    string brand, model, color, spz;
    int yearOfManufacture;
    float price;
};