#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);



	cout << "정수의 개수 : "<<v.size() << endl;

	for (auto& e : v)
	{
		
		cout << "정수를 입력하시오 : " ;
		cin >> n;
		v.push_back(n);
		
	}

	//for (int i = 0; i < v.size(); i++)
	//{
	//	if (v.begin() > v.begin() + 1)
	//	{
	//		auto temp = v.begin();
	//		v.begin() = v.begin() + 1;
	//		v.begin() + 1 = temp;
	//	}
	//}

	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());

	cout << "최대값 : " << max;
	cout << "최소값 : " << min;

	return 0;
}