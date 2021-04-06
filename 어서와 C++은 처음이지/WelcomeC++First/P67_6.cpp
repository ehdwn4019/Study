#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
	set<int> roto;
	set<int>::iterator iter;
	roto.insert(rand() % 45 + 1);
	roto.insert(rand() % 45 + 1);
	roto.insert(rand() % 45 + 1);
	roto.insert(rand() % 45 + 1);
	roto.insert(rand() % 45 + 1);
	roto.insert(rand() % 45 + 1);
	cout << "생성된 로또 번호 : " ;
	for (iter = roto.begin(); iter != roto.end(); iter++)
	{
		
		cout << *iter << " ";
		
	}
	cout << endl;

	

	return 0;
}