#include <iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in love with you");
	// int num(100);
	char buf[100];
	char singer[30] = "Elvis";

	cout << song + "�� �θ� ���� : ";
	cin.getline(buf, 100, ';');
	// getline(cin, buf);
}
