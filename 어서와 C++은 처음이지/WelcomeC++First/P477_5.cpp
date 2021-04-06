#include <iostream>
using namespace std;

class Shape
{
	int x, y;
	string color;

	
public:
	Shape(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setColor(string color) { this->color = color; }
	int getX() { return this->x; }
	int getY() { return this->y; }
	string getColor() { return this->color; }
	double getArea();
	double getPeriphery();
};

double Shape::getArea()
{
	return 0.0;
}

double Shape::getPeriphery()
{
	return 0.0;
}

class Circle : public Shape
{
	int radius;
public:
	Circle(int x, int y,int radius) : Shape(x, y)
	{
		this->radius = radius;
	}
	double getArea()
	{
		return radius * radius*3.14;
	}
	double getPeriphery()
	{
		return radius * 2 * 3.14;
	}
	void print()
	{
		cout << "원의 면적 : " << getArea() << endl;
	}
};

int main()
{
	Circle c(100, 100, 20);
	c.getArea();
	c.print();

	return 0;
}


