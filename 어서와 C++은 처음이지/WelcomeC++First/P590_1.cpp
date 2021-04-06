#include <iostream>
using namespace std;

int main()
{
	try
	{
		int age;
		cout << "나이를 입력하시오 : ";
		cin >> age;
		if (age < 0) throw age;
	}
	catch (...)
	{
		cout << "오류 : 양수를 입력하여야 함" << endl;
	}
	



	return 0;
}