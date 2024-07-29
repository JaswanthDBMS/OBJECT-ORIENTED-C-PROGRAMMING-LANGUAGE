#include <iostream>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    float celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    float fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}

