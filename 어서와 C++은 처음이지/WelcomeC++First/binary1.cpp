#include <iostream>
#include <fstream>
using namespace std;

int mian()
{
	int buffer[5];
	ifstream is("test.dat", ifstream::binary);
	if (!is)
	{
		cout << "test.txt ������ �� �� �����ϴ�." << endl;
		exit(1);
	}
	is.read((char *)&buffer, sizeof(buffer));
	for (auto& e : buffer)
		cout << e << endl;
	return 0;
}