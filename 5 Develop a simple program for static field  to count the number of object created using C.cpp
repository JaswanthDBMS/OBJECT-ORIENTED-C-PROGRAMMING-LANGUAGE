#include <iostream>
#include <string>
class Car {
private:
    int id;
    std::string name;
    int marks;
    static int objectCount;

public:
    Car(int carId, std::string carName, int carMarks) : id(carId), name(carName), marks(carMarks) {
        objectCount++;
    }

    ~Car() {
        objectCount--;
    }

    static int getObjectCount() {
        return objectCount;
    }

    void display() const {
        std::cout << "Id of the Car: " << id << std::endl;
        std::cout << "Name of the Car: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int Car::objectCount = 0;

int main() {
    int id, marks;
    std::string name;
    std::cout << "Enter the Id of the Car: ";
    std::cin >> id;
    std::cin.ignore();  
    std::cout << "Enter the name of the Car: ";
    std::getline(std::cin, name);
    std::cout << "Number of the Marks (1 - 10): ";
    std::cin >> marks;

    Car car1(id, name, marks);
    car1.display();
    std::cout << "\nEnter the Id of the Car: ";
    std::cin >> id;
    std::cin.ignore();  
    std::cout << "Enter the name of the Car: ";
    std::getline(std::cin, name);
    std::cout << "Number of the Marks (1 - 10): ";
    std::cin >> marks;
    Car car2(id, name, marks);
    car2.display();
    std::cout << "\nNo. of objects created in the class: " << Car::getObjectCount() << std::endl;

    return 0;
}

