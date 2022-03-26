
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle cirArr[3] = { Circle(30), Circle(20), Circle() };

	for (int i = 0; i < 3; i++)
	{
		cout << "원 " << i << "의 면적 : " << cirArr[i].getArea() << endl;
	}
}