#include <cmath>
#include "Exp.h"

Exp::Exp() {
	base = 1;
	exp = 1;
	value = pow(1, 1);
}

Exp::Exp(int base) {
	this->base = base;
	exp = 1;
	value = pow(base, 1);
}

Exp::Exp(int base, int exp) {
	this->base = base;
	this->exp = exp;
	value = pow(base, exp);
}

int Exp::getValue() {
	return value;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::Equal(Exp other) {
	if (this->value == other.value)
		return true;
	else
		return false;
}