#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Contact
{
private:
	string name;
	string tel;
public:

	Contact() {}
	Contact(string s, string t)
	{
		name = s;
		tel = t;
	}
	
	void print()
	{
		cout << "�̸��� �Է��Ͻÿ� : " << name << endl;
		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : " << tel << endl;

	}

	string getName() { return name; }
	string getTel() { return tel; }

};

int main()
{
	Contact contact;
	string s;
	vector<Contact> v;

	v.push_back(Contact("ȫ�浿", "010-1111-2222"));
	v.push_back(Contact("��ö��", "010-1111-3333"));
	v.push_back(Contact("������", "010-1111-7777"));

	for (auto& e : v)
		e.print();

	cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
	cin >> s;

	for (auto&e : v)
	{
		if (s == e.getName())
			cout << "��ȭ��ȣ : " << e.getTel() << endl;
	}

	
	
	

	return 0;
}