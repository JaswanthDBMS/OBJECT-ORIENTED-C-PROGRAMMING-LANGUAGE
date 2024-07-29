#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while (i < n && arr[i] == i) {
        i++;
    }

    cout << "The smallest missing element is " << i << endl;

    return 0;
}

