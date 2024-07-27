#include <iostream>
#include <cmath>
int main() {
    double base, exponent, result;
    std::cout << "Input the base: ";
    std::cin >> base;
    std::cout << "Input the exponent: ";
    std::cin >> exponent;
    result = pow(base, exponent);
    std::cout << "Sample Output: " << result << std::endl;
    return 0;
}

