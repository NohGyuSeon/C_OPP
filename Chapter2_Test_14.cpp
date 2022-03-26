#include <iostream>
using namespace std;

int main(void) {
	char choice[100];
	int amount;
	int earnings;
	int totalEarnings = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while (true) {
		cout << "주문>> ";
		cin >> choice >> amount;
		if (!strcmp(choice, "에스프레소")) {
			earnings = 2000 * amount;
		}
		else if (!strcmp(choice, "아메리카노")) {
			earnings = 2300 * amount;
		}
		else if (!strcmp(choice, "카푸치노")) {
			earnings = 2500 * amount;
		}
		cout << earnings << "원입니다. 맛있게 드세요" << endl;

		totalEarnings += earnings;
		if (totalEarnings > 20000) {
			cout << "오늘 " << totalEarnings << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
	}

	return 0;
}