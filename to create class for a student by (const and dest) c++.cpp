#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student(const std::string &studentName, int studentAge) 
        : name(studentName), age(studentAge) {
        std::cout << "Student " << name << " is created." << std::endl;
    }

    ~Student() {
        std::cout << "Student " << name << " is destroyed." << std::endl;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1("John Doe", 20);
    
    student1.displayInfo();
    
    return 0;
}

