#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char string[100];
	int count = 0;
	
	char c = 'x';
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(string, 100, '\n');
	
	for (int a=0; a<100; a++)
	{
		if (string[a] == c)
			count++;
	}	
	
	cout << "x�� ������ " << count;
	
	return 0;
}
