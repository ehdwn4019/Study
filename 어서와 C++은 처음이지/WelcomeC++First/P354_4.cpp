#include <iostream>

using namespace std;

class Time
{
	int hour;
	int min;
	int sec;

public:
	int getHour() { return hour; }
	void setHour(int h) { hour = h; }
	int getMin() { return min; }
	void setMin(int m) { min = m; }
	int getSec() { return sec; }
	void setSec(int s) { sec = s; }

	Time()
	{

	}

	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	~Time()
	{

	}

	void print()
	{
		cout << hour << " : " << min << " : " << sec << endl;
	}

	

};

bool isEqual(Time& t1, Time& t2)
{
	if (&t1 == &t2)
	{
		cout << "시간이 일치합니다" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool isEqual(Time *pt1, Time *pt2)
{
	if (pt1 = pt2)
	{
		cout << "시간이 일치합니다" << endl;
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	Time *t1=new Time(12,11,33);
	Time *t2=new Time(12,11,33);

	cout << "Time 객체 : ";
	t1->print();
	cout << "Time 객체 : ";
	t2->print();

	isEqual(t1, t2);
	isEqual(t1, t2);

	delete t1;
	delete t2;

	return 0;
}

