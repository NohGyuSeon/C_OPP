#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;
	for (int k=1; k<=n; k++)
	{
		sum = sum + k;
	}
	cout << "1����" << n << "������ ����" << sum << "�Դϴ�.";

	return 0;
}


