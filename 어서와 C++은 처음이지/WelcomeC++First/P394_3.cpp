#include <iostream>
#include <string>

using namespace std;

class MyClass
{
public:
	MyClass(const char* str);
	MyClass(const MyClass &myClass);
	~MyClass();

	void print()
	{
		cout << "stored : " << stored << endl;
	}
private:
	char* stored;
};

MyClass::MyClass(const char* str)
{
	stored = new char[strlen(str) + 1];
	strcpy(stored, str);
}

//MyClass::MyClass(const MyClass & myClass)
//{
//	stored = new char[strlen(myClass.stored) + 1];
//	strcpy(stored, myClass.stored);
//}

MyClass::~MyClass()
{
	delete[] stored;
}


int main()
{
	MyClass myClass("abc");
	MyClass myClass2(myClass);

	myClass.print();

	myClass2.print();

	return 0;
}