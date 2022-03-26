#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int num;
public:
	SelectableRandom(int _num);
	int next();
	int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom(int _num) {
	num = _num;
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int ran = rand();
	if (num % 2 == 0) {
		if (ran % 2 == 0) {
			return ran;
		}
		else {
			return --ran;
		}
	}
	else {
		if (ran % 2 == 0) {
			return ++ran;
		}
		else {
			return ran;
		}
	}
}

int SelectableRandom::nextInRange(int a, int b) {
	int ran = rand() % (b - a + 1) + a;
	if (num % 2 == 0) {
		if (ran % 2 == 0) {
			return ran;
		}
		else {
			return --ran;
		}
	}
	else {
		if (ran % 2 == 0) {
			return ++ran;
		}
		else {
			return ran;
		}
	}
}

int main() {
	SelectableRandom r1(0);
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r1.next();
		cout << n << ' ';
	}

	SelectableRandom r2(1);
	cout << endl << endl << "-- 2에서 " << "9까지의 랜덤 홀수 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r2.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}
