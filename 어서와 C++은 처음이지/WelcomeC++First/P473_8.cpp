#include <iostream>
#include <string>
using namespace std;

class Human
{
	string name;
	int age;
public:
	Human(string name, int age)
	{
		this->name = name;
		this->age = age;

	}

	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
	void setAge(int age) { this->age = age; }
	int getAge() { return this->age; }

	void print()
	{
		cout << "ÀÌ¸§ : " << name << endl;
		cout << "³ªÀÌ : " << age << endl;
	}
};

class Student :public Human
{
	string major;
public:
	Student(string name, int age, string major) : Human(name,age)
	{
		this->major = major;
	}
};

int main()
{
	Human h1("ÃáÇâ", 18);
	Human h2("¸ù·æ", 21);
	Human h3("»ç¶Ç", 50);
	h1.print();
	h2.print();
	h3.print();
	return 0;
}