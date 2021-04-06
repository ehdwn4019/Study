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
	cout << "직각삼각형의 한변 :";
	cin >> a;
	cout << "직각삼각형의 한변 :";
	cin >> b;
	cout << "빗변: " << hypot(a, b)<<endl;
	return 0;
}