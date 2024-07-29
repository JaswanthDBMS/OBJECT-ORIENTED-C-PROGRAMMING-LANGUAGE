#include <iostream>
using namespace std;

int main() {
    const int SIZE = 4;
    double arr[SIZE];

    cout << "Enter the 4 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        while (!(cin >> arr[i])) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Please enter a valid number: ";
        }
    }

    cout << "Displaying the data: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << endl;
    }

    return 0;
}

