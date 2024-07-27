#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car(const std::string &carMake, const std::string &carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {
        std::cout << "Car created: " << make << " " << model << " (" << year << ")" << std::endl;
    }

    ~Car() {
        std::cout << "Car destroyed: " << make << " " << model << " (" << year << ")" << std::endl;
    }

    void displayInfo() const {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2020);
    
    car1.displayInfo();
    
    return 0;
}

