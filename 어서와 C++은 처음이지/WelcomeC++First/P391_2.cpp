#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1,int y1) : x{x1},y{y1}{}
	Point(const Point &p2) : x{p2.x},y{p2.y}{}
	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	Point point(Point(1, 2));

	cout << "x°ª : " << point.getX() << endl;
	cout << "y°ª : " << point.getY() << endl;


	return 0;
}