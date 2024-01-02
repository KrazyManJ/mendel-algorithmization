#include <iostream>
#include <list>

using namespace std;

const unsigned int BUCKET = 7;
typedef int Type;

/**
 * Normally linked list but I am lazy fuck XDD
 */
typedef list<Type> HashTable[BUCKET];

/**
 * Creates hash from value, it can be anything but it has two rules:
 *
 * <ol>
 *   <li>It always returns the same value on same input (no randomness)</li>
 *   <li>It is in range from 0 to BUCKET-1</li>
 * </ol>
 */
int makeHash(Type type){
    return type*256 % static_cast<int>(BUCKET);
}

void put(HashTable table, Type item){
    int hash = makeHash(item);
    table[hash].push_back(item);
}

bool contains(HashTable table, Type item){
    int hash = makeHash(item);
    for (Type val : table[hash]) if (val == item) return true;
    return false;
}

void printHashTable(HashTable table){
    for (int i = 0; i < BUCKET; i++){
        cout << i;
        for (Type t : table[i]) cout << " --> " << t;
        cout << endl;
    }
}

int main() {
    HashTable table;
    put(table, 5);
    put(table, 8);
    put(table, 26);
    put(table, 15);
    printHashTable(table);
    cout << endl;
    cout << "Contains 12 ? " << (contains(table, 12) ? "yes" : "no") << endl;
    cout << "Contains 26 ? " << (contains(table, 26) ? "yes" : "no") << endl;
    return 0;
}