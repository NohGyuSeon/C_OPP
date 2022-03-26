
#include <iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main()
{
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << endl;
	cout << pizza.getArea() << endl;

	Circle* p;
	p = &pizza;
	cout << p->getArea() << endl;
	cout << p << endl;
	cout << &pizza << endl;
}
