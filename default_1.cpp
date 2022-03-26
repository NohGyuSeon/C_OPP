#include <iostream>
using namespace std;

void msg(int id = 1, int num = 10, int a = 100) {
	cout << id << " " << num << " " << a << endl;
}

int main() {
	msg();
	msg(2);
	msg(3, 50);
	msg(4, 80, 200);
}
