#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int dollar=50;
	int maxDollar = 250;
	int bets = 0;
	int win = 0;

	cout << "�ʱ� �ݾ� : " << dollar <<endl;
	cout << "��ǥ �ݾ� : " << maxDollar <<endl;

	while (dollar <= maxDollar)
	{
		bets++;
		if ((double)rand() / RAND_MAX < 0.5)
		{
			
			dollar++;
			win++;
		}
		
		else dollar--;
	}

	cout << bets << " ���� " << win << "�� �¸�" << endl;
	//cout << "�̱� Ȯ�� = " << (float)win / (float)bets << endl;
	printf("�̱� Ȯ�� = %.6f\n", (double)win*100 / (double)bets);
	cout << "��� ����Ƚ�� : " << (double)bets << endl;
	//��� ����Ƚ���� ����.. 

	return 0;
}