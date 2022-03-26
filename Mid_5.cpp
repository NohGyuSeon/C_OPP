#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
	char* title;
	int price;
	Book(const char* title, int price);
	Book(const Book& book);
	~Book();
	void show() {
		cout << title << ' ' << price << "원\n";
	}
};

Book::Book(const char* title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
}

Book::Book(const Book& book) {
	this->price = book.price;
	int len = strlen(book.title);
	this->title = new char[len + 1];
	strcpy(this->title, book.title);
}

Book::~Book() {
	if (title) {
		delete[] title;
	}
}

int main() {
	Book cplus("C++", 20000);
	Book cpp = cplus;
	if (cplus.title == cpp.title) {
		cout << "같다" << endl;
	}
	else {
		cout << "같지 않다" << endl;
	}
	cplus.show();
	cpp.show();
}
