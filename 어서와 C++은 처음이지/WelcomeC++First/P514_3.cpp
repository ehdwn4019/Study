#include <iostream>
using namespace std;

class HomeAppliance
{
public:
	int price;
	HomeAppliance(int price) : price(price){}
	virtual double getPrice() = 0;
};

class Television : public HomeAppliance
{
public:
	Television(int price) : HomeAppliance(price){}
	double getPrice()
	{
		return  price - (price*0.1);
	}
};

class Refrigerator : public HomeAppliance
{
public:
	Refrigerator(int price) : HomeAppliance(price){}
	double getPrice()
	{
		return price - (price*0.05);
	}
};

int main()
{
	HomeAppliance* homeAppliance[2];
	homeAppliance[0] = new Television(100000);
	homeAppliance[1] = new Refrigerator(200000);

	for (int i = 0; i < 2; i++)
	{
		cout<<"АЁАн : " <<homeAppliance[i]->getPrice()<<endl;
	}
	return 0;
}