#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point() {}
	~Point()
	{

	}
	Point(int x , int y )
	{
		this->x = x;
		this->y = y;
	}
	int getX() { return this->x; }
	int getY() { return this->y; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }

};

class ThreePoint : public Point
{
	int z;
public:
	ThreePoint(){}
	~ThreePoint()
	{

	}
	ThreePoint(int x, int y, int z) : Point(x, y)
	{
		this->z = z;
	}
	void print()
	{
		cout << "(" << getX() << "," << getY() << "," <<z<<")";
	}
	ThreePoint operator+(ThreePoint tp)
	{
		ThreePoint temp;
		temp.setX(this->getX() + tp.getX());
		temp.setY(this->getY() + tp.getY());
		temp.z = this->z + tp.z;
		return temp;
	}
	
	

};

int main()
{
	ThreePoint tp(10, 10, 10);
	ThreePoint tp2(10, 10, 10);
	ThreePoint tp3;
	tp3 = tp + tp2;
	tp3.print();




	return 0;
}