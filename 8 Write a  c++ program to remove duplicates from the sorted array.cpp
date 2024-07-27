#include <iostream>
#include <vector>
#include <algorithm>

void removeDuplicates(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    std::vector<int>::iterator last = std::unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());
}

int main() {
    std::vector<int> arr;
    arr.push_back(15);
    arr.push_back(14);
    arr.push_back(25);
    arr.push_back(14);
    arr.push_back(32);
    arr.push_back(14);
    arr.push_back(31);
    removeDuplicates(arr);
    std::cout << "Sorted Array without duplicates = {";
    for (std::vector<int>::size_type i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i < arr.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}\n";

    return 0;
}

