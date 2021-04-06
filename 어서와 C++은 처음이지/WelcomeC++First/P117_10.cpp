#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int a[101];
	int b[101];
	int c[101];
	int result[100];
	int count = 0;

	for (int i = 1; i < size(a); i++)
	{
		for (int j = 1; j < size(b); j++)
		{
			for (int k = 1; k < size(c); k++)
			{
				a[i] = i;
				b[i] = j;
				c[i] = k;
	
				if ((a[i]*a[i])+(b[i]*b[i])==(c[i]*c[i]))
				{
					cout << a[i]<<" " << b[i] << " "  <<c[i] << endl;
				}

			}
		}
	}


	return 0;
}





