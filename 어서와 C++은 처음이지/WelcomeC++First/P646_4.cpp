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

	dic["boy"] = "�ҳ�";
	dic["school"] = "�б�";
	dic["office"] = "����";
	dic["house"] = "��";
	dic["morning"] = "��ħ";
	dic["evening"] = "����";

	while (true)
	{
		cout << "=======================================" << endl;
		cout << "�ܾ� �߰� : 1, �ܾ� �׽�Ʈ : 2, ���� : 3" << endl;
		cout << "�ϳ��� �����ϼ��� : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "�߰��� �ܾ� : ";
			cin >> word;
			cout << "�߰��� �ǹ� : ";
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
		case 3: cout << "�ý��� ����" << endl;
			return 0;
		default: cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			continue;
		}
	}

	return 0;
}