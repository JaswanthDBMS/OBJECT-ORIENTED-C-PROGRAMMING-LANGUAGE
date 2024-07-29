#include <iostream>
using namespace std;

class RightAngleTriangle {
public:
    RightAngleTriangle() : size(5) {
        cout << "Default constructor called, printing triangle of size " << size << endl;
        printTriangle();
    }
    RightAngleTriangle(int n) : size(n) {
        cout << "Parameterized constructor called, printing triangle of size " << size << endl;
        printTriangle();
    }
private:
    int size;
    void printTriangle() {
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a positive integer (or press enter to use default size 5): ";
    if (cin.peek() == '\n') {
        RightAngleTriangle triangle;
    } else {
        cin >> n;
        if (n > 0) {
            RightAngleTriangle triangle(n);
        } else {
            cout << "Please enter a positive integer." << endl;
        }
    }

    return 0;
}

