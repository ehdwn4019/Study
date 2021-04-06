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
	name="±èÃ¶¼ö";
	age=11;
}

void Person::print()
{
	cout << "ÀÌ¸§ : " << name << endl;
	cout << "³ªÀÌ : " << age << endl;
}


int main()
{
	Person obj;
	obj.setPerson();
	obj.print();


	return 0;
}

