#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	donut.radius = 5.0;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;
	
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}