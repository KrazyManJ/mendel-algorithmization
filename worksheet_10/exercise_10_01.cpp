/**
 * Příklad 10.1 - Vytvořte proceduru, která seřadí prvky celočíselného pole
 * od nejmenšího po největší.
 */
#include <iostream>

using namespace std;

void sort(int array[], int size){
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1-i; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++) cout << array[i];
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int arr[] = {1,5,8,3,2,4,6,7};
    printArray(arr,SIZE);
    sort(arr,SIZE);
    printArray(arr,SIZE);
    return 0;
}