#include <iostream>
#include <math.h>
using namespace std;

double hypot(double a,double b)
{
	double result;

	result = (a*a) + (b*b);
	result = sqrt(result);

	return result;
}

int main()
{
	int a, b;
	cout << "�����ﰢ���� �Ѻ� :";
	cin >> a;
	cout << "�����ﰢ���� �Ѻ� :";
	cin >> b;
	cout << "����: " << hypot(a, b)<<endl;
	return 0;
}