#include <iostream>
using namespace std;

void many() //���� ���� ���� ���
{
	const int SIZE = 10;
	int list[SIZE];
	int max, person;

	for (int& elem : list)
	{
		cout << "��ħ�� �Դ� ����� ���� :";
		cin >> elem;
	}
	cout << endl;
	max = list[0];
	person = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (list[i] > max)
		{
			max = list[i];
			person = i;
		}
	}
	cout << "���� ���� ����� ���� �����ȣ=" << person << endl;
}

void few() //���� ���� ���� ���
{
	const int SIZE = 10;
	int list[SIZE];
	int min, person;

	for (int& elem : list)
	{
		cout << "��ħ�� �Դ� ����� ���� :";
		cin >> elem;
	}
	cout << endl;
	min = list[0];
	person = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (list[i] < min)
		{
			min = list[i];
			person = i;
		}
	}
	cout << "���� ���� ����� ���� �����ȣ=" << person << endl;
}

void sort() //��������
{
	const int SIZE = 5;
	int list[SIZE];
	int apple[SIZE];

	for (int& elem : list)
	{
		cout << "��ħ�� �Դ� ����� ���� :";
		cin >> elem;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (list[j] < list[j + 1]) //��������
			{
				int t = list[j];
				list[j] = list[j+1];
				list[j+1] = t;
				//apple[i] = list[i];
			}
			//if (list[j] > list[j + 1]) //��������
			//{
			//	int t = list[j];
			//	list[j] = list[j + 1];
			//	list[j + 1] = t;
			//	
			//}
		}
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "���� ����� ���� ����=" << list[i] << endl;
	}
}

int main()
{
	//many();
	//few();
	sort();
	return 0;
}

