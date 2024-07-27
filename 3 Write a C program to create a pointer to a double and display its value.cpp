#include<iostream>
using namespace std;
int main(){
	double num = 9.81;
	double* ptr = &num;
	cout << "value of the double: " << *ptr << endl;
	return 0;
}
