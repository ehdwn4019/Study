#include <iostream>
using namespace std;

class BankAccount
{
private:
	int balance;
	double rate;


public:
	BankAccount();
	BankAccount(int bal, double rate);
	void desposit(int val);
	void widthdraw(double val);
	int getBalance() { return balance; }
	double getRate() { return rate; }
	void setBalance(int bal) { balance = bal; }
	void setRate(double rat) { rate = rat; }
};

BankAccount::BankAccount()
{
	balance = 0;
	rate = 0.5;
}

BankAccount::BankAccount(int bal, double rat) 
{
	balance = bal;
	rate = rat;
}

void BankAccount::desposit(int val)
{
	balance += val;
}

void BankAccount::widthdraw(double rat)
{
	rate += rat;
}

int main()
{

	BankAccount bank;
	//BankAccount();
	cout << "�ܰ�� ������ :"<<bank.getBalance()<<" " <<bank.getRate() <<endl;
	//BankAccount(3, 0.7);
	bank.setBalance(3);
	bank.setRate(1.2);
	cout << "�ٲ� �ܰ� ������:"<<bank.getBalance()<<" "<<bank.getRate()<<endl;
	bank.desposit(6);
	cout << "�ܰ� �߰� : " <<bank.getBalance()<<endl;
	bank.widthdraw(0.7);
	cout << "���� �߰��� : " << bank.getRate() << endl;


	
	return 0;
}