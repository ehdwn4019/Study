#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	//for(int i=0; i<s.length; i++)
	//{
	//	cout << "��ȭ ��ȣ�� �Է��Ͻÿ�: ";
	//	cin >> s;
	//	if (s == "quit") break;
	//	if (s[i] == '(' || s[i] == ')' || s[i] == '-') continue;
	//	cout << s << endl;
	//}

	while (true)
	{
		cout << "��ȭ ��ȣ�� �Է��Ͻÿ�: ";
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