#include<iostream>
int gcd(int a, int b);
int main(){
	int num1 = 56;
	int num2 = 98;
	std::cout << "the GCD of " << num1 << " and " << num2 << " is " << gcd(num1,num2) << std::endl;
	return 0;
}
int gcd(int a, int b){
	while (b!=0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
