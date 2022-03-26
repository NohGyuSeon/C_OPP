#include <iostream>
using namespace std;
int main()
{
	for(int i=0; i<4; i++) { 
		for(int k=0; k<i+1; k++)
			cout << '*';
		cout << endl;
	}
}
