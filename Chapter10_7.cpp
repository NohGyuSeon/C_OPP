#include <iostream>
using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << '(' << x << ',' << y << ')' << endl;
	}
};

int main() {
	MyStack<int *> iStack;
	



	MyStack<double> dStack;
	dStack.push(3.5);
	dStack.push(2.4);
	dStack.push(1.3);
	cout << dStack.pop() << endl;
	cout << dStack.pop() << endl;
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();
	p->push('a');
	p->push('b');
	p->push('c');
	cout << p->pop() << endl;
	cout << p->pop() << endl;
	cout << p->pop() << endl;
	delete p;
}