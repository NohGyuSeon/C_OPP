#include <iostream>
using namespace std;

int main(void) {
    int i, j;

	for (i = 0; i <= 90; i+=10)
	{
		for (j = 1; j <= 10; j++)
		{ 
			cout << i + j << '\t';
		}
		cout << endl;
	}

    return 0;
}