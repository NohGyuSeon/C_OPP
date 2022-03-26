#include <iostream>
using namespace std;

#include "객체지향프로그래밍 141 페이지 Calculator.h"
#include "객체지향프로그래밍 141 페이지 Adder.h"

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process()
} 
