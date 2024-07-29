#include <iostream>

class ObjectCounter {
private:
    static int count;  

public:
    ObjectCounter() {
        count++;
    }

    static void showcount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};

int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    ObjectCounter::showcount();  

    return 0;
}

