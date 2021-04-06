#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(){}
	~Point(){}
	Point(int x, int y) : x(x), y(y) {}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }

	void print()
	{
		cout << "x °ª: " << x << endl;
		cout << "y °ª: " << y << endl;
	}
};

int main()
{
	Point * p;
	p = new Point[100];
	
	for (int i = 0; i < 100; i++)
	{
		p[i].setX(rand());
		p[i].setY(rand());
		p[i].print();
	}

	delete[] p;
	return 0;
}