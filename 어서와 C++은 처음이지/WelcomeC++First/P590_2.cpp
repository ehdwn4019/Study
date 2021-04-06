#include <iostream>
#include <string>
using namespace std;

int main()
{
	try
	{
		string temp;
		cout << "가위, 바위, 보 게임입니다." << endl;
		cout << "무엇을 내시겠습니까 : ";
		cin >> temp;
		if (!(temp == "가위" || temp == "바위" || temp == "보"))
			throw temp;
	}
	catch (...)
	{
		cout << "오류 : \"가위\", \"바위\",\"보\" 중에서만 선택하세요." << endl;
	}
	return 0;
}