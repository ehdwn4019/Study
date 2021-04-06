#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string name;
	int age;
public:
	string breed;
	Dog(string name=NULL, int age=0);
	Dog(string name = NULL, string breed = NULL, int age = 0);

};



int main()
{
	return 0;
}