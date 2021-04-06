#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
	string name;
	string address;
	int number;
	int phone;
public:
	Student(){}
	Student(string name,string address,int number,int phone)
	{
		this->name = name;
		this->address = address;
		this->number = number;
		this->phone = phone;
	}
	~Student()
	{

	}

	//get
	string getName() { return name; }
	string getAddress() { return address; }
	int getNumber() { return number; }
	int getPhone() { return phone; }
	//set
	void setName(string name) { this->name = name; }
	void setAddress(string address) { this->address = address; }
	void setNumber(int number) { this->number = number; }
	void setPhone(int phone) { this->phone = phone; }
};

int main()
{
	Student student;
	vector<Student> temp;
	int num;
	string name;
	string address;
	int number;
	int phone;
	while (true)
	{
		cout << "======================================================" << endl;
		cout << "�߰� : 1, �˻� : 2 , ���� : 3 , ��κ��� : 4, ���� : 5 " << endl;
		cout << "======================================================" << endl;
		cout << "�ϳ��� �����ϼ��� : ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "�̸� : ";
			cin >> name;
			cout << "�ּ� : ";
			cin >> address;
			cout << "�й� : ";
			cin >> number;
			cout << "��ȭ��ȣ : ";
			cin >> phone;
			cout << "�߰��Ǿ����ϴ�.";
			temp.push_back(Student(name,address,number,phone));
			break;
		case 2:
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> name;
			if (name == student.getName())
			{
				cout << "�̸� : "<<student.getName()<<endl;
				cout << "�ּ� : "<<student.getAddress()<<endl;
				cout << "�й� : "<<student.getNumber()<<endl;
				cout << "��ȭ��ȣ : "<<student.getPhone()<<endl;
				cout << "�߰��Ǿ����ϴ�.";
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			continue;
		}
	}
	

	return 0;
}