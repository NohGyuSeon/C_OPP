#include "객체지향프로그래밍 141 페이지 Adder.h"

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
} 

int Adder::process() {
	return op1 + op2;
}


