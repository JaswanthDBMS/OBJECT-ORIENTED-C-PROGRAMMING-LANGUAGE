#include <iostream>
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a, b, c;
    std::cout << "Enter the value for a, b, c: ";
    std::cin >> a >> b >> c;
    int resultTwo = add(a, b);
    int resultThree = add(a, b, c);
    std::cout << "The value of addition using two parameters is " << resultTwo << std::endl;
    std::cout << "The value of addition using three parameters is " << resultThree << std::endl;

    return 0;
}

