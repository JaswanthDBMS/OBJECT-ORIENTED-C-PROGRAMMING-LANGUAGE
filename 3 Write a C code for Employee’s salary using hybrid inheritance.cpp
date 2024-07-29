#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empID;
    string name;
    double basicSalary;
public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter basic salary of Employee: ";
        cin >> basicSalary;
    }
};

class Allowances {
protected:
    double hra, da;
public:
    void calculateAllowances(double basicSalary) {
        hra = 0.1 * basicSalary;
        da = 0.1 * basicSalary;
    }
};

class Deductions {
protected:
    double pf;
public:
    void calculateDeductions(double basicSalary) {
        pf = 0.05 * basicSalary;
    }
};

class Salary : public Employee, public Allowances, public Deductions {
public:
    void calculateSalary() {
        calculateAllowances(basicSalary);
        calculateDeductions(basicSalary);
        double grossSalary = basicSalary + hra + da;
        double netSalary = grossSalary - pf;
        cout << "Gross Salary = Rs." << grossSalary << endl;
        cout << "Net Salary = Rs." << netSalary << endl;
    }
};

int main() {
    Salary emp;
    emp.getDetails();
    emp.calculateSalary();
    return 0;
}

