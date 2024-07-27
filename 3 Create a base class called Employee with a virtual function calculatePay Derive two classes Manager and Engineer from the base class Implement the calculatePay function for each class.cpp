#include <iostream>
class Employee {
public:
    virtual double calculatePay() const = 0; 
};
class Manager : public Employee {
private:
    double salary; 
public:
    Manager(double sal) : salary(sal) {}
    double calculatePay() const override {
        return salary;
    }
};
class Engineer : public Employee {
private:
    double hourlyRate; 
    int hoursWorked;   
public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};
int main() {
    Employee* employee1 = new Manager(80000.0); 
    Employee* employee2 = new Engineer(50.0, 160);
    std::cout << "Manager's Pay: $" << employee1->calculatePay() << std::endl;
    std::cout << "Engineer's Pay: $" << employee2->calculatePay() << std::endl;
    delete employee1;
    delete employee2;
    return 0;
}

