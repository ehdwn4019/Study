#include <iostream>
using namespace std;

class Shape
{
public:
	int x, y;
	int rad;
	Shape(int rad) : rad(rad){}
	Shape(int x , int y) : x(x), y(y){}
	virtual double getArea() = 0;

};

class Rect : public Shape
{
public:
	Rect(int x, int y) : Shape(x, y){}
	double getArea()
	{
		return x * y;
	}
};

class Circle : public Shape
{
public:
	Circle(int rad) : Shape(rad){}
	double getArea()
	{
		return rad * rad*3.141592;
	}
};

class Triangle : public Shape
{
public:
	Triangle(int x, int y) : Shape(x,y){}
	double getArea()
	{
		return x * y*0.5;
	}
};

int main()
{
	int width, height, radius;
	width = 10;
	height = 20;
	radius = 5;

	Shape *shapes[3];
	shapes[0] = new Rect(width, height);
	shapes[1] = new Circle(radius);
	shapes[2] = new Triangle(width, height);

	for (int i = 0; i < 3; i++)
	{
		cout<<"도형 #"<<i<<"의 면적 : "<<shapes[i]->getArea()<<endl;
	}

	return 0;
}