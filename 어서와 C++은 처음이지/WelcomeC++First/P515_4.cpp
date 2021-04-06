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
		cout << "ȣ���� ȭ�鿡 �׸��ϴ�." << endl;
	}
};

class Sorcerer : public GameCharactere
{
	void draw()
	{
		cout << "�ּ��縦 ȭ�鿡 �׸��ϴ�." << endl;
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