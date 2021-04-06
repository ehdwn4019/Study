#include <iostream>

using namespace std;

class Parent
{
public:
	virtual ~Parent()
	{
		cout << "Parent ¼Ò¸êÀÚ" << endl;
	}
};

class Child :public Parent
{
public:
	~Child()
	{
		cout << "Child ¼Ò¸êÀÚ" << endl;
	}
};

int main()
{
	Parent * p = new Child();
	delete p;
	return 0;
}