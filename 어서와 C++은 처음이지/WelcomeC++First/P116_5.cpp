#include <iostream>
using namespace std;

int main()
{
	int integer;
	int sum=0;

	while (true)
	{
		cout << "정수를 입력하시오 : ";
		cin >> integer;
		if (integer == 0) break;
		sum += integer;
	}
		
	

	cout << "합계 =" << sum << endl;
	

	return 0;
}