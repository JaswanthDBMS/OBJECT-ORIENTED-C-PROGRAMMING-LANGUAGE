#include <iostream>
using namespace std;
class DivisibleByNine {
public:
    DivisibleByNine() {
        cout << "DivisibleByNine checker created." << endl;
        findNumbers();
    }
    ~DivisibleByNine() {
        cout << "DivisibleByNine checker destroyed." << endl;
    }

private:
    void findNumbers() {
        int count = 0;
        int sum = 0;
        cout << "Numbers divisible by 9 between 100 and 200: ";
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                cout << i << " ";
                count++;
                sum += i;
            }
        }
        cout << endl;
        cout << "Count: " << count << endl;
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    DivisibleByNine checker;
    return 0;
}

