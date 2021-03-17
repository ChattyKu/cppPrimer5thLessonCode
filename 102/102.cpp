#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

void printVec(const std::vector<std::string> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}

bool findStr(std::string &str)
{
	return str.size() == 5;
}
// [capture list] (parameter list) -> return type { funcation body } 完整形式
// [capture list]{ funcation body }  简化形式  []{return 42;}
int main() 
{
	std::vector<std::string> sVec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	std::sort(sVec.begin(), sVec.end());
	printVec(sVec);
	auto end_unique = std::unique(sVec.begin(), sVec.end());
	sVec.erase(end_unique, sVec.end());
	printVec(sVec);
	
	auto findRes = find_if(sVec.begin(), sVec.end(), findStr);
	std::cout << *findRes << std::endl;
	
	auto f = [] {return 4;};
	std::string::size_type sz = f();
	
	std::cout << "lambda function return:" << f() << std::endl;
	
	std::vector<std::string> sVec2(sVec);
	std::sort(sVec2.begin(), sVec2.end(), [] (const std::string &s1, const std::string &s2) { return s1.size() < s2.size();});
	printVec(sVec2);
	
	auto findRes2 = find_if(sVec.begin(), sVec.end(), [sz](const std::string &s1){ return s1.size() >= sz;});
	
	std::cout << *findRes2 << std::endl;
	
}