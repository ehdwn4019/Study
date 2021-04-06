#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	string address;
	string tel;

public:
	Person(string name, string address, string tel)
	{
		this->name = name;
		this->address = address;
		this->tel = tel;
	}
	void setName(string name) { this->name = name; }
	void setAddress(string address) { this->address = address; }
	void setTel(string tel) { this->tel = tel; }
	string getName() { return this->name; }
	string getAddress() { return this->address; }
	string getTel() { return this->tel; }

};

class Customer : public Person
{
	int id, mileage;
public:
	void setId(int id) { this->id = id; }
	void setMileage(int mileage) { this->mileage = mileage; }
	Customer(string name, string address, string tel, int id, int mileage) : Person(name, address, tel)
	{
		this->id = id;
		this->mileage = mileage;
	}
	void print()
	{
		cout << "이름 : " << getName() << endl;
		cout << "주소 : " << getAddress() << endl;
		cout << "전화번호 : " << getTel() << endl;
		cout << "아이디 : " << id << endl;
		cout << "마일리지 : " << mileage << endl;
	}
};

int main()
{
	Customer ct("김철수", "서울시 종로구", "010-1111-2222", 1, 1000);
	ct.print();
	return 0;
}