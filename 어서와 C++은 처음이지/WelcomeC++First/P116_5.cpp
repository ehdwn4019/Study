#include <iostream>
using namespace std;

int main()
{
	int integer;
	int sum=0;

	while (true)
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> integer;
		if (integer == 0) break;
		sum += integer;
	}
		
	

	cout << "�հ� =" << sum << endl;
	

	return 0;
}