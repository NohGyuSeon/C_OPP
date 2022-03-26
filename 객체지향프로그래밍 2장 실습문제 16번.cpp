#include <iostream>
using namespace std;

int main()
{
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
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
	cout << "총 알파벳 수 " << sum << endl;
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
