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
	student[0].setName("ȫ�浿");
	student[1].setName("��ö��");
	student[2].setName("������");

	cout << "�б� special�� �л����� ������ ����." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "�л� #" << i + 1 << ":" << student[i].getName()<<endl;
	}

	

	return 0;
}