#include <iostream>
using namespace std;

class Parent
{
public :
	~Parent()
	{
		cout << "Parent ¼Ò¸êÀÚ" << endl;
	}
};

class Child :public Parent
{
public:
	~Child()
	{
		cout << "Childe" << endl;
	}
};

int main()
{
	Parent *p = new Child();
	delete p;

	return 0;
}