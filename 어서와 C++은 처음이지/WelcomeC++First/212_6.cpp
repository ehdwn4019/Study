#include <iostream>
#include <string>

using namespace std;

class Employee
{
	

public :
	string name;
	int age;
	int salary;
	void setEmployee();

};

void Employee::setEmployee()
{
	name = "±èÃ¶¼ö";
	age = 38;
	salary = 2000000;
}


int main()
{
	Employee obj;

	cout << "Employee1:" << endl;
	obj.setEmployee();
	cout << obj.name << endl;
	cout << obj.age << endl;
	cout << obj.salary << endl;

	return 0;
}