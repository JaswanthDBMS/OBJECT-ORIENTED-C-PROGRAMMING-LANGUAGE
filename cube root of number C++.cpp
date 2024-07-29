#include <iostream>
using namespace std;

int main() {
    int num, i = 1, cubeRoot = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (i * i * i <= num) {
        if (i * i * i == num) {
            cubeRoot = i;
            break;
        }
        i++;
    }

    if (cubeRoot != 0) {
        cout << "The cube root of " << num << " is " << cubeRoot << endl;
    } else {
        cout << "The number " << num << " is not a perfect cube" << endl;
    }

    return 0;
}

