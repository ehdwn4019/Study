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
		cout << "추가 : 1, 검색 : 2 , 삭제 : 3 , 모두보기 : 4, 종료 : 5 " << endl;
		cout << "======================================================" << endl;
		cout << "하나를 선택하세요 : ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "이름 : ";
			cin >> name;
			cout << "주소 : ";
			cin >> address;
			cout << "학번 : ";
			cin >> number;
			cout << "전화번호 : ";
			cin >> phone;
			cout << "추가되었습니다.";
			temp.push_back(Student(name,address,number,phone));
			break;
		case 2:
			cout << "이름을 입력하세요 : ";
			cin >> name;
			if (name == student.getName())
			{
				cout << "이름 : "<<student.getName()<<endl;
				cout << "주소 : "<<student.getAddress()<<endl;
				cout << "학번 : "<<student.getNumber()<<endl;
				cout << "전화번호 : "<<student.getPhone()<<endl;
				cout << "추가되었습니다.";
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "잘못 입력하셨습니다." << endl;
			continue;
		}
	}
	

	return 0;
}