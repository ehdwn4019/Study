#include <iostream>
using namespace std;

int maximum(int x, int y, int z);

int main()
{
	int a, b, c;
	cout << "3���� ������ �Է��Ͻÿ� : ";
	cin >> a >> b >> c;
	cout << "���� ū ������ " << maximum(a, b, c);

	return 0;
}

int maximum(int x,int y,int z)
{
	int result;
	if (x > y || x>z) result = x;
	if (y > x || y > z) result = y;
	if(z>x || z>y) result = z;

	return result;
}