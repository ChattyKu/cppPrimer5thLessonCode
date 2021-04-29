#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using std::pair;
using std::vector;
using std::string;
using std::map;

// std::string::npos; // str.find() 返回值为npos 代表没找到
// std::string::size_type // 长度类型

// key_type  键类型
// value_type 值类型
// mapped_type 关键字关联的类型

using DVec = std::vector<double>;

DVec::value_type GetMaxInVector(const DVec &v)
{
	//std::sort(v.begin(), v.end());
	return v.back();
}
//   ↓         ↓  
// 1 2 3 4 5 6 7 8 9
// 1 3 4 5 6 7 7 8 9

int main()
{
	map<std::string, std::vector<int> > mapStrIVec;
	// key_type = string;
	// value_type = std::vecotr<int>
	// mapped_type = std::vector<int>
	
	for(map<std::string, std::vector<int> >::iterator it = mapStrIVec.begin(); it != mapStrIVec.end(); ++it) {
		it->first;
		it->second;
	}
	//std::find(mapStrIVec.begin(), mapStrIVec.end(), pair<std::string, std::vector<int> >("test1", {1,2,3}));
	auto it = mapStrIVec.find("test1");
	for(auto it = mapStrIVec.begin(); it != mapStrIVec.end(); ++it) {
		string a = it->first;
		int b = it->second[0];
	}
	
}