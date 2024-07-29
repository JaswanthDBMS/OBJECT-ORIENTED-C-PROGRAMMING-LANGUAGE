#include<iostream>
using namespace std;
class person{
	private:
		int* age;
		public:
			person(int* person_age)
			{
				cout<<"constructor for age is called"<<endl;
				age = new int;
				age = person_age;
			}
			void display()
			{
				cout<<"age of current object: "<<*age<<endl;
				cout<<endl;
			}
			
};
int main()
{
	int age = 25;
	person obj1(&age);
	obj1.display();
	return 0;
}
