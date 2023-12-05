/*
 * Příklad 10.4 - Vytvořte procedury pro seřazení přirozenou variantou Bubble
 * sort zaměstnanců z předchozího příkladu podle:
 *
 * a) jména
 * b) příjmení
 * c) platu od neejvětšího
 */

#include <iostream>
#include <iomanip>

using namespace std;

struct Employee {
    string firstName, lastName;
    int salary;
};

const int EMPLOYEE_RECORD_AMMOUNT = 700;
typedef Employee ArrayEmployee[EMPLOYEE_RECORD_AMMOUNT];

enum Criteria {
    BY_FIRSTNAME = 1, BY_LASTNAME, BY_SALARY
};

void setCriteria(char* critParam, Criteria &criteria){
    if (critParam[0]>='1' && critParam[0]<='3')
        criteria = Criteria(critParam[0]-'0');
}

void initArray(ArrayEmployee array, unsigned int &ammount) {
    ammount = 0;
    while (cin >> array[ammount].firstName >> array[ammount].lastName >> array[ammount].salary) ammount++;
}

void swap(ArrayEmployee array, int m, int n){
    Employee temp = array[m];
    array[m] = array[n];
    array[n] = temp;
}


bool notAcceptable(ArrayEmployee array, int m, int n,Criteria crit){
    bool result = false;
    if (crit == BY_FIRSTNAME) result = array[m].firstName > array[n].firstName;
    else if (crit == BY_LASTNAME) result = array[m].lastName > array[n].lastName;
    else if (crit == BY_SALARY) result = array[m].salary < array[n].salary;
    return result;
}


void bubbleSortArray(ArrayEmployee array, int ammount, Criteria criteria){
    bool next = true;
    int j = 0;
    while (next){
        next = false;
        for (int i = 0; i < ammount-1; i++){
            if (notAcceptable(array, i, i+1, criteria)){
                swap(array, i, i+1);
                next = true;
            }
        }
        j++;
    }
}

void printArray(ArrayEmployee array, unsigned int ammount){
    for (int i = 0; i < ammount; i++){
        cout << left
            << setw(20) << array[i].firstName
            << setw(30) << array[i].lastName
            << setw(7) << array[i].salary
            << endl;
    }
}

int main(int paramsAmmount, char** params) {
    unsigned int ammount;
    ArrayEmployee array;
    Criteria criteria = BY_LASTNAME;
    if (paramsAmmount > 1) setCriteria(params[1], criteria);
    initArray(array, ammount);
    bubbleSortArray(array, ammount, criteria);
    printArray(array, ammount);
    return 0;
}