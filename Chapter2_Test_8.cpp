#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char name[5][100];

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin.getline(name[i], 100, ';');
	}

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ": " << name[i] << endl;
	}

	int longestIndex = 0;

	for (int i = 1; i < 5; i++)
	{
		if (strlen(name[longestIndex]) < strlen(name[i])) {
			longestIndex = i;
		}
	}

	cout << "���� �� �̸��� " << name[longestIndex];

	return 0;
}