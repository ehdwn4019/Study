#include <iostream>
using namespace std;

int main()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i=0; i<size(days); i++)
	{
		if (i < 6) continue;
		cout << i+1 << "����" << days[i] << "�ϱ��� �ֽ��ϴ�" << endl;
	}

	return 0;
}