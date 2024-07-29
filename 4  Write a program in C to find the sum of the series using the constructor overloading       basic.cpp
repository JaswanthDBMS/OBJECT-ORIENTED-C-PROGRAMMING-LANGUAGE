#include<iostream>
using namespace std;
class seriessum{
	public:
		seriessum() : start(1),end(10) {
			cout << "default construction called, calculating sum from" << start << "to" << end <<endl;
			calculatesum();
		}
		seriessum(int n) : start(1), end(n) {
			cout << "parameterized constructor called, calculating sum from " << start << "to" << end <<endl;
			calculatesum();
			
		}
		void displaysum() const{
		cout << "sum of the series from " <<start <<"to" << end << "is" << sum << endl;
		
		}
		private:
			int start;
			int end;
			int sum;
			void calculatesum() {
				sum = 0;
				for (int i=start;i <=end;i++){
					sum += i;
					
				}
			}
};
int main() {
	int n;
	cout << "enter a positive integer (or press enter to use default range 1 to 10): ";
	if (cin.peek() == '\n'){
	seriessum seriessum;
	seriessum.displaysum();
	}
	else{
		cin >> n;
		if ( n>0) {
			seriessum seriessum(n);
			seriessum.displaysum();
		}
		else{
			cout << "please enter a positive integer." << endl;
		}
	}
	return 0;
}
