#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string &holder, const std::string &number, double initialBalance)
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {
        std::cout << "Bank account created for " << accountHolder 
                  << " with account number " << accountNumber 
                  << " and initial balance $" << balance << std::endl;
    }

    ~BankAccount() {
        std::cout << "Bank account for " << accountHolder 
                  << " with account number " << accountNumber 
                  << " is closed." << std::endl;
    }

    void displayInfo() const {
        std::cout << "Account Holder: " << accountHolder 
                  << ", Account Number: " << accountNumber 
                  << ", Balance: $" << balance << std::endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount 
                      << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount 
                      << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }
};

int main() {
    BankAccount account("John Doe", "123456789", 1000.0);
    
    account.displayInfo();
    
    account.deposit(500.0);
    
    account.withdraw(200.0);
    
    account.displayInfo();
    
    return 0;
}

