#include <iostream>
using namespace std;

int main(void) {

	int choice;
	int dishes;

	cout << "***** ��¥�忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (true) {
		cout << "«��: 1, ¥��: 2, ������: 3, ����: 4 >> ";
		cin >> choice;

		if (choice > 4 || choice < 1) {
			cout << "�ٽ� �ֹ��ϼ���!" << endl;
			continue;
		}
		if (choice == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			return 0;
		}

		cout << "���κ�? ";
		cin >> dishes;

		switch (choice) {
		case 1:
			cout << "«�� " << dishes << "�κ� ���Խ��ϴ�." << endl;
			break;
		case 2:
			cout << "¥�� " << dishes << "�κ� ���Խ��ϴ�." << endl;
			break;
		case 3:
			cout << "������ " << dishes << "�κ� ���Խ��ϴ�." << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}