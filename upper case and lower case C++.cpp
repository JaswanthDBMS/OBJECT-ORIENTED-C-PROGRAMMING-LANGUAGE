#include <iostream>
#include <string>
#include <algorithm>

class StringConverter {
public:
    StringConverter(const std::string& str) : inputString(str) {}

    std::string toUpperCase() const {
        std::string upperCaseString = inputString;
        std::transform(upperCaseString.begin(), upperCaseString.end(), upperCaseString.begin(), ::toupper);
        return upperCaseString;
    }

    std::string toLowerCase() const {
        std::string lowerCaseString = inputString;
        std::transform(lowerCaseString.begin(), lowerCaseString.end(), lowerCaseString.begin(), ::tolower);
        return lowerCaseString;
    }

private:
    std::string inputString;
};

int main() {
    std::string input;
    std::cout << "Enter the string: ";
    std::getline(std::cin, input);

    StringConverter converter(input);

    std::cout << "The string in upper case: " << converter.toUpperCase() << std::endl;
    std::cout << "The string in lower case: " << converter.toLowerCase() << std::endl;

    return 0;
}

