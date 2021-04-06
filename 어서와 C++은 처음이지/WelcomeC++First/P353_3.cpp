#include <iostream>
#include <time.h>

using namespace std;

class Circle
{
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	double getArea()
	{
		return radius * radius*3.14;
	}
};

int main()
{
	srand(time(NULL));

	int num;
	int count=0;

	cout << "���� �Է� : ";
	cin >> num;

	Circle *circle = new Circle[num];
	

	for (int i = 0; i < num; i++)
	{
		circle[i].setRadius((rand() % 100 + 1));
		cout << "�� " << i + 1 << "�� ������ >> " << circle[i].getRadius() << endl;
		if (circle[i].getArea() > 100)
		{
			count++;
		}
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;

	delete circle;

	return 0;
}