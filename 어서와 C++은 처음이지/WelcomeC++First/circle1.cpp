#include <iostream>
using namespace std;

class Circle
{
public :
	int radius;
	string color;

	double calcArea()
	{
		return 3.14*radius*radius;
	}
};

class Rectangle
{
public :
	int width;
	int height;

	int  calcArea()
	{
		return width * height;
	}

};

int main()
{
	Circle obj;
	obj.radius = 100;
	obj.color = "blue";

	Rectangle obj2;
	obj2.width = 100;
	obj2.height = 150;

	cout << "원의 면적=" << obj.calcArea() << "\n";
	cout << "사각형의 면적=" << obj2.calcArea() << "\n";
	return 0;
}