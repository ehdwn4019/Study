#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main()
{
	map<string, int> table;
	map<string, int>::iterator iter=table.begin();
	while (iter != table.end())
	{
		pair<string, int>element = make_pair("test", 1);
		cout << "key : " << element.first << ", value : " << element.second << endl;
		cout << endl;
	}
		return 0;
}