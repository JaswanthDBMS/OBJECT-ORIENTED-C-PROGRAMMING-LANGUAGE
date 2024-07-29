#include <iostream>
#include <iomanip> 
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basic_salary;
    float hra;
    float da;
    float gp; 
    float np; 

public:
    void inputDetails() {
        cout << "Enter the employee name: ";
        cin >> ws; 
        getline(cin, name);
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basic_salary;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
        calculatePay();
    }

    void calculatePay() {
        gp = basic_salary + hra + da; 
        np = gp - (0.1 * gp); 
    }

    void displayDetails() {
        cout << setw(15) << name << setw(8) << id << setw(10) << basic_salary 
             << setw(8) << hra << setw(8) << da << setw(10) << gp << setw(10) << np << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee* employees = new Employee[n];

    for (int i = 0; i < n; ++i) {
        cout << "Employee " << i + 1 << " details" << endl;
        employees[i].inputDetails();
    }

    cout << setw(15) << "EMPLOYEE NAME" << setw(8) << "ID" << setw(10) << "BASIC" 
         << setw(8) << "HRA" << setw(8) << "DA" << setw(10) << "GP" << setw(10) << "NP" << endl;

    for (int i = 0; i < n; ++i) {
        employees[i].displayDetails();
    }

    delete[] employees;

    return 0;
}

