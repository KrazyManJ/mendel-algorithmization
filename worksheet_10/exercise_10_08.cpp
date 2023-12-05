/**
 * Příklad 10.8 - Vytvořte datový typ autobazar, který bude představovat
 * pole automobilů z předchozího příkladu. Deklarujte proměnnou nabidky
 * typu autobazar. Implementujte podprogram pro přidání na začátek seznamu.
 * V hlavním těle programu pak načtěte alespoň pět automobilů a vypište ty,
 * které byly vyrobeny před rokem 2005.
 */
#include <iostream>
#include <iomanip>

using namespace std;

struct Car {
    string brand, model, color, spz;
    int yearOfManufacture;
    float price;
};

const unsigned int CAR_AMMOUNT = 10;
typedef Car CarDealerShip[CAR_AMMOUNT];

void initArray(CarDealerShip array, unsigned int &ammount) {
    Car newCar;
    while (cin
            >> newCar.brand >> newCar.model
            >> newCar.yearOfManufacture >> newCar.color
            >> newCar.price >> newCar.spz
            ) {
        /*
         * Kind of weird exercise assignment, I would rather
         * use Stack instead of Array, but it is what it is
         * */
        for (unsigned int i = ammount; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = newCar;
        ammount++;
    }
}
void printArrayAndFilter(CarDealerShip array, unsigned int ammount){
    for (int i = 0; i < ammount; i++){
        if (array[i].yearOfManufacture < 2005) cout << left
                    << setw(20) << array[i].brand
                    << setw(20) << array[i].model
                    << setw(6) << array[i].yearOfManufacture
                    << setw(10) << array[i].color
                    << setw(8) << array[i].price
                    << setw(10) << array[i].spz
                    << endl;
    }
}

int main() {
    unsigned int ammount = 0;
    CarDealerShip dealerShip;
    initArray(dealerShip, ammount);
    printArrayAndFilter(dealerShip, ammount);
    return 0;
}