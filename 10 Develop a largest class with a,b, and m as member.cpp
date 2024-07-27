#include <iostream>

class Largest {
private:
    int a, b, m;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
        m = 0; 
    }

    friend void find_Max(Largest&);

    void display() const {
        std::cout << "Maximum no is " << m << std::endl;
    }
};

void find_Max(Largest& obj) {
    obj.m = (obj.a > obj.b) ? obj.a : obj.b;
}

int main() {
    Largest obj;
    int num1, num2;
    std::cout << "Enter the first no: ";
    std::cin >> num1;
    std::cout << "Enter the second no: ";
    std::cin >> num2;
    obj.setData(num1, num2);
    find_Max(obj);
    obj.display();

    return 0;
}

