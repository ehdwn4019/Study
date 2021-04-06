#include <iostream>
using namespace std;

class SuperA
{
public:
	int x;
	void sub()
	{
		cout << "SuperAÀÇ sub()" << endl;
	}
};

class SuperB
{
public:
	int x;
	void sub()
	{
		cout << "SuperBÀÇ sub()" << endl;
	}
};

class Sub :public SuperA, public SuperB
{

};

int main()
{
	Sub obj;
	obj.x = 10;
	return 0;
}