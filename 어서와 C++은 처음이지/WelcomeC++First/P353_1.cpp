#include <iostream>

using namespace std;

int main()
{
	int num;
	int num2;

	cout << "�� ���� ������ �Է��մϱ�? : ";
	cin >> num;


	int *p = new int[num];

	for (int i = 0; i <num; i++)
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> num2;
		p[i] = num2;
	}

	cout << "�Էµ� ������ : ";

	for (int i = 0; i < num; i++)
	{
		cout << p[i] <<", ";
	}
	




	delete p;

	return 0;
}