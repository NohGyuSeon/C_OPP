#include <iostream>
#include <string>
using namespace std;

int main() {
	double pi = 3.14;

	auto love = [](string a, string b) {
		cout << a << "보다 " << b << "가 좋아" << endl;
	};
	auto calc = [pi](int r) -> double {
		return pi * r * r;
	};

	love("돈", "너");
	love("냉면", "만두");
	cout << "면적은 " << calc(3);
}