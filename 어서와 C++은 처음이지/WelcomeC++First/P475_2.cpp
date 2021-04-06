#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Circle
{
	int x, y, radius;
public:
	Circle(){}
	~Circle()
	{

	}
	Circle(int x, int y, int radius)
	{
		this->x = x;
		this->y = y;
		this->radius = radius;
	}
	void draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x-radius, y-radius, x + radius, y + radius);
		
	}
	int getX() { return this->x; }
	int getY() { return this->y; }
	int getRadius() { return this->radius; }
};

class ColoredCircle : public Circle
{
	string color;
public:
	ColoredCircle() {}
	~ColoredCircle() {}
	ColoredCircle(int x, int y, int radius, string color) : Circle(x, y, radius)
	{
		this->color = color;
	}

	void draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		SelectObject(hdc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(hdc, RGB(255, 0, 0));
		Ellipse(hdc, getX()-getRadius(), getY()-getRadius(), getX() + getRadius(), getY() + getRadius());
	}
};

int main()
{
	Circle c(150, 150, 50);
	ColoredCircle c2(300, 150, 50, "red");
	c.draw();
	c2.draw();
	return 0;
}