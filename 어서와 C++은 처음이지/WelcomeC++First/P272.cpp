#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> vec;

	for (int i = 0; i < 3; i++)
	{
		vector<int> row;
		for (int j = 0; j < 5; j++)
		{
			row.push_back((i + 1)*(j + 1));
		}
		vec.push_back(row);
	
	}

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j] << endl;
		}
	}


	return 0; 
}