#include <iostream>
using namespace std;
class NumberReverser {
public:
    NumberReverser() : number(0) {
        cout << "Default constructor called, reversing number: " << number << endl;
        reverseNumber();
    }
    NumberReverser(int n) : number(n) {
        cout << "Parameterized constructor called, reversing number: " << number << endl;
        reverseNumber();
    }
    void displayReversed() const {
        cout << "Reversed number: " << reversedNumber << endl;
    }
private:
    int number;
    int reversedNumber;
    void reverseNumber() {
        int n = number;
        reversedNumber = 0;
        while (n != 0) {
            reversedNumber = reversedNumber * 10 + n % 10;
            n /= 10;
        }
    }
};
int main() {
    int n;
    cout << "Enter an integer (or press enter to use default number 0): ";
    if (cin.peek() == '\n') {
        NumberReverser reverser;
        reverser.displayReversed();
    } else {
        cin >> n;
        NumberReverser reverser(n);
        reverser.displayReversed();
    }
    return 0;
}

