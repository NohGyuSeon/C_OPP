#include <iostream>
#include <cstring>
using namespace std;

int main(void) {

	char num1[10];
	char num2[10];
	char oper[10];

	while (true) {
		cout << "? ";
		cin.getline(num1, 10, ' ');
		cin.getline(oper, 10, ' ');
		cin.getline(num2, 10);

		if (!strcmp(oper, "+")) {
			cout << num1 << " + " << num2 << " = " << atoi(num1) + atoi(num2) << endl;
		}
		else if (!strcmp(oper, "-")) {
			cout << num1 << " - " << num2 << " = " << atoi(num1) - atoi(num2) << endl;
		}
		else if (!strcmp(oper, "*")) {
			cout << num1 << " * " << num2 << " = " << atoi(num1) * atoi(num2) << endl;
		}
		else if (!strcmp(oper, "/")) {
			cout << num1 << " / " << num2 << " = " << atoi(num1) / atoi(num2) << endl;
		}
		else if (!strcmp(oper, "%")) {
			cout << num1 << " % " << num2 << " = " << atoi(num1) % atoi(num2) << endl;
		}
	}

	return 0;
}