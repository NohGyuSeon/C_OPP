#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {

	char text[10000];
	int numCount = 0;
	int numAlpha[26] = {};

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(text, 10000, ';');

	for (int i = 0; i <= strlen(text); i++)
	{
		if (isalpha(text[i])) {
			text[i] = tolower(text[i]);
			numCount++;
			numAlpha[text[i] - 'a']++;
		}
	}

	cout << "�� ���ĺ� �� " << numCount << endl << endl;

	char alphabet;
	for (int i = 0; i < 26; i++)
	{
		alphabet = i + 'a';
		cout << alphabet << "(" << numAlpha[i] << ") \t : ";
		for (int j = 0; j < numAlpha[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}