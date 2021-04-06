#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string.h>
#include <cstring>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;
	vector<int> temp;

	for (int i = 0; i < arr1.size(); i++)
	{
		for (int j = 0; j < arr1[i].size(); j++)
		{
			temp.push_back(arr1[i][j] + arr2[i][j]);

		}
		answer.push_back(temp);
	}

	return answer;
}

string solution1(string s) {
	string answer = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (s.length() / 2 == 0)
		{
			answer += s[s.length() / 2 + 1];
		}
		else
		{
			
			cout << "¤¾¤·";
		}

	}

	return answer;
}

long long solution(long long n) {
	long long answer = 0;

	long long temp = (long long)sqrt(n);

	if (n == (temp*temp))
	{
		//long long sqrt = (long long)sqrt(n);
		//sqrt++;
		//sqrt *= sqrt;
		//answer = sqrt;
	}
	else
	{
		answer = -1;
	}

	return answer;
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;

	for (int i = 0; i < strings.size(); i++)
	{
		strings[i].
	}

	return answer;
}

int main()
{
	vector<vector<int>> a{ {1,2},{2,3} };
	vector<vector<int>> b{ {3,4},{5,6} };

	solution(a,b);

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			cout << a[i].size();
		}
	}

	solution1("asdf");

	return 0;
}

