#include <iostream>
using namespace std;

int main() {

	char text[10000];
	int totalAlpha = 0;
	int numAlpha[26] = { 0, };

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(text, 10000, ';');

	for (int i = 0; text[i]; i++)
	{
		if (isalpha(text[i])) {
			totalAlpha++;
			(numAlpha[text[i] - 'a'])++;
		}
	}

	cout << "�� ���ĺ� �� " << totalAlpha << endl << endl;

	char alphabet;
	for (int i = 0; i < 26; i++)
	{
		alphabet = i + 'a';
		cout << alphabet << "( " << numAlpha[i] << ") \t : ";
		for (int j = 0; j < numAlpha[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}