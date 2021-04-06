#include <iostream>
using namespace std;

void prime()
{
	int j;
	for (int i = 2; i <= 6; i++)
	{
		for (j = 2; j <=5; j++)
		{
			if (i%j == 0) break;
			
		}
		if (i == j) cout << j << endl;
		
	}

	//for (int i = 2; i <= 100; i++)
	//{
	//	for (int j = 2; j <= i; j++)
	//	{
	//		if (i%j == 0) continue;
	//		if (i == j) cout << j << endl;
	//
	//	}
	//	
	//
	//}
	
}

int main()
{

	prime();


	return 0;
}