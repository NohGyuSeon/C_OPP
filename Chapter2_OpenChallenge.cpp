#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string player1;
	string player2;
	int win;

	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	cout << "로미오>>";
	cin >> player1;
	cout << "줄리엣>>";
	cin >> player2;

	if (player1 == "가위") {
		if (player2 == "가위") win = 3;
		else if (player2 == "바위") win = 2;
		else if (player2 == "보") win = 1;
	}
	else if (player1 == "바위") {
		if (player2 == "가위") win = 1;
		else if (player2 == "바위") win = 3;
		else if (player2 == "보") win = 2;
	}
	else if (player1 == "보") {
		if (player2 == "가위") win = 2;
		else if (player2 == "바위") win = 1;
		else if (player2 == "보") win = 3;
	}

	if (win == 1) {
		cout << "로미오가 이겼습니다." << endl;
	}
	else if (win == 2) {
		cout << "줄리엣이 이겼습니다." << endl;
	}
	else if (win == 3) {
		cout << "비겼습니다." << endl;
	}

	return 0;
}