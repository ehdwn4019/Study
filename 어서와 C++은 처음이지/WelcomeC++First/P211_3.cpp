#include <iostream>
#include <string>

using namespace std;

class Sum
{
	

public:
	int n1, n2;

	void init(int n3, int n4);
	int add();
	
};

void Sum::init(int n3,int n4)
{
	n1 = n3;
	n2 = n4;
}

int Sum::add()
{
	return n1 + n2;
}


int main()
{
	Sum obj;
	obj.init(10,20);
	cout << "ù ��° ���� :" << obj.n1 <<endl;
	cout << "�� ��° ���� : " << obj.n2<<endl;
	cout << "���� ��� : " << obj.add() << endl;


	return 0;
}