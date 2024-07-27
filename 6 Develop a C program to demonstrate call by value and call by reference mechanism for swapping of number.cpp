#include <iostream>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    std::cout << "Enter the value for a: ";
    std::cin >> a;
    std::cout << "Enter the value for b: ";
    std::cin >> b;
    std::cout << "Original values: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    swapByValue(a, b);
    std::cout << "The value after swapping for call by value" << std::endl;
    std::cout << "a = " << a << std::endl;  
    std::cout << "b = " << b << std::endl;
    swapByReference(a, b);
    std::cout << "The value after swapping for call by reference" << std::endl;
    std::cout << "a = " << a << std::endl;  
    std::cout << "b = " << b << std::endl;
    return 0;
}

