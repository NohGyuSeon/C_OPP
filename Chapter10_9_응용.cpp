#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	for (int i = 1; i <= 3; i++)
	{
		v.push_back(i * 10);
	}

	v.at(2) = 100;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		cout << &v[i] << " ";
		cout << endl;
	}
}