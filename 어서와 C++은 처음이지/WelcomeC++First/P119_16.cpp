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

	cout << "ÃÊ±â ±Ý¾× : " << dollar <<endl;
	cout << "¸ñÇ¥ ±Ý¾× : " << maxDollar <<endl;

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

	cout << bets << " ÁßÀÇ " << win << "¹ø ½Â¸®" << endl;
	//cout << "ÀÌ±ä È®·ü = " << (float)win / (float)bets << endl;
	printf("ÀÌ±ä È®·ü = %.6f\n", (double)win*100 / (double)bets);
	cout << "Æò±Õ ¹èÆÃÈ½¼ö : " << (double)bets << endl;
	//Æò±Õ ¹èÆÃÈ½¼ö°¡ ¹¹Áö.. 

	return 0;
}