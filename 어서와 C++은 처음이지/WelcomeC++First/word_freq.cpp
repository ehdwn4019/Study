#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> table;
	string s;

	cout << "문장을 입력하시오(종료는 Ctrl-Z): ";
	while (true)
	{
		cin >> s;
		table[s]++;
		if (cin.eof()) break;
	}

	for (auto iter = table.begin(); iter != table.end(); iter++) // auto에 참조자 붙이면 에러 나네 ;
	{
		cout << iter->first << " : " << iter->second << endl;
	}

	return 0;
}