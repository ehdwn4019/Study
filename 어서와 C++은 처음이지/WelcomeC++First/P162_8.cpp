#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int num = 0;
	int count[10] = {0};
	int large = 0;

	for (int i = 0; i < 100; i++)
	{
		num = rand() % 10;
		count[num]++;
		//cout << "���� ���� : " <<num <<" /  ���� :  "<<count[num] << endl;
		if (count[num] > large)
		{
			large = num;
			
		}
	}

	

	//for (int i = 0; i < 10; i++)
	//{
	//	if (count[i] > count[i+1])
	//	{
	//		large = count[i];
	//	}
	//}

	
	cout << "���� ���� ������ �� : "<<large << endl;

	

	return 0;
}