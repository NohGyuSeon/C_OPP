#include <iostream>
using namespace std;

int main()
{
	int num;
	int p;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while (true)
	{
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "���κ�?";
			cin >> p;
			cout << "«�� " << p << "�κ� ���Խ��ϴ�." << endl;
			continue;
		case 2:
			cout << "���κ�?";
			cin >> p;
			cout << "¥��� " << p << "�κ� ���Խ��ϴ�." << endl;
			continue;
		case 3:
			cout << "���κ�?";
			cin >> p;
			cout << "������ " << p << "�κ� ���Խ��ϴ�." << endl;
			continue;
		case 4:
			cout << "���� ������ �������ϴ�." << endl;
			break;
		default:
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			continue;
		}
	}
	return 0;
}
