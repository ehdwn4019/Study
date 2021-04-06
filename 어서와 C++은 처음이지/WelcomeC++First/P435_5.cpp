#include <iostream>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:

	Time():hours(0),minutes(0) {}
	Time(int h,int m) : hours{h},minutes{m} {}
	~Time()
	{

	}

	Time &operator++();

	void displayTime()
	{
		cout << hours << ": " << minutes << endl;
	}
};

Time &Time::operator++()
{
	//Time time;
	//time.hours = this->hours;
	//time.minutes = this->minutes;
	//time.minutes++;
	//if (time.minutes > 59)
	//{
	//	time.hours;
	//	minutes = 0;
	//}
	//return time;
	++this->minutes;

	if (this->minutes > 59)
	{
		++this->hours;
		this->minutes = 0;
	}

	return *this;
}

int main()
{
	Time time(10,59);
	time.displayTime();
	++time;
	time.displayTime();
	++time;
	time.displayTime();

	return 0;
}


