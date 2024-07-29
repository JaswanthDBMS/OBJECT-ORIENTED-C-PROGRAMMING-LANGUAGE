#include <iostream>

class class_1;
class class_2;

void swap(class_1 &obj1, class_2 &obj2);

class class_1 {
private:
    int value;

public:
    class_1(int val) : value(val) {}

    void display() const {
        std::cout << "class_1 value: " << value << std::endl;
    }

    friend void swap(class_1 &obj1, class_2 &obj2);
};

class class_2 {
private:
    int value;

public:
    class_2(int val) : value(val) {}

    void display() const {
        std::cout << "class_2 value: " << value << std::endl;
    }

    friend void swap(class_1 &obj1, class_2 &obj2);
};
void swap(class_1 &obj1, class_2 &obj2) {
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    class_1 obj1(100);
    class_2 obj2(200);

    std::cout << "Before swap:" << std::endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    std::cout << "After swap:" << std::endl;
    obj1.display();
    obj2.display();

    return 0;
}

