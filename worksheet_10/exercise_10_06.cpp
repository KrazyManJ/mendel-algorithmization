/*
 * Příklad 10.5 - Použijte pro seřazení zaměstnanců z předchozího
 * příkladu metodu přímého výběru.
 */

#include <iostream>
#include <iomanip>

using namespace std;

struct Employee {
    string firstName, lastName;
    char gender;
    int salary;
};

const int EMPLOYEE_RECORD_AMMOUNT = 700;
typedef Employee ArrayEmployee[EMPLOYEE_RECORD_AMMOUNT];



void initArray(ArrayEmployee array, unsigned int &ammount) {
    ammount = 0;
    while (cin >> array[ammount].firstName >> array[ammount].lastName >> array[ammount].salary) ammount++;
}


void printArrayAndFilter(ArrayEmployee array, unsigned int ammount){
    for (int i = 0; i < ammount; i++){
        if (array[i].gender == 'F' && array[i].salary > 30000)
            cout << left
                << setw(20) << array[i].firstName
                << setw(30) << array[i].lastName
                << setw(3) << array[i].gender
                << setw(7) << array[i].salary
                << endl;
    }
}

int main() {
    unsigned int ammount;
    ArrayEmployee array;
    initArray(array, ammount);
    printArrayAndFilter(array, ammount);
    return 0;
}