#include <iostream>

using namespace std;

class Line
{
public:
	int getLength(void);
	Line(int len);
	~Line()
	{
		delete ptr;
	}

private:
	int *ptr;

};

Line::Line(int len)
{
	cout << "�Ϲ� ������" << endl;
	ptr = new int;
	*ptr = len;
	
}

int Line::getLength(void)
{
	return *ptr;
}

int main()
{
	Line line(10);

	cout << "���� ������" << endl;
	cout << "���� ���� : " << line.getLength() << endl;
	cout << "���� ������" << endl;
	cout << "���� ���� : " << line.getLength() << endl;

	return 0;
}