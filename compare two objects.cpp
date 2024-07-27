#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:

    Person(const std::string& n, int a) : name(n), age(a) {}

    bool operator==(const Person& other) const {
        return (name == other.name && age == other.age);
    }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {

    Person p1("John Doe", 30);
    Person p2("John Doe", 30);
    Person p3("Jane Doe", 25);

    if (p1 == p2) {
        std::cout << "p1 is equal to p2" << std::endl;
    } else {
        std::cout << "p1 is not equal to p2" << std::endl;
    }

    if (p1 == p3) {
        std::cout << "p1 is equal to p3" << std::endl;
    } else {
        std::cout << "p1 is not equal to p3" << std::endl;
    }

    return 0;
}

