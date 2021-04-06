#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return this->x; }
	int getY() { return this->y; }


};

int main()
{
	Point *p = new Point(100, 200);
	p->setX(30);
	p->setY(60);

	delete p;
	return 0;
}