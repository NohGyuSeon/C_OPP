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
	cout << "1. ���� ���� 2. �簢�� ���� 3. �ﰢ�� ����" << endl;
	cout << """""""""""""""""""""""""""" << endl;

	cout << "���ϴ� �޴� : ";
	cin >> n;
	if (n == 1) {
		int r = 5;
		cout << "���� ���� : " << circle(r) << endl;
	}

	else if (n == 2) {
		int h;
		int w;
		cout << "���ο� ���θ� �Է��Ͻÿ� : ";
		cin >> h >> w;
		cout << "�簢�� ���� : " << rect(h, w) << endl;
	}

	else if (n == 3) {
		int h = 10;
		int w = 5;
		cout << "�簢�� ���� : " << tri(h, w) << endl;
	}
	   
	return 0;
}