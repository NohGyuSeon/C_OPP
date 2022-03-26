
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle()
{
	radius = 1;
	cout << "반지름이 " << radius << "인 원 생성 " << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << "인 원 생성 " << endl;
}
double Circle::getArea()
{
	return radius * radius * 3.14;
}

int main() {

	Circle donut;
	cout << "도넛 면적 : " << donut.getArea() << endl;

	Circle pizza(10);
	cout << "피자 면적 : " << pizza.getArea() << endl;

	return 0;
}