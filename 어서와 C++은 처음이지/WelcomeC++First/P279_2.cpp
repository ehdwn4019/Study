#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Rect
{
	int w, h;
public :
	Rect() : w{ 0 }, h{ 0 } {}
	Rect(int w,int h) : w{w} ,h{h}{}

	int getW() { return w; }
	int getH() { return h; }
	void setW(int w1) { w = w1; }
	void setH(int h1) { h = h1; }
	
	void print()
	{
		cout << "사각형의 면적 : " << w * h<<endl;
	}
};

bool compare(Rect w, Rect h)
{
	return w.getW()*w.getH() < h.getW()*h.getH();
}

int main()
{
	Rect list[3]{ Rect(0,0),Rect(0,0),Rect(0,0)};
	int w1, h1;
	int w2, h2;
	
	Rect rect;
	
	for (Rect a : list)
	{
		cin >> w1;
		cin >> h1;
		a.setW(w1);
		a.setH(h1);
		a.print();
	}

	cin >> w1;
	cin >> h1;
	cin >> w2;
	cin >> h2;

	vector<Rect> v;
	v.push_back(Rect(w1, h1));
	v.push_back(Rect(w2, h2));

	for (auto& e : v)
		e.print();

	sort(v.begin(), v.end(), compare);

	for (auto& e : v)
	{
		e.print();
		cout << endl;
	}

	return 0; 
}