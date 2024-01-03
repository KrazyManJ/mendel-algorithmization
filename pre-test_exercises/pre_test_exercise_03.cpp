#include <iostream>
#include <fstream>

using namespace std;

struct Employee {
    string name;
    int salary;
};

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        char* filename = argv[1];
        ifstream file(filename);
        if (file.is_open()){
            Employee employee;
            while (file>>employee.name>>employee.salary){
                if (employee.salary > 30000)
                    cout << employee.name << endl;
            }
        }
    }
    return 0;
}