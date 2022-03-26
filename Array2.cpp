
#include <iostream>
using namespace std;

int main() {
	
	int arr[2][3];
	cout << "6개의 데이터를 입력하세요 : ";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	int* pt = &arr[0][0];
	cout << *(pt) << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr << endl; 
			cout << &arr[0] << endl;
			cout << &arr[0][0] << endl;
		}
	}
}
