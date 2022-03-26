#include <iostream>
#include <string>
using namespace std;

int main() {
	char song[24];
	cout << "lose yourself" << "를 부른 가수 : " << endl;
	while (true) {
		cin >> song;
		if (strcmp(song, "Eminem") == 0) {
			cout << "정답입니다." << endl;
			break;
		}
		else
			cout << "틀렸습니다." << endl;
	}
}