#include <iostream>
using namespace std;

int main()
{
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	char buf[10000];

	cin.getline(buf, 10000, ';');
	int sum = 0;

	for (int i = 0; i < strlen(buf); i++)
	{
		if (isalpha(buf[i]))
		{
			buf[i] = tolower(buf[i]);
			sum++;
		}
	}
	cout << "�� ���ĺ� �� " << sum << endl;
	int cnt = 0;
	for (int a = 0; a < 26; a++)
	{
		char alp = 97 + a;
		for (int i = 0; i < strlen(buf); i++)
		{
			if (alp == buf[i])
				cnt++;
		}
		 cout << (char)(alp) << " (" << cnt << ") : ";
		for (int b = 0; b < cnt; b++)
		{
			cout << "*";
		}
		cnt = 0;
		
		cout << "\n";

	}
	return 0;
}
