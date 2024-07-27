#include <iostream>
using namespace std;
int main() {
    float num = 3.14f;  
    float* ptr = &num;  
    cout << "Value of the float: " << *ptr << endl;
    return 0;
}

