#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100];
	char longest[100] = "";
	
	cout << "5���� �̸��� ';'�� �����Ͽ� �Է��ϼ���." << endl;
		
	for (int i=0; i<5; i++)
	{
		cin.getline(name, 100, ';');
		
		cout << i + 1 << ":" << name << "\n";
		
		if (strlen(name) > strlen(longest))
		
			strcpy(longest, name);
	}
	
	cout << "���� �� �̸��� " << longest << endl;
	
	return 0;
}
