#include <iostream>
#include <time.h>

using namespace std;

class Dice
{
	
public :
	int face;
	int roll();
};

int Dice::roll()
{
	

	return face = (int)(rand() % 6 + 1);
}

int main()
{
	Dice dice;

	srand(time(NULL));

	cout << "주사위 값 = " << dice.roll() << endl;

	cout << "주사위 값 = " << dice.roll() << endl;

	return 0;
}


