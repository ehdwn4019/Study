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
		//cout << "많은 숫자 : " <<num <<" /  개수 :  "<<count[num] << endl;
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

	
	cout << "가장 많이 생성된 수 : "<<large << endl;

	

	return 0;
}