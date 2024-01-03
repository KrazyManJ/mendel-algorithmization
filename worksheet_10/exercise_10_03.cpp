/**
 * Příklad 10.3 - Vytvořte datový typ pole zaměstnanců. Deklarujte proměnnou
 * seznam typu pole zaměstnanců. Implementujte podprogramy pro přidání
 * na konec seznamu a výpis seznamu. V hlavním těle programu pak načtěte
 * tři zaměstnance a vypište jejich seznam. Využijte to, co jste
 * vytvořili v předchozím příkladu.
 */
#include <iostream>

using namespace std;

struct Employee {
    string firstName;
    string lastName;
    unsigned int dateOfBirth;
    char gender;
    int salary;
};

typedef Employee Employees[3000];

void addEmployee(Employees employees, Employee employee, int &employeeCount) {
    employees[employeeCount++] = employee;
}

void printEmployees(Employees  employees, int employeeCount){
    for (int i = 0; i < employeeCount; i++){
        Employee employee = employees[i];
        cout << employee.firstName
            << " " << employee.lastName
            << " " << employee.dateOfBirth
            << " " << employee.gender
            << " " << employee.salary
        << endl;
    }
}

int main() {
    Employees employees;
    int employeeCount = 0;
    addEmployee(employees, {
        .firstName="Jarda",
        .lastName="Kortshak",
        .dateOfBirth=2003,
        .gender='M',
        .salary=30000
    }, employeeCount);
    addEmployee(employees, {
        .firstName="Samuel",
        .lastName="Novotny",
        .dateOfBirth=2003,
        .gender='M',
        .salary=30000
    }, employeeCount);
    printEmployees(employees, employeeCount);
    return 0;
}