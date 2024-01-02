#include <iostream>

using namespace std;

// char* = pole charů = jinej zápis string (používaný v jazyku C)
// pak se spouští:
// ./nazev_programu <argument_1> <argument_2> ...
// ./nazev_programu Martin Kata

int main(int argc, char* argv[]) {
    cout << argc << endl; // vypíše počet zadaných argumentů
    cout << "Argument: " << argv[0] << endl; // vypíše první argument = cesta k programu
    if (argc <= 3) { // použití počtu - podmínka, jestli uživatel zadal méně než dva následující parametry, tak hodí error
        cerr << "Dals malo argumentu :(" << endl;
    }
    for (int i = 1; i < argc; i++){ // cyklus pro vypis všech parametru kromě cesty programu (proto i = 1)
        cout << i << " - " << argv[i] << endl;
    }
    return 0;
}