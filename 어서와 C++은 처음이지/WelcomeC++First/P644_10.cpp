#include <iostream>
using namespace std;

int main()
{
	auto func = [](int a, int b)->int {return a * b; };
	cout << func(2, 3) << endl;
	return 0;
}