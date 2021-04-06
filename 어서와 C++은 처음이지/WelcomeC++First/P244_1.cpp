#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x=0, int y=0);
	~Point();
};

Point::Point(int x1,int y1) : x(x1), y(y1)
{

}

Point::~Point()
{

}


int main()
{
	Point point(100,200);

	return 0;
}


