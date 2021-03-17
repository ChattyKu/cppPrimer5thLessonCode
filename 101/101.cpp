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

bool isShorter(const std::string &s1, const std::string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	std::vector<std::string> sVec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	std::sort(sVec.begin(), sVec.end());
	printVec(sVec);
	auto end_unique = std::unique(sVec.begin(), sVec.end());
	
	std::cout << *end_unique << std::endl;
	
	sVec.erase(end_unique, sVec.end());
	printVec(sVec); 
	
	// 如何自定义一些操作
	
	std::vector<std::string> sVec2(sVec);
	std::sort(sVec.begin(), sVec.end(), isShorter);
	printVec(sVec);
	
	std::stable_sort(sVec2.begin(), sVec2.end(), isShorter);
	printVec(sVec);
}