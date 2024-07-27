#include <iostream>
using namespace std;
int add(int a, int b = 0, int c = 0, int d = 0);
int main() {
    int x, y, z, w;
    char choice;
    cout << "Enter up to four values (or type 'n' to use default value for the remaining):\n";
    cout << "Enter the first value: ";
    cin >> x;
    cout << "Enter the second value (or 'n' to use default 0): ";
    if (cin >> y) {
        cout << "Enter the third value (or 'n' to use default 0): ";
        if (cin >> z) {
            cout << "Enter the fourth value (or 'n' to use default 0): ";
            if (!(cin >> w)) {
                w = 0; 
            }
        } else {
            z = 0; 
            w = 0; 
        }
    } else {
        y = 0; 
        z = 0; 
        w = 0; 
    }
    int result = add(x, y, z, w);
    cout << "The sum is: " << result << endl;
    return 0;
}
int add(int a, int b, int c, int d) {
    return a + b + c + d;
}

