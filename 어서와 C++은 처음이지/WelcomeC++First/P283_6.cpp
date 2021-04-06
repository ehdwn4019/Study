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
		cout << "이름을 입력하시오 : " << name << endl;
		cout << "전화번호를 입력하시오 : " << tel << endl;

	}

	string getName() { return name; }
	string getTel() { return tel; }

};

int main()
{
	Contact contact;
	string s;
	vector<Contact> v;

	v.push_back(Contact("홍길동", "010-1111-2222"));
	v.push_back(Contact("김철수", "010-1111-3333"));
	v.push_back(Contact("최지영", "010-1111-7777"));

	for (auto& e : v)
		e.print();

	cout << "탐색하고 싶은 이름을 입력하시오 : ";
	cin >> s;

	for (auto&e : v)
	{
		if (s == e.getName())
			cout << "전화번호 : " << e.getTel() << endl;
	}

	
	
	

	return 0;
}