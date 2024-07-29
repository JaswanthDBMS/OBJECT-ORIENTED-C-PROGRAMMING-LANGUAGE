#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    Customer() : balance(30.0) {}

    void getDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Type: ";
        cin >> accountType;
    }

    void displayDetails() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance() const {
        return balance;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }
};

class Transaction {
public:
    void deposit(Customer &c) {
        double amount;
        cout << "Enter amount to Deposit: ";
        cin >> amount;
        c.setBalance(c.getBalance() + amount);
    }

    void withdraw(Customer &c) {
        double amount;
        cout << "Enter amount to be Withdrawn: ";
        cin >> amount;
        if (amount > c.getBalance()) {
            cout << "Insufficient balance!" << endl;
        } else {
            c.setBalance(c.getBalance() - amount);
        }
    }

    void displayBalance(const Customer &c) const {
        cout << "Balance: " << c.getBalance() << endl;
    }
};

class Bank : public Customer, public Transaction {
public:
    void menu() {
        int choice;
        do {
            cout << "Choose Your Choice" << endl;
            cout << "1) Deposit" << endl;
            cout << "2) Withdraw" << endl;
            cout << "3) Display Balance" << endl;
            cout << "4) Display with Full Details" << endl;
            cout << "5) Exit" << endl;
            cout << "Enter Your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    deposit(*this);
                    break;
                case 2:
                    withdraw(*this);
                    break;
                case 3:
                    displayBalance(*this);
                    break;
                case 4:
                    displayDetails();
                    break;
                case 5:
                    cout << "Thank You for Banking with us.." << endl;
                    break;
                default:
                    cout << "Invalid choice, please try again." << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    char accountType;
    cout << "Enter S for saving customer and C for current a/c customer: ";
    cin >> accountType;

    if (accountType == 'S' || accountType == 'C') {
        Bank bank;
        bank.getDetails();
        bank.menu();
    } else {
        cout << "Invalid account type!" << endl;
    }

    return 0;
}

