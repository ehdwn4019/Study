#include <iostream>

using namespace std;

class Game
{
public:
	static int count;
	Game() { count++; }
	~Game()
	{
		count--;
	}

};

int Game::count = 0;

int main()
{
	int temp = 0;

	Game player1;
	Game player2;


	while (temp<30)
	{
		

		cout << "���� ����ڼ� : " << player1.count << endl;

		temp++;
	}
	return 0;
}