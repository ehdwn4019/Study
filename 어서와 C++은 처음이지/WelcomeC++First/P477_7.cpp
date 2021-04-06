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
		cout << "나의 직업 : " << jobName << endl;
		cout << "나의 나이 : " << age << endl;
		cout << "걸을 수 있음." << endl;
		cout << "말할 수 있음." << endl;
	}
};

class Teacher : public Job
{
public:
	Teacher(string s , int a) : Job(s,a){}
	void print()
	{
		Job::print();
		cout << "가르칠 수 있음" << endl;
	}
};

class Tennis : public Job
{
public:
	Tennis(string s,int a):Job(s,a){}
	void print()
	{
		Job::print();
		cout << "테니스 경기를 할 수 있음" << endl;
	}
};

int main()
{
	Teacher teacher("교수", 39);
	Tennis tennis("테니스 선수", 23);
	teacher.print();
	tennis.print();
	return 0;
}