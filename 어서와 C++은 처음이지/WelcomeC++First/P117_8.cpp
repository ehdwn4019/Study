#include <iostream>
using namespace std;

int main()
{
	int integer;
	int temp;
	int answer[100];

	cout << "������ �Է��Ͻÿ� : ";
	cin >> integer;

	for (int i = 0; i < integer; i++)
	{
		temp= i + 1;

		if (integer%temp == 0)
		{
			answer[i] = temp;
			cout << " " << answer[i] << " " ;
		}
		else
		{
			continue;
		}
		
	}
	cout << endl;

	return 0;
}