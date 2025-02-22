#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    friend Complex add(const Complex& c1, const Complex& c2);

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

Complex add(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    std::cout << "Complex number 1: ";
    c1.display();
    std::cout << "Complex number 2: ";
    c2.display();

    Complex c3 = add(c1, c2);

    std::cout << "Sum of the complex numbers: ";
    c3.display();

    return 0;
}

