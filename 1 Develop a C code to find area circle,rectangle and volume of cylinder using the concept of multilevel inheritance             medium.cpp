#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

class Shape {
protected:
    float radius;
public:
    void getRadius() {
        cout << "Enter radius of circle: ";
        while (!(cin >> radius) || radius < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive number: ";
        }
    }
    virtual void displayArea() = 0; 
};

class Rectangle : public Shape {
protected:
    float length, width;
public:
    void getDimensions() {
        cout << "Enter length and width of rectangle: ";
        while (!(cin >> length >> width) || length < 0 || width < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter positive numbers: ";
        }
    }
    void displayArea() override {
        cout << "Area of rectangle: " << length * width << endl;
    }
};

class Cylinder : public Rectangle {
protected:
    float height;
public:
    void getHeight() {
        cout << "Enter height of cylinder: ";
        while (!(cin >> height) || height < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive number: ";
        }
    }
    void displayVolume() {
        cout << "Volume of cylinder: " << length * width * height << endl;
    }
};

int main() {
    Shape* shape;
    Rectangle rectangle;
    Cylinder cylinder;
    shape = &rectangle;
    shape->getRadius();
    shape->displayArea();
    rectangle.getDimensions();
    rectangle.displayArea();
    cylinder.getDimensions();
    cylinder.getHeight();
    cylinder.displayVolume();

    return 0;
}

