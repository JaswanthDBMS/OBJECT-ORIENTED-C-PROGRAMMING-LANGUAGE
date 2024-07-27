#include<iostream>
#include<string>
using namespace std;
int main() {
	string str = "hello, world!";
	string* ptr = &str;
	cout << "value of the string: " << *ptr << endl;
	return 0;
}
