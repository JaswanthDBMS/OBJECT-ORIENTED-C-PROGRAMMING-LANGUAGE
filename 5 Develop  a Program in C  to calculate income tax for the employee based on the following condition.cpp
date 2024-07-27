#include <iostream>
#include <iomanip> 

class TaxCalculator {
private:
    double taxableIncome;
    double tax;

public:
    void inputIncome() {
        std::cout << "Enter your Income : ";
        std::cin >> taxableIncome;
    }

    void calculateTax() {
        if (taxableIncome <= 60000) {
            tax = 0;
        } else if (taxableIncome <= 150000) {
            tax = taxableIncome * 0.05;
        } else if (taxableIncome <= 500000) {
            tax = taxableIncome * 0.1;
        } else {
            tax = taxableIncome * 0.15;
        }
    }
    void displayTax() const {
        std::cout << "Your income tax is : " 
                  << std::fixed << std::setprecision(0) << tax 
                  << std::endl;
    }
};

int main() {
    TaxCalculator calculator;
    calculator.inputIncome();
    calculator.calculateTax();
    calculator.displayTax();
    return 0;
}

