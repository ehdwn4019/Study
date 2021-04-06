#include <iostream>
#include <string>

using namespace std;

class Computer
{
	string name;
	int RAM;
	double cpu_speed;

public :
	void setComputer(string name2, int RAM2, double cpu_speed2);
	void print();
};

void Computer::setComputer(string name2,int RAM2,double cpu_speed2)
{
	name = name2;
	RAM = RAM2;
	cpu_speed = cpu_speed2;

}

void Computer::print()
{
	cout << "이름 : " << name<<endl;
	cout << "RAM : "<<RAM <<endl;
	cout << "cpu_speed : "<<cpu_speed<<endl;
}

int main()
{
	Computer obj;
	obj.setComputer("오피스컴퓨터", 8, 4.2);
	obj.print();
	
	return 0;
}