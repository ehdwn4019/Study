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
	cout << "첫 번째 정수 :" << obj.n1 <<endl;
	cout << "두 번째 정수 : " << obj.n2<<endl;
	cout << "연산 결과 : " << obj.add() << endl;


	return 0;
}