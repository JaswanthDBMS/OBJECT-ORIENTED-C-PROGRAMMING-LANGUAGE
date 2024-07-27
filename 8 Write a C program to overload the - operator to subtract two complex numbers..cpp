#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}


    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {

    Complex c1(4.3, 5.7);
    Complex c2(2.1, 1.2);

    Complex c3 = c1 - c2;

    std::cout << "c1: ";
    c1.display();
    std::cout << "c2: ";
    c2.display();
    std::cout << "c1 - c2: ";
    c3.display();

    return 0;
}

