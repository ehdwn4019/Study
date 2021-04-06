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
	double getLength() { return length; } //1��
	double getWidth() { return width; } //1��
	double getHeight() { return height; }//1��
	double getVolume(void)
	{
		return length * width*height;
	}

	//1��
	Box operator+(Box box);

	//2�� 
	bool operator==(Box box);

	//3�� 
	bool operator<(Box box);

	//4��
	friend void printBox(Box box);
};

//1��
Box Box::operator+(Box box)
{
	Box temp;
	temp.height = this->height + box.height;
	temp.width = this->width + box.width;
	temp.length = this->length + box.length;
	return temp;
}

//2��
bool Box::operator==(Box box)
{
	return this->height==box.height && this->width == box.width && this->length==box.length;
}

//3��
bool Box::operator<(Box box)
{
	return this->getVolume()<box.getVolume() ? true : false;
}

//4��
void printBox(Box box)
{
	cout << "����" << endl;
	cout << "������ ���� : " << box.getLength() << endl;
	cout << "������ �ʺ� : " << box.getWidth() << endl;
	cout << "������ ���� : " << box.getHeight() << endl;
	cout << "������ ���� : " << box.getVolume() << endl;
}

int main()
{
	
	//1��
	Box a(10, 10, 10), b(20, 20, 20), c;
	c = a + b;
	cout << "����#1" << endl;
	cout << "������ ���� : " << a.getLength()<<endl;
	cout << "������ �ʺ� : " << a.getWidth() << endl;
	cout << "������ ���� : " << a.getHeight() << endl;
	cout << "������ ���� : " << a.getVolume() << endl;

	cout << "����#2" << endl;
	cout << "������ ���� : " << b.getLength() << endl;
	cout << "������ �ʺ� : " << b.getWidth() << endl;
	cout << "������ ���� : " << b.getHeight() << endl;
	cout << "������ ���� : " << b.getVolume() << endl;

	cout << "����#3" << endl;
	cout << "������ ���� : " << c.getLength() << endl;
	cout << "������ �ʺ� : " << c.getWidth() << endl;
	cout << "������ ���� : " << c.getHeight() << endl;
	cout << "������ ���� : " << c.getVolume() << endl;

	//2��
	cout << "����#1" << endl;
	cout << "������ ���� : " << a.getLength() << endl;
	cout << "������ �ʺ� : " << a.getWidth() << endl;
	cout << "������ ���� : " << a.getHeight() << endl;
	cout << "������ ���� : " << a.getVolume() << endl;

	cout << "����#2" << endl;
	cout << "������ ���� : " << b.getLength() << endl;
	cout << "������ �ʺ� : " << b.getWidth() << endl;
	cout << "������ ���� : " << b.getHeight() << endl;
	cout << "������ ���� : " << b.getVolume() << endl;

	cout <<boolalpha<< (a == b) << endl;

	//3��
	cout << "����#1" << endl;
	cout << "������ ���� : " << a.getLength() << endl;
	cout << "������ �ʺ� : " << a.getWidth() << endl;
	cout << "������ ���� : " << a.getHeight() << endl;
	cout << "������ ���� : " << a.getVolume() << endl;

	cout << "����#2" << endl;
	cout << "������ ���� : " << b.getLength() << endl;
	cout << "������ �ʺ� : " << b.getWidth() << endl;
	cout << "������ ���� : " << b.getHeight() << endl;
	cout << "������ ���� : " << b.getVolume() << endl;

	cout << boolalpha << (a < b) << endl;


	//4��
	printBox(a);

	return 0;
}


