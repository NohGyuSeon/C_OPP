#include <iostream>
using namespace std;

int main() 
{
	int a = 1;
	int cnt = 0;	
	for (int n=1; n<=100; n++)
	{
		cout << n << "\t";
		cnt++; 
		if (cnt / 10 == a)
		{
			cout << "\n";
			a++;
		}
	}
	return 0;
}
