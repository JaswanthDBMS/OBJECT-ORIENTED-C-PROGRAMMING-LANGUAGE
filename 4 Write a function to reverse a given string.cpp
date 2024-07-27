#include <iostream>
#include <string>
std::string reverseString(const std::string& str);
int main() {
    std::string originalString = "Hello, World!";
    std::string reversedString = reverseString(originalString);
    std::cout << "Original string: " << originalString << std::endl;
    std::cout << "Reversed string: " << reversedString << std::endl;
    return 0;
}
std::string reverseString(const std::string& str) {
    int n = str.length();
    std::string reversedStr;
    reversedStr.reserve(n); 
    for (int i = n - 1; i >= 0; --i) {
        reversedStr += str[i];
    }
    return reversedStr;
}

