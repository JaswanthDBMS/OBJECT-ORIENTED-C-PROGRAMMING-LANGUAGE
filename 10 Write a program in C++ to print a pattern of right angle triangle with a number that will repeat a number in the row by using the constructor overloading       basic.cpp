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
    cout << "Using default constructor:" << endl;
    RightAngleTriangle triangle1;

    cout << "Using parameterized constructor:" << endl;
    int n;
    cout << "Enter the size of the triangle: ";
    cin >> n;
    RightAngleTriangle triangle2(n);

    return 0;
}

