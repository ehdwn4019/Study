#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);



	cout << "������ ���� : "<<v.size() << endl;

	for (auto& e : v)
	{
		
		cout << "������ �Է��Ͻÿ� : " ;
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

	cout << "�ִ밪 : " << max;
	cout << "�ּҰ� : " << min;

	return 0;
}