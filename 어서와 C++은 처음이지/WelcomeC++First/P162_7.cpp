#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[5];
	
	string longStr = "TEST";

	for (int i = 0; i < 5; i++)
	{
		cout << "문자열을 입력하시오 : ";
		cin >> str[i];
	}
	
	int longSize = str[0].length();

	for (int i = 0; i < 5; i++)
	{
		if (str[i].size() > longSize)
		{
			longSize = str[i].size();
			longStr = str[i];
			
		}
		else
		{
			longStr = str[0];
		}
	}
	
	cout <<"제일 긴 문자열 : "<< longStr<< endl;

	

	//for (int i = 0; i < size(str); i++)
	//{
	//	if (str[i].length> str[i + 1].length)
	//	{
	//		big = str[i].length;
	//	}
	//}
	//
	//cout << "제일 긴 문자열 : " << big << endl;
	return 0;
}