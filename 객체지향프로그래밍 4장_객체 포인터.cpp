#include <iostream>
#include <string>

using namespace std;
class Name {
	string first, last;
public:
	string get_first() { return first; }
	string get_last() { return last; }
	void set_name(string f, string l) {
		first = f;
		last = l;
	}
};

class PersonManager {
	Name* p;
	int nofp; //Name�� ��, p�� ũ��
public:
	PersonManager(int n) : p(new Name[n]), nofp(n) {
		for (int i = 0; i < nofp; i++) {
			string f, l;
			cin >> f >> l;
			p[i].set_name(f, l);
		}
	}
	void show() {
		for (int i = 0; i < nofp; i++) {
			cout << p[i].get_first() << " " << p[i].get_last() << endl;
		}
	}
	
	int serarch(string str) {
		int ret_val = 0;
		for (int i = 0; i < nofp; i++) {
			if (p[i].get_first() == str or p[i].get_last() == str) ret_val++;
		}
		return ret_val;
	}
	~PersonManager() {
		delete[] p; // �޸� ��ȯ �� "delete [] p;" ���
		cout << "delete [] p;" << endl;
	}
};
// ���� �ڵ�� ���� �Ұ�

// ���⿡ �ڵ� �ۼ�

// �Ʒ� main �Լ��� ���� �Ұ�

int main() {
	int n;
	cout << "Enter number of people." << endl;
	cin >> n; PersonManager people(n);

	people.show();

	cout << "Enter search name." << endl;
	string str;
	cin >> str;
	cout << people.serarch(str) << endl;

	return 0;
}
	/* Type or paste your code in this area */

