#include <iostream>
using namespace std;

inline void sayHello(int a = 1)
{
	for(int i=0; i<a; i++)
	cout << "Hello" <<" " ;
}


int main()
{
	int n;
	cin >> n;
	cout << "sayHello() ->";  sayHello();
	cout << endl;
	cout << "sayHello(n) ->"; sayHello(n);
	return 0;
}