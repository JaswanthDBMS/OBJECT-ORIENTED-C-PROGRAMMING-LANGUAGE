#include<iostream>
#include<cmath>
bool isprime(int n);
int main() {
	int number = 29;
	if (isprime(number)){
		std::cout << number << " is a prime number. " << std::endl;
	}
	else{
		std::cout <<number << " is not a prime number. " << std::endl;
	}
	return 0;
}
bool isprime(int n){
	if ( n<=1) {
		return false;
	}
	if (n <= 3) {
		return true;
	}
	if (n % 2 == 0 || n % 3 == 0){
		return false;
	}
	for (int i=5;i*i <= n;i+=6){
		if(n%i == 0 ||n % (i + 2) == 0){
			return false;
		}
	}
	return true;
}
