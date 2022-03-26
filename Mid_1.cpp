#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	int count[5] = {};
	char eng[5] = { 'a', 'e', 'i', 'o', 'u' };
	int* p = count;

	cout << "텍스트를 입력하세요 >> ";
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'A') {
			count[0]++;
		}
		else if (s[i] == 'e' || s[i] == 'E') {
			count[1]++;
		}
		else if (s[i] == 'i' || s[i] == 'I') {
			count[2]++;
		}
		else if (s[i] == 'o' || s[i] == 'O') {
			count[3]++;
		}
		else if (s[i] == 'u' || s[i] == 'U') {
			count[4]++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << eng[i] << "의 개수 : " << p[i] << endl;
	}
}
