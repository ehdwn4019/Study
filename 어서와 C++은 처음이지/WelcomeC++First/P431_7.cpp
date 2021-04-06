#include <iostream>

using namespace std;

class Time
{
	int hours,minutes;
public:
	Time() { hours = 0; minutes = 0; }
	Time(int h) { hours = h; }

	friend void Temp(Time& time);
	Time operator+(Time& time) {};
	friend ostream& operator<<(ostream& os, Time& time);
};

int main()
{
	return 0;
}