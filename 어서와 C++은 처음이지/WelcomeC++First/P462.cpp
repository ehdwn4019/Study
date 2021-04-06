#include <iostream>
using namespace std;

class Base
{
public:int x;
protected:int y;
private:int z;
};

class Derived :private Base
{

};

int main()
{
	Derived obj;
	cout << obj.x;
}