#include <iostream>
using namespace std;

class Person {

private:
    string name;
    int age;

public: 
    Person() {
        cout << "Default constructor is called" << endl; 
        name = "student";
        age = 12;
    }

 
    void display() {
        cout << "Name of current object: " << name << endl; 
        cout << "Age of current object: " << age << endl; 
    }
};

int main() {

    Person obj;
    

    obj.display();
    
    return 0;
}

