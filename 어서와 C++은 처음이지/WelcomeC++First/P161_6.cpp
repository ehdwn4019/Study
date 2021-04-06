#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	//for(int i=0; i<s.length; i++)
	//{
	//	cout << "전화 번호를 입력하시오: ";
	//	cin >> s;
	//	if (s == "quit") break;
	//	if (s[i] == '(' || s[i] == ')' || s[i] == '-') continue;
	//	cout << s << endl;
	//}

	while (true)
	{
		cout << "전화 번호를 입력하시오: ";
		cin >> str;
		for (auto& c : str)
		{
			
			if (c == '(' || c == ')' || c == '-') continue;
			cout << c ;
		}
		cout << endl;
		if (str == "quit") break;
	}
	
	

	return 0;
}