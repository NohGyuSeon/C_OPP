#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	friend Power operator+ (Power op1, Power op2);
	// Power& operator= (Power op3);
	Power& operator= (Power op3) {
		kick = op3.kick;
		punch = op3.punch;
		return *this;
	}
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator + (Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}

/*
Power& Power::operator= (Power op3) {
	kick = op3.kick;
	punch = op3.punch;
	return *this;
}
*/

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
	c = a = b;
	a.show();
	b.show();
	c.show();
}