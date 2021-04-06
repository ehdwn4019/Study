#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	int salary;

	

public:
	Employee(string name, int salary)
	{
		this->name = name;
		this->salary = salary;
	}
	int computeSalary()
	{
		return salary;
	}
	void setName(string name) { this->name = name; }
	void setSalary(int salary) { this->salary = salary; }
	string getName() { return this->name; }
	int getSalary() { return this->salary; }
};

class Manager :public Employee
{
	int bonus;
public:
	void setBonus(int bounus) { this->bonus = bonus; }
	Manager(string name, int salary, int bonus) : Employee(name, salary)
	{
		this->bonus = bonus;
	}
	int computeSalary()
	{
		return getSalary() + bonus;
	}
	void print()
	{
		cout << "�̸� : " << getName() << endl;
		cout << "���� : " << getSalary() << endl;
		cout << "���ʽ� : " << bonus << endl;
		cout << "��ü �޿� : " << getSalary() + bonus << endl;
	}
};



int main()
{
	Manager mg("��ö��", 200, 100);
	mg.print();

	return 0;
}