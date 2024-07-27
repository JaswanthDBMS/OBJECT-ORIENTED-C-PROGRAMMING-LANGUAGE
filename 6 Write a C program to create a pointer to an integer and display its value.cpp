#include<iostream>
using namespace std;
int main(){
	int num = 42;
	int* ptr = &num;
	cout << "value of the integer: "<< *ptr << endl;
	return 0;
}
