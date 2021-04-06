#include <iostream>
using namespace std;

class MyVector
{
private:
	double x, y;
public:
	MyVector(double xvalue=0.0,double yvalue=0.0) : x(xvalue),y(yvalue){}
	//출력 연산자 
	friend ostream& operator<<(ostream& os, const MyVector& v)
	{
		os << "(" << v.x << "," << v.y << ")" << endl;
		return os;
	}


	//입력 연산자
	friend istream& operator>>(istream& in, MyVector& v)
	{
		in >> v.x >> v.y;
		if (!in)
			v = MyVector(0, 0);
		return in;
	}
};

int main()
{
	MyVector v1(1.0, 2.0), v2(3.0, 4.0), v3;
	cout << v1 << v2 << v3;
	cin >> v1 >> v2 >> v3;
	return 0;
}