#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int zeroCount=0;
	int oneCount=0;
	int coin;

	for (int i = 0; i < 100; i++)
	{
		coin = rand() % 2;

		if (coin == 0)
		{
			zeroCount++;
		}
		else
		{
			oneCount++;
		}
	}

	cout << "������ �ո� :   " << zeroCount << endl;
	cout << "������ �޸� :   " << oneCount << endl;




	return 0;

}