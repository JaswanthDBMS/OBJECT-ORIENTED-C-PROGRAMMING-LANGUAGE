#include <iostream>
int main() {
    int num, bitPosition;
    std::cout << "Enter Number: ";
    std::cin >> num;
    std::cout << "Enter bit number you wish to set: ";
    std::cin >> bitPosition;
    if (bitPosition < 0 || bitPosition >= (sizeof(int) * 8)) {
        std::cout << "Invalid bit position." << std::endl;
        return 1;
    }
    int result = num | (1 << bitPosition);
    std::cout << "Bit set Successfully" << std::endl;
    std::cout << "Answer: " << result << std::endl;

    return 0;
}

