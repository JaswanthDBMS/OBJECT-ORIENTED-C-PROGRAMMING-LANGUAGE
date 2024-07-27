#include <iostream>

class Counter {
private:
    int value;

public:

    Counter(int v = 0) : value(v) {}

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Counter c1(5);

    std::cout << "Initial value: ";
    c1.display();

    ++c1; 
    std::cout << "After prefix increment: ";
    c1.display();

    c1++; 
    std::cout << "After postfix increment: ";
    c1.display();

    return 0;
}

