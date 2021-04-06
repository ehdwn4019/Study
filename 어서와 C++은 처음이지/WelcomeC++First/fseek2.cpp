#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream iofile("words.txt", ios::in | ios::out);
	if (!iofile) {
		cout << "words.txt 파일을 열 수 없습니다." << endl;
		exit(1);
	}

	char ch;
	while (iofile.get(ch)) {
		switch (ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			iofile.seekg(-1, ios::cur);
			iofile << '*';
			iofile.seekg(iofile.tellg(), ios::beg);
			break;
		}
	}
	return 0;
}