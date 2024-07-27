#include <iostream>
#include <string>
#include <iomanip> 

class Employee {
protected:
    std::string emp_name;
    int emp_id;
    std::string address;
    std::string mail_id;
    std::string mobile_no;

public:
    void inputDetails() {
        std::cout << "Enter Name of the Employee: ";
        std::getline(std::cin, emp_name);
        std::cout << "Enter Address of the Employee: ";
        std::getline(std::cin, address);
        std::cout << "Enter ID of the Employee: ";
        std::cin >> emp_id;
        std::cin.ignore(); 
        std::cout << "Enter Mobile Number: ";
        std::getline(std::cin, mobile_no);
        std::cout << "Enter E-Mail ID of the Employee: ";
        std::getline(std::cin, mail_id);
    }
};

class EmployeeWithPay : public Employee {
protected:
    double basic_pay;

public:
    void setBasicPay(double bp) {
        basic_pay = bp;
    }

    void generatePaySlip() {
        double da = basic_pay * 0.97; 
        double hra = basic_pay * 0.10; 
        double pf = basic_pay * 0.12;
        double clubFund = basic_pay * 0.001; 

        double grossPay = basic_pay + da + hra;
        double netPay = grossPay - pf - clubFund;
        std::cout << "\n=======================\n";
        std::cout << "PROGRAMMER PAYMENT SLIP\n";
        std::cout << "=======================\n";
        std::cout << "BASIC PAY => " << std::fixed << std::setprecision(2) << basic_pay << std::endl;
        std::cout << "DEARNESS ALLOWANCE => " << std::fixed << std::setprecision(2) << da << std::endl;
        std::cout << "HOUSE RENT ALLOWANCE => " << std::fixed << std::setprecision(2) << hra << std::endl;
        std::cout << "PROVIDENT FUND => " << std::fixed << std::setprecision(2) << pf << std::endl;
        std::cout << "CLUB FUND => " << std::fixed << std::setprecision(2) << clubFund << std::endl;
        std::cout << "GROSS PAY => " << std::fixed << std::setprecision(2) << grossPay << std::endl;
        std::cout << "NET PAY => " << std::fixed << std::setprecision(2) << netPay << std::endl;
    }
};

class Programmer : public EmployeeWithPay {
};

int main() {
    Programmer programmer;
    programmer.inputDetails();
    
    double basicPay;
    std::cout << "ENTER THE BASIC PAY OF THE PROGRAMMER => ";
    std::cin >> basicPay;
    programmer.setBasicPay(basicPay);
    programmer.generatePaySlip();

    return 0;
}

