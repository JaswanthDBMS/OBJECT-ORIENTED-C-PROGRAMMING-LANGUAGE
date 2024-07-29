#include<iostream>
using namespace std;
class cubecalculator{
	public:
		cubecalculator(int n) :number(n){
			cout << "cubecalculator create for number: " << number <<endl;
			
		}
		void displaycubes(){
			for (int i=1; i<=number;i++){
				cout << "cube of" << i << " is " << i*i*i << endl;
			}
		}
		~cubecalculator() {
			cout << "cubecalculator for number " << number << "is being destroyed." << endl;
		}
		private:
			int number;
};
int main(){
	int n;
	cout << "enter a positive integer: ";
	cin >> n;
	if (n > 0) {
		cubecalculator calc(n);
		calc.displaycubes();
	}
	else{
		cout << "please enter a positive integer. "<< endl;
	}
	return 0;
}

