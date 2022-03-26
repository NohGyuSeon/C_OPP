#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int cnt = 0;
	for (int i=1; i<=9; i++)
	{
		for (int n=1; n<=9; n++)
		{
			cout << n << "*" << i << "=" << n*i << "\t";
			cnt++;
			if (cnt / 9 == a)
			{
				cout << "\n";
				a++;
			}
		}
	}
	return 0;
} 
