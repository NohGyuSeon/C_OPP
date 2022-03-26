#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char string[100];
	int count = 0;
	
	char c = 'x';
	cout << "문자들을 입력하라(100개 미만).\n";
	cin.getline(string, 100, '\n');
	
	for (int a=0; a<100; a++)
	{
		if (string[a] == c)
			count++;
	}	
	
	cout << "x의 개수는 " << count;
	
	return 0;
}
