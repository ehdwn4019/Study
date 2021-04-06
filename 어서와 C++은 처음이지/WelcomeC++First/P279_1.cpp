#include <iostream>

using namespace std;

class Test
{
	int x;
public :
	Test() { x = 0; cout << x << " "; }
	Test(int x): x{x} {}

	void print(Test n)
	{
		printf("%d",n);
	}
};

int main()
{
	Test x;
	Test a[2];
	Test b[2] = { Test(1),Test(2) };

	for (Test& a : b)
		x.print(a);

	return 0;
}