#include <iostream>
using namespace std;

int main(void) {

	char str[100];

	cout << "문자열 입력>> ";

	cin >> str;

	for (int i = 0; str[i]; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << str[j];
		}
		cout << endl;
	}

	return 0;
}