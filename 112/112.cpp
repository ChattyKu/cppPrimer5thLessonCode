#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using std::pair;
using std::vector;
using std::string;

pair<std::string, int> process(vector<string> &v)
{
	if(!v.empty()) {
		return {v.back(), v.back().size()};
	} else {
		return pair<string, int>();
		// return {"", 0};
	}
}

int main()
{
	pair<std::string, std::string> sspair;
	pair<std::string, std::string> sspair2("test1", "test2");
	pair<std::string, std::string> sspair3{"test1", "test2"};
	std::map<std::string, std::string> ssmap;
	ssmap["item1"] = "value1";
	pair<std::string, std::string> sspair4 = *ssmap.begin();
	
	std::cout << "pair, first:" << sspair4.first << ",second:" << sspair4.second << std::endl;
}