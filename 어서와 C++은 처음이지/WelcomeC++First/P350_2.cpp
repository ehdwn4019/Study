#include <iostream>
#include <memory>
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


};

int main()
{
	unique_ptr<Point> p(new Point);
	//Point *p = new Point(100, 200);
	p->setX(30);
	p->setY(60);
	//delete p;
	return 0;
}