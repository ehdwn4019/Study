#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
	string name;
	double marks;
public:
	string getName() { return name; }
	double getMarks() { return marks; }
	Student() {};
	Student(string n,double m) : name{n},marks{m} { }
	void print()
	{
		cout << "ÀÌ¸§ : " << name << endl;
		cout << "ÇĞÁ¡ : " << marks << endl;
	}
};

bool compare(Student& s,Student& s2)
{
	return s.getMarks()>s2.getMarks();
}

int main()
{
	Student student;
	vector<Student> v;

	v.push_back(Student("ÃÖÀÚ¿µ", 4.3));
	v.push_back(Student("±èÃ¶¼ö", 3.9));
	v.push_back(Student("±è¿µÈñ", 3.8));

	sort(v.begin(), v.end(), compare);

	cout << "==================" << endl;
	for (auto& e : v)
		e.print();
	cout << "==================" << endl;
	return 0;
}