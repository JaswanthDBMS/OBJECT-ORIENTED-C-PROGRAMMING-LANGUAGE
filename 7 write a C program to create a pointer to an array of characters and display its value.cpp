#include<iostream>
using namespace std;
int main(){
	char arr[] = "Hello, world!";
	char* ptr = arr;
	cout << "value of the character array: ";
	for (int i=0; ptr[i] != '\0'; ++i){
		cout << *(ptr +i);
	}
	cout << endl;
	return 0;
}
