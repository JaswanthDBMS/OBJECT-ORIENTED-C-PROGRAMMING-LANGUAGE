#include <iostream>
using namespace std;
void greet() {
    cout << "Hello, World!" << endl;
}
void farewell() {
    cout << "Goodbye, World!" << endl;
}
int main() {
    void (*funcPtr)() = greet;
    funcPtr();
    funcPtr = farewell;
    funcPtr();
    return 0;
}

