#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
	map<string, string> myMap;

	myMap.insert(make_pair("±èÃ¶¼ö", "010-123-5678"));
	myMap.insert(make_pair("È«±æµ¿", "010-123-5679"));


	myMap["ÃÖÁö¿µ"] = "010-123-5680";

	for (auto& it : myMap)
		cout << it.first << " :: " << it.second << endl;
	if (myMap.find("±è¿µÈñ") == myMap.end())
		cout << "´Ü¾î '±è¿µÈñ'´Â ¹ß°ßµÇÁö ¾Ê¾Ò½À´Ï´Ù." << endl;
}