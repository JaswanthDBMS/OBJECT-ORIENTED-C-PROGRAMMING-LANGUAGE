#include <iostream>

class Number;

int findMaximum(const Number& num1, const Number& num2);

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    friend int findMaximum(const Number& num1, const Number& num2);
};

int findMaximum(const Number& num1, const Number& num2) {
    if (num1.value > num2.value) {
        return num1.value;
    } else {
        return num2.value;
    }
}

int main() {
    Number num1(25);
    Number num2(40);

    int max = findMaximum(num1, num2);

    std::cout << "The maximum of the two numbers is: " << max << std::endl;

    return 0;
}

