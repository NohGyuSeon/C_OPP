#include <iostream>
using namespace std;

int main()
{
	char matrix[10];
	int n1;
	int n2;
	int sum;
	char op;
	while (true) 
	{
		cout << "? ";
		for (int i = 0; i < 2; i++)
		{
			cin.getline(matrix, 10, ' ');
			if (i == 0)
				n1 = atoi(matrix);
			else if (i == 1)
				op = matrix[0];
		}
		for(int i=1;i<=2;i++)
		{
			i++;
			cin.getline(matrix, 10, '\n');
			if (i == 2)
				n2 = atoi(matrix);
		}
		if (op == '+')
			sum = n1 + n2;
		else if (op == '*')
			sum = n1 * n2;
		else if (op == '-')
			sum = n1 - n2;
		else if (op == '/')
			sum = n1 / n2;
		else if (op == '%')
			sum = n1 % n2;
		else cout << "error" << endl;
		cout << n1 << " " << op << " " << n2 << " = " << sum << endl;
	}
	return 0;

}
