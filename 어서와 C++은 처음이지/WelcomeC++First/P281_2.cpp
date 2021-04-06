#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s , string t)
{
	return s < t;
}

int main()
{
	
	//int n;
	//cout << "문자열의 개수 : ";
	//cin >> n;
	//
	//vector<string> v(n);
	//string str[3];
	//
	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << "문자열을 입력하시오 : ";
	//	cin >> str[i];
	//}
	//
	//cout << v.size() << endl;
	//
	//v.push_back(str[0]);
	//v.push_back(str[1]);
	//v.push_back(str[2]);
	//
	//cout << v.size() << endl;
	//
	//sort(v.begin(), v.end(), compare);
	//
	////for (auto& e : v)
	////	cout << e << endl;
	//
	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[4] << endl;
	//}

	int n;
	cout << "문자열의 개수 : ";
	cin >> n;

	vector<string> v;
	string str[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "문자열을 입력하시오 : ";
		cin >> str[i];
	}

	for (int i = 0; i < 3; i++)
	{
		v.push_back(str[i]);
	}



	//v.push_back(str[0]);
	//v.push_back(str[1]);
	//v.push_back(str[2]);

	cout << v.size() << endl;

	sort(v.begin(), v.end(), compare);

	//for (auto& e : v)
	//	cout << e << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	

	return 0;
}