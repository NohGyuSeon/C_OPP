#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string player1;
	string player2;
	int win;

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	cout << "�ι̿�>>";
	cin >> player1;
	cout << "�ٸ���>>";
	cin >> player2;

	if (player1 == "����") {
		if (player2 == "����") win = 3;
		else if (player2 == "����") win = 2;
		else if (player2 == "��") win = 1;
	}
	else if (player1 == "����") {
		if (player2 == "����") win = 1;
		else if (player2 == "����") win = 3;
		else if (player2 == "��") win = 2;
	}
	else if (player1 == "��") {
		if (player2 == "����") win = 2;
		else if (player2 == "����") win = 1;
		else if (player2 == "��") win = 3;
	}

	if (win == 1) {
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if (win == 2) {
		cout << "�ٸ����� �̰���ϴ�." << endl;
	}
	else if (win == 3) {
		cout << "�����ϴ�." << endl;
	}

	return 0;
}