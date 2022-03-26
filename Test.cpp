#include <iostream>
using namespace std;

int total_arr(int *pt) {
	int tot = 0;
	for (int i = 0; i < 5; i++)
	{
		tot = tot + pt[i];
		cout << *(pt + i) << endl;
	}

	return tot;
}

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };

	cout << total_arr(arr) << endl;

}