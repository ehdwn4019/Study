#include <iostream>
using namespace std;

template <class T>
T getSmallest(T arr[], int n)
{
	T result=arr[0];

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
		if (result > arr[i])
			result = arr[i];
	}

	return result;
}

int main()
{
	double list[] = { 1.2 , 3.3 , 9.0 , 1.5 , 8.7 };
	
	cout<<"ÃÖ¼Ò°ª : "<< getSmallest(list, 5)<<endl;
	return 0;
}