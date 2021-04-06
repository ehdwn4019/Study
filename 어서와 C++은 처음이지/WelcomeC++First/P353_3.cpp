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

	cout << "개수 입력 : ";
	cin >> num;

	Circle *circle = new Circle[num];
	

	for (int i = 0; i < num; i++)
	{
		circle[i].setRadius((rand() % 100 + 1));
		cout << "원 " << i + 1 << "의 반지름 >> " << circle[i].getRadius() << endl;
		if (circle[i].getArea() > 100)
		{
			count++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;

	delete circle;

	return 0;
}