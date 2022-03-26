#include <iostream>

using namespace std;

class Triangle {
	int base, height;
public:
	Triangle();
	Triangle(int b, int h);
	~Triangle();
	void setHeight(int h);
	double calcArea();
	void printTriangle();
};

Triangle::Triangle() {

}

Triangle::Triangle(int b, int h) {
	base = b;
	height = h;
	cout << "밑변: " << base << " 높이: " << height << endl;
}

Triangle::~Triangle() {
	cout << "Triangle is removed" << endl;
}

void Triangle::setHeight(int h) {
	height = h;
}

double Triangle::calcArea() {
	return base * height * 0.5;
}

void Triangle::printTriangle() {
	cout << "면적 = " << calcArea() << endl;
}

int main() {
	Triangle a(2, 2), b(4, 4);
	a.setHeight(5);
	a.printTriangle();
	b.printTriangle();
}
