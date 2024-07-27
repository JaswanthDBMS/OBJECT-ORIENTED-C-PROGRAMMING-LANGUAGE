#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial of negative number is not defined." << std::endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


double factorial(double n) {
    if (n < 0) {
        std::cerr << "Error: Factorial of negative number is not defined." << std::endl;
        return 0.0;
    }
    double result = 1.0;
    for (double i = 1.0; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int intNumber = 5;
    double doubleNumber = 5.5;

    std::cout << "Factorial of " << intNumber << " (integer): " << factorial(intNumber) << std::endl;

    std::cout << "Factorial of " << doubleNumber << " (floating-point): " << factorial(doubleNumber) << std::endl;

    return 0;
}

