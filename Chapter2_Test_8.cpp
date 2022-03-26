#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char name[5][100];

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;

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

	cout << "가장 긴 이름은 " << name[longestIndex];

	return 0;
}