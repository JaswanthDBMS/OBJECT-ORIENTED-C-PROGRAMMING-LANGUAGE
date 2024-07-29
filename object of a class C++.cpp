#include <iostream>
#include <string>

class Manager {
private:
    std::string name;
    int age;

public:
    Manager(std::string name = "", int age = 0) : name(name), age(age) {}

    void setDetails(const std::string &name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    const int numberOfManagers = 3;
    Manager managers[numberOfManagers];

    managers[0].setDetails("Alice Smith", 45);
    managers[1].setDetails("Bob Johnson", 50);
    managers[2].setDetails("Carol Williams", 38);

    std::cout << "List of Managers:" << std::endl;
    for (int i = 0; i < numberOfManagers; ++i) {
        managers[i].display();
    }

    return 0;
}

