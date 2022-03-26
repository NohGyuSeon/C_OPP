#include <iostream>
#include <cstring>
#define _CRT_SECUER_NO_WARNINGS 
using namespace std;

class Person { // person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	Person(const Person& person); // ���� ������
	~Person(); // �Ҹ���
	void changeName(const char *name);
	void show()  { cout << id << ',' << name << endl; }	
};

Person::Person(int id, const char* name) { // ������
 	this -> id = id;
	int len = strlen(name); // name�� ���� ����
	this -> name = new char [len+1]; // name ���ڿ� ���� �Ҵ�
	strcpy(this -> name, name); // name�� ���ڿ� ����	  
}

Person::Person(const Person& person) { // ���� ������
	this -> id = person.id; // id �� ����
	int len = strlen(person.name); // name�� ���� ����
	this -> name = new char [len+1]; // name�� ���� ���� �Ҵ�
	strcpy(this->name, person.name); // name�� ���ڿ� ����
	cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl; 
}

Person::~Person() { // �Ҹ���
	if(name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete [] name; // ���� �Ҵ� �޸� �Ҹ� 
}

void Person::changeName(const char* name) { // �̸� ����
	if(strlen(name) > strlen(this->name))
		return; // ���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����.
	strcpy(this->name, name);
}

int main(void) {
	Person father(1, " Kitae"); // (1) father ��ü ����
	Person daughter(father); // (2) daughter ��ü���� ����. ���� ������ ȣ��
	
	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show(); // (3) father ��ü ��� 
	daughter.show(); // (4) daughetr ��ü ��� 

	daughter.changeName(" Grace"); // daughter�� �̸��� "Grace"�� ����
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show(); // (5) father ��ü ��� 
	daughter.show(); // (6) daughter ��ü ���
	
	return 0; // (6), (7) daughter, father ��ü �Ҹ�
}








