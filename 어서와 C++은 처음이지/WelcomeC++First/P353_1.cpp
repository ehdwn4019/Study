#include <iostream>

using namespace std;

int main()
{
	int num;
	int num2;

	cout << "몇 개의 정수를 입력합니까? : ";
	cin >> num;


	int *p = new int[num];

	for (int i = 0; i <num; i++)
	{
		cout << "정수를 입력하시오 : ";
		cin >> num2;
		p[i] = num2;
	}

	cout << "입력된 정수는 : ";

	for (int i = 0; i < num; i++)
	{
		cout << p[i] <<", ";
	}
	




	delete p;

	return 0;
}