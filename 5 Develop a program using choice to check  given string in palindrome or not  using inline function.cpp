#include <iostream>
#include <string>
#include <algorithm>
inline bool isPalindrome(const std::string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string inputString;
    std::cout << "Enter the string: ";
    std::cin >> inputString;
    if (isPalindrome(inputString)) {
        std::cout << "THE GIVEN STRING IS PALINDROME" << std::endl;
    } else {
        std::cout << "THE GIVEN STRING IS NOT PALINDROME" << std::endl;
    }

    return 0;
}

