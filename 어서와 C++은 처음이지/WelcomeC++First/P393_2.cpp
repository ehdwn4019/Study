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
	cout << "일반 생성자" << endl;
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

	cout << "복사 생성자" << endl;
	cout << "선의 길이 : " << line.getLength() << endl;
	cout << "복사 생성자" << endl;
	cout << "선의 길이 : " << line.getLength() << endl;

	return 0;
}