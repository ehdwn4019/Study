#include <iostream>
#include <string>
using namespace std;

class Shape
{
	int x, y;
public:
	Shape() { cout << "Shape 생성자()" << endl; }
	Shape(int xloc, int yloc) : x(xloc), y(yloc) { cout << "Shape 생성자(xloc,yloc)" << endl; }
	~Shape()
	{
		cout << "Shape 소멸자()" << endl;
	}
};

class Rectangle : public Shape
{
	int width, height;
public:
	//Rectangle::Rectangle(int x, int y, int w, int h) : Shape(x, y)  >> 왜 책에서는 이렇게 하라고 했지??
	Rectangle(int x, int y, int w, int h) : Shape(x, y)
	{
		width = w;
		height = h;
		cout << "Rectangle 생성자(x,y,w,h)" << endl;
	}
	~Rectangle()
	{
		cout << "Rectangle 소멸자()" << endl;
	}
};

int main()
{
	Rectangle r(0, 0, 100, 100);
	return 0;
}