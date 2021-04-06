#include <iostream>
using namespace std;

class Cube
{
private:
	double side;
public:

	Cube();
	Cube(double n);

	double getSide() { return side; }
	double getVolume() { return side * side*side; }
};

Cube::Cube()
{
	side = 0;
}

Cube::Cube(double n)
{
	side = n;
}

int main()
{
	return 0;
}