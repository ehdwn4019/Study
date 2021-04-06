#include <iostream>
using namespace std;


template <typename T>
class Circle
{
	double x;
	double y;
	double rad;

public:
	Circle(double x, double y, double rad)
	{
		this->x = x;
		this->y = y;
		this->rad = rad;
	}

	double area()
	{
		return rad * rad*3.14;
	}
};

int main()
{
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû : " << circleA.area() << endl;
	return 0;
}