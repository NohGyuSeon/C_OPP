#include <iostream>
#include <string>
using namespace std;

int main() {
	char song[24];
	cout << "lose yourself" << "�� �θ� ���� : " << endl;
	while (true) {
		cin >> song;
		if (strcmp(song, "Eminem") == 0) {
			cout << "�����Դϴ�." << endl;
			break;
		}
		else
			cout << "Ʋ�Ƚ��ϴ�." << endl;
	}
}