#include <iostream>
using namespace std;

int main(void) {

	int choice;
	int dishes;

	cout << "***** 장짜장에 오신 것을 환영합니다. *****" << endl;
	while (true) {
		cout << "짬뽕: 1, 짜장: 2, 군만두: 3, 종료: 4 >> ";
		cin >> choice;

		if (choice > 4 || choice < 1) {
			cout << "다시 주문하세요!" << endl;
			continue;
		}
		if (choice == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			return 0;
		}

		cout << "몇인분? ";
		cin >> dishes;

		switch (choice) {
		case 1:
			cout << "짬뽕 " << dishes << "인분 나왔습니다." << endl;
			break;
		case 2:
			cout << "짜장 " << dishes << "인분 나왔습니다." << endl;
			break;
		case 3:
			cout << "군만두 " << dishes << "인분 나왔습니다." << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}