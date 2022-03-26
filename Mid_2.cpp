#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {

	char text[10000];
	int numCount = 0;
	int numAlpha[26] = {};

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(text, 10000, ';');

	for (int i = 0; i <= strlen(text); i++)
	{
		if (isalpha(text[i])) {
			text[i] = tolower(text[i]);
			numCount++;
			numAlpha[text[i] - 'a']++;
		}
	}

	cout << "총 알파벳 수 " << numCount << endl << endl;

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