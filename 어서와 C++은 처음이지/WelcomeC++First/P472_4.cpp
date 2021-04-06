#include <iostream>
using namespace std;

class Dimension
{
	double x, y;
public:
	Dimension(double i , double j) : x(i),y(j) {}
};

class TwoDimension : public Dimension
{
public:
	TwoDimension(double i,double j) :  Dimension(i ,j){}
};

class ThreeDimension : public Dimension
{
	double z;
public:
	ThreeDimension(double i , double j , double z) : Dimension(i,j)
	{
		this->z = z;
	}
};

int main()
{
	return 0;
}