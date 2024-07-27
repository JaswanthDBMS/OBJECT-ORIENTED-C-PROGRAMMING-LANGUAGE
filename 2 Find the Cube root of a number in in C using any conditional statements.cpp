#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Cube root of a negative number is not a real number." << std::endl;
    } else {
        double result = cbrt(num);
        if (result == static_cast<int>(result)) {
            std::cout << "Cube root of " << num << " is " << result << std::endl;
        } else {
            std::cout << num << " is not a perfect cube. Its cube root is approximately " << result << std::endl;
        }
    }

    return 0;
}

