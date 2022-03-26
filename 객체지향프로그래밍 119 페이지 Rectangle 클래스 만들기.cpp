#include <iostream>
using namespace std;

class Rectangle { 
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool inSquare();
};

Rectangle::Rectangle() : Rectangle(1) {}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}


bool Rectangle::inSquare() {
	if(width==height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	
	if(rect1.inSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if(rect2.inSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if(rect3.inSquare()) cout << "rect3�� ���簢���̴�." << endl;
}



	
