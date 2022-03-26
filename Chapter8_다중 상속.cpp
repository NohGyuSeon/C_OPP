#include <iostream>
#include <string>
using namespace std;

class Parents {
public:
	Parents() {
		cout << "Parents()" << endl;
	}
	~Parents() {
		cout << "~Parents()" << endl;
	}
};

class Me : public Parents {
public:
	Me() {
		cout << "Me()" << endl;
	}
	~Me() {
		cout << "~Me()" << endl;
	}
};

class Son : public Me {
public:
	Son() {
		cout << "Son()" << endl;
	}
	~Son() {
		cout << "~Son()" << endl;
	}
};

int main() {
	Son son;
}