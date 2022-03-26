#include <iostream>
using namespace std;

int arr_sum(int* p, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + p[i];
	}
	return sum;
}

int main() {
	int a[5] = { 10, 20, 30, 40, 50 };
	cout << sizeof(a) << endl;

	int size = sizeof(a)

}