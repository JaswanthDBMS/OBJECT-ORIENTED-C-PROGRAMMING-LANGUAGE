#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(dou ble len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle created with length = " << length << " and width = " << width << "." << std::endl;
    }

    ~Rectangle() {
        std::cout << "Rectangle with length = " << length << " and width = " << width << " is destroyed." << std::endl;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    void displayInfo() const {
        std::cout << "Length: " << length << ", Width: " << width 
                  << ", Area: " << area() << ", Perimeter: " << perimeter() << std::endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    
    rect.displayInfo();
    
    return 0;
}

