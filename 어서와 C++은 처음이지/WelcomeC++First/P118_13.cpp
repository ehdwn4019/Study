#include <iostream>
using namespace std;

int main()
{
	int n;
	int a = 0;
	int b = 1;
	int result = 0;

	cout << "몇 항까지 구할까요: ";
	cin >> n;

	
	

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << a << " ";
		}
		else if (i == 1)
		{
			cout << b << " ";
		}
		else
		{
			result = a + b;
			a = b;
			b = result;
			cout << result << " ";
		}
		
		
	}

	return 0;
}