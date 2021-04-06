#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool checkKim(string s)
{
	if (s.find("김") != string::npos)
		return true;
	else
		return false;
}

int main()
{
	vector<string> vec = { "김철수","박문수","강감찬","김유신","이순신" };

	auto it = vec.begin();
	while (true)
	{
		it = find_if(it, vec.end(), checkKim);
		if (it == vec.end())
			break;
		cout << "위치 " << distance(vec.begin(), it) << "에서 " << *it << " 를 탐색하였음" << endl;
		it++;
	}

	return 0;
}