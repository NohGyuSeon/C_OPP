#include <iostream>
#include <string>
using namespace std;

int main() {
	double pi = 3.14;

	auto love = [](string a, string b) {
		cout << a << "���� " << b << "�� ����" << endl;
	};
	auto calc = [pi](int r) -> double {
		return pi * r * r;
	};

	love("��", "��");
	love("�ø�", "����");
	cout << "������ " << calc(3);
}