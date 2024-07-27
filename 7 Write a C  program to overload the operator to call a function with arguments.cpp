#include <iostream>

class Functor {
public:
  
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main() {

    Functor add;

    int result1 = add(3, 4);
    int result2 = add(10, 20);

    std::cout << "Result of add(3, 4): " << result1 << std::endl;
    std::cout << "Result of add(10, 20): " << result2 << std::endl;

    return 0;
}

