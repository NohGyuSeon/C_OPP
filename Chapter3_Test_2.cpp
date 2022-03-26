#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d);
	Date(string strDate);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
 
Date::Date(string strDate) {
	char* str_buff = new char[100];
	strcpy(str_buff, strDate.c_str());

	year = stoi(strtok(str_buff, "/"));
	month = stoi(strtok(nullptr, "/"));
	day = stoi(strtok(nullptr, "/"));
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
