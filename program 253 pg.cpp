#include <iostream>
using namespace std; 
int main()
{
    int a, *ptr1, **ptr2; 
    ptr1 = &a; 
    ptr2 = &ptr1; 
    cout << "The address of a : " << ptr1 << "\n";
    cout << "The address of ptr1 : " << ptr2 << "\n\n";
    cout << "After incrementing the address value:\n\n";
    ptr1 += 2;
    cout << "The address of a : " << ptr1 << "\n";
    ptr2 += 2;
    cout << "The address of ptr1 : " << ptr2 << "\n";
    return 0; 
}

