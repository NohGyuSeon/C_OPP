#include <iostream>
using namespace std;

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() = 0;
};

class Circle : public Shape {
public:
	virtual void draw() {
		cout << "Circle" << endl;
	}
	string toString() {
		return "Circle °´Ã¼";
	}
};

int main() {
	Circle circle;
	circle.draw();
	Shape* s = new Circle();
	s->draw();
}