#include <iostream>
using namespace std;

int main()
{
	int n;
	int temp;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j<n; j++)
		{
			

			temp = j + 1;
			
			if (i < j)
			{
				cout << "*";
			}
			else
			{

				cout << temp;
			}

		}
		cout << endl;
	}

	return 0;
}