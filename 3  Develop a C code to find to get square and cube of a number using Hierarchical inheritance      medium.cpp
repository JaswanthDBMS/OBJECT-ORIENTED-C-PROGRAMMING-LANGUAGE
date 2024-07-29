#include <iostream>
#include <cmath>
using namespace std;

class Number {
protected:
    double value;
public:
    void getValue() {
        cout << "Enter an integer number: ";
        while (!(cin >> value)) {
            cin.clear(); 
            cin.ignore(INT_MAX, '\n'); 
            cout << "Invalid input. Please enter a valid number: ";
        }
    }
};

class Square : public Number {
public:
    void calculateSquare() {
        cout << "Square of " << value << " is: " << pow(value, 2) << endl;
    }
};

class Cube : public Number {
public:
    void calculateCube() {
        cout << "Cube of " << value << " is: " << pow(value, 3) << endl;
    }
};

int main() {
    Square s;
    s.getValue();
    s.calculateSquare();

    Cube c;
    c.getValue();
    c.calculateCube();

    return 0;
}

