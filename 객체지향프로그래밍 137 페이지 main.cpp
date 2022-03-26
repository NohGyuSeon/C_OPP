#include <iostream>
using namespace std;

#include "객체지향프로그래밍 137 페이지 Circle.h"

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 ";
	cout << area << endl;
	
	Circle pizza;
	area = pizza.getArea();
	cout << "pizza 면적은 ";
	cout << area << endl; 
}
