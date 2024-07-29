 #include <iostream>
#include <cmath>
#include <string>
using namespace std;
class BinaryToOctalConverter {
public:
    BinaryToOctalConverter(const string& bin) : binary(bin) {
        cout << "BinaryToOctalConverter created for binary number: " << binary << endl;
        convertToOctal();
    }
    void displayOctal() const {
        cout << "Octal equivalent: " << octal << endl;
    }
private:
    string binary;
    string octal;
    void convertToOctal() {
        int decimal = 0;
        for (size_t i = 0; i < binary.size(); ++i) {
            if (binary[binary.size() - 1 - i] == '1') {
                decimal += pow(2, i);
            }
        }
        octal = "";
        while (decimal > 0) {
            int remainder = decimal % 8;
            octal = char(remainder + '0') + octal;
            decimal /= 8;
        }

        if (octal == "") {
            octal = "0";
        }
    }
};

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctalConverter converter(binary);
    converter.displayOctal();

    return 0;
}

