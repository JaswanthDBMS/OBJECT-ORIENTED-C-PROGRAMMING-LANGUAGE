#include<iostream>
#include <cmath>
double calculatecirclearea(double radius);
int main(){
	double radius = 5.0;
	double area = calculatecirclearea(radius);
	std::cout << "radius of the circle: " << radius << std::endl;
	std::cout << "area of the circle: " << area << std::endl;
	return 0;
}
double calculatcirclearea(double radius){
	return M_PI * radius * radius;
}
