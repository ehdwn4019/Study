#include <iostream>
#include <string>
using namespace std;

int main()
{
	string figure;

	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			cout << "�ڼ�";
		}
		else
		{
			cout << i << " ";
		}
		
		
	}

	return 0;
}