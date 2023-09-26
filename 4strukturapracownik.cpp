#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Employee {
    string name;
    char* position;
    double salary;
    char gender;
};

bool isAlphaString(const string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

bool validateEmployeeData(Employee& emp) {
    while (!isAlphaString(emp.name)) {
        cout << "Invalid name. Please enter only letters: ";
        cin >> emp.name;
    }

    while (!isAlphaString(emp.position)) {
        cout << "Invalid position. Please enter only letters: ";
        cin >> emp.position;
    }

    while (emp.salary <= 0) {
        cout << "Invalid salary. Please enter a value greater than zero: ";
        cin >> emp.salary;
    }

    while (emp.gender != 'K' && emp.gender != 'M') {
        cout << "Invalid gender. Please enter either 'K' for female or 'M' for male: ";
        cin >> emp.gender;
    }

    return true;
}

void createEmployeeArray(int n, Employee*& empArray) {
    empArray = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "Employee #" << i + 1 << ":\n";

        while (true) {
            cout << "Enter name: ";
            cin >> empArray[i].name;
            if (isAlphaString(empArray[i].name)) {
                break;
            }
            cout << "Invalid name. Please enter only letters.\n";
        }

        while (true) {
            cout << "Enter position: ";
            cin >> empArray[i].position;
            if (isAlphaString(empArray[i].position)) {
                break;
            }
            cout << "Invalid position. Please enter only letters.\n";
        }

        while (true) {
            cout << "Enter gender ('K' for female, 'M' for male): ";
            cin >> empArray[i].gender;
            if (empArray[i].gender == 'K' || empArray[i].gender == 'M') {
                break;
            }
            cout << "Invalid gender. Please enter either 'K' for female or 'M' for male.\n";
        }

        while (true) {
            cout << "Enter salary (greater than zero): ";
            cin >> empArray[i].salary;
            if (empArray[i].salary > 0) {
                break;
            }
            cout << "Invalid salary. Please enter a value greater than zero.\n";
        }

    }
}

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee* empArray;
    createEmployeeArray(n, empArray);

    cout << "\nEmployee Data:\n";
    for (int i = 0; i < n; i++) {
        cout << "Employee #" << i + 1 << ":\n";
        cout << "Name: " << empArray[i].name << endl;
        cout << "Position: " << empArray[i].position << endl;
        cout << "Salary: " << empArray[i].salary << endl;
        cout << "Gender: " << empArray[i].gender << endl;
        delete[] empArray[i].position;
    }

    delete[] empArray;

    return 0;
}
