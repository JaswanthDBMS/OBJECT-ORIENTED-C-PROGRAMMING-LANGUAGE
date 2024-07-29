#include <iostream>
using namespace std;

int main() {
    int num, i = 1, squareRoot = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (i * i <= num) {
        if (i * i == num) {
            squareRoot = i;
            break;
        }
        i++;
    }

    if (squareRoot != 0) {
        cout << "The square root of " << num << " is " << squareRoot << endl;
    } else {
        cout << "The number " << num << " is not a perfect square" << endl;
    }

    return 0;
}

