#include <iostream>

using namespace std;

class Circle
{
public:
	int x, y;
	int radius;
	Circle() : x(0),y(0),radius(0){}
	Circle(int x, int y, int r) : x(x),y(y),radius(r){}
	void print() { cout << "Circle(" << radius << ")" << endl; }
	Circle getLargerCircle(Circle c1, Circle c2)
	{
		if (c1.radius > c2.radius)
		{
			return c1;
		}
		else
		{
			return c2;
		}
	}
};

int main()
{
	Circle c1(1, 1, 10);
	Circle c2(1, 1, 20);
	Circle c3= c3.getLargerCircle(c1, c2);
	cout << "Circle(" << c1.radius << ")"<<endl;
	cout << "Circle(" << c2.radius << ")"<<endl;
	cout << "더 큰 원은 다음과 같다." << endl;
	cout << "Circle(" << c3.radius << ")"<<endl;

	return 0;
}