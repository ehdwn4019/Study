#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float num1 = 3;
	float num2 = 4;
	float num3 = 0;

	cout << "첫 번째 변 : " << num1<<endl;
	cout << "두 번째 변 : " << num2<<endl;

	num3 = (num1*num1)+(num2*num2);
	num3=sqrt(num3);
	cout << endl;
	cout << "빗변 길이 : " << num3 << endl;
}