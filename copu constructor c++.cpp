#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
			person(string person_name, int person_age)
			{
				cout<<"constructor for both name and age is called"<<endl;
				name = person_name;
				age = person_age;
			}
			person(const person& obj)
			{
				cout<<"copy constructor is called"<<endl;
				name = obj.name;
				age = obj.age;
			}
			void display()
			{
				cout<<"nmae of current object: "<<name<<endl;
				cout<<"Age of current object: "<<age<<endl;
				cout<<endl;
			}
};
int main()
{
	person obj1("first person",25);
	obj1.display();
	person obj2(obj1);
	obj2.display();
	return 0;
}
