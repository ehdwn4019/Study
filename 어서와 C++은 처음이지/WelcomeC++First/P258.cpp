#include <iostream>
#include <Windows.h>
using namespace std;

class Circle
{
public:
	int x, y;
	int radius;
	
	Circle():x(0),y(0),radius(0){}
	Circle(int x,int y, int r):x(x),y(y),radius(r){}
	void draw()
	{
		int r = radius / 2;
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - r, y - r, x + r, y + r);
	}
};

int main()
{
	Circle objArray[10];

	while (true)
	{
		char ch = getchar();
		for (Circle& c : objArray)
		{
			if (ch =='m')
			{
				c.x += 100;
				c.y += 100;
			}
			else if(ch=='c')
			{
				c.x = rand() % 500;
				c.y = rand() % 300;
				c.radius = rand() % 100;
			}

			
			c.draw();
		}
		
		if (ch == 'q') break;
	}


	return 0;
}