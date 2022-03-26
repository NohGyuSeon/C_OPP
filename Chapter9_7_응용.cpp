#include <iostream>
using namespace std;

class calculator {
	void input() {
		cout << "���� 2���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public calculator {
protected:
	int calc(int a, int b) {
		return a + b;
	}
};

class Substracter : public calculator {
protected:
	int calc(int a, int b) {
		return a - b;
	}
};

class Product : public calculator {
protected:
	int calc(int a, int b) {
		return a * b;
	}
};

class Divide : public calculator {
protected:
	int calc(int a, int b) {
		return a / b;
	}
};

class Mod : public calculator {
protected:
	int calc(int a, int b) {
		return a % b;
	}
};

int main() {
	Adder adder;
	Substracter substracter;
	Product product;
	Divide divide;
	Mod mod;

	adder.run();
	substracter.run();
	product.run();
	divide.run();
	mod.run();
}