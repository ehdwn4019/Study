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
	//���� ������
	Counter& operator++()
	{
		++value;
		return *this;
	}

	//���� ������
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
	cout << "ī������ �� : " << c.getValue() << endl;
	++c;
	cout << "ī������ �� : " << c.getValue() << endl;
	c++;
	cout << "ī������ �� : " << c.getValue() << endl;
}