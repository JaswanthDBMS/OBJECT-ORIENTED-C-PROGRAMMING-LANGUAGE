#include<iostream>
using namespace std;
int main(){
	char ch = 'A';
	char* ptr = &ch;
	cout << "value of the char: " << *ptr << endl;
	return 0;
}
