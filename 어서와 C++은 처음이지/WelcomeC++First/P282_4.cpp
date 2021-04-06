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
		cout << "발신자 : " << sender << " 수신자 : " << receiver << " 내용 : " << text << endl;
	}
};

int main()
{
	SMS sms[3];
	vector<SMS> v;

	sms[0].setSender("010-1234-5678");
	sms[0].setReceiver("010-1234-5679");
	sms[0].setText("C++공부는 잘되가나요?");
	sms[1].setSender("010-1234-5678");
	sms[1].setReceiver("010-1234-5679");
	sms[1].setText("C++공부는 잘되가나요??");
	sms[2].setSender("010-1234-5678");
	sms[2].setReceiver("010-1234-5679");
	sms[2].setText("C++공부는 잘되가나요???");

	for (int i = 0; i < 3; i++)
	{
		cout << "발신자 : " << sms[i].getSender() << " 수신자 : " << sms[i].getReceiver() << " 내용 : " << sms[i].getText() << endl;
	}

	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"));
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요??"));
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요???"));

	for (auto& e : v)
		e.print();

	return 0;
}