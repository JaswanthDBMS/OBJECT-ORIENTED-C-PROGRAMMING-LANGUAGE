#include <iostream>
using namespace std;

class PrimeSumChecker {
public:
    PrimeSumChecker(int n) : number(n) {
        cout << "PrimeSumChecker created for number: " << number << endl;
        checkPrimeSum();
    }
    ~PrimeSumChecker() {
        cout << "PrimeSumChecker for number " << number << " is being destroyed." << endl;
    }

private:
    int number;
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
    void checkPrimeSum() {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " can be expressed as the sum of " << i << " and " << (number - i) << endl;
                found = true;
            }
        }
        if (!found) {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 0) {
        PrimeSumChecker checker(n);
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}

