#include <iostream>
int main() {
    int choice;
    int num1, num2;
    int result;
    std::cout << "Calculator:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Modulus\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    switch (choice) {
        case 1:
            result = num1 + num2;
            std::cout << "The value of addition is " << result << std::endl;
            break;
        case 2:
            result = num1 - num2;
            std::cout << "The value of subtraction is " << result << std::endl;
            break;
        case 3:
            result = num1 * num2;
            std::cout << "The value of multiplication is " << result << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "The value of division is " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                std::cout << "The value of modulus is " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            std::cout << "Invalid choice. Please select a valid operation.\n";
            break;
    }
    return 0;
}

