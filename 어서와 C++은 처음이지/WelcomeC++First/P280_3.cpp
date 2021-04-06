#include <iostream>
#include <vector>
using namespace std;

class Color
{
	int r, g, b;
public:
	Color();
	Color(int r, int g,int b) : r{r},g{g},b{b} {}
};

int main()
{
	int t = rand() % 255;

	Color list[3]{Color(t,t,t),Color(t,t,t),Color(t,t,t)};

	vector<Color> v;


	v.push_back(Color(t, t, t));
	v.push_back(Color(t, t, t));
	v.push_back(Color(t, t, t));
		

	
	
	return 0;
}