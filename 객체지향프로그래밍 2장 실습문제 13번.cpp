#include <iostream>
using namespace std;

int main()
{
	int num;
	int p;
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while (true)
	{
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "몇인분?";
			cin >> p;
			cout << "짬뽕 " << p << "인분 나왔습니다." << endl;
			continue;
		case 2:
			cout << "몇인분?";
			cin >> p;
			cout << "짜장면 " << p << "인분 나왔습니다." << endl;
			continue;
		case 3:
			cout << "몇인분?";
			cin >> p;
			cout << "군만두 " << p << "인분 나왔습니다." << endl;
			continue;
		case 4:
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		default:
			cout << "다시 주문하세요!!" << endl;
			continue;
		}
	}
	return 0;
}
