#include <iostream>
using namespace std;

int main()
{
	try
	{
		int age;
		cout << "���̸� �Է��Ͻÿ� : ";
		cin >> age;
		if (age < 0) throw age;
	}
	catch (...)
	{
		cout << "���� : ����� �Է��Ͽ��� ��" << endl;
	}
	



	return 0;
}