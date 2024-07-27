#include <iostream>
#include <vector>

class Series {
private:
    int num;

public:
    // Member function to get input from the user
    void input() {
        std::cout << "Enter a number: ";
        std::cin >> num;
    }

    // Member function to print the Fibonacci series up to the number
    void show() const {
        std::vector<int> fibonacci;
        if (num >= 1) fibonacci.push_back(0);
        if (num >= 2) fibonacci.push_back(1);
        
        for (int i = 2; i < num; ++i) {
            fibonacci.push_back(fibonacci[i-1] + fibonacci[i-2]);
        }

        std::cout << "Fibonacci series up to " << num << " terms:" << std::endl;
        for (int i = 0; i < fibonacci.size(); ++i) {
            std::cout << fibonacci[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Series series;
    series.input();
    series.show();
    return 0;
}

