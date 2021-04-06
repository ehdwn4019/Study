#include <iostream>
#include <vector>
using namespace std;

double getAverage(vector<double> values)
{
	double sum = 0;
	for (auto& e : values)
		sum = sum + e;
	return sum / values.size();
}

int main()
{
	vector<double> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);

	cout<<getAverage(test);

	return 0;
}