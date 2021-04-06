#include <iostream>
using namespace std;

class Weapon
{
public:
	Weapon() {}
	virtual void load() = 0;
};

class Bomb : public Weapon
{
public:
	void load()
	{
		cout << "��ź�� �����մϴ�." << endl;
	}
};

class Gun : public Weapon
{
	void load()
	{
		cout << "���� �����մϴ�." << endl;
	}
};

int main()
{
	Weapon *weapon[2];
	weapon[0] = new Bomb();
	weapon[1] = new Gun();

	weapon[0]->load();
	weapon[1]->load();
	weapon[1]->load();

	return 0;
}