#include <iostream>
#include <string>
using namespace std;

int main()
{
	try
	{
		string temp;
		cout << "����, ����, �� �����Դϴ�." << endl;
		cout << "������ ���ðڽ��ϱ� : ";
		cin >> temp;
		if (!(temp == "����" || temp == "����" || temp == "��"))
			throw temp;
	}
	catch (...)
	{
		cout << "���� : \"����\", \"����\",\"��\" �߿����� �����ϼ���." << endl;
	}
	return 0;
}