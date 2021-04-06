#include <iostream>
#include <vector>
using namespace std;

class Rect
{
	int w, h;
public :
	Rect() : w{0},h{0}{}
	Rect(int w,int h) : w{w},h{h}{}
	int area() { return w * h; }
	void print()
	{
		cout << "(" << w << ", " << h << ")" << endl;
	}
};

int main()
{
	Rect rect;
	vector<Rect> v;
	int n;
	int width[3], height[3];

	cout << "�簢���� ���� : ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		

		cout << "�簢���� �� : ";
		cin >> width[i];
		cout << "������� ���� : ";
		cin >> height[i];
		v.push_back(Rect(width[i], height[i]));
		
	}

	for (auto& e : v)
		if(e.area()>=100)
		e.print();
	
	
	

	return 0;
}