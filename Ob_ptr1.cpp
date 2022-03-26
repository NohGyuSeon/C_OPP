
#include <iostream>
using namespace std;

class Test {
protected:
	int nData = 0;
public:
	void display()
	{
		cout << this << endl;
		cout << this->nData << endl;
		cout << nData << endl;
	}
};

int main() {
	Test ob;
	ob.display();
	Test tomato[10];
	tomato->display();
}