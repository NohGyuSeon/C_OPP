#include <iostream>
using namespace std;

int main(void) {
	char choice[100];
	int amount;
	int earnings;
	int totalEarnings = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while (true) {
		cout << "�ֹ�>> ";
		cin >> choice >> amount;
		if (!strcmp(choice, "����������")) {
			earnings = 2000 * amount;
		}
		else if (!strcmp(choice, "�Ƹ޸�ī��")) {
			earnings = 2300 * amount;
		}
		else if (!strcmp(choice, "īǪġ��")) {
			earnings = 2500 * amount;
		}
		cout << earnings << "���Դϴ�. ���ְ� �弼��" << endl;

		totalEarnings += earnings;
		if (totalEarnings > 20000) {
			cout << "���� " << totalEarnings << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
	}

	return 0;
}