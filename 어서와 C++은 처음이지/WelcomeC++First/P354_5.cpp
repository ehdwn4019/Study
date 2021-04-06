#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
public :
	Student(string name = "") :name (name){}
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class MyClass
{
	string className;
	Student* p;
	int size;
};

int main()
{
	MyClass special;
	Student *student = new Student[3];
	student[0].setName("홍길동");
	student[1].setName("김철수");
	student[2].setName("안지영");

	cout << "학급 special의 학생들은 다음과 같다." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "학생 #" << i + 1 << ":" << student[i].getName()<<endl;
	}

	

	return 0;
}