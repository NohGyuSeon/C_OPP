#include <iostream>
using namespace std;

int main(void) {

	int k, n = 0;
	int sum = 0;
	printf("�� ���� �Է��ϼ���>> ");
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		sum += k;
	}
	cout << 1 << "���� " << n << "������ ���� " << sum << " �Դϴ�." << endl;

	return 0;
}