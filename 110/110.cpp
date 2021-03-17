#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::map;
using std::set;
using std::string;

int main()
{	// 容器都带有无参数的构造函数， 生成一个空的容器。
	map<string, size_t> word_count; // 空容器
	word_count["word"] = 4;
	word_count.insert(std::pair<string, size_t>("hello", 5));
	word_count["xxx"] = 3;
	word_count["tail"] = 4;
	
	for (map<string, size_t>::const_iterator it = word_count.cbegin(); it != word_count.end(); ++it)
	{
		cout << "first:" << it->first << ",\tsecond:" << it->second << endl;
	}
	
	vector<int> iVec;
	for (int i = 0; i <= 10; ++i) {
		iVec.push_back(i);
		iVec.push_back(i);
	}
	
	set<int> iSet(iVec.begin(), iVec.end());
	std::multiset<int> iMultiSet(iVec.begin(), iVec.end());
	
	cout << "iVec:" << iVec.size() << endl;
	cout << "iSet:" << iSet.size() << endl;
	cout << "iMultiSet:" << iMultiSet.size() << endl;
	
}