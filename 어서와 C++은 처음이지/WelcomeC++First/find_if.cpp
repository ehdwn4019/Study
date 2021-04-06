#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool checkKim(string s)
{
	if (s.find("��") != string::npos)
		return true;
	else
		return false;
}

int main()
{
	vector<string> vec = { "��ö��","�ڹ���","������","������","�̼���" };

	auto it = vec.begin();
	while (true)
	{
		it = find_if(it, vec.end(), checkKim);
		if (it == vec.end())
			break;
		cout << "��ġ " << distance(vec.begin(), it) << "���� " << *it << " �� Ž���Ͽ���" << endl;
		it++;
	}

	return 0;
}