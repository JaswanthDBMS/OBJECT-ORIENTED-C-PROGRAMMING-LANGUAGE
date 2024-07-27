#include<iostream>
#include<string>
class person {
	private:
		std::string name;
		int age;
		public:
			person(const std::string& n, int a): name(n), age(a) {}
			friend std::ostream& operator<<(std::ostream& os, const person& p);
		
};
std::ostream& operator<<(std::ostream& os, const person& p){
	os << "name: " << p.name << ", age: " << p.age;
	return os;
}
int main() {
	person p1("john doe", 30);
	std::cout << p1 << std::endl;
	return 0;
}
