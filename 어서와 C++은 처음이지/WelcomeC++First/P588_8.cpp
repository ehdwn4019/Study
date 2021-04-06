#include <iostream>
using namespace std;

template <typename T>
T min(T x, T y) // 뭐지 매개변수 참조자 붙이면 에러나네 ;
{
	if (x > y) return y;
	else return x;
}

int main()
{
	min(5, 6);
	int i = min(5, 6);
	double f = min(6.78, 3.52);
	double g = min(6, 3.52);

	int i2 = min<int>(5, 6);
	double f2 = min<double>(6.78, 3.52);
	double g2 = min<double>(6, 3.52);

	return 0;
}