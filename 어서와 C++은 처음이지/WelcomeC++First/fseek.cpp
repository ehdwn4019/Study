#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 10;

int main()
{
	int data;
	ofstream os("test.dat", ofstream::binary);
	if (os.fail()) {
		cout << "파일을 열 수 없습니다." << endl;
		exit(1);
	}
	for (int i = 0; i < SIZE; i++)
	{
		data = rand();
		cout << data << " ";
		os.write((char*)&data, sizeof(data));
	}
	os.close();

	ifstream is("test.dat", ofstream::binary);
	if (is.fail()) {
		cout << "파일을 열 수 없습니다." << endl;
		exit(1);
	}

	is.seekg(0, ios::end);
	long size = is.tellg();
	cout << "파일의 크기는 " << size << endl;

	is.seekg(size / 2, ios::beg);
	is.read((char *)&data, sizeof(data));
	cout << "중앙위치의 값은 " << data << endl;
	return 0;
}