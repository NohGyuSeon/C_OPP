#include <iostream>
#include <string>
using namespace std;

int main()
{
	char s[10];
	cout << "���ڿ� �Է� >>";
	cin >> s;
	for (int i = 0; i <= strlen(s); i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << s[j];
		}
		cout << endl;
	}
	
	return 0;
}
