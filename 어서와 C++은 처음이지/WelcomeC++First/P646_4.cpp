#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int choice = 0;

	map<string, string> dic;
	map<string, string>::iterator iter=dic.begin();
	string word;
	string meaning;

	dic["boy"] = "소년";
	dic["school"] = "학교";
	dic["office"] = "직장";
	dic["house"] = "집";
	dic["morning"] = "아침";
	dic["evening"] = "저녁";

	while (true)
	{
		cout << "=======================================" << endl;
		cout << "단어 추가 : 1, 단어 테스트 : 2, 종료 : 3" << endl;
		cout << "하나를 선택하세요 : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "추가할 단어 : ";
			cin >> word;
			cout << "추가할 의미 : ";
			cin >> meaning;
			dic[word] = meaning;
			break;
		case 2:
			for (iter; iter != dic.end(); iter++)
			{
				dic = rand() % dic.size();
			}

			while (true)
			{
				
			}
			break;
		case 3: cout << "시스템 종료" << endl;
			return 0;
		default: cout << "잘못 입력하셨습니다." << endl;
			continue;
		}
	}

	return 0;
}