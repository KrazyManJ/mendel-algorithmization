#include <iostream>
#include <fstream>

using namespace std;


int main() {
    //zapis
    const unsigned int LINE_LENGTH = 80;
    typedef char Line[LINE_LENGTH];
    Line line;
//    ofstream bin ("file.bin", ios::binary);
//    if (bin.is_open()) {
//        while (cin.getline(line,LINE_LENGTH)) bin.write(line,LINE_LENGTH);
//        bin.close();
//    }
//    else {
//        cerr << "Soubor se nepodařilo otevřít" << endl;
//    }
    unsigned int lineNum;
    ifstream read ("file.bin", ios::binary);
    if (read.is_open()){
        read.seekg(0,std::ifstream::end);
        int size = read.tellg();
        while (cin >> lineNum){
            if ((lineNum-1)*LINE_LENGTH<size){
                read.seekg((lineNum-1)*LINE_LENGTH);
                read.read(line,LINE_LENGTH);
                cout << lineNum << " - " << line << endl;
            }
            else cerr << "Větší řádek než co to má!!!" << endl;
        }
    }
    else {
        cerr << "Soubor se nepodařilo otevřít" << endl;
    }

    return 0;
}