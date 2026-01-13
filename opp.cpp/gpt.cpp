#include <iostream>
#include <string>
using namespace std;

class Employee {
    double id;
    string name;
    double salary;
public:
    void getEmployee() {
        cout << "Enter eid, ename, salary: ";
        cin >> id >> name >> salary;
    }
    void displayEmployee() {
        cout << "The id of employee: " << id << endl;
        cout << "The name of employee: " << name << endl;
        cout << "The salary of employee: " << salary << endl;
    }
};

class Company {
    Employee employees[10];  // Array of Employee objects
public:
    void getData() {
        for (int i = 0; i < 10; i++) {
            cout << "Enter details for employee " << i + 1 << endl;
            employees[i].getEmployee();
        }
    }
    void displayData() {
        for (int i = 0; i < 10; i++) {
            cout << "Employee " << i + 1 << ":" << endl;
            employees[i].displayEmployee();  // Corrected to match the function name
            cout << endl;
        }
    }
};

int main() {
    Company c;
    c.getData();
    c.displayData();
    return 0;
}
