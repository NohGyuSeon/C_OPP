#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	char name[100];
	int num;
	int price;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다.\n";
	while (sum <= 20000)
	{
		cout << "주문>> ";
		cin >> name >> num;
		if (strcmp(name, "에스프레소") == 0)
		{
			price = 2000 * num;
			sum += price;
			cout << price << "입니다. 맛있게 드세요" << endl;
		}

		if (strcmp(name, "아메리카노") == 0)
		{
			price = 2300 * num;
			sum += price;
			cout << price << "입니다. 맛있게 드세요" << endl;
		}
		
		if (strcmp(name, "카푸치노") == 0)
		{
			price = 2500 * num;
			sum += price;
			cout << price << "입니다. 맛있게 드세요" << endl;
		}
	}
	cout << "오늘 " << sum << "을 판매하여 카페를 닫습니다. 내일봐요~~~~" << endl;
	return 0;
}
