#include <iostream>
using namespace std;

class GameCharactere
{
public:
	GameCharactere() {}
	virtual void draw() = 0;
};

class Hobbit : public GameCharactere
{
	void draw()
	{
		cout << "호빗을 화면에 그립니다." << endl;
	}
};

class Sorcerer : public GameCharactere
{
	void draw()
	{
		cout << "주술사를 화면에 그립니다." << endl;
	}
};

int main()
{
	GameCharactere* gameCharactere[2];
	gameCharactere[0] = new Hobbit();
	gameCharactere[1] = new Sorcerer();
	gameCharactere[0]->draw();
	gameCharactere[1]->draw();

	

	return 0;
}