#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int snumber;
	int age;
public:
	Person();
	Person(string name, int snum, int age);
	~Person();
};

Person::Person(string name1, int snum1, int age1) :name(name1), snumber(snum1), age(age1)
{

}

int main()
{
	return 0;
}