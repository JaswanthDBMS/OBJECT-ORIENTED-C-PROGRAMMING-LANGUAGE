#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> numbers;
    double number;

    cout << "Enter Infinite Numbers and (-1 To Stop Reading):" << endl;
    while (true) {
        cin >> number;
        if (number == -1) break;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    cout << "The Ascending order is given below:" << endl;
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}

