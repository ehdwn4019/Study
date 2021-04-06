#include <iostream>
using namespace std;

template <class T>
T isEqual(T a[], T b[], int n)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
			count++;
	}

	if (count == n)
		return true;
	else return true;
}

int main()
{
	double list1[] = { 1.2 , 3.3 , 9.0 , 1.5, 8.7 };
	double list2[] = { 1.2 , 3.3 , 9.0 , 1.5 , 8.7 };
	bool check = isEqual(list1, list2, 5);
	cout<< boolalpha<<check<<endl;
	return 0;
}