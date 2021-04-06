#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() const { return x; }
	int getY() const { return y; }
};

int main()
{
	Point *p = new Point(100, 200);
	const Point *p1 = new Point(100, 200);
	Point * const p2 = new Point(100, 200);
	p->setX(30);
	p->setY(60);
	//p1->setX(30);
	//p1->setY(30);
	p2->setX(30);
	p2->setY(60);

	cout << "p : " << p->getX() << " " << p->getY() << endl;
	cout << "p1 : " << p1->getX() << " " << p1->getY() << endl;
	cout << "p2 : " << p2->getX() << " " << p2->getY() << endl;

	delete p;
	return 0;
}