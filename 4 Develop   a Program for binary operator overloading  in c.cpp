#include <iostream>
class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator - (const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};
int main() {
    int real1, imag1, real2, imag2;
    std::cout << "Enter the value of Complex Numbers a, b" << std::endl;
    std::cin >> real1 >> imag1;
    Complex c1(real1, imag1);
    std::cout << "Enter the value of Complex Numbers a, b" << std::endl;
    std::cin >> real2 >> imag2;
    Complex c2(real2, imag2);
    std::cout << "Input Values" << std::endl;
    c1.display();
    c2.display();
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    std::cout << "Result" << std::endl;
    sum.display();
    difference.display();
    return 0;
}

