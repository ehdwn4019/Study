#include <iostream>
using namespace std;

void many() //가장 많이 먹은 사람
{
	const int SIZE = 10;
	int list[SIZE];
	int max, person;

	for (int& elem : list)
	{
		cout << "아침에 먹는 사과의 개수 :";
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
	cout << "가장 많이 사과를 먹은 사람번호=" << person << endl;
}

void few() //가장 적게 먹은 사람
{
	const int SIZE = 10;
	int list[SIZE];
	int min, person;

	for (int& elem : list)
	{
		cout << "아침에 먹는 사과의 개수 :";
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
	cout << "가장 적게 사과를 먹은 사람번호=" << person << endl;
}

void sort() //버블정렬
{
	const int SIZE = 5;
	int list[SIZE];
	int apple[SIZE];

	for (int& elem : list)
	{
		cout << "아침에 먹는 사과의 개수 :";
		cin >> elem;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (list[j] < list[j + 1]) //내림차순
			{
				int t = list[j];
				list[j] = list[j+1];
				list[j+1] = t;
				//apple[i] = list[i];
			}
			//if (list[j] > list[j + 1]) //오름차순
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
		cout << "먹은 사과의 개수 순서=" << list[i] << endl;
	}
}

int main()
{
	//many();
	//few();
	sort();
	return 0;
}

