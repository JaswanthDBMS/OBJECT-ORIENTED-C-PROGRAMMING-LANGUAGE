#include <iostream>
using namespace std;
class CubeCalculator {
public:
    CubeCalculator(int n) : number(n) {
        cout << "CubeCalculator created for number: " << number << endl;
    }
    void displayCubes() {
        for (int i = 1; i <= number; ++i) {
            cout << "Cube of " << i << " is " << i * i * i << endl;
        }
    }
    ~CubeCalculator() {
        cout << "CubeCalculator for number " << number << " is being destroyed." << endl;
    }
private:
    int number;
};
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        CubeCalculator calc(n);
        calc.displayCubes();
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    return 0;
}

