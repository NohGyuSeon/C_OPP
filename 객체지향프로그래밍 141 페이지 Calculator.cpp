#include <iostream>
using namespace std;

#include "��ü�������α׷��� 141 ������ Calculator.h"
#include "��ü�������α׷��� 141 ������ Adder.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process()
} 
