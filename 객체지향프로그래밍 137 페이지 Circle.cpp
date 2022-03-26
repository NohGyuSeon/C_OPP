#include <iostream>
using namespace std;

#include "객체지향프로그래밍 137 페이지 Circle.h"

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius;
	cout << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius;
	cout << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

