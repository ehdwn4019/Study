#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	char ch;
	string solution;
	string list[] =
	{
		"the",
		"C++",
		"programming",
		"language",
	};
	int n = rand() % 4;
	solution = list[n];

	cout << solution << endl;

	string guess(solution.length(), '_');

	while (true)
	{
	

		cout << guess << endl;
		cout << "���ڸ� �Է��Ͻÿ�: ";
		cin >> ch;
		for (int i = 0; i < solution.length(); i++)
		{
			if (ch == solution[i])
			{
				guess[i] = ch;
			}
		}

		if (solution == guess)
		{
			cout << solution << endl;
			cout << "�����Ͽ����ϴ�.!";
			break;
		}
	}

	return 0;
}