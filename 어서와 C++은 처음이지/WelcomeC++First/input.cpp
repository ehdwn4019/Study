#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream os("test.txt");
	char c;
	while (cin.get(c))
	{
		os.put(c);
	}
	return 0;
}