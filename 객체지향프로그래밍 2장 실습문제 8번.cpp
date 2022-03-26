#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100];
	char longest[100] = "";
	
	cout << "5명의 이름을 ';'로 구분하여 입력하세요." << endl;
		
	for (int i=0; i<5; i++)
	{
		cin.getline(name, 100, ';');
		
		cout << i + 1 << ":" << name << "\n";
		
		if (strlen(name) > strlen(longest))
		
			strcpy(longest, name);
	}
	
	cout << "가장 긴 이름은 " << longest << endl;
	
	return 0;
}
