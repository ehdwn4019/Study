#include <iostream>
using namespace std;

inline double calc_volume(int n)
{
	double result;
	result = (4.0 / 3.0*3.14*pow(n, 3));
	return result;
}

int main()
{
	int n;
	cout << "반지름을 입력하시오 : ";
	cin >> n;

	cout << "구의 부피는 " << calc_volume(n) << endl;
	return 0;
}

