#include <iostream>
using namespace std;

class Box
{
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0) : length(l),width(w),height(h){}
	double getLength() { return length; } //1번
	double getWidth() { return width; } //1번
	double getHeight() { return height; }//1번
	double getVolume(void)
	{
		return length * width*height;
	}

	//1번
	Box operator+(Box box);

	//2번 
	bool operator==(Box box);

	//3번 
	bool operator<(Box box);

	//4번
	friend void printBox(Box box);
};

//1번
Box Box::operator+(Box box)
{
	Box temp;
	temp.height = this->height + box.height;
	temp.width = this->width + box.width;
	temp.length = this->length + box.length;
	return temp;
}

//2번
bool Box::operator==(Box box)
{
	return this->height==box.height && this->width == box.width && this->length==box.length;
}

//3번
bool Box::operator<(Box box)
{
	return this->getVolume()<box.getVolume() ? true : false;
}

//4번
void printBox(Box box)
{
	cout << "상자" << endl;
	cout << "상자의 길이 : " << box.getLength() << endl;
	cout << "상자의 너비 : " << box.getWidth() << endl;
	cout << "상자의 높이 : " << box.getHeight() << endl;
	cout << "상자의 부피 : " << box.getVolume() << endl;
}

int main()
{
	
	//1번
	Box a(10, 10, 10), b(20, 20, 20), c;
	c = a + b;
	cout << "상자#1" << endl;
	cout << "상자의 길이 : " << a.getLength()<<endl;
	cout << "상자의 너비 : " << a.getWidth() << endl;
	cout << "상자의 높이 : " << a.getHeight() << endl;
	cout << "상자의 부피 : " << a.getVolume() << endl;

	cout << "상자#2" << endl;
	cout << "상자의 길이 : " << b.getLength() << endl;
	cout << "상자의 너비 : " << b.getWidth() << endl;
	cout << "상자의 높이 : " << b.getHeight() << endl;
	cout << "상자의 부피 : " << b.getVolume() << endl;

	cout << "상자#3" << endl;
	cout << "상자의 길이 : " << c.getLength() << endl;
	cout << "상자의 너비 : " << c.getWidth() << endl;
	cout << "상자의 높이 : " << c.getHeight() << endl;
	cout << "상자의 부피 : " << c.getVolume() << endl;

	//2번
	cout << "상자#1" << endl;
	cout << "상자의 길이 : " << a.getLength() << endl;
	cout << "상자의 너비 : " << a.getWidth() << endl;
	cout << "상자의 높이 : " << a.getHeight() << endl;
	cout << "상자의 부피 : " << a.getVolume() << endl;

	cout << "상자#2" << endl;
	cout << "상자의 길이 : " << b.getLength() << endl;
	cout << "상자의 너비 : " << b.getWidth() << endl;
	cout << "상자의 높이 : " << b.getHeight() << endl;
	cout << "상자의 부피 : " << b.getVolume() << endl;

	cout <<boolalpha<< (a == b) << endl;

	//3번
	cout << "상자#1" << endl;
	cout << "상자의 길이 : " << a.getLength() << endl;
	cout << "상자의 너비 : " << a.getWidth() << endl;
	cout << "상자의 높이 : " << a.getHeight() << endl;
	cout << "상자의 부피 : " << a.getVolume() << endl;

	cout << "상자#2" << endl;
	cout << "상자의 길이 : " << b.getLength() << endl;
	cout << "상자의 너비 : " << b.getWidth() << endl;
	cout << "상자의 높이 : " << b.getHeight() << endl;
	cout << "상자의 부피 : " << b.getVolume() << endl;

	cout << boolalpha << (a < b) << endl;


	//4번
	printBox(a);

	return 0;
}


