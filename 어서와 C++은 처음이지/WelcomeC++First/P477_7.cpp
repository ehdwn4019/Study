#include <iostream>
#include <string>
using namespace std;

class Job
{
	string jobName;
	int age;
public :

	Job(string n, int a)
	{
		jobName = n;
		age = a;
	}

	void print()
	{
		cout << "���� ���� : " << jobName << endl;
		cout << "���� ���� : " << age << endl;
		cout << "���� �� ����." << endl;
		cout << "���� �� ����." << endl;
	}
};

class Teacher : public Job
{
public:
	Teacher(string s , int a) : Job(s,a){}
	void print()
	{
		Job::print();
		cout << "����ĥ �� ����" << endl;
	}
};

class Tennis : public Job
{
public:
	Tennis(string s,int a):Job(s,a){}
	void print()
	{
		Job::print();
		cout << "�״Ͻ� ��⸦ �� �� ����" << endl;
	}
};

int main()
{
	Teacher teacher("����", 39);
	Tennis tennis("�״Ͻ� ����", 23);
	teacher.print();
	tennis.print();
	return 0;
}