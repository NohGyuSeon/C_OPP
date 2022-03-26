#include <iostream>	
#include <cstring>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea() {
		return 3.14 * radius * radius;
	}
};

void Circle::setRadius(int r) {
	radius = r;
}

int main() {
	Circle* circle = new Circle[10];
	string s, part;
	cout << "������ ���ϱ� ���ڿ��� �Է� : ";
	getline(cin, s, '\n');
	int count = 0, sidx = 0, fidx = 0;
	double tot = 0.0;
	for (; fidx != -1; sidx = fidx + 1, count++) {
		fidx = s.find('+', sidx);
		part = (fidx == -1) ? s.substr(sidx) : s.substr(sidx, fidx - sidx);
		// ���ڿ��� ������ ��ȯ
		int radius = stoi(part);
		circle[count].setRadius(radius);
		tot = tot + circle[count].getArea();                   
		cout << tot << endl;
	}
	cout << "������ ���� : " << tot << endl;

	delete[] circle;
}
