#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is("scores.txt");
	if (!is) {
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}

	char c;
	is.get(c);
	while (!is.eof())
	{
		cout << c;
		is.get(c);
	}

	cout << endl;
	return 0;
}