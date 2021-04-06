#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Student
{
private:
	string name, telelphone;
public:
	Student(const string n = "", const string t = ""):name(n),telelphone(t){}
	string getTelephone() { return telelphone; }
	void setTelephone(string t) { telelphone = t; }
	string getName() { return name; }
	void setName(string n) { name = n; }
};

class Lab
{
	string name;
	Student *chief;
public:
	Lab(string n=""):name(n),chief(nullptr){}
	void setChief(Student *p) { chief = p; }
	void print() const
	{
		cout << name << "연구실" << endl;
		if (chief != nullptr)
			cout << "실장은" << chief->getName() << endl;
		else
			cout << "실장은 현재 없습니다" << endl;
	}
};

int main()
{
	unique_ptr<Lab> lab(new Lab);
	Lab("영상처리");
	Student *p = new Student("김철수", "011-123-5678");
	lab->setChief(p);
	lab->print();

	//Lab lab("영상처리");
	//lab.setChief(p);
	//lab.print();

	//delete p;
	return 0;
}