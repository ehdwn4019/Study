#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> values;
	int num = 0;
	int sum = 0;
	int avg = 0;
	while (true)
	{
		cout << "������ �Է��Ͻÿ�(������ ����) : ";
		cin >> num;
		if (num < 0) break;
		else values.push_back(num);
	}

	for (int i = 0; i < values.size(); i++)
	{
		
		sum += values[i];
	}

	avg = sum / values.size();

	cout << "���=" << avg <<endl;

	return 0;
}