#include<iostream>
using namespace std;
class cubecalculator{
	public:
		cubecalculator() : number(1) {
			cout << "default caonstructor called, calculating for number: " << number << endl;
		}
		cubecalculator(int n) : number(n) {
			cout << "parameterized constructor called, calculating for the number: " << number << endl;
			
		}
void displaycubes() {
	for (int i = 1 ; i <=number; i++){
		cout << "cube of " << i << "is" << i*i*i << endl;
	}
}
private:
	int number;
};
int main() {
	int n;
	cout << "enter a positive integer (or press enter to usw default): ";
	if(cin.peek() == '\n'){
		cubecalculator calc;
		calc.displaycubes();
	}
	else{
		cin >> n;
		if ( n>0){
			cubecalculator calc(n);
			calc.displaycubes();
		}
		else{
			cout << "please enter a positive integer." << endl;
		}
	}
	return 0;
}
