#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak() = 0;
	virtual ~Animal()
	{

	}
};

class Dog : public Animal
{
	void speak()
	{
		cout << "港港!" << endl;
	}
};

class Cat : public Animal
{
	void speak()
	{
		cout << "具克!" << endl;
	}
};

int main()
{
	Animal * animal[2];
	animal[0] = new Dog();
	animal[1] = new Cat();
	animal[0]->speak();
	animal[1]->speak();
	return 0;
}