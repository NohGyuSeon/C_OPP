#include <iostream>
using namespace std;

template <class T>
T add(T data[], int n) {
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += data[i];
	}
	return sum;
}

template <class T>
T calc(T a) {
	return a * a;
}
 
int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	char k[] = { 'k', 'o', 'r', 'e', 'a' };

	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;
	cout << "sum of k[] = " << add(k, 5) << endl;

	cout << calc(5.5) << endl;
}