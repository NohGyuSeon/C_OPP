// 1. 원의 개수를 입력받고 Circle 배열을 동적 생성하라.
// 2. 반지름 값을 입력받아 Circle 배열에 저장하고, 면적이 100에서 200사이인 원의 개수를 출력하라.

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

Circle::~Circle() {	

}

int main() {
	cout << "생성하고자 하는 원의 개수 ? ";
	int n, radius;
	cin >> n;
	if (n <= 0) return 0;
	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++)
	{
		cout << "원" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++)
	{
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
	delete [] pArray;
}
