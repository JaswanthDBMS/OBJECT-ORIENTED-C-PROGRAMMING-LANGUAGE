#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Square root of a negative number is not defined in real numbers." << std::endl;
    } else {
        double result = sqrt(num);
        if (result == static_cast<int>(result)) {
            std::cout << "Square root of " << num << " is " << result << std::endl;
        } else {
            std::cout << num << " is not a perfect square. Its square root is approximately " << result << std::endl;
        }
    }

    return 0;
}

