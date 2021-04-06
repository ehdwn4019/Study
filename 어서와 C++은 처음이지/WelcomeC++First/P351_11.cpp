#include <iostream>
using namespace std;

class Rect
{
	int width, height;
public:
	Rect(int width,int height) : width(width),height(height) {}
	~Rect(){}

	const int getWidth() { return width; }
	void setWidth(int w) { this->width = w; }
	const int getHeight() { return height; }
	void setHeight(int h) {this->height=h;}

	int getArea()
	{
		return width * height;
	}
	int getPerimeter()
	{
		return (width + height) * 2;
	}

	void print()
	{
		cout << "사각형의 넓이 : " << getArea() << endl;
		cout << "사각형의 둘레 : " << getPerimeter() << endl;
	}

	const bool is_equal(Rect &r1, Rect &r2 )
	{
		if (r1.getArea() == r2.getArea())
		{
			return true;
		}
		else
			return false;
	}
};

int main()
{
	Rect *p = new Rect(10, 20);
	p->getArea();

	p->print();

	delete p;

	return 0;
}