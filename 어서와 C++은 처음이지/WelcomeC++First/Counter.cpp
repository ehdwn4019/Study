#include <iostream>
using namespace std;

class Counter
{
private:
	int value;

public:
	Counter() : value(0) {};
	~Counter()
	{

	}
	int getValue() const { return value; }
	void setValue(int x) { value = x; }
	//전위 연산자
	Counter& operator++()
	{
		++value;
		return *this;
	}

	//후위 연산자
	const Counter operator++(int i)
	{
		Counter temp = { *this };
		++value;
		return temp;
	}


};

int main()
{
	Counter c;
	cout << "카운터의 값 : " << c.getValue() << endl;
	++c;
	cout << "카운터의 값 : " << c.getValue() << endl;
	c++;
	cout << "카운터의 값 : " << c.getValue() << endl;
}