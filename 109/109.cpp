#include <iostream>
#include <map>
#include <set>
#include <string>

// 11章  关联容器
// map                            set
// multimap                       multiset
// unordered_map                 unordered_set
// unordered_multimap            unordered_multiset

using std::cout;
using std::endl;
using std::set;
using std::map;
using std::string;

int main()
{
	map<int, string> mapIntStr{{1331231, "tom"},{12312, "jerry"}};
	map<string, int> mapIntStr2;
	set<int> setInt;
	
	map<int, string>::iterator it = mapIntStr.find(12312123);
	if (it != mapIntStr.end()) {
		cout << it->second << endl;
	} else {
		cout << "not found!" << endl;
	}
	
	for ( int i = 0; i < 1000; ++i) {
		setInt.insert(10000 + i);
	}
	
	auto itSet = setInt.find(10010);
	if (itSet != setInt.end()) {
		cout << "found it!" << endl;
	} else {
		cout << "not found!" << endl;
	}
	
}