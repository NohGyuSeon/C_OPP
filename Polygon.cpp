#include <iostream>
using namespace std;

double circle(int rad) {
	return rad * rad * 3.14;
}

double rect(int x, int y) {
	return x * y;
}

double tri(int x, int y) {
	return x * y * 0.5;
}

int main() {
	int n;   
	cout << """""""""""""""""""""""""""" << endl;
	cout << "1. 원의 면적 2. 사각형 면적 3. 삼각형 면적" << endl;
	cout << """""""""""""""""""""""""""" << endl;

	cout << "원하는 메뉴 : ";
	cin >> n;
	if (n == 1) {
		int r = 5;
		cout << "원의 면적 : " << circle(r) << endl;
	}

	else if (n == 2) {
		int h;
		int w;
		cout << "세로와 가로를 입력하시오 : ";
		cin >> h >> w;
		cout << "사각형 면적 : " << rect(h, w) << endl;
	}

	else if (n == 3) {
		int h = 10;
		int w = 5;
		cout << "사각형 면적 : " << tri(h, w) << endl;
	}
	   
	return 0;
}