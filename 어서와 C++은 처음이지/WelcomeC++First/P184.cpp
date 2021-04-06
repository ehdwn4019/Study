#include <iostream>
#include <Windows.h>

using namespace std;

class Circle
{
public:
	int x, y, radius;
	string color;

	double calcArea()
	{
		return 3.14*radius*radius;
	}

	void draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());

		Ellipse(hdc, x-radius, y-radius, x+radius, y+radius);
	}

	void draw2()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());

		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
		
	}
};


int main()
{
	Circle c;

	c.x = 100;
	c.y = 100;
	c.radius = 50;
	//c.draw();
	for (c.x; c.x <= 200; c.x += 10)
	{
		//c.x = i;
		c.draw2();
		
	}
	
	


	return 0;
}