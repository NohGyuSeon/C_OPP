#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	char name[100];
	int num;
	int price;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�.\n";
	while (sum <= 20000)
	{
		cout << "�ֹ�>> ";
		cin >> name >> num;
		if (strcmp(name, "����������") == 0)
		{
			price = 2000 * num;
			sum += price;
			cout << price << "�Դϴ�. ���ְ� �弼��" << endl;
		}

		if (strcmp(name, "�Ƹ޸�ī��") == 0)
		{
			price = 2300 * num;
			sum += price;
			cout << price << "�Դϴ�. ���ְ� �弼��" << endl;
		}
		
		if (strcmp(name, "īǪġ��") == 0)
		{
			price = 2500 * num;
			sum += price;
			cout << price << "�Դϴ�. ���ְ� �弼��" << endl;
		}
	}
	cout << "���� " << sum << "�� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~~~" << endl;
	return 0;
}
