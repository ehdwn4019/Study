#include <iostream>
#include <vector>
//#include <time.h>
#include <algorithm>
using namespace std;

template <typename T>

bool is_even(const T& num)
{
	return (num % 2) == 0;
}

int main()
{
	//srand(time(NULL));
	vector<int> temp(100);
	//int count = 0;

	for (int i = 0; i < temp.size(); i++)
	{
		temp[i] = rand() % 100;
		//if (temp[i] % 2 == 0) count++;
	}

	size_t n = count_if(temp.begin(), temp.end(), is_even<int>);

	cout << "값이 짝수인 요소의 개수 : " << n /*count*/ << endl;

	

	return 0;
}