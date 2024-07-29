#include <iostream>
using namespace std;

void findGreatest(double* p1, double* p2, double* p3) {
    if (*p1 > *p2 && *p1 > *p3) {
        cout << "The greatest is P1: " << *p1 << endl;
    } else if (*p2 > *p1 && *p2 > *p3) {
        cout << "The greatest is P2: " << *p2 << endl;
    } else {
        cout << "The greatest is P3: " << *p3 << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter the three numbers: ";
    while (!(cin >> a >> b >> c)) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Invalid input. Please enter three valid numbers: ";
    }

    double* p1 = &a;
    double* p2 = &b;
    double* p3 = &c;

    findGreatest(p1, p2, p3);

    return 0;
}

