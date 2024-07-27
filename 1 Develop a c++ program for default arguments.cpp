#include <iostream>
int sum(int a, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}
int main() {
    int a, b, c, d;
    std::cout << "Enter the value: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    int result = sum(a, b, c, d);
    std::cout << result << std::endl;
    return 0;
}

