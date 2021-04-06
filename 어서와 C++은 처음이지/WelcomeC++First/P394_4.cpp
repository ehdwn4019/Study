#include <iostream>

using namespace std;

class Point
{
private:
	double xval, yval;
public:
	Point(double x = 0.0, double y = 0.0) : xval(x), yval(y) {}
	Point(double z=0.0) 
	double getX() { return xval; }
	double getY() { return yval; }
};

int main()
{
	return 0;
}