#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> year;
	year.push_back(2012);
	year.push_back(2013);
	year.push_back(2014);

	cout << "저장된 연도 : ";

	for (int i = 0; i < year.size(); i++)
	{
		cout << year[i]<<" ";
	}
	cout << endl;
	
	auto temp = find_if(year.begin(), year.end(), [](const auto& year) {return year.begin();}); // 벡터 람다식 모르겠다
	
	cout << "윤년은 " << *temp << endl;

	return 0;
}