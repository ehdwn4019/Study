#include <iostream>
#define PI 3.141592//2
using namespace std;

int main()
{
	int choice, area, length, width; //1
	int radius; //2
	int length2, width2;//3
	cout << "������ �����Ͻÿ�(1, 2, 3): ";
	cin >> choice;
	if (choice == 1) //�簢��
	{
		cout << "���� : ";
		cin >> length;
		cout << "���� : ";
		cin >> width;
		area = length * width;
		cout << "���� : " << area << endl;
	}
	else if (choice == 2) //��
	{
		cout << "������ : ";
		cin >> radius;
		area = (radius * radius)*PI;
		cout << "���� : " << area << endl;
	}
	else if (choice == 3)//�ﰢ��
	{
		cout << "���� : ";
		cin >> length2;
		cout << "���� : ";
		cin >> width2;
		area = (length2 * width2)*0.5;
		cout << "���� : " << area << endl;
	}
	else
	{
		cout << "�ùٸ��� ���� �����Դϴ�." << endl;
	}
	return 0;
}