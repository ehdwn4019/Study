#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	float c[101]; 
	float f;
	int temperature[101];

	srand(time(NULL));

	for (int i = 0; i < size(temperature); i++)
	{
		f = rand() %80  - 20;
		if (f == 0) continue;
		c[i] = (f - 32.0)*5.0 / 9.0;
		if (i%10==0)
		{
			cout << i << "        ";
			cout << c[i] << endl;
		}
		
	}

	return 0;
}