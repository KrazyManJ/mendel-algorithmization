#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // setw(cislo)              - nastavi sirku
    // left                     - zarovna doleva
    // right                    - zarovna doprava
    // setfill(znak)            - nastavi vyplnovy znak
    // setprecision(cislo)      - presnost na des. cisla
    // dec, oct, hex            - nastavi ciselnou soustavu u cisel
    // fixed                    - pro des. cisla, zapise des. cislo pouze pomoci cisel
    // scientific               - pro des. cisla, zapise des. cislo pomoci logaritmu
    // uppercase, nouppercase   - nastavi pismenka na velka nebo mala u hexadecimalnich cisel

    for (int i = 0; i < 10000; i+=99){
        cout << setw(10) << setfill('_') << right << hex << nouppercase << i << endl;
    }
    for (double i = 1; i > 0.00000001; i=i/2){
        cout << setprecision(10) << fixed << i << endl;
    }
    cout << uppercase << "AhOj" << endl;
    cout << nouppercase << "AhOj" << endl;
    return 0;
}