#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	int age;

public:
	void setPerson();
	void print();
};

void Person::setPerson()
{
	name="��ö��";
	age=11;
}

void Person::print()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}


int main()
{
	Person obj;
	obj.setPerson();
	obj.print();


	return 0;
}

