#include <iostream>
using namespace std;

int main()
{
	float max;
	float a, b, c, d, e;
	cout << "5���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;
	
	if (a>b)
		max = a;
	else max = b;
	
	if (max < c)
			max = c;
	
	if (max < d)
			max = d;
	
	if (max < e);
			max = e;
	
	cout << "���� ū �� = " << max;
	
	return 0;
}
