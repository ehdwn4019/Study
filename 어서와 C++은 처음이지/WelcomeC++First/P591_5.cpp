#include <iostream>
using namespace std;

template <class T>
T getAvergage(T arr[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum/n;
}

int main()
{
	double list[] = { 1.2 , 3.3 , 9.0 , 1.5 , 8.7 };
	double n = getAvergage(list, 5);
	cout << "Æò±Õ°ª : " << n << endl;
	return 0;
}