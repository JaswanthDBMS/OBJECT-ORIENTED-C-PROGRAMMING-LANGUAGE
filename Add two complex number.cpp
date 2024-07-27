#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {

    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    Complex c3 = c1 + c2;

    std::cout << "c1 = ";
    c1.display();
    
    std::cout << "c2 = ";
    c2.display();
    
    std::cout << "c1 + c2 = ";
    c3.display();

    return 0;
}

