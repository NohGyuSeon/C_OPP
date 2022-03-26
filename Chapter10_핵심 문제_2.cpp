#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	for (int i = 1; i <= 3; i++)
	{
		v.push_back(i * 10);
	}

	vector<int>::iterator it;
	v.at(2) = 100;

	for (it = v.begin(); it != v.end(); it++) {
		int n = *it;
		n = n * 2;
		*it = n;
	}

	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
		cout << &it << " ";
		cout << endl;
	}
}