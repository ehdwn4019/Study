#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SMS
{
	string sender;
	string receiver;
	string text;
public:

	string getSender() { return sender; }
	void setSender(string s) { sender = s; }
	string getReceiver() { return receiver; }
	void setReceiver(string r) { receiver = r; }
	string getText() { return text; }
	void setText(string t) { text = t; }

	SMS()
	{
		sender = "";
		receiver = "";
		text = "";
	}

	SMS(string a, string b, string c)
	{
		sender = a;
		receiver = b;
		text = c;
	}

	void print()
	{
		cout << "�߽��� : " << sender << " ������ : " << receiver << " ���� : " << text << endl;
	}
};

int main()
{
	SMS sms[3];
	vector<SMS> v;

	sms[0].setSender("010-1234-5678");
	sms[0].setReceiver("010-1234-5679");
	sms[0].setText("C++���δ� �ߵǰ�����?");
	sms[1].setSender("010-1234-5678");
	sms[1].setReceiver("010-1234-5679");
	sms[1].setText("C++���δ� �ߵǰ�����??");
	sms[2].setSender("010-1234-5678");
	sms[2].setReceiver("010-1234-5679");
	sms[2].setText("C++���δ� �ߵǰ�����???");

	for (int i = 0; i < 3; i++)
	{
		cout << "�߽��� : " << sms[i].getSender() << " ������ : " << sms[i].getReceiver() << " ���� : " << sms[i].getText() << endl;
	}

	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"));
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����??"));
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����???"));

	for (auto& e : v)
		e.print();

	return 0;
}